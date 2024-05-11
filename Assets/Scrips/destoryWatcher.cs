using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class destoryWatcher : MonoBehaviour
{
    public GameObject targetObject; // 目标物体
    public TextMeshProUGUI outputText; // 输出文本

    void Start()
    {
        // 订阅目标物体的销毁事件
        if (targetObject != null)
        {
            destroyListener destroyListener = targetObject.GetComponent<destroyListener>();
            if (destroyListener != null)
            {
                destroyListener.OnObjectDestroyed += OnTargetObjectDestroyed;
            }
        }
    }

    // 当目标物体被销毁时调用的方法
    void OnTargetObjectDestroyed(string message)
    {
        // 输出信息到场景的文本中
        outputText.text = message;
    }

}
