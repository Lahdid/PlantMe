using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UIElements;

public class WateringManager : MonoBehaviour
{


    [SerializeField] private ParticleSystem _Particles;

    [SerializeField]
    private PlacementManager placementManager;
    List<ParticleCollisionEvent> collisionEvents;
    private ParticleSystem.EmissionModule _emission;
    private List<Plant> placedPlants;

    // Angle threshold in degrees for starting watering
    public float angleThreshold = 80f;

    public int newstate = 0;

    // Flag to control whether watering is authorized
    private bool isAuthorized = false;

    // Existing variables...
    private float wateringStartTime;
    private bool isWatering = false;




    void Start()
    {
        _Particles.Stop();
        placementManager = FindObjectOfType<PlacementManager>();
        placedPlants = placementManager.GetPlants();
        collisionEvents = new List<ParticleCollisionEvent>();

        Input.gyro.enabled = true;


    }

    void Update()
    {
        if (isAuthorized)
        {
            Quaternion attitude = Input.gyro.attitude;
            Vector3 euler = attitude.eulerAngles;

            // Normalizing angles to -180 to 180
            if (euler.x > 180) euler.x -= 360;
            if (euler.y > 180) euler.y -= 360;

            if (Mathf.Abs(euler.x) < angleThreshold && Mathf.Abs(euler.y) < angleThreshold)
            {
                Debug.Log("Start Watering");
                StartWatering();
            }
            else
            {
                Debug.Log("Stop Watering");
                StopWatering();
            }
        }
    }


    void OnParticleCollision(GameObject other)
    {
        // Check if watering is active
        if (!isWatering) return;

        // Calculate the duration of watering since the last update

        float wateringDuration = Time.time - wateringStartTime;
        Debug.Log("Watering Duration: " + wateringDuration);

        int waterToAdd = Mathf.FloorToInt(wateringDuration * 10);
        Debug.Log("Water to Add: " + waterToAdd);

        int numCollisionEvents = _Particles.GetCollisionEvents(other, collisionEvents);
        if (placedPlants.Count > 0)
        {
            foreach (Plant placedPlant in placedPlants)
            {
                // Proceed only if the plant is selected
                if (!placedPlant.IsSelected) continue;

                for (int i = 0; i < numCollisionEvents; i++)
                {
                    Vector3 collisionPoint = collisionEvents[i].intersection;
                    float distance = Vector3.Distance(collisionPoint, placedPlant.GameObject.transform.position);

                    // Check if the particle collision is near the selected plant
                    if (distance < 1)
                    {
                        // Increment the water level
                         placedPlant.Water += 0.0102f;

                       //placedPlant.Water += 0.702f;

                        Debug.Log($"After Watering - {placedPlant.Type}, New Water Level: {placedPlant.Water}");

                        // Determine the new state based on water level
                        if (placedPlant.Fertilizer > 30 && placedPlant.Fertilizer < 59 && placedPlant.State == 0 && placedPlant.Water > 30 && placedPlant.Water < 59 && placedPlant.Sun >100)
                        {
                            placedPlant.State = 1;
                            GameObject GrownPlant = GetGrownPlantPrefab(placedPlant, placedPlant.State);
                            GrowPlant(placedPlant, GrownPlant, placedPlant.State);
                            Handheld.Vibrate();


                        }
                        else if (placedPlant.Fertilizer > 60 && placedPlant.Water > 60 && placedPlant.State == 1 && placedPlant.Sun >100)
                        {
                            placedPlant.State = 2; ;

                            GameObject GrownPlant = GetGrownPlantPrefab(placedPlant, placedPlant.State);
                            GrowPlant(placedPlant, GrownPlant, placedPlant.State);
                            Handheld.Vibrate();

                        }

                        /*
                        // Check if the plant needs to grow
                        if (placedPlant.State != newstate)
                        {
                            GameObject GrownPlant = GetGrownPlantPrefab(placedPlant, placedPlant.State);
                            if (GrownPlant != null)
                            {
                                GrowPlant(placedPlant, GrownPlant, placedPlant.State);
                            }
                            else
                            {
                                Debug.LogWarning("Grown plant prefab loading error");
                            }
                        }

                        */
                    }
                }
            }
        }
        else
        {
            Debug.LogWarning("No plants placed yet");
        }

        wateringStartTime = Time.time; // Reset the watering start time for continuous watering


    }


    private void GrowPlant(Plant plant, GameObject grownPlantPrefab, int newState)
    {
        Vector3 plantPosition = plant.GameObject.transform.position;
        Destroy(plant.GameObject);

        GameObject newPlacedPlant = Instantiate(grownPlantPrefab, plantPosition, Quaternion.identity);
        Plant newPlant = new Plant(newPlacedPlant, newState, plant.Type, plant.Water, plant.Sun, plant.Fertilizer);

        int plantIndex = placedPlants.IndexOf(plant);
        placedPlants[plantIndex] = newPlant;
        placementManager.UpdatePlantsList(placedPlants);
    }

  

    private GameObject GetGrownPlantPrefab(Plant placedPlant, int newState)
    {
        string type = placedPlant.Type;
        int state = placedPlant.State;

        switch (type)
        {
            case "Cactus":
                return state switch
                {
                    1 => Resources.Load<GameObject>("Plants/Cactus Medium"),
                    2 => Resources.Load<GameObject>("Plants/Cactus Large"),
                    _ => null,
                };

            case "Bush":
                return state switch
                {
                    1 => Resources.Load<GameObject>("Plants/Bush Medium"),
                    2 => Resources.Load<GameObject>("Plants/Bush Large"),
                    _ => null,
                };

            case "Succulent":
                return state switch
                {
                    1 => Resources.Load<GameObject>("Plants/Succulent Medium"),
                    2 => Resources.Load<GameObject>("Plants/Succulent Large"),
                    _ => null,
                };

            case "Leafy":
                return state switch
                {
                    1 => Resources.Load<GameObject>("Plants/Leafy Medium"),
                    2 => Resources.Load<GameObject>("Plants/Leafy Large"),
                    _ => null,
                };

            default:
                return null;
        }
    }

    public void StartWatering()
    {
        _emission = _Particles.emission;
        _emission.enabled = true;
        _Particles.Play();
        wateringStartTime = Time.time; // Record start time
        isWatering = true;
    }



    public void StopWatering()
    {
        _emission = _Particles.emission;
        _emission.enabled = false;
        _Particles.Stop();
        isWatering = false;
    }

    // This method is linked to your Unity Button
    public void AuthorizeWatering() 
    {
        StartCoroutine(AuthorizationTimer());
}

// Coroutine for handling the 10-second authorization period
private IEnumerator AuthorizationTimer()
{
    isAuthorized = true;
    yield return new WaitForSeconds(5f);
    isAuthorized = false;
}



}
