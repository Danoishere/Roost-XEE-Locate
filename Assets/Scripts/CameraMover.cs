using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Experimental.UIElements;

public class CameraMover : MonoBehaviour
{

    public Camera Camera { get; set; }
    public Vector3 InitialRotation { get; set; }
    public Vector2 DragStartPosition { get; set; }
    public Vector2 LastDragPosition { get; set; }
    public bool IsDragging { get; set; } = false;
    public Tweener CurrentTweener { get; set; }


    // Use this for initialization
    void Start()
    {
        Camera = Camera.allCameras.First();
        InitialRotation = Camera.transform.rotation.eulerAngles;
    }

    // Update is called once per frame
    void Update()
    {

        if ((Input.touchCount > 0 || Input.GetMouseButton(0)) && !IsDragging)
        {
            if (CurrentTweener != null && CurrentTweener.active)
            {
                CurrentTweener.Kill();
            }

            IsDragging = true;
            DragStartPosition = Input.mousePosition;
            LastDragPosition = DragStartPosition;
        }
        if ((Input.touchCount == 0 && !Input.GetMouseButton(0)) && IsDragging)
        {
            IsDragging = false;
            CurrentTweener = Camera.transform.DORotate(InitialRotation, 1);
        }


        if (IsDragging)
        {
            var currentDragPosition = (Vector2)Input.mousePosition;
            var dragDelta = currentDragPosition - LastDragPosition;
            dragDelta = dragDelta / 200.0f;


            Camera.transform.Rotate(-dragDelta.y, dragDelta.x, 0, Space.Self);

            LastDragPosition = currentDragPosition;
        }
    }
}
