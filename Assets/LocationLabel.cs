using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class LocationLabel : MonoBehaviour, IDragHandler, IEndDragHandler
{
    public bool IsDragging { get; set; }
    public int OriginalIndex { get; set; }
    public Transform OriginalParent { get; set; }
    public Vector3 OriginalPosition { get; set; }

    public Canvas Canvas;

    public void OnDrag(PointerEventData eventData)
    {
        if (!IsDragging)
        {
            OriginalParent = transform.parent;
            OriginalPosition = transform.localPosition;
            OriginalIndex = transform.GetSiblingIndex();
            transform.parent = Canvas.transform;
            IsDragging = true;
        }

        transform.position = Input.mousePosition;

        var ray = new Ray(transform.position, Camera.current.transform.rotation.eulerAngles);
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        transform.parent = OriginalParent;
        transform.localPosition = OriginalPosition;
        transform.SetSiblingIndex(OriginalIndex);
        IsDragging = false;
    }
}
