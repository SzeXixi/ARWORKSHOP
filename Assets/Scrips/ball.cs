using UnityEngine;

public class ball : MonoBehaviour
{
    private Vector3 MousePos;
    private LineRenderer LineL;
    private LineRenderer LineR;
    private Vector3 initialPosition;
    private bool isMouseDown = false;
    private float moveSpeed = 0.1f;
    public GameObject ballPrefab; // 小球预制体
    private Vector3 spawnPosition; // 实例化位置

    void Start()
    {
        LineL = GameObject.Find("ropeL").GetComponent<LineRenderer>();
        LineR = GameObject.Find("ropeR").GetComponent<LineRenderer>();
        initialPosition = transform.position; // 记录小球初始位置
        spawnPosition = new Vector3(0.05f,-0.23f,0.77f);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.JoystickButton3))
        // if (Input.GetMouseButtonDown(0))
        {
            isMouseDown = true;
        }

        if (Input.GetKeyUp(KeyCode.JoystickButton3))
        //if (Input.GetMouseButtonUp(0))
        {
            if (isMouseDown)
            {
                // 计算释放力度
                float releaseForce = Mathf.Abs(transform.position.z - initialPosition.z) * 100f; // 释放力度与小球在 Z 轴方向的位移成正比

                // 计算小球的弹射方向
                Vector3 forceDirection = Vector3.forward; // 小球朝向 Z 轴正方向弹射

                // 施加力到小球
                //GetComponent<Rigidbody>().useGravity = true;
                GetComponent<Rigidbody>().AddForce(forceDirection * releaseForce, ForceMode.Impulse);

                // 将 isMouseDown 设置为 false，以结束移动小球的状态
                isMouseDown = false;
                LineL.SetPosition(0, new Vector3(transform.position.x, transform.position.y, 0.679f));
                LineR.SetPosition(0, new Vector3(transform.position.x, transform.position.y, 0.679f));
                // 在一秒后实例化新的小球
                
                Invoke("InstantiateNewBall", 1f);
                //Instantiate(ballPrefab, spawnPosition, Quaternion.identity);
            }
        }

        if (isMouseDown)
        {
            // 计算每帧小球向 z 方向移动的距离
            float zMovement = moveSpeed * Time.deltaTime;

            // 更新小球位置
            transform.position += new Vector3(0, 0, -zMovement);

            // 更新绳子位置
            LineL.SetPosition(0, new Vector3(transform.position.x, transform.position.y, transform.position.z - 0.1F));
            LineR.SetPosition(0, new Vector3(transform.position.x, transform.position.y, transform.position.z - 0.1F));
        }
    }
  
    void InstantiateNewBall()
    {
        // 在指定位置实例化一个新的小球
       Instantiate(ballPrefab, spawnPosition, Quaternion.identity);
       Destroy(gameObject);
    }
}
