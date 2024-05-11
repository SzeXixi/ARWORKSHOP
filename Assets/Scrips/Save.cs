using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Save : MonoBehaviour
{
    // Start is called before the first frame update
    public int coinCount = 0;
    public int heartCount = 0;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("material"))
        {
            Destroy(other.gameObject);
            coinCount += 1;
        }
      
    }

    private void OnGUI()
    {
        GUI.skin.label.fontSize = 20;
        GUI.Label(new Rect(20, 20, 500, 500), "Materia Num: " + coinCount);
   
    }
}
