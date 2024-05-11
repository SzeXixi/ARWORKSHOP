using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Instance : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    // Start is called before the first frame update
    public GameObject[] yuzi;
    public Vector3 wezi =new Vector3(549f, 290f, 3f);
    public Vector3 instantiatedObject;
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void OnPointerDown(PointerEventData eventData)
    {
        //°´ÏÂ
        GetComponent<Image>().color = Color.red;
        Instantiate(yuzi[0], wezi, Quaternion.Euler(0, 0, 180));
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        //Ì§Æð
        GetComponent<Image>().color = Color.white;
    }
}