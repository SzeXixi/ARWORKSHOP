using UnityEngine;
using UnityEngine.UI;

public class Card1Ani : MonoBehaviour
{
    public Animation card1ani; // 卡牌动画组件
    public Animation card2ani;
    public Animation card3ani;
    public Animation ruleani;
    public float animationSpeed = 1.0f; // 动画播放速度
    public int sceneIndex1=-1;
    private bool isSelected = false; // 标志位，表示是否已经选中

    void Start()
    {
        //animationComponent = GetComponent<Animation>();
        // 初始化，将卡牌外边框颜色设为默认颜色
        // 此处假设卡牌的外边框是由Animation组件动画控制的属性
        //GetComponent<Image>().color = Color.white; // 默认颜色
    }

    public void OnCard1Clicked()
    {
        // 当卡牌被点击时调用
        sceneIndex1 = 1;
        // 如果已经选中，则取消选中状态
        if (isSelected)
        {
            isSelected = false;
            // 播放取消选中的动画
           
        }
        else
        {
            isSelected = true;
            // 如果有其他动画正在播放，则停止它
            if (card1ani.isPlaying)
            {
                card1ani.Stop();
            }
            // 播放选中的动画
            card1ani.Play("clickcard1");
            card2ani.Play("otherclick2");
            card3ani.Play("otherclick3");
            ruleani.Play("showattack");
        }
    }
}
