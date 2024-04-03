using UnityEngine;
using UnityEngine.UI;

public class Card3Ani : MonoBehaviour
{
    public Animation card1ani; // ���ƶ������
    public Animation card2ani;
    public Animation card3ani;
    public Animation ruleani;
    //public Color selectedColor; // ѡ��ʱ����ɫ
    public float animationSpeed = 1.0f; // ���������ٶ�

    private bool isSelected = false; // ��־λ����ʾ�Ƿ��Ѿ�ѡ��

    void Start()
    {
        //animationComponent = GetComponent<Animation>();
        // ��ʼ������������߿���ɫ��ΪĬ����ɫ
        // �˴����迨�Ƶ���߿�����Animation����������Ƶ�����
        //GetComponent<Image>().color = Color.white; // Ĭ����ɫ
    }

    public void OnCard3Clicked()
    {
        // �����Ʊ����ʱ����

        // ����Ѿ�ѡ�У���ȡ��ѡ��״̬
        if (isSelected)
        {
            isSelected = false;
            // ����ȡ��ѡ�еĶ���
            //animationComponent.Play("DeselectAnimation");
        }
        else
        {
            isSelected = true;
            // ����������������ڲ��ţ���ֹͣ��
            if (card3ani.isPlaying)
            {
                card3ani.Stop();
            }
            // ����ѡ�еĶ���
            card3ani.Play("clickcard3");
            card2ani.Play("otherclick2");
            card1ani.Play("otherclick1");
            ruleani.Play("showcreate");
        }
    }
}
