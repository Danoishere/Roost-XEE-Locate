using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UniRx.Async;
using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public struct Location
{
    public string Name;
    public LocationSocket Socket;
    public string[] Excludes;
}

public class LocationManager : MonoBehaviour
{

    public static LocationManager Instance;

    public LocationStash LocationStash;
    public GameObject LocationLabelPrefab;
    public int ActivePerRound;
    public Location[] Locations;

    public Action<LocationManager> OnFinishGame;

    public bool IsGameOver { get; set; }

    public List<LocationLabel> ActiveLocationLabels { get; set; } = new List<LocationLabel>();

    private AudioSource audioSource;

    public LocationManager()
    {
        Instance = this;
    }

    // Use this for initialization
    void Start()
    {
        audioSource = GetComponent<AudioSource>();
        var activeLocations = new List<Location>();
        while (activeLocations.Count < ActivePerRound)
        {
            var nextLocation = Locations.PickRandom();
            if (!activeLocations.Contains(nextLocation))
            {
                var isExcludedByAddedLocation = false;
                foreach (var addedLocation in activeLocations)
                {
                    foreach (var excludedLocation in addedLocation.Excludes)
                    {
                        if (nextLocation.Name == excludedLocation)
                        {
                            isExcludedByAddedLocation = true;
                        }
                    }
                }

                if (!isExcludedByAddedLocation)
                {
                    activeLocations.Add(nextLocation);
                }
            }
        }

        //var activeLocations = Locations.Shuffle().Take(ActivePerRound).ToList();
        var inactiveLocations = Locations.Except(activeLocations);

        foreach (var activeLocation in activeLocations)
        {
            var locationLabel = Instantiate(LocationLabelPrefab, LocationStash.transform) as GameObject;
            locationLabel.GetComponentInChildren<Text>().text = activeLocation.Name.ToUpper();
            locationLabel.GetComponent<LocationLabel>().IsAssigned = false;
            locationLabel.GetComponent<LocationLabel>().Location = activeLocation;
            locationLabel.transform.SetParent(LocationStash.transform);
            ActiveLocationLabels.Add(locationLabel.GetComponent<LocationLabel>());
        }

        foreach (var inactiveLocation in inactiveLocations)
        {
            inactiveLocation.Socket.gameObject.SetActive(false);
        }

        Invoke("DisableLocationStashLayouting", 0.1f);
    }


    public void Update()
    {
        if (ActiveLocationLabels.All(l => l.IsAssigned))
        {
            if (!IsGameOver)
            {
                IsGameOver = true;
                OnFinishGame(this);
            }
        }
    }

    public async Task<int> ValidateResult()
    {
        int delayMs = 1000;

        await UniTask.Delay(1500);

        var totalPoints = 0;

        foreach (var activeLocationLabel in ActiveLocationLabels)
        {
            var expectedLocationId = activeLocationLabel.Location.Socket.GetInstanceID();
            var actualLocationId = activeLocationLabel.CurrentSocket.GetInstanceID();

            if (expectedLocationId == actualLocationId)
            {
                audioSource.pitch = 1f;
                audioSource.Play();

                totalPoints += 100;
                activeLocationLabel.CurrentSocket.GetComponent<MeshRenderer>().material = activeLocationLabel.Correct;
            }
            else
            {
                activeLocationLabel.CurrentSocket.GetComponent<MeshRenderer>().material = activeLocationLabel.NotCorrect;
            }


            var correctLabel = ActiveLocationLabels.FirstOrDefault(l => l.Location.Socket == activeLocationLabel.CurrentSocket);

            activeLocationLabel.CurrentSocket.GetComponentInChildren<Text>(true).text = correctLabel.Location.Name;
            activeLocationLabel.CurrentSocket.GetComponentInChildren<Canvas>(true).gameObject.SetActive(true);

            await UniTask.Delay(delayMs);
        }

        await UniTask.Delay(1000);
        return totalPoints;
    }

    private void DisableLocationStashLayouting()
    {
        LocationStash.EnableLayoutGrouping(false);
    }
}
