using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destroyListener : MonoBehaviour
{
    // 定义物体销毁事件的委托
    public delegate void ObjectDestroyedEventHandler(string message);
    // 物体销毁事件
    public event ObjectDestroyedEventHandler OnObjectDestroyed;

    // 在物体被销毁时调用
    void OnDestroy()
    {
        // 触发物体销毁事件，传递消息
        OnObjectDestroyed?.Invoke("物体 " + gameObject.name + " 被收集");
    }

}
