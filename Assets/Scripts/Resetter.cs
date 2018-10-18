using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UniRx.Async;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Resetter : MonoBehaviour
{

    private RectTransform rectTransform;
    private int touchCount = 0;
    private float time;

    // Use this for initialization
    void Start()
    {
        rectTransform = GetComponent<RectTransform>();
    }

    // Update is called once per frame
    async void Update()
    {
        if (Input.touchCount == 1 && IsInsideResetter())
        {
            touchCount = Input.touches.First().tapCount;
            time = Time.time;
        }

        if (touchCount > 3)
        {
            touchCount = 0;
            await SceneManager.LoadSceneAsync(0);
        }

        if ((time - Time.time) > 3)
        {
            touchCount = 0;
        }
    }

    private bool IsInsideResetter()
    {
        var touch = Input.touches.First();
        return RectTransformUtility.RectangleContainsScreenPoint(rectTransform, touch.position);
    }
}
