using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System;

public class PlantDataHandler : MonoBehaviour
{
    
   

    void Start()
    {
       
    }


    void Update()
    {
     
    }

    [Serializable]
    public class PlantListWrapper
    {
        public List<Plant> plantList;
    }

    public void SavePlantList(List<Plant> plantList)
    {
        PlantListWrapper wrapper = new PlantListWrapper { plantList = plantList };
        string jsonData = JsonUtility.ToJson(wrapper);
        PlayerPrefs.SetString("PLANTLIST", jsonData);
        PlayerPrefs.Save();
        Debug.Log("Plant list saved to PlayerPrefs.");
    }

    public List<Plant> LoadPlantList()
    {
        string jsonData = PlayerPrefs.GetString("PLANTLIST");
        PlantListWrapper wrapper = JsonUtility.FromJson<PlantListWrapper>(jsonData);
        return wrapper.plantList;
    }

    public void DeletePlantList(){
         PlayerPrefs.DeleteAll();
         PlayerPrefs.Save();
    }
}
