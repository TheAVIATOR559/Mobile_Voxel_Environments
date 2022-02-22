using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class test : MonoBehaviour
{
    [SerializeField] private GameObject cube;
    [SerializeField] private Transform parent;

    // Start is called before the first frame update
    void Start()
    {
        AnchorContent();
    }

    void AnchorContent()
    {
        GameObject newCube = Instantiate(cube, new Vector3(0, 0.5f, 2.5f), Quaternion.identity, parent);

        if(newCube.GetComponent<ARAnchor>() == null)
        {
            newCube.AddComponent<ARAnchor>();
        }
    }
}
