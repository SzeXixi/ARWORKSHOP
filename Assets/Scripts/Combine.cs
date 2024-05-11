using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Combine : MonoBehaviour
{
    public GameObject newObjectPrefab; // 新物体的预制体
    private bool hasCollided = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }


    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (!hasCollided)
        {
            // 碰撞发生时，获取碰撞点的位置
            Vector3 collisionPoint = collision.contacts[0].point;

            // 生成新物体
            GameObject newObject = Instantiate(newObjectPrefab, collisionPoint, Quaternion.Euler(0f, 180f, 0f));

            // 销毁碰撞的两个物体
            gameObject.SetActive(false);
            collision.gameObject.SetActive(false);
           // Destroy(gameObject);
            //Destroy(collision.gameObject);


            hasCollided = true;
            Debug.Log("碰撞发生啦！");
        }
    }
}
