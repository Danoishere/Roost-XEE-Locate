using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class LocationSocket : MonoBehaviour
{
    public bool IsSelected { get; set; } = false;

    public LocationLabel AssignedLocationLabel { get; set; }
    public Material SelectedMaterial;
    private Material defaultMaterial;
    private Material material;
    private bool isColoredAsSelected = false;


    void Start()
    {
        defaultMaterial = GetComponent<MeshRenderer>().material;
        GetComponentInChildren<Canvas>().gameObject.SetActive(false);
    }

    void Update()
    {
        if (IsSelected && !isColoredAsSelected)
        {
            Debug.Log("Color to selected");
            isColoredAsSelected = true;
            material = GetComponent<MeshRenderer>().material;
            GetComponent<MeshRenderer>().material = SelectedMaterial;
        }
        else if (!IsSelected && isColoredAsSelected)
        {
            Debug.Log("Color to " + material.name);
            isColoredAsSelected = false;
            GetComponent<MeshRenderer>().material = material;
        }
    }

    // Use this for initialization
    public void AssingLocationLabel(LocationLabel locationLabel)
    {
        IsSelected = false;

        locationLabel.gameObject.SetActive(false);
        if (AssignedLocationLabel != null)
        {
            AssignedLocationLabel.IsAssigned = false;
            AssignedLocationLabel.gameObject.SetActive(true);
        }

        AssignedLocationLabel = locationLabel;
        AssignedLocationLabel.IsAssigned = true;

        material = locationLabel.Assigned;
        GetComponent<MeshRenderer>().material = locationLabel.Assigned;
    }
}
