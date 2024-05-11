using Rokid.UXR.Interaction;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using TMPro;

public class collect : MonoBehaviour
{
    private InteractableUnityEventWrapper unityEvent;
    private MeshRenderer meshRenderer;
    public TextMeshProUGUI collectedTextPrefab; // 引用UI文本的预制体
    public float displayDuration = 2f; // 文本显示时间

    void Start()
    {
        unityEvent = GetComponent<InteractableUnityEventWrapper>();
        meshRenderer = GetComponent<MeshRenderer>();

        unityEvent.WhenSelect.AddListener(() =>
        {
            // 显示UI文本
            //ShowCollectedText();
            Destroy(gameObject);
        });
    }
    /*void OnDestroy()
    {
        Debug.Log("物体被销毁了: " + gameObject.name);

        // 在这里编写你想要执行的其他逻辑，例如触发其他事件、保存数据等
    }*/
    /*void ShowCollectedText()
    {
        meshRenderer.enabled = false;
        // 生成UI文本
        TextMeshProUGUI collectedText = Instantiate(collectedTextPrefab, transform.position, Quaternion.identity);

        // 设置文本内容为“已收集”
        collectedText.text = "已收集";

        // 将文本对象作为被点击物体的子对象
        collectedText.transform.SetParent(transform);

        // 设置文本对象位置
        collectedText.rectTransform.localPosition = new Vector3(0, 55, 0);

        // 设置文本对象缩放
        collectedText.rectTransform.localScale = Vector3.one;

        // 启动协程以在指定时间后销毁文本对象
        StartCoroutine(DestroyTextAfterDelay(collectedText.gameObject));
    }

    IEnumerator DestroyTextAfterDelay(GameObject textObject)
    {
        // 等待一段时间
        yield return new WaitForSeconds(displayDuration);

        // 销毁文本对象
        Destroy(textObject);
        Destroy(gameObject);
    }*/
}
