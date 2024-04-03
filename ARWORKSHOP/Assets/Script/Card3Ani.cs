using UnityEngine;
using UnityEngine.UI;

public class Card3Ani : MonoBehaviour
{
    public Animation card1ani; // 卡牌动画组件
    public Animation card2ani;
    public Animation card3ani;
    public Animation ruleani;
    //public Color selectedColor; // 选中时的颜色
    public float animationSpeed = 1.0f; // 动画播放速度

    private bool isSelected = false; // 标志位，表示是否已经选中

    void Start()
    {
        //animationComponent = GetComponent<Animation>();
        // 初始化，将卡牌外边框颜色设为默认颜色
        // 此处假设卡牌的外边框是由Animation组件动画控制的属性
        //GetComponent<Image>().color = Color.white; // 默认颜色
    }

    public void OnCard3Clicked()
    {
        // 当卡牌被点击时调用

        // 如果已经选中，则取消选中状态
        if (isSelected)
        {
            isSelected = false;
            // 播放取消选中的动画
            //animationComponent.Play("DeselectAnimation");
        }
        else
        {
            isSelected = true;
            // 如果有其他动画正在播放，则停止它
            if (card3ani.isPlaying)
            {
                card3ani.Stop();
            }
            // 播放选中的动画
            card3ani.Play("clickcard3");
            card2ani.Play("otherclick2");
            card1ani.Play("otherclick1");
            ruleani.Play("showcreate");
        }
    }
}
