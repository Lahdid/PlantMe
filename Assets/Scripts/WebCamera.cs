using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Video;
using TMPro;


public class WebCamera : MonoBehaviour
{
    static WebCamTexture webcam;
    [SerializeField] public  GameObject Text;

    // Start is called before the first frame update
    void Start()
    {
    //     if(webcam == null){
    //     webcam = new WebCamTexture();
        
    //   }
    //  // Start the webcam.
    //     webcam.Play();
    if (webcam == null)
        {
            webcam = new WebCamTexture();
           
        }
         webcam.Play();
        
    }

    // Update is called once per frame
    void Update()
    {
         if (webcam.isPlaying)
        {
            // Get the RGB levels of the webcam texture.
            Color32 pixelColor = webcam.GetPixel(0, 0);
            float red = pixelColor.r;
            float green = pixelColor.g;
            float blue = pixelColor.b;

            // Calculate the average RGB level.
            float averageRGB = (red + green + blue) / 3.0f;
             Debug.Log("Average RGB level: " + averageRGB);
             Text.GetComponent<TextMeshProUGUI>().text = "Average:" + averageRGB.ToString("F2");
        }
        
    // }

    
        // if (webcam.isPlaying)
        // {
        //     // Get the RGB levels of the webcam texture.
        //     Color32 pixelColor = webcam.GetPixel(0, 0);
        //     float red = pixelColor.r / 255.0f;
        //     float green = pixelColor.g / 255.0f;
        //     float blue = pixelColor.b / 255.0f;

        //     // Calculate the average RGB level.
        //     float averageRGB = (red + green + blue) / 3.0f;
        //     Debug.Log("Average RGB level: " + averageRGB);
        //     Text.GetComponent<TextMeshProUGUI>().text = "Average: " + averageRGB.ToString("F2"); // Display the average with two decimal places.
        // }
    }
    
}
