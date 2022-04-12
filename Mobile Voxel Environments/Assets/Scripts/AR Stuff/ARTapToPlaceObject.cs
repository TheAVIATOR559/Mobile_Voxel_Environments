using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using TMPro;

[RequireComponent(typeof(ARRaycastManager))]
public class ARTapToPlaceObject : MonoBehaviour
{
    public GameObject objToEnable;
    private ARRaycastManager arRaycastManager;

    static List<ARRaycastHit> hits = new List<ARRaycastHit>();

    //[SerializeField] TMP_Text test;
    //[SerializeField] Camera camera;

    private void Awake()
    {
        arRaycastManager = GetComponent<ARRaycastManager>();
    }

    //private void Start()
    //{
    //    spawnedObject = Instantiate(prefabToPlace, Vector3.zero, Quaternion.identity);
    //}

    bool TryGetTouchPosition(out Vector2 touchPosition)
    {
        if(Input.touchCount > 0)
        {
            touchPosition = Input.GetTouch(0).position;
            return true;
        }

        touchPosition = default;
        return false;
    }

    // Update is called once per frame
    void Update()
    {
        if(!TryGetTouchPosition(out Vector2 touchPosition))
        {
            return;
        }

        if(Input.touchCount < 2 && arRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            var hitPose = hits[0].pose;

            if(!objToEnable.activeSelf)
            {
                objToEnable.SetActive(true);
                objToEnable.transform.position = hitPose.position;
            }
            else
            {
                objToEnable.transform.position = hitPose.position;
            }
            //test.text = (camera.transform.position.y - hitPose.position.y).ToString();
        }

        //if(Input.touchCount == 2)
        //{
        //    var touchZero = Input.GetTouch(0);
        //    var touchOne = Input.GetTouch(1);

        //    if(touchZero.phase == TouchPhase.Ended || touchZero.phase == TouchPhase.Canceled
        //        || touchOne.phase == TouchPhase.Ended || touchOne.phase == TouchPhase.Canceled)
        //    {
        //        return;
        //    }

        //    if(touchZero.phase == TouchPhase.Began || touchOne.phase == TouchPhase.Began)
        //    {
        //        initalDistance = Vector2.Distance(touchZero.position, touchOne.position);
        //        initialScale = objToEnable.transform.localScale;
        //    }
        //    else
        //    {
        //        float currDistance = Vector2.Distance(touchZero.position, touchOne.position);

        //        if(Mathf.Approximately(initalDistance, 0))
        //        {
        //            return;
        //        }

        //        float factor = currDistance / initalDistance;
        //        objToEnable.transform.localScale = initialScale * factor;
        //    }
        //}
    }
}
