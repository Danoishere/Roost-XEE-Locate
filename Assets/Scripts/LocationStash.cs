using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LocationStash : MonoBehaviour
{

    public VerticalLayoutGroup VerticalLayoutGroup { get; set; }

    // Use this for initialization
    public void EnableLayoutGrouping(bool enabled)
    {
        VerticalLayoutGroup = GetComponent<VerticalLayoutGroup>();
        VerticalLayoutGroup.enabled = enabled;
    }
}
