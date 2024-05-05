using UnityEngine;

public class ObjectSynthesis : MonoBehaviour
{
    private GameObject object1;
    private GameObject object2;
    public GameObject newObjectPrefab;
    private bool isDragging = false;

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
            Vector3 newPosition = (object1.transform.position + object2.transform.position) / 2f;
            Instantiate(newObjectPrefab, newPosition, Quaternion.identity);

            Destroy(object1);
            Destroy(object2);

            object1 = null;
            object2 = null;
            isDragging = false;
        }
    }
}
