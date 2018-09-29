﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LocationSocket : MonoBehaviour
{
    public LocationLabel AssignedLocationLabel { get; set; }

    // Use this for initialization
    public void AssingLocationLabel(LocationLabel locationLabel)
    {
        locationLabel.gameObject.SetActive(false);
        if (AssignedLocationLabel != null)
        {
            AssignedLocationLabel.IsAssigned = false;
            AssignedLocationLabel.gameObject.SetActive(true);
        }

        AssignedLocationLabel = locationLabel;
        AssignedLocationLabel.IsAssigned = true;

        GetComponent<MeshRenderer>().material.color = Color.blue;
        GetComponent<MeshRenderer>().material.SetColor("_EmissionColor", Color.blue);
    }
}
