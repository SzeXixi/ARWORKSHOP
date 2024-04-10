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
        // ͨ�����Ʋ���TextMeshProUGUI���
        //infoText = GameObject.Find("info").GetComponent<TextMeshProUGUI>();
        unityEvent.WhenSelect.AddListener(() =>
        {
            /*if (infoText != null)
            {
                infoText.text = "Congratulations on getting the wood +1.";
                StartCoroutine(DestroyTextAfterDelay(2f)); // ����Э���ӳ������ı�����
            }*/
            Destroy(gameObject);
        });

        unityEvent.WhenUnselect.AddListener(() =>
        {
            //Pointer Up
            meshRenderer.material.SetColor("_Color", Color.white);
        });
    }
    /*// Э�����ӳ������ı�����
    IEnumerator DestroyTextAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay); // �ӳ�ָ����ʱ��
        Destroy(infoText.gameObject); // �����ı�����
    }*/
    // Update is called once per frame
    void Update()
    {
        
    }
}
