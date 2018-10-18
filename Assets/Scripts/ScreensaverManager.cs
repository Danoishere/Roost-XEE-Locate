using System.Collections;
using System.Collections.Generic;
using UniRx.Async;
using UnityEngine;
using UnityEngine.UI;

public class ScreensaverManager : MonoBehaviour
{

    public Canvas Canvas;
    public Image image;
    public float ActivateScreensaverAfterSeconds = 15;
    public float ChangeSpriteEverySeconds = 15;
    public string[] SpriteNames;

    private float secondsSinceLastTouch = 0.0f;
    private bool isScreensaverVisible = false;
    private float secondsSinceLastSpriteChange = 0.0f;
    private int currentSpriteIndex = 0;


    // Use this for initialization
    void Start()
    {
        Canvas.gameObject.SetActive(false);
    }

    // Update is called once per frame
    async void Update()
    {
        if (Input.touchCount > 0 || Input.GetMouseButtonDown(0))
        {
            secondsSinceLastTouch = 0.0f;
            if (isScreensaverVisible)
            {
                isScreensaverVisible = false;
                Canvas.gameObject.SetActive(false);
            }
        }
        else
        {
            secondsSinceLastTouch += Time.deltaTime;
        }

        if (secondsSinceLastTouch > ActivateScreensaverAfterSeconds)
        {
            Debug.Log("Activate Screensaver");
            if (!isScreensaverVisible)
            {
                isScreensaverVisible = true;
                Canvas.gameObject.SetActive(true);
            }

            if (secondsSinceLastSpriteChange > ChangeSpriteEverySeconds)
            {
                secondsSinceLastSpriteChange = 0;
                currentSpriteIndex = (currentSpriteIndex + 1) % SpriteNames.Length;
                Resources.UnloadAsset(image.sprite);
                image.sprite = (Sprite)await Resources.LoadAsync<Sprite>(SpriteNames[currentSpriteIndex]);
            }
            else
            {
                secondsSinceLastSpriteChange += Time.deltaTime;
            }
        }
    }
}
