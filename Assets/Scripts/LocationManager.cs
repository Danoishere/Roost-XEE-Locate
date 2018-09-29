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

    public LocationManager()
    {
        Instance = this;
    }

    // Use this for initialization
    void Start()
    {
        var activeLocations = Locations.Shuffle().Take(ActivePerRound).ToList();
        var inactiveLocations = Locations.Except(activeLocations);

        foreach (var activeLocation in activeLocations)
        {
            var locationLabel = Instantiate(LocationLabelPrefab, LocationStash.transform) as GameObject;
            locationLabel.GetComponentInChildren<Text>().text = activeLocation.Name;
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

        await UniTask.Delay(2000);

        var totalPoints = 0;

        foreach (var activeLocationLabel in ActiveLocationLabels)
        {
            var expectedLocationId = activeLocationLabel.Location.Socket.GetInstanceID();
            var actualLocationId = activeLocationLabel.CurrentSocket.GetInstanceID();

            if(expectedLocationId == actualLocationId)
            {
                totalPoints += 100;
                activeLocationLabel.CurrentSocket.GetComponent<MeshRenderer>().material.color = Color.green;
            }
            else
            {
                activeLocationLabel.CurrentSocket.GetComponent<MeshRenderer>().material.color = Color.red;
            }
            await UniTask.Delay(delayMs);
        }

        return totalPoints;
    }

    private void DisableLocationStashLayouting()
    {
        LocationStash.EnableLayoutGrouping(false);
    }
}
