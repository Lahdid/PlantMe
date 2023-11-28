using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Video;
using TMPro;


public class SunLight : MonoBehaviour
{
    [SerializeField] public GameObject UI;
    // [SerializeField] public  GameObject Sun;
    // [SerializeField] public  GameObject Cloud;
    [SerializeField] public GameObject Text;

    static WebCamTexture webcam;


    // Start is called before the first frame update
    void Start()
    {
        // if(webcam == null){
        //      webcam = new WebCamTexture();
        //  }
        // webcam.Play();
        UI.gameObject.SetActive(false);


    }

    // Update is called once per frame
    void Update()
    {

        // if (webcam != null && webcam.isPlaying)
        // {
        //     Color32 pixelColor = webcam.GetPixel(0, 0);
        //     float red = pixelColor.r;
        //     float green = pixelColor.g;
        //     float blue = pixelColor.b;

        //     // Calculate the average RGB level.
        //     float averageRGB = (red + green + blue) / 3.0f;
        //     string averageRGBString = averageRGB.ToString("F2");

        //     // Display the average RGB value on the TextMeshPro object
        //     Text.GetComponent<TextMeshProUGUI>().text = averageRGBString;

            //     // Check if the average RGB level is above the threshold.
            //     if (averageRGB > 0.1f){
            //         // Set the cactus to be active.
            //         Sun.gameObject.SetActive(true);
            //         Cloud.gameObject.SetActive(false);
            //     }
            //     else{
            //         // Set the cactus to be inactive.
            //         Sun.gameObject.SetActive(false);
            //         Cloud.gameObject.SetActive(true);

            //     }
            // }

            // if(webcam.isPlaying){
            //       Sun.gameObject.SetActive(true);
            // }



        // }
    }


        public void SensorFunction() {

            // Set the SunLightUI GameObject active
            UI.gameObject.SetActive(true);


            // Start the timer when the GameObject is activated
            if (UI.gameObject.activeSelf) {
                StartCoroutine(TurnOffGameObjectAfter3Seconds(UI));

            }


        }

        private IEnumerator TurnOffGameObjectAfter3Seconds(GameObject gameObject) {
            yield return new WaitForSeconds(3.0f);
            gameObject.SetActive(false);
        }
    }

