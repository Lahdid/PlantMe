using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.Interaction.Toolkit;
using TMPro;
using UnityEngine.UI;
using UnityEngine.InputSystem;
using UnityEngine.Video;




public class PlacementManager : MonoBehaviour
{


       private Camera arCamera;
   public GameObject panel; // Assign this in the inspector
  
    
     public GameObject arrowPrefab; // Assign in Unity Inspector

    private Marker marker;
  public GameObject cactus;
  public GameObject leafy;
  public GameObject bush;
  public GameObject succulent;
  private GameObject plantToPlace;
  private GameObject previewedPlant;
  private GameObject placedPlant;
  private List<Plant> Plants = new List<Plant>();
  private string plantType;
  private float averageRGB;


    //Sprites 
    [SerializeField] private Sprite succulentSprite;
    [SerializeField] private Sprite bushSprite;
    [SerializeField] private Sprite cactusSprite;
    [SerializeField] private Sprite defaultSprite;


    public GameObject plantListItemPrefab; // Assign your plant list item prefab in the inspector
    public Transform plantListParent; // Assign your Scroll View content transform in the inspector
// camera for light sensor
    static WebCamTexture webcam;

    void Start()
  {
    marker = FindObjectOfType<Marker>();
   arCamera = Camera.main;
   //starting camera for light sensor
   if (webcam == null)
        {
            webcam = new WebCamTexture();
           
        }
         webcam.Play();
        

  }
  void Update(){
    
          Color32 pixelColor = webcam.GetPixel(0, 0);
            float red = pixelColor.r;
            float green = pixelColor.g;
            float blue = pixelColor.b;

            // Calculate the average RGB level.
            float averageRGB = (red + green + blue) / 3.0f;

  }
  
   public Marker GetMarker(){
    return marker;
  }

  public List<Plant> GetPlants() {
    return Plants;
  }

  public void UpdatePlantsList(List<Plant> newPlants)
{
    Plants = newPlants;
}

  public void setPlantToPlace(GameObject plantPrefab)
  {
    plantToPlace = plantPrefab;
  }

  public void PlaceCactus()
  {
    setPlantToPlace(cactus);
    plantType = "Cactus";

  }
  public void PlaceBush()
  {
    setPlantToPlace(bush);
    plantType = "Bush";

  }
  public void PlaceSucculent()
  {
    setPlantToPlace(succulent);
    plantType = "Succulent";

  }
  public void PlaceLeafy()
  {
    setPlantToPlace(leafy);
    plantType = "Leafy";

  }

  public void PreviewPlant()
  {
    if (plantToPlace == null)
    {
      return;
    }
    if (previewedPlant != null)
    {
      Destroy(previewedPlant);
    }

    previewedPlant = Instantiate(plantToPlace, marker.transform.position, marker.transform.rotation);
  }


  public void PlacePlant()
  {
    // if (webcam.isPlaying)
    //     {
            // Get the RGB levels of the webcam texture.
            // Color32 pixelColor = webcam.GetPixel(0, 0);
            // float red = pixelColor.r;
            // float green = pixelColor.g;
            // float blue = pixelColor.b;

            // // Calculate the average RGB level.
            // float averageRGB = (red + green + blue) / 3.0f;
            
            //  Debug.Log("Average RGB level: " + averageRGB);
            //  Text.GetComponent<TextMeshProUGUI>().text = "Average:" + averageRGB.ToString("F2");
       
    
    if (plantToPlace == null)
    {
      return;
    }
    if (previewedPlant != null)
    {
      placedPlant = previewedPlant;
      GameObject plant = Instantiate(placedPlant, marker.transform.position, marker.transform.rotation);
      Plants.Add(new Plant(plant, 0, plantType,0,averageRGB,0)); 
      Destroy(previewedPlant);

    }

    else
    {
      GameObject plant = Instantiate(plantToPlace, marker.transform.position, marker.transform.rotation);
      Plants.Add(new Plant(plant, 0, plantType,0,averageRGB,0)); 

    }
//  }

    }

    public void RemovePlants()
    {
        // Find and destroy all GameObjects tagged as "Plant"
        GameObject[] plantsInScene = GameObject.FindGameObjectsWithTag("Plant");
        foreach (GameObject plantObject in plantsInScene)
        {
            Destroy(plantObject);
        }

        // Clear the list of Plant objects
        Plants.Clear();
    }


