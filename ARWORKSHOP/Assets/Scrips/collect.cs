using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Rokid.UXR.Interaction;
using UnityEngine.UI;
using TMPro;
using UnityEngine;

public class collect : MonoBehaviour
{
    //private TextMeshProUGUI infoText;
    private MeshRenderer meshRenderer;
    private InteractableUnityEventWrapper unityEvent;
    void Start()
    {
        unityEvent = GetComponent<InteractableUnityEventWrapper>();
        // 通过名称查找TextMeshProUGUI组件
        //infoText = GameObject.Find("info").GetComponent<TextMeshProUGUI>();
        unityEvent.WhenSelect.AddListener(() =>
        {
            /*if (infoText != null)
            {
                infoText.text = "Congratulations on getting the wood +1.";
                StartCoroutine(DestroyTextAfterDelay(2f)); // 启动协程延迟销毁文本对象
            }*/
            Destroy(gameObject);
        });

        unityEvent.WhenUnselect.AddListener(() =>
        {
            //Pointer Up
            meshRenderer.material.SetColor("_Color", Color.white);
        });
    }
    /*// 协程来延迟销毁文本对象
    IEnumerator DestroyTextAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay); // 延迟指定的时间
        Destroy(infoText.gameObject); // 销毁文本对象
    }*/
    // Update is called once per frame
    void Update()
    {
        
    }
}
