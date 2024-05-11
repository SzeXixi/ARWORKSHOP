using Rokid.UXR.Interaction;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using TMPro;

public class collect : MonoBehaviour
{
    private InteractableUnityEventWrapper unityEvent;
    private MeshRenderer meshRenderer;
    public TextMeshProUGUI collectedTextPrefab; // ����UI�ı���Ԥ����
    public float displayDuration = 2f; // �ı���ʾʱ��

    void Start()
    {
        unityEvent = GetComponent<InteractableUnityEventWrapper>();
        meshRenderer = GetComponent<MeshRenderer>();

        unityEvent.WhenSelect.AddListener(() =>
        {
            // ��ʾUI�ı�
            //ShowCollectedText();
            Destroy(gameObject);
        });
    }
    /*void OnDestroy()
    {
        Debug.Log("���屻������: " + gameObject.name);

        // �������д����Ҫִ�е������߼������紥�������¼����������ݵ�
    }*/
    /*void ShowCollectedText()
    {
        meshRenderer.enabled = false;
        // ����UI�ı�
        TextMeshProUGUI collectedText = Instantiate(collectedTextPrefab, transform.position, Quaternion.identity);

        // �����ı�����Ϊ�����ռ���
        collectedText.text = "���ռ�";

        // ���ı�������Ϊ�����������Ӷ���
        collectedText.transform.SetParent(transform);

        // �����ı�����λ��
        collectedText.rectTransform.localPosition = new Vector3(0, 55, 0);

        // �����ı���������
        collectedText.rectTransform.localScale = Vector3.one;

        // ����Э������ָ��ʱ��������ı�����
        StartCoroutine(DestroyTextAfterDelay(collectedText.gameObject));
    }

    IEnumerator DestroyTextAfterDelay(GameObject textObject)
    {
        // �ȴ�һ��ʱ��
        yield return new WaitForSeconds(displayDuration);

        // �����ı�����
        Destroy(textObject);
        Destroy(gameObject);
    }*/
}
