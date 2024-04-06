using UnityEngine;
using UnityEngine.SceneManagement;

public class SenceManager : MonoBehaviour
{
    private int sceneIndexToLoad = -1; // 用于存储要加载的场景索引，初始值设为-1表示没有场景要加载
    public int sceneIndex1;
    public int sceneIndex2;
    public int sceneIndex3;
    // 用于设置要加载的场景索引
    public void LoadScene(int sceneIndex)
    {
        sceneIndexToLoad = sceneIndex;
    }

    // 用于加载已选择的场景
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
