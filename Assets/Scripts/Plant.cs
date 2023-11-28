using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Plant
{
    public GameObject GameObject { get;set; }
    public int State { get;set; }
    public string Type { get; }
    public float Water {get;set;}
    public float Sun{get;set;}
    public float Fertilizer{get;set;}
    public GameObject Arrow { get; set; }
    public bool IsSelected { get; set; } // To track if the plant is selected



    public Plant(GameObject gameObject, int state, string type, float water, float sun, float fertilizer, GameObject arrow)
    {
        GameObject = gameObject;
        State = state;
        Type = type;
        Water = water;
        Sun = sun;
        Fertilizer = fertilizer;
        Arrow = arrow;

    }
    public Plant(GameObject gameObject, int state, string type, float water, float sun, float fertilizer)
    {
        GameObject = gameObject;
        State = state;
        Type = type;
        Water = water;
        Sun = sun;
        Fertilizer = fertilizer;
      

    }

}
