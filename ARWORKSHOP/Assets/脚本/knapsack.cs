using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class knapsack : MonoBehaviour
{
    [Header("��Ʒͼ���Ŵ˴�")]
    [SerializeField] private GameObject[] goods;//��Ʒͼ��
    [Header("����")]
    public GameObject Backpack_bar;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            label();
        }
    }
    /// <summary>
    /// ��ǩ�ж��õ�����Ʒ����
    /// </summary>
    public void label()
    {
        // ��ȡ���������ı�ǩ
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hitInfo;

        if (Physics.Raycast(ray, out hitInfo))
        {
            string tag = hitInfo.collider.gameObject.tag;
            switch (tag)
            {
                case "teacup":
                    Debug.Log("������豭");
                    Destroy(hitInfo.collider.gameObject); 
                    InstantiateGoods(0);
                    break;
                case "table":
                    Debug.Log("���������");
                    Destroy(hitInfo.collider.gameObject);
                    InstantiateGoods(1);
                    break;
                case "cabinet":
                    Debug.Log("���������");
                    Destroy(hitInfo.collider.gameObject);
                    InstantiateGoods(2);
                    break;
                case "chair":
                    Debug.Log("���������");
                    Destroy(hitInfo.collider.gameObject);
                    InstantiateGoods(3);
                    break;
                default:
                    break;
            }
        }
    }
    void InstantiateGoods(int index)
    {
        // ��� Backpack_bar �µ�ÿ��������
        bool hasItem = false;
        foreach (Transform child in Backpack_bar.transform)
        {
            if (child.CompareTag(goods[index].tag))
            {
                // ����Ѿ�������ͬ��ǩ�����壬����Ҫʵ����
                hasItem = true;
                break;
            }
        }
        // ��� Backpack_bar ��û����ͬ��ǩ�����壬��ʵ����������
        if (!hasItem)
        {
           Instantiate(goods[index], Backpack_bar.transform);
        }
    }
}
