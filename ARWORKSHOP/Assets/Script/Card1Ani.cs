using UnityEngine;
using UnityEngine.UI;

public class Card1Ani : MonoBehaviour
{
    public Animation card1ani; // ���ƶ������
    public Animation card2ani;
    public Animation card3ani;
    public Animation ruleani;
    public float animationSpeed = 1.0f; // ���������ٶ�
    public int sceneIndex1=-1;
    private bool isSelected = false; // ��־λ����ʾ�Ƿ��Ѿ�ѡ��

    void Start()
    {
        //animationComponent = GetComponent<Animation>();
        // ��ʼ������������߿���ɫ��ΪĬ����ɫ
        // �˴����迨�Ƶ���߿�����Animation����������Ƶ�����
        //GetComponent<Image>().color = Color.white; // Ĭ����ɫ
    }

    public void OnCard1Clicked()
    {
        // �����Ʊ����ʱ����
        sceneIndex1 = 1;
        // ����Ѿ�ѡ�У���ȡ��ѡ��״̬
        if (isSelected)
        {
            isSelected = false;
            // ����ȡ��ѡ�еĶ���
           
        }
        else
        {
            isSelected = true;
            // ����������������ڲ��ţ���ֹͣ��
            if (card1ani.isPlaying)
            {
                card1ani.Stop();
            }
            // ����ѡ�еĶ���
            card1ani.Play("clickcard1");
            card2ani.Play("otherclick2");
            card3ani.Play("otherclick3");
            ruleani.Play("showattack");
        }
    }
}
