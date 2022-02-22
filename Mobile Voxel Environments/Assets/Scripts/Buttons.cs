using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Buttons : MonoBehaviour
{
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
