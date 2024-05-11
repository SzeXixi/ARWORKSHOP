using Rokid.UXR.Interaction;
using UnityEngine;
using UnityEngine.UI;

public class attack : MonoBehaviour
{
    public int maxHealth = 100;
    private int currentHealth;
    public Slider healthSlider;
    public GameObject dropPrefab; // 掉落物的预制体
    private InteractableUnityEventWrapper unityEvent;
    private MeshRenderer meshRenderer;

    void Start()
    {
        currentHealth = maxHealth;
        healthSlider.maxValue = maxHealth;
        healthSlider.value = currentHealth;

        unityEvent = GetComponent<InteractableUnityEventWrapper>();
        meshRenderer = GetComponent<MeshRenderer>();

        unityEvent.WhenSelect.AddListener(() =>
        {
            // 鼠标点击时怪物受到伤害
            TakeDamage(10);
        });
    }

    void Update()
    {
        if (currentHealth <= 0)
        {
            DestroyEnemy(); // 怪物生命值小于等于0时销毁怪物对象并生成掉落物
        }
    }

    void TakeDamage(int damage)
    {
        currentHealth -= damage; // 怪物扣血
        healthSlider.value = currentHealth; // 更新血条显示

        if (currentHealth <= 0)
        {
            unityEvent.enabled = false; // 当怪物死亡时禁用交互事件
        }
    }
    void DestroyEnemy()
    {
        // 生成掉落物
        if (dropPrefab != null)
        {
            Vector3 dropPosition = transform.position; // 获取怪物当前位置
            Instantiate(dropPrefab, dropPosition, Quaternion.identity);
        }

        Destroy(gameObject); // 销毁怪物对象
    }
}
