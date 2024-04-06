using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class knapsack : MonoBehaviour
{
    [Header("物品图标存放此处")]
    [SerializeField] private GameObject[] goods;//物品图标
    [Header("背包")]
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
    /// 标签判定拿到的物品方法
    /// </summary>
    public void label()
    {
        // 获取被点击物体的标签
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hitInfo;

        if (Physics.Raycast(ray, out hitInfo))
        {
            string tag = hitInfo.collider.gameObject.tag;
            switch (tag)
            {
                case "teacup":
                    Debug.Log("点击到茶杯");
                    Destroy(hitInfo.collider.gameObject); 
                    InstantiateGoods(0);
                    break;
                case "table":
                    Debug.Log("点击到桌子");
                    Destroy(hitInfo.collider.gameObject);
                    InstantiateGoods(1);
                    break;
                case "cabinet":
                    Debug.Log("点击到柜子");
                    Destroy(hitInfo.collider.gameObject);
                    InstantiateGoods(2);
                    break;
                case "chair":
                    Debug.Log("点击到椅子");
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
        // 检查 Backpack_bar 下的每个子物体
        bool hasItem = false;
        foreach (Transform child in Backpack_bar.transform)
        {
            if (child.CompareTag(goods[index].tag))
            {
                // 如果已经存在相同标签的物体，则不需要实例化
                hasItem = true;
                break;
            }
        }
        // 如果 Backpack_bar 下没有相同标签的物体，则实例化新物体
        if (!hasItem)
        {
           Instantiate(goods[index], Backpack_bar.transform);
        }
    }
}
