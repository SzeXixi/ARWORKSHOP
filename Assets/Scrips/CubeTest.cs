using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Rokid.UXR.Interaction;
using UnityEngine.UI;

public class CubeTest : MonoBehaviour
{
    public int maxHealth = 100;
    private int currentHealth;
    public Slider healthSlider;
    public GameObject Enemy;
    private MeshRenderer meshRenderer;
    private InteractableUnityEventWrapper unityEvent;
    void Start()
    {
        currentHealth = maxHealth;
        healthSlider.maxValue = maxHealth;
        healthSlider.value = currentHealth;
        meshRenderer = GetComponent<MeshRenderer>();
        unityEvent = GetComponent<InteractableUnityEventWrapper>();

        unityEvent.WhenSelect.AddListener(() =>
        {
            //Pointer Down
            //meshRenderer.material.SetColor("_Color", Color.red);
            TakeDamage(10);
        });

        unityEvent.WhenUnselect.AddListener(() =>
        {
            //Pointer Up
            meshRenderer.material.SetColor("_Color", Color.white);
        });
    }

    // Update is called once per frame
    void Update()
    {
        if (currentHealth <= 0)
        {
            Destroy(Enemy); // 怪物生命值小于等于0时销毁怪物对象
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
}
