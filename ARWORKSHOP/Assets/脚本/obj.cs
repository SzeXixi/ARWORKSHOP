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

        // ����Ļ�е����λ��ת��Ϊ���������ռ�����
        Vector3 mouseWorldPosition = Camera.main.ScreenToWorldPoint(new Vector3(mouseScreenPosition.x, mouseScreenPosition.y, 10f)); // 10f ����������ľ��룬���Ը���ʵ���������


        instantiatedObject = mouseWorldPosition;
        instantiatedObject.z = 4; // �������� Z ���겻�� 0���������Ҫ�������ֵ
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
                Debug.Log("������豭");
                break;
            case "table":
                Destroy(gameObject);
                Instantiate(yuzi[1], wezi, Quaternion.Euler(0, 0, 180));
                Debug.Log("���������");
                break;
            case "cabinet":
                Destroy(gameObject);
                Instantiate(yuzi[2], wezi, Quaternion.Euler(0, 0, 180));
                Debug.Log("���������");
                break;
            case "chair":
                Destroy(gameObject);
                Instantiate(yuzi[3], wezi, Quaternion.Euler(0, 0, 180));
                Debug.Log("���������");
                break;
            default:
                break;
        }
    }
}
