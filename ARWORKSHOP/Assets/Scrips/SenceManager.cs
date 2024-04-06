using UnityEngine;
using UnityEngine.SceneManagement;

public class SenceManager : MonoBehaviour
{
    private int sceneIndexToLoad = -1; // ���ڴ洢Ҫ���صĳ�����������ʼֵ��Ϊ-1��ʾû�г���Ҫ����
    public int sceneIndex1;
    public int sceneIndex2;
    public int sceneIndex3;
    // ��������Ҫ���صĳ�������
    public void LoadScene(int sceneIndex)
    {
        sceneIndexToLoad = sceneIndex;
    }

    // ���ڼ�����ѡ��ĳ���
    public void StartGame()
    {
        if (sceneIndex1 != -1)
        {
            sceneIndexToLoad = sceneIndex1;
        }
        else if (sceneIndex2 != -1)
        {
            sceneIndexToLoad = sceneIndex2;
        }
        else if (sceneIndex3 != -1)
        {
            sceneIndexToLoad = sceneIndex3;
        }

        if (sceneIndexToLoad != -1)
        {
            SceneManager.LoadScene(sceneIndexToLoad);
        }
        else
        {
            Debug.LogWarning("No scene selected to load.");
        }
    }
}
