using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class destoryWatcher : MonoBehaviour
{
    public GameObject targetObject; // Ŀ������
    public TextMeshProUGUI outputText; // ����ı�

    void Start()
    {
        // ����Ŀ������������¼�
        if (targetObject != null)
        {
            destroyListener destroyListener = targetObject.GetComponent<destroyListener>();
            if (destroyListener != null)
            {
                destroyListener.OnObjectDestroyed += OnTargetObjectDestroyed;
            }
        }
    }

    // ��Ŀ�����屻����ʱ���õķ���
    void OnTargetObjectDestroyed(string message)
    {
        // �����Ϣ���������ı���
        outputText.text = message;
    }

}
