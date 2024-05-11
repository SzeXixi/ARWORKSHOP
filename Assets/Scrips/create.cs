using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class create : MonoBehaviour
{
    public GameObject[] enemyPrefabs; // �洢��ͬ���͵Ĺ���Ԥ����
    public int enemyTotalNum; // ����������
    public float intervalTime; // ���ɹ����ʱ����
    public Transform mainCameraTransform; // ��������� Transform ���
    public float moveSpeed; // �ƶ��ٶ�
    public int maxHealth = 100; // �����������ֵ
    public Slider healthSlider; // Ѫ�� Slider
    private int currentHealth; // ��ǰ����ֵ

    private int enemyCounter; // ���ɹ���ļ�����
    private int lastEnemyIndex = -1; // ��һ�����ɵĹ������͵�����

    void Start()
    {
        enemyCounter = 0;
        currentHealth = maxHealth;

        healthSlider.maxValue = maxHealth;
        healthSlider.value = currentHealth;

        InvokeRepeating("CreateEnemy", 0.5F, intervalTime);
    }

    void Update()
    {
        MoveEnemiesTowardsTarget();
    }

    private void CreateEnemy()
    {
        Vector3 randomPosition = new Vector3(Random.Range(-5.0f, 5.0f), -0.3f, Random.Range(3.0f, 5.0f));
        Vector3 direction = mainCameraTransform.position - randomPosition;
        Quaternion lookRotation = Quaternion.LookRotation(direction);

        int randomIndex;
        do
        {
            // ���ѡ��һ��Ԥ����������ȷ������һ�β�ͬ
            randomIndex = Random.Range(0, enemyPrefabs.Length);
        } while (randomIndex == lastEnemyIndex);

        GameObject randomEnemyPrefab = enemyPrefabs[randomIndex];
        lastEnemyIndex = randomIndex;

        GameObject newEnemy = Instantiate(randomEnemyPrefab, randomPosition, lookRotation);
        enemyCounter++;

        if (enemyCounter == enemyTotalNum)
        {
            CancelInvoke();
        }
    }

    private void MoveEnemiesTowardsTarget()
    {
        GameObject[] enemies = GameObject.FindGameObjectsWithTag("Enemy");

        foreach (GameObject enemy in enemies)
        {
            Vector3 direction = mainCameraTransform.position - enemy.transform.position;
            enemy.transform.position += direction.normalized * moveSpeed * Time.deltaTime;
        }
    }
}