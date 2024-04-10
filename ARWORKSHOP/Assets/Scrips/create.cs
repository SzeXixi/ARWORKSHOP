using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class create : MonoBehaviour
{
    //该出生点生成的怪物
    public GameObject targetEnemy1;
    public GameObject targetEnemy2;
    public GameObject targetEnemy3;
    //生成怪物的总数量
    public int enemyTotalNum;
    //生成怪物的时间间隔
    public float intervalTime;
    public Transform mainCameraTransform;
    //生成怪物的计数器
    private int enemyCounter;
    private Vector3 targetPosition; // 目标点位置
    public float moveSpeed; // 移动速度
    public int maxHealth = 100;
    public Slider healthSlider;
    private int currentHealth;

    // Use this for initialization
    void Start()
    {
        //初始时，怪物计数为0；
        enemyCounter = 0;
        //targetPosition = new Vector3(-1.46f, -0.126f, -1.02f);
        targetPosition = new Vector3(0f, -0.3f,0f);
        //targetPosition = new Vector3(mainCameraTransform.position.x,-0.126f, mainCameraTransform.position.z);
        //重复生成怪物
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
    //方法，生成怪物
    private void CreatEnemy()
    {
        /* //创建随机点
         Vector3 suiji = this.transform.position;
         //suiji.x = this.transform.position.x + Random.Range(0.0f, 5.0f);
         suiji.x = Random.Range(5.0f, 10.0f);
         x^2+y^2
         //suiji.z = this.transform.position.y + Random.Range(0.0f, 5.0f);
         suiji.y = -1.0f;*/
        // 随机生成x和y坐标
        float x = Random.Range(-5.0f, 5.0f);
        float y = Random.Range(1.0f, 5.0f);
            // 生成怪物并初始化位置
            Vector3 suiji = new Vector3(x, -0.3f, y);
            Vector3 direction = targetPosition - suiji;
            Quaternion lookRotation = Quaternion.LookRotation(direction);
            GameObject newObject;
            float randomValue = Random.Range(0f, 1f);
            if (randomValue < 0.33f)
            {
                newObject = Instantiate(targetEnemy1, suiji, lookRotation);
            }
            else if (randomValue < 0.66f)
            {
                newObject = Instantiate(targetEnemy2, suiji, lookRotation);
            }
            else
            {
                newObject = Instantiate(targetEnemy3, suiji, lookRotation);
            }
            //GameObject newObject = Instantiate(targetEnemy, suiji, lookRotation);
            enemyCounter++;
            Debug.Log("生成物体的坐标：" + suiji);
        
        //如果计数达到最大值
        if (enemyCounter == enemyTotalNum)
        {
            //停止刷新
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
               if (!DecreasingMarker) // 检查是否已经在减少血量的协程中
                {
                    StartCoroutine(DecreaseHealthOverTime(enemy));
                    DecreasingMarker = true; // 标记怪物正在减少血量
                }

            }*/
        }
        
    }
    
    /*IEnumerator DecreaseHealthOverTime(GameObject enemy)
    {
        while (true)
        {
            yield return new WaitForSeconds(3.0f); // 每秒执行一次

            currentHealth -= 1; // 减少血量

            healthSlider.value = currentHealth;// 更新血条显示
        }
    }*/
    /*void damage(int speed)
    {
        currentHealth -= speed;
        healthSlider.value = currentHealth;
    }*/
}