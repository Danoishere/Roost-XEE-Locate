using UniRx.Async;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [SerializeField]
    private GameObject background;
    [SerializeField]
    private GameObject gameControlPanel;
    [SerializeField]
    private Text gameReadyText;
    [SerializeField]
    private GameObject finishGamePanel;
    [SerializeField]
    private Text timeCounter;
    [SerializeField]
    private Text finishTextSubtitle;

    private LocationManager locationManager;
    private bool isGameRunning = false;
    private float seconds = 0;

    void Awake()
    {
        Physics.autoSimulation = false;
        Physics2D.autoSimulation = false;
        Application.targetFrameRate = 120;
        QualitySettings.antiAliasing = 0;
        QualitySettings.vSyncCount = 0;
    }

    // Use this for initialization
    void Start()
    {
        locationManager = GetComponent<LocationManager>();
        locationManager.OnFinishGame = OnFinishGame;
        timeCounter.gameObject.SetActive(true);
        background.SetActive(true);
        gameControlPanel.SetActive(true);
        gameReadyText.gameObject.SetActive(true);
        finishGamePanel.SetActive(false);
    }

    void Update()
    {
        if (isGameRunning)
        {
            seconds += Time.deltaTime;
        }

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
    }

    public async void StartGame()
    {
        gameReadyText.enabled = true;
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

        isGameRunning = true;
        UpdateTimeCounter();
    }

    public async void UpdateTimeCounter()
    {
        while (isGameRunning)
        {
            timeCounter.text = string.Format("{0:F1}", seconds) + "s";
            await UniTask.Delay(100);
        }
    }

    public async void OnFinishGame(LocationManager locationManager)
    {
        isGameRunning = false;

        finishGamePanel.SetActive(true);
        finishGamePanel.GetComponentInChildren<Text>().text = "ENDE";
        await UniTask.Delay(3000);
        finishGamePanel.GetComponentInChildren<Text>().text = "AUSWERTUNG";
        await UniTask.Delay(2500);
        finishGamePanel.SetActive(false);

        var points = await locationManager.ValidateResult();
        var pointsTimeSeconds = Mathf.RoundToInt((float)points * 100f / (float)seconds);

        finishGamePanel.GetComponentInChildren<Text>().text = pointsTimeSeconds + " PUNKTE";
        finishGamePanel.SetActive(true);
        await UniTask.Delay(3000);

        if (pointsTimeSeconds == 0)
        {
            finishGamePanel.GetComponentInChildren<Text>().text = "VIEL GLÜCK BEIM NÄCHSTEN MAL";
            await UniTask.Delay(5000);
        }
        else
        {
            finishGamePanel.GetComponentInChildren<Text>().text = "GRATULATION!";
            finishTextSubtitle.text = "BITTE GEBEN SIE IHRE ANGABEN AM COMPUTER EIN.";
            SendPointsToRanking(pointsTimeSeconds);

            await UniTask.Delay(6500);
        }

        finishGamePanel.SetActive(false);
        await SceneManager.LoadSceneAsync(0);
    }

    public async void SendPointsToRanking(int points)
    {
        var ip = "http://192.168.0.5:8080";
        if (Application.isEditor)
        {
            ip = "http://160.85.154.112:8080";
        }

        var request = new UnityWebRequest(ip + "/?points=" + points, "GET");
        await request.SendWebRequest();
        Debug.Log("Could send points? " + request.responseCode);
    }
}
