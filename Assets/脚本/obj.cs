using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class obj : MonoBehaviour
{
    public GameObject[] yuzi;
    public Vector3 instantiatedObject;
    public Vector3 wezi;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 mouseScreenPosition = Input.mousePosition;

        // 将屏幕中的鼠标位置转换为相机的世界空间坐标
        Vector3 mouseWorldPosition = Camera.main.ScreenToWorldPoint(new Vector3(mouseScreenPosition.x, mouseScreenPosition.y, 10f)); // 10f 是相机到鼠标的距离，可以根据实际情况调整


        instantiatedObject = mouseWorldPosition;
        instantiatedObject.z = 4; // 如果物体的 Z 坐标不是 0，你可能需要调整这个值
        Debug.Log("Mouse  position: " + instantiatedObject);
        if (fn)
        {
            transform.position = instantiatedObject;
        }
        
    }
    bool fn=false;
    public void yidong()
    {
        fn = true;     
    }
    public void yidong2()
    {
        fn = false;
    }
    public void quchu()
    {
        string tag = gameObject.tag;
        switch (tag)
        {
            case "teacup":
                Destroy(gameObject);
                Instantiate(yuzi[0], wezi, Quaternion.Euler(0, 0, 180));
                Debug.Log("点击到茶杯");
                break;
            case "table":
                Destroy(gameObject);
                Instantiate(yuzi[1], wezi, Quaternion.Euler(0, 0, 180));
                Debug.Log("点击到桌子");
                break;
            case "cabinet":
                Destroy(gameObject);
                Instantiate(yuzi[2], wezi, Quaternion.Euler(0, 0, 180));
                Debug.Log("点击到柜子");
                break;
            case "chair":
                Destroy(gameObject);
                Instantiate(yuzi[3], wezi, Quaternion.Euler(0, 0, 180));
                Debug.Log("点击到椅子");
                break;
            default:
                break;
        }
    }
}
