using UniRx.Async;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [SerializeField]
    private GameObject background;
    [SerializeField]
    private GameObject gameControlPanel;
    [SerializeField]
    private Text gameReadyText;
    private LocationManager locationManager;

    // Use this for initialization
    void Start()
    {
        locationManager = GetComponent<LocationManager>();
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
    }

    public async void StartGame()
    {
        gameControlPanel.SetActive(false);
        await UniTask.Delay(500);
        gameReadyText.text = "3";
        await UniTask.Delay(1000);
        gameReadyText.text = "2";
        await UniTask.Delay(1000);
        gameReadyText.text = "1";
        await UniTask.Delay(1000);
        gameReadyText.text = "LOS!";
        await UniTask.Delay(1100);
        gameReadyText.enabled = false;
        background.SetActive(false);
    }
}
