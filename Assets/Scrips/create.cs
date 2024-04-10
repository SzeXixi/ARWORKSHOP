using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class create : MonoBehaviour
{
    //�ó��������ɵĹ���
    public GameObject targetEnemy;
    //���ɹ����������
    public int enemyTotalNum;
    //���ɹ����ʱ����
    public float intervalTime;
    public Transform mainCameraTransform;
    //���ɹ���ļ�����
    private int enemyCounter;
    private Vector3 targetPosition; // Ŀ���λ��
    public float moveSpeed; // �ƶ��ٶ�
    public int maxHealth = 100;
    public Slider healthSlider;
    private int currentHealth;

    // Use this for initialization
    void Start()
    {
        //��ʼʱ���������Ϊ0��
        enemyCounter = 0;
        targetPosition = new Vector3(-1.46f, -0.126f, -1.02f);
        //�ظ����ɹ���
        InvokeRepeating("CreatEnemy", 0.5F, intervalTime);
        currentHealth = maxHealth;
        healthSlider.maxValue = maxHealth;
        healthSlider.value = currentHealth;
    }

    // Update is called once per frame
    void Update()
    {
        MoveEnemiesTowardsTarget();
    }
    //���������ɹ���
    private void CreatEnemy()
    {
        //���������
        Vector3 suiji = this.transform.position;
        suiji.x = this.transform.position.x + Random.Range(0.0f, 5.0f);
        suiji.z = this.transform.position.y + Random.Range(0.0f, 5.0f);
        suiji.y = -0.35f;
        Vector3 direction = mainCameraTransform.position - suiji;
        Quaternion lookRotation = Quaternion.LookRotation(direction);
        GameObject newObject = Instantiate(targetEnemy, suiji, lookRotation);
        enemyCounter++;
        Debug.Log("������������꣺" + suiji);
        //��������ﵽ���ֵ
        if (enemyCounter == enemyTotalNum)
        {
            //ֹͣˢ��
            CancelInvoke();
        }
    }
    private void MoveEnemiesTowardsTarget()
    {
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");
        bool DecreasingMarker = false;
        foreach (GameObject enemy in enemies)
        {           
            Vector3 direction = targetPosition - enemy.transform.position;
            enemy.transform.position += direction.normalized * moveSpeed * Time.deltaTime;
            /*if (enemy.transform.position == targetPosition)
            {
               if (!DecreasingMarker) // ����Ƿ��Ѿ��ڼ���Ѫ����Э����
                {
                    StartCoroutine(DecreaseHealthOverTime(enemy));
                    DecreasingMarker = true; // ��ǹ������ڼ���Ѫ��
                }

            }*/
        }
        
    }
    
    /*IEnumerator DecreaseHealthOverTime(GameObject enemy)
    {
        while (true)
        {
            yield return new WaitForSeconds(3.0f); // ÿ��ִ��һ��

            currentHealth -= 1; // ����Ѫ��

            healthSlider.value = currentHealth;// ����Ѫ����ʾ
        }
    }*/
    /*void damage(int speed)
    {
        currentHealth -= speed;
        healthSlider.value = currentHealth;
    }*/
}