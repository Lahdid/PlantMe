using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class Marker : MonoBehaviour
{
    
    private ARRaycastManager raycastManager;
    private GameObject marker;
    private List<ARRaycastHit> hits = new List<ARRaycastHit>();

    void Start()
    {
        raycastManager = FindObjectOfType<ARRaycastManager>();
        marker = transform.GetChild(0).gameObject;
        marker.SetActive(false); 
    }


    void Update()
    {
      var ray = new Vector2(Screen.width /2 ,Screen.height /2 );
      if (raycastManager.Raycast(ray,hits,TrackableType.Planes)) {
        Pose hitPose = hits[0].pose;
        transform.position = hitPose.position;
                transform.rotation = hitPose.rotation;

                if(!marker.activeInHierarchy){
                    marker.SetActive(true);
                }

      }
    }
}
