using System.Collections;
using System.Collections.Generic;
using System.Linq;
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
    public LocationStash LocationStash;
    public GameObject LocationLabelPrefab;
    public int ActivePerRound;
    public Location[] Locations;

    // Use this for initialization
    void Start()
    {
        var activeLocations = Locations.Shuffle().Take(ActivePerRound);
        var inactiveLocations = Locations.Except(activeLocations);

        foreach (var activeLocation in activeLocations)
        {
            var locationLabel = Instantiate(LocationLabelPrefab, LocationStash.transform) as GameObject;
            locationLabel.GetComponentInChildren<Text>().text = activeLocation.Name;
            locationLabel.transform.SetParent(LocationStash.transform);
        }

        foreach (var inactiveLocation in inactiveLocations)
        {
            inactiveLocation.Socket.gameObject.SetActive(false);
        }

        Invoke("DisableLocationStashLayouting", 0.1f);
    }

    private void DisableLocationStashLayouting()
    {
        LocationStash.EnableLayoutGrouping(false);
    }
}
