using Rokid.UXR.Interaction;
using UnityEngine;

public class craft : MonoBehaviour
{
    
    private GameObject object1;
    private GameObject object2;
    public GameObject newObjectPrefab;
    private InteractableUnityEventWrapper unityEvent;
    private bool isDragging = false;
    bool isSelected = false;

    void Start()
    {
        unityEvent = GetComponent<InteractableUnityEventWrapper>();
        unityEvent.WhenSelect.AddListener(() =>
        {
            isSelected = true;
        });
    }

        void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hitInfo;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hitInfo))
            {
                if (object1 == null)
                {
                    object1 = hitInfo.collider.gameObject;
                }
                else if (object2 == null && hitInfo.collider.gameObject != object1)
                {
                    object2 = hitInfo.collider.gameObject;
                }
            }
        }

        if (Input.GetMouseButton(0) && object1 != null && object2 != null)
        {
            isDragging = true;
            Vector3 mousePos = Input.mousePosition;
            mousePos.z = Vector3.Distance(Camera.main.transform.position, object1.transform.position);
            object2.transform.position = Camera.main.ScreenToWorldPoint(mousePos);
        }

        if (Input.GetMouseButtonUp(0) && isDragging)
        {
            Vector3 newPosition = (object1.transform.position + object2.transform.position) / 2.0f;
            GameObject newobject=Instantiate(newObjectPrefab, newPosition, Quaternion.identity);
            Vector3 newScale = new Vector3(0.25f, 0.25f, 0.25f);
            newobject.transform.localScale = newScale;
            Destroy(object1);
            Destroy(object2);

            object1 = null;
            object2 = null;
            isDragging = false;
        }
    }
}

