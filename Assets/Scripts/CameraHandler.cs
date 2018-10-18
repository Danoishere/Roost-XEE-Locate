using UnityEngine;
using System.Collections;
using DG.Tweening;

public class CameraHandler : MonoBehaviour
{

    private static readonly float PanSpeed = 20f;
    private static readonly float ZoomSpeedTouch = 0.1f;
    private static readonly float ZoomSpeedMouse = 0.5f;
    private readonly Plane plane = new Plane(Vector3.up, 0);

    [SerializeField]
    private float[] BoundsX = new float[] { -10f, 5f };
    [SerializeField]
    private float[] BoundsZ = new float[] { -18f, -4f };
    private readonly float[] ZoomBounds = new float[] { 10f, 85f };

    private Camera cam;
    private Vector3 lastPanPosition;
    private int panFingerId; // Touch mode only

    private bool wasZoomingLastFrame; // Touch mode only
    private Vector2[] lastZoomPositions; // Touch mode only
    private GameManager gameManager;
    private bool isReset = false;

    private Vector3 initialPosition;
    private float fieldOfView;

    void Awake()
    {
        cam = GetComponent<Camera>();
        gameManager = FindObjectOfType<GameManager>();
        initialPosition = transform.position;
        fieldOfView = cam.fieldOfView;
    }

    void LateUpdate()
    {
        if (!gameManager.isGameRunning && gameManager.isOnGameScreen)
        {
            if (!isReset)
            {
                Debug.Log("Move to initial position");
                isReset = true;
                transform.DOMove(initialPosition, 1.5f);
                cam.DOFieldOfView(fieldOfView, 1.5f);
            }

            return;
        }

        if (LocationLabel.DoNotPanAndZoom)
        {
            return;
        }

        if (Input.touchSupported && Application.platform != RuntimePlatform.WebGLPlayer)
        {
            HandleTouch();
        }
        else
        {
            HandleMouse();
        }
    }

    void HandleTouch()
    {
        switch (Input.touchCount)
        {

            case 1: // Panning
                wasZoomingLastFrame = false;

                // If the touch began, capture its position and its finger ID.
                // Otherwise, if the finger ID of the touch doesn't match, skip it.
                Touch touch = Input.GetTouch(0);
                if (touch.phase == TouchPhase.Began)
                {
                    lastPanPosition = touch.position;
                    panFingerId = touch.fingerId;
                }
                else if (touch.fingerId == panFingerId && touch.phase == TouchPhase.Moved)
                {
                    PanCamera(touch.position);
                }
                else if (touch.phase == TouchPhase.Ended)
                {
                    Debug.Log("Reset (touch)");
                }

                break;

            case 2: // Zooming
                Vector2[] newPositions = new Vector2[] { Input.GetTouch(0).position, Input.GetTouch(1).position };
                if (!wasZoomingLastFrame)
                {
                    lastZoomPositions = newPositions;
                    wasZoomingLastFrame = true;
                }
                else
                {
                    // Zoom based on the distance between the new positions compared to the 
                    // distance between the previous positions.
                    float newDistance = Vector2.Distance(newPositions[0], newPositions[1]);
                    float oldDistance = Vector2.Distance(lastZoomPositions[0], lastZoomPositions[1]);
                    float offset = newDistance - oldDistance;

                    ZoomCamera(offset, ZoomSpeedTouch);

                    lastZoomPositions = newPositions;
                }
                break;

            default:
                wasZoomingLastFrame = false;
                break;
        }
    }

    void HandleMouse()
    {
        // On mouse down, capture it's position.
        // Otherwise, if the mouse is still down, pan the camera.
        if (Input.GetMouseButtonDown(0))
        {
            lastPanPosition = Input.mousePosition;
        }
        else if (Input.GetMouseButton(0))
        {
            PanCamera(Input.mousePosition);
        }
        else if (Input.GetMouseButtonUp(0))
        {
            Debug.Log("reset (mouse)");
        }

        // Check for scrolling to zoom the camera
        float scroll = Input.GetAxis("Mouse ScrollWheel");
        ZoomCamera(scroll, ZoomSpeedMouse);
    }

    void PanCamera(Vector3 currentPanPosition)
    {
        Ray currentTouchRay = cam.ScreenPointToRay(currentPanPosition);
        Ray lastTouchRay = cam.ScreenPointToRay(lastPanPosition);

        if (plane.Raycast(currentTouchRay, out float currentDistance) && plane.Raycast(lastTouchRay, out float lastDistance))
        {
            var newTouchPosition = currentTouchRay.GetPoint(currentDistance);
            var lastTouchPosition = lastTouchRay.GetPoint(lastDistance);

            Vector3 touchMoveDelta = lastTouchPosition - newTouchPosition;

            Debug.Log(touchMoveDelta);
            Debug.DrawLine(newTouchPosition, newTouchPosition + touchMoveDelta, Color.blue, 10f);

            var newCamPosition = transform.position + touchMoveDelta;

            transform.Translate(touchMoveDelta, Space.World);

            // Cache the position
            lastPanPosition = currentPanPosition;
        }
    }

    void ZoomCamera(float offset, float speed)
    {
        if (offset == 0)
        {
            return;
        }

        cam.fieldOfView = Mathf.Clamp(cam.fieldOfView - (offset * speed), ZoomBounds[0], ZoomBounds[1]);
    }
}