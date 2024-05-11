using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class create : MonoBehaviour
{
    public GameObject[] enemyPrefabs; // 存储不同类型的怪物预制体
    public int enemyTotalNum; // 怪物总数量
    public float intervalTime; // 生成怪物的时间间隔
    public Transform mainCameraTransform; // 主摄像机的 Transform 组件
    public float moveSpeed; // 移动速度
    public int maxHealth = 100; // 怪物最大生命值
    public Slider healthSlider; // 血条 Slider
    private int currentHealth; // 当前生命值

    private int enemyCounter; // 生成怪物的计数器
    private int lastEnemyIndex = -1; // 上一次生成的怪物类型的索引

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
            // 随机选择一个预制体索引，确保与上一次不同
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