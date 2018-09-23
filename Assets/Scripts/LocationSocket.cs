using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LocationSocket : MonoBehaviour
{
    public LocationLabel AssignedLocationLabel { get; set; }
    public string Name;

    // Use this for initialization
    public void AssingLocationLabel(LocationLabel locationLabel)
    {
        locationLabel.gameObject.SetActive(false);
        if (AssignedLocationLabel != null)
        {
            AssignedLocationLabel.gameObject.SetActive(true);
        }
        AssignedLocationLabel = locationLabel;

        GetComponent<MeshRenderer>().material.color = Color.blue;
        GetComponent<MeshRenderer>().material.SetColor("_EmissionColor", Color.blue);
    }
}
