using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Combine : MonoBehaviour
{
    public GameObject newObjectPrefab; // �������Ԥ����
    private bool hasCollided = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }


    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (!hasCollided)
        {
            // ��ײ����ʱ����ȡ��ײ���λ��
            Vector3 collisionPoint = collision.contacts[0].point;

            // ����������
            GameObject newObject = Instantiate(newObjectPrefab, collisionPoint, Quaternion.Euler(0f, 180f, 0f));

            // ������ײ����������
            gameObject.SetActive(false);
            collision.gameObject.SetActive(false);
           // Destroy(gameObject);
            //Destroy(collision.gameObject);


            hasCollided = true;
            Debug.Log("��ײ��������");
        }
    }
}
