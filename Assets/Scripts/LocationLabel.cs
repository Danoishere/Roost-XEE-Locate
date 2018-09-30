using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.EventSystems;

public class LocationLabel : MonoBehaviour, IDragHandler, IEndDragHandler
{
    public Location Location { get; set; }
    public bool IsAssigned { get; set; }
    public bool IsDragging { get; set; }
    public int OriginalIndex { get; set; }
    public Transform OriginalParent { get; set; }
    public Vector2 OriginalPosition { get; set; }
    public Vector2 DragStartOffset { get; set; }
    public bool IsOverSocket { get; set; }
    public Camera Camera { get; set; }
    public Canvas Canvas { get; set; }
    public LocationSocket CurrentSocket { get; set; }

    public void Start()
    {
        Camera = Camera.allCameras.FirstOrDefault();
        Canvas = GetComponentInParent<Canvas>();
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (!IsDragging)
        {
            OriginalParent = transform.parent;
            OriginalPosition = transform.localPosition;
            OriginalIndex = transform.GetSiblingIndex();
            DragStartOffset = transform.position - Input.mousePosition;
            transform.SetParent(Canvas.transform);
            IsDragging = true;
        }

        Vector2 posTouch1;
        if (Input.touchCount > 0)
        {
            posTouch1 = Input.touches[0].position;
        }
        else
        {
            posTouch1 = Input.mousePosition;
        }

        // Move panel on position it got grabbed originally
        var ray = Camera.ScreenPointToRay(posTouch1);

        IsOverSocket = false;
        CurrentSocket = null;

        RaycastHit hit;

        var didHitSomething = Physics.Raycast(ray, out hit);
        if (didHitSomething)
        {
            var locationSocket = hit.transform.GetComponent<LocationSocket>();
            if (locationSocket != null)
            {
                IsOverSocket = true;
                CurrentSocket = locationSocket;
            }
        }
    }

    public void FixedUpdate()
    {
        if (IsDragging)
        {
            Vector2 posTouch1;
            if (Input.touchCount > 0)
            {
                posTouch1 = Input.touches[0].position;
            }
            else
            {
                posTouch1 = Input.mousePosition;
            }
            transform.position = posTouch1 + DragStartOffset;
        }
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        if (IsOverSocket)
        {
            CurrentSocket.AssingLocationLabel(this);
        }

        transform.SetParent(OriginalParent);
        transform.localPosition = OriginalPosition;
        transform.SetSiblingIndex(OriginalIndex);
        IsDragging = false;
    }
}
