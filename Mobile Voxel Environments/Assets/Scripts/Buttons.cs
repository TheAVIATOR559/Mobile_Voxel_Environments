using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Buttons : MonoBehaviour
{
    private bool isInfoPanelOpen = true;
    [SerializeField] private Sprite openSprite, closeSprite;
    [SerializeField] private RectTransform parent;
    private void OpenInfoPanel()
    {
        parent.anchoredPosition = Vector2.zero;
        GetComponent<Image>().sprite = closeSprite;
        isInfoPanelOpen = true;
    }

    private void CloseInfoPanel()
    {
        parent.anchoredPosition = new Vector2(575, 0);
        GetComponent<Image>().sprite = openSprite;
        isInfoPanelOpen = false;
    }

    public void InfoPanelInteraction()
    {
        if(isInfoPanelOpen)
        {
            CloseInfoPanel();
            
        }
        else
        {
            OpenInfoPanel();
            
        }
    }

    public void LoadDesert()
    {
        SceneManager.LoadScene("Loading Desert");
    }

    public void LoadTaiga()
    {
        SceneManager.LoadScene("Loading Taiga");
    }

    public void LoadForest()
    {
        SceneManager.LoadScene("Loading Forest");
    }

    public void LoadMainMenu()
    {
        SceneManager.LoadScene("Main Menu");
    }
}
