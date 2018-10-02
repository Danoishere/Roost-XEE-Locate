using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LocationStash : MonoBehaviour
{
    private GridLayoutGroup gridLayoutGroup { get; set; }

    // Use this for initialization
    public void EnableLayoutGrouping(bool enabled)
    {
        gridLayoutGroup = GetComponent<GridLayoutGroup>();
        gridLayoutGroup.enabled = enabled;
    }
}