    public void DisplayPlants()
    {
        Debug.Log("Displaying plants, count: " + Plants.Count);

        if (panel != null)
        {
            panel.SetActive(true);

            // Clear existing items

            // Clear existing items efficiently
            for (int i = plantListParent.childCount - 1; i >= 0; i--)
            {
                DestroyImmediate(plantListParent.GetChild(i).gameObject);
            }


        }




        // Populate list with plants
        foreach (Plant plant in Plants)
        {
            Debug.Log("Creating plant item in UI for: " + plant.Type);
            GameObject item = Instantiate(plantListItemPrefab, plantListParent);
            item.transform.Find("Name").GetComponent<TextMeshProUGUI>().text =  "Name : " +  plant.Type;
            item.transform.Find("Water").GetComponent<TextMeshProUGUI>().text = "Water : " + plant.Water.ToString() + " %";
            item.transform.Find("Food").GetComponent<TextMeshProUGUI>().text =  "Food : " + plant.Fertilizer.ToString() + " %";
            item.transform.Find("Sun").GetComponent<TextMeshProUGUI>().text =   "Light : " + plant.Sun.ToString() + " %";

            item.GetComponent<Button>().onClick.AddListener(() => OnPlantListItemClick(plant));

                      

            TextMeshProUGUI etatText = item.transform.Find("Etat").GetComponent<TextMeshProUGUI>();


            if (plant.State == 0 )
            {
                etatText.text = "State : Small";
                etatText.color = Color.red; 
            }
            else if (plant.State == 1)
            {
                etatText.text = "State : Medium";
                etatText.color = Color.yellow; 
            }
            else
            {
                etatText.text = "State : Large";
                etatText.color = Color.green; 
            }

            if (plant.Type == "Succulent")
            {
                Image plantImage = item.transform.Find("PlantImg").GetComponent<Image>();
                plantImage.sprite = succulentSprite;


            }
            else if (plant.Type == "Bush")
            {
                Image plantImage = item.transform.Find("PlantImg").GetComponent<Image>();
                plantImage.sprite = bushSprite;

            }
            else if (plant.Type == "Cactus")
            {
                Image plantImage = item.transform.Find("PlantImg").GetComponent<Image>();
                plantImage.sprite = cactusSprite;


            }
            else
            {
                Image plantImage = item.transform.Find("PlantImg").GetComponent<Image>();
                plantImage.sprite = defaultSprite;


            }



        }

        // This will force the UI to update immediately after changes
        LayoutRebuilder.ForceRebuildLayoutImmediate(plantListParent.GetComponent<RectTransform>());
    }


    private void PointArrowAtPlant(Plant plant)
    {
        // Check and remove existing arrow
        if (plant.Arrow != null)
        {
            Destroy(plant.Arrow);
        }

        // Instantiate arrow above the plant
        // Adjust the height offset as needed
        float heightOffset = 1.2f; // This value determines how high above the plant the arrow will be
        Vector3 arrowPosition = plant.GameObject.transform.position + Vector3.up * heightOffset;

        GameObject arrow = Instantiate(arrowPrefab, arrowPosition, Quaternion.identity);

        // Set the arrow to point straight up
        arrow.transform.rotation = Quaternion.Euler(0, 0, 90);


        plant.Arrow = arrow;
    }

    private void OnPlantListItemClick(Plant plant)
    {
        PointArrowAtPlant(plant);

        // Deselect other plants and select the clicked one
        foreach (var otherPlant in Plants)
        {
            if (otherPlant != plant)
            {
                // Deselect and remove arrow from other plants
                if (otherPlant.Arrow != null)
                {
                    Destroy(otherPlant.Arrow);
                    otherPlant.Arrow = null;
                }
                otherPlant.IsSelected = false; // Deselect other plants
            }
        }

        // Select the clicked plant
        plant.IsSelected = true;

        HidePanel(); // Hide the UI panel after selection
    }


    // Call this method to hide the panel
    public void HidePanel()
    {
        if (panel != null)
        {
            panel.SetActive(false);
            
        }
    }




}
