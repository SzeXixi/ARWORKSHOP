using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destroyListener : MonoBehaviour
{
    // �������������¼���ί��
    public delegate void ObjectDestroyedEventHandler(string message);
    // ���������¼�
    public event ObjectDestroyedEventHandler OnObjectDestroyed;

    // �����屻����ʱ����
    void OnDestroy()
    {
        // �������������¼���������Ϣ
        OnObjectDestroyed?.Invoke("���� " + gameObject.name + " ���ռ�");
    }

}
