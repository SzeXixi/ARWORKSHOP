#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,Rokid.UXR.Interaction.BezierPointerData>
struct Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Rokid.UXR.Interaction.BezierPointerData>
struct KeyCollection_tDDC83C1CA75A6DA08687D38484B9313ED758C283;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GameObject>
struct KeyCollection_tC7244BD40ED4C8BF23C8756BFE90844B71753D66;
// System.Collections.Generic.List`1<Rokid.UXR.Config.DeviceInfo>
struct List_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Rokid.UXR.Interaction.BezierPointerData>
struct ValueCollection_t7071C9EE93E596EDDC891776DDF56ACDB02530C0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GameObject>
struct ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Rokid.UXR.Interaction.BezierPointerData>[]
struct EntryU5BU5D_t4BA3D8954F676E48A7EC4A0C3DEE67848A94E47C;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.GameObject>[]
struct EntryU5BU5D_t50812F6AE576839B5F5182BB3CFA6BA7464E8110;
// Rokid.UXR.Config.DeviceInfo[]
struct DeviceInfoU5BU5D_tD0F7159B98A545E422A844B1471C78811777B885;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Rokid.UXR.Components.Axis
struct Axis_tF6C86F2BD6257A506E6D31FB8EBDDEABDA887FED;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// Rokid.UXR.Components.BezierDragUI
struct BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749;
// Rokid.UXR.Interaction.BezierPointerData
struct BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Rokid.UXR.Config.DeviceInfo
struct DeviceInfo_t3A54DDD1F618ABC3C75DF4CC61C2F89CC59A26BA;
// Rokid.UXR.Config.DeviceInfos
struct DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE;
// Rokid.UXR.Components.DragUI
struct DragUI_t7CF9D5B0AD70099320A9FE807CFFF00E86595FDA;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Rokid.UXR.SubModule.MRCLoader
struct MRCLoader_tAB2E0B4B21B54CA91620486138F29F01C704F07A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Rokid.UXR.Module.RKCameraRig
struct RKCameraRig_tFDFE199C3120BE16EC5193D66B85F496D15A9B0A;
// Rokid.UXR.Module.RKGlobalFpsModule
struct RKGlobalFpsModule_t33E18B4B31ACBB4CF3465736A399BA331DB7A7FC;
// Rokid.UXR.Module.RKTracePoseListener
struct RKTracePoseListener_t49EE5A6126428D66FACDFAFDF0ADA75CA01F4B0D;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Rokid.UXR.Components.Ruler
struct Ruler_tBEDC82B836F8FD9B828EAC20530B053204C93839;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Rokid.UXR.Config.UXRSDK
struct UXRSDK_t44046475A02BB6C5258B36EB56276F3E473D0DF0;
// Rokid.UXR.Config.UXRSDKConfig
struct UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t165B3C424FF942881B4626079236566D26260891____C43168E52D630D78C7F5327E1AD50ED4FC6D77DD5CC59ABA4402514F29FAF127_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380;
IL2CPP_EXTERN_C String_t* _stringLiteral33D9BF91B85ABFF37913A45FC61783B08E415CC1;
IL2CPP_EXTERN_C String_t* _stringLiteral3A15820B4A2F3C6EA9F759B6ED066328D4FCF0A4;
IL2CPP_EXTERN_C String_t* _stringLiteral49EAC01F1FE1AB3E022D37BA90128673D8F2C359;
IL2CPP_EXTERN_C String_t* _stringLiteral6948D8620BA24C0EBB68FA43BE9FBD278BB4C9E2;
IL2CPP_EXTERN_C String_t* _stringLiteral9E3F46B637689859A35E00AC2BDDD188ADEA5B17;
IL2CPP_EXTERN_C String_t* _stringLiteralA40BB6EBE8D066D047F233A9FE3060BEB6715EE1;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralC5CB235FDF341E57B3A3E3D289810AD3382B4E8B;
IL2CPP_EXTERN_C String_t* _stringLiteralCAA2F44DE32C68853E4DA7500BA616A2A3B45D89;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA8D2B6C0C16B7F0E685608364CA195BD8C168D3;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2301489EC3FE75993E4E125002C228CE1AE41283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m8A91F6A91021AF16D88A34841C0BAC8536BA5F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5BC606BFF3BE91D90D9AB981592DABC71321A205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC81A9883B0746580E094650BBEFD4299592A9795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m083549762D5F7C4190DAC5437B16A38A2E0F5039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD4CF08C235FFD2D4652E3BC011EADC9B99888F7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m19212131A523FF131030B9EC5FBF9F5BDA9DA449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m969801C34686FA6776C36952BF6D63FA0C8C0D3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMRCLoader_tAB2E0B4B21B54CA91620486138F29F01C704F07A_mA97BAE07E589BF1A58B8A957E14C030C66CEB45D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisList_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9_m01557409C579B16AC7ADA1B2C9892D2404672868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingleton_1_get_Instance_m9ACC992F2C76CC1F3ED09D62A252D927CF9CD8C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingleton_1_get_Instance_mB663B4F0665CD33790233BFCE8E5B614DF12A369_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisUXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_m53CAF0D6EF73B8610E784A910167782965453FA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m196C6C32A4E0756C1BB362037B5D8FA37773F434_RuntimeMethod_var;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Rokid.UXR.Interaction.BezierPointerData>
struct Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4BA3D8954F676E48A7EC4A0C3DEE67848A94E47C* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tDDC83C1CA75A6DA08687D38484B9313ED758C283* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7071C9EE93E596EDDC891776DDF56ACDB02530C0* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t50812F6AE576839B5F5182BB3CFA6BA7464E8110* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC7244BD40ED4C8BF23C8756BFE90844B71753D66* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Rokid.UXR.Config.DeviceInfo>
struct List_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DeviceInfoU5BU5D_tD0F7159B98A545E422A844B1471C78811777B885* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GameObject>
struct ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ____dictionary_0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// Rokid.UXR.Config.DeviceInfo
struct DeviceInfo_t3A54DDD1F618ABC3C75DF4CC61C2F89CC59A26BA  : public RuntimeObject
{
	// System.Int32 Rokid.UXR.Config.DeviceInfo::DeviceId
	int32_t ___DeviceId_0;
	// System.String Rokid.UXR.Config.DeviceInfo::DeviceName
	String_t* ___DeviceName_1;
	// System.Int32 Rokid.UXR.Config.DeviceInfo::PID
	int32_t ___PID_2;
	// System.Single Rokid.UXR.Config.DeviceInfo::CameraFov
	float ___CameraFov_3;
	// System.Int32 Rokid.UXR.Config.DeviceInfo::HaveCamera
	int32_t ___HaveCamera_4;
};

// Rokid.UXR.Config.DeviceInfos
struct DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE  : public RuntimeObject
{
};

// Rokid.UXR.RKLog
struct RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Rokid.UXR.Config.UXRSDK
struct UXRSDK_t44046475A02BB6C5258B36EB56276F3E473D0DF0  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.GameObject>
struct Enumerator_t1B1B97EE01684232088412E9E1ED06F6CC623536 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct __StaticArrayInitTypeSizeU3D192_t4A396B760941CBE8613CE8A5E02EC8056199B12D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_t4A396B760941CBE8613CE8A5E02EC8056199B12D__padding[192];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t165B3C424FF942881B4626079236566D26260891  : public RuntimeObject
{
};

// Rokid.UXR.Interaction.BezierPointerData
struct BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526  : public RuntimeObject
{
	// System.Int32 Rokid.UXR.Interaction.BezierPointerData::pointerId
	int32_t ___pointerId_0;
	// UnityEngine.Vector3 Rokid.UXR.Interaction.BezierPointerData::hitLocalPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hitLocalPos_1;
	// UnityEngine.Vector3 Rokid.UXR.Interaction.BezierPointerData::hitLocalNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hitLocalNormal_2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Rokid.UXR.Config.UXRSDKConfig
struct UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Rokid.UXR.Config.UXRSDKConfig::URPActive
	bool ___URPActive_5;
	// System.Boolean Rokid.UXR.Config.UXRSDKConfig::LogActive
	bool ___LogActive_6;
	// System.Boolean Rokid.UXR.Config.UXRSDKConfig::MRCActive
	bool ___MRCActive_7;
	// UnityEngine.LayerMask Rokid.UXR.Config.UXRSDKConfig::MRCCameraRenderLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___MRCCameraRenderLayer_8;
	// UnityEngine.RenderingPath Rokid.UXR.Config.UXRSDKConfig::MRCCameraRenderingPath
	int32_t ___MRCCameraRenderingPath_9;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// Rokid.UXR.MonoSingleton`1<Rokid.UXR.Module.RKGlobalFpsModule>
struct MonoSingleton_1_t560CE29C2FE4113F54A15A3E049E3C013319A054  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Rokid.UXR.MonoSingleton`1<Rokid.UXR.Module.RKTracePoseListener>
struct MonoSingleton_1_tF145DA227223AC1ACCB76B8CA85195404F82A93B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Rokid.UXR.Components.Axis
struct Axis_tF6C86F2BD6257A506E6D31FB8EBDDEABDA887FED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Rokid.UXR.Components.Axis::arrowBottomSize
	float ___arrowBottomSize_4;
	// System.Single Rokid.UXR.Components.Axis::arrowHeight
	float ___arrowHeight_5;
	// System.Single Rokid.UXR.Components.Axis::xLength
	float ___xLength_6;
	// System.Single Rokid.UXR.Components.Axis::yLength
	float ___yLength_7;
	// System.Single Rokid.UXR.Components.Axis::zLength
	float ___zLength_8;
	// System.Single Rokid.UXR.Components.Axis::lineTickness
	float ___lineTickness_9;
	// System.Single Rokid.UXR.Components.Axis::centerSize
	float ___centerSize_10;
};

// Rokid.UXR.Components.BezierDragUI
struct BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform Rokid.UXR.Components.BezierDragUI::canvas
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___canvas_4;
	// UnityEngine.RectTransform Rokid.UXR.Components.BezierDragUI::imgRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___imgRect_5;
	// UnityEngine.Vector2 Rokid.UXR.Components.BezierDragUI::offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset_6;
	// System.Boolean Rokid.UXR.Components.BezierDragUI::IsDraging
	bool ___IsDraging_7;
	// System.Boolean Rokid.UXR.Components.BezierDragUI::UseBezierCurve
	bool ___UseBezierCurve_8;
	// System.Single Rokid.UXR.Components.BezierDragUI::moveLerpTime
	float ___moveLerpTime_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,Rokid.UXR.Interaction.BezierPointerData> Rokid.UXR.Components.BezierDragUI::bezierPointerDatas
	Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C* ___bezierPointerDatas_10;
	// UnityEngine.Vector2 Rokid.UXR.Components.BezierDragUI::anchoredPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___anchoredPos_11;
};

// Rokid.UXR.Components.DragUI
struct DragUI_t7CF9D5B0AD70099320A9FE807CFFF00E86595FDA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform Rokid.UXR.Components.DragUI::canvas
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___canvas_4;
	// UnityEngine.Transform Rokid.UXR.Components.DragUI::frontParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___frontParent_5;
	// UnityEngine.RectTransform Rokid.UXR.Components.DragUI::imgRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___imgRect_6;
	// UnityEngine.CanvasGroup Rokid.UXR.Components.DragUI::canvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___canvasGroup_7;
	// UnityEngine.Transform Rokid.UXR.Components.DragUI::oldParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___oldParent_8;
	// UnityEngine.Transform Rokid.UXR.Components.DragUI::nowParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___nowParent_9;
	// System.Int32 Rokid.UXR.Components.DragUI::sibiling
	int32_t ___sibiling_10;
	// UnityEngine.Vector2 Rokid.UXR.Components.DragUI::offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset_11;
};

// Rokid.UXR.SubModule.MRCLoader
struct MRCLoader_tAB2E0B4B21B54CA91620486138F29F01C704F07A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Rokid.UXR.SubModule.MRCLoader::isMRCInited
	bool ___isMRCInited_5;
};

// Rokid.UXR.Components.Ruler
struct Ruler_tBEDC82B836F8FD9B828EAC20530B053204C93839  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> Rokid.UXR.Components.Ruler::dialDict
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ___dialDict_4;
	// System.Int32 Rokid.UXR.Components.Ruler::length
	int32_t ___length_5;
	// UnityEngine.GameObject Rokid.UXR.Components.Ruler::tempDial
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tempDial_6;
	// UnityEngine.Transform Rokid.UXR.Components.Ruler::ruler
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ruler_7;
	// System.Single Rokid.UXR.Components.Ruler::oldLength
	float ___oldLength_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// Rokid.UXR.Module.RKGlobalFpsModule
struct RKGlobalFpsModule_t33E18B4B31ACBB4CF3465736A399BA331DB7A7FC  : public MonoSingleton_1_t560CE29C2FE4113F54A15A3E049E3C013319A054
{
	// UnityEngine.GameObject Rokid.UXR.Module.RKGlobalFpsModule::fpsCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fpsCanvas_10;
	// System.Boolean Rokid.UXR.Module.RKGlobalFpsModule::isActived
	bool ___isActived_11;
};

// Rokid.UXR.Module.RKTracePoseListener
struct RKTracePoseListener_t49EE5A6126428D66FACDFAFDF0ADA75CA01F4B0D  : public MonoSingleton_1_tF145DA227223AC1ACCB76B8CA85195404F82A93B
{
	// UnityEngine.SpatialTracking.TrackedPoseDriver Rokid.UXR.Module.RKTracePoseListener::mCurrentTrackedPoseDriver
	TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* ___mCurrentTrackedPoseDriver_5;
	// Rokid.UXR.Module.RKCameraRig Rokid.UXR.Module.RKTracePoseListener::mCameraRig
	RKCameraRig_tFDFE199C3120BE16EC5193D66B85F496D15A9B0A* ___mCameraRig_6;
	// System.Boolean Rokid.UXR.Module.RKTracePoseListener::IsSceneChanged
	bool ___IsSceneChanged_7;
	// Rokid.UXR.Module.RKCameraRig/HeadTrackingType Rokid.UXR.Module.RKTracePoseListener::m_HeadTrackingType
	int32_t ___m_HeadTrackingType_8;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Rokid.UXR.Interaction.BezierPointerData>

// System.Collections.Generic.Dictionary`2<System.Int32,Rokid.UXR.Interaction.BezierPointerData>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.List`1<Rokid.UXR.Config.DeviceInfo>
struct List_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DeviceInfoU5BU5D_tD0F7159B98A545E422A844B1471C78811777B885* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Rokid.UXR.Config.DeviceInfo>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GameObject>

// Rokid.UXR.Config.DeviceInfo

// Rokid.UXR.Config.DeviceInfo

// Rokid.UXR.Config.DeviceInfos
struct DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE_StaticFields
{
	// System.Collections.Generic.List`1<Rokid.UXR.Config.DeviceInfo> Rokid.UXR.Config.DeviceInfos::info
	List_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9* ___info_0;
};

// Rokid.UXR.Config.DeviceInfos

// Rokid.UXR.RKLog
struct RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_StaticFields
{
	// Rokid.UXR.RKLog/LogLevel Rokid.UXR.RKLog::logLevel
	int32_t ___logLevel_0;
	// System.Boolean Rokid.UXR.RKLog::logEnable
	bool ___logEnable_1;
};

// Rokid.UXR.RKLog

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Rokid.UXR.Config.UXRSDK

// Rokid.UXR.Config.UXRSDK

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t165B3C424FF942881B4626079236566D26260891_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::C43168E52D630D78C7F5327E1AD50ED4FC6D77DD5CC59ABA4402514F29FAF127
	__StaticArrayInitTypeSizeU3D192_t4A396B760941CBE8613CE8A5E02EC8056199B12D ___C43168E52D630D78C7F5327E1AD50ED4FC6D77DD5CC59ABA4402514F29FAF127_0;
};

// <PrivateImplementationDetails>

// Rokid.UXR.Interaction.BezierPointerData

// Rokid.UXR.Interaction.BezierPointerData

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.TextAsset

// UnityEngine.TextAsset

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// UnityEngine.Transform

// UnityEngine.Transform

// Rokid.UXR.Config.UXRSDKConfig
struct UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_StaticFields
{
	// Rokid.UXR.Config.UXRSDKConfig Rokid.UXR.Config.UXRSDKConfig::_instance
	UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0* ____instance_4;
};

// Rokid.UXR.Config.UXRSDKConfig

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// Rokid.UXR.Components.Axis

// Rokid.UXR.Components.Axis

// Rokid.UXR.Components.BezierDragUI

// Rokid.UXR.Components.BezierDragUI

// Rokid.UXR.Components.DragUI

// Rokid.UXR.Components.DragUI

// Rokid.UXR.SubModule.MRCLoader
struct MRCLoader_tAB2E0B4B21B54CA91620486138F29F01C704F07A_StaticFields
{
	// System.Boolean Rokid.UXR.SubModule.MRCLoader::isMRCDriverCreated
	bool ___isMRCDriverCreated_4;
};

// Rokid.UXR.SubModule.MRCLoader

// Rokid.UXR.Components.Ruler

// Rokid.UXR.Components.Ruler

// Rokid.UXR.Module.RKGlobalFpsModule
struct RKGlobalFpsModule_t33E18B4B31ACBB4CF3465736A399BA331DB7A7FC_StaticFields
{
	// System.Int32 Rokid.UXR.Module.RKGlobalFpsModule::currentFuncConfig
	int32_t ___currentFuncConfig_9;
};

// Rokid.UXR.Module.RKGlobalFpsModule

// Rokid.UXR.Module.RKTracePoseListener

// Rokid.UXR.Module.RKTracePoseListener

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared (String_t* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T Rokid.UXR.MonoSingleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonoSingleton_1_get_Instance_mFE13D85EC348477AD8766B57CB110DE050A792D1_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// T UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Collections.Generic.List`1<Rokid.UXR.Config.DeviceInfo>>(System.String)
inline List_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9* JsonConvert_DeserializeObject_TisList_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9_m01557409C579B16AC7ADA1B2C9892D2404672868 (String_t* ___0_value, const RuntimeMethod* method)
{
	return ((  List_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___0_value, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Config.UXRSDK::InitModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDK_InitModule_mAFC54F221BFAC02A09D59E01DB5CDC6C387A8F22 (const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Config.UXRSDK::InitSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDK_InitSetting_m1BEB3DDCD2954677AEA4ED7E9D241B324AA9025A (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___0_value, const RuntimeMethod* method) ;
// Rokid.UXR.Config.UXRSDKConfig Rokid.UXR.Config.UXRSDKConfig::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0* UXRSDKConfig_get_Instance_mE5763DC96700468A54B425A985BDF09DF21B2EFD (const RuntimeMethod* method) ;
// System.Void Rokid.UXR.RKLog::SetLogEnable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RKLog_SetLogEnable_m1C6568BE98439FBB1B62592CF8B26290AD5E7444_inline (bool ___0_logEnable, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Config.UXRSDK::InitGlobalFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDK_InitGlobalFPS_m89E1F8AED33C900A96A90C30B618B14DB78C5119 (const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Config.UXRSDK::InitTracePoseListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDK_InitTracePoseListener_mD502D063362698B473DA05EE3D11C08F8219403B (const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Config.UXRSDK::InitMRC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDK_InitMRC_mB6F437A2D994B336BE55FEDA50CA4B806D03F8CE (const RuntimeMethod* method) ;
// UnityEngine.Camera Rokid.UXR.Utility.MainCameraCache::get_mainCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* MainCameraCache_get_mainCamera_m17AACA4AA2AB5B55248813F061E86073DC2B590A (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Rokid.UXR.SubModule.MRCLoader>()
inline MRCLoader_tAB2E0B4B21B54CA91620486138F29F01C704F07A* GameObject_AddComponent_TisMRCLoader_tAB2E0B4B21B54CA91620486138F29F01C704F07A_mA97BAE07E589BF1A58B8A957E14C030C66CEB45D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MRCLoader_tAB2E0B4B21B54CA91620486138F29F01C704F07A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T Rokid.UXR.MonoSingleton`1<Rokid.UXR.Module.RKGlobalFpsModule>::get_Instance()
inline RKGlobalFpsModule_t33E18B4B31ACBB4CF3465736A399BA331DB7A7FC* MonoSingleton_1_get_Instance_m9ACC992F2C76CC1F3ED09D62A252D927CF9CD8C5 (const RuntimeMethod* method)
{
	return ((  RKGlobalFpsModule_t33E18B4B31ACBB4CF3465736A399BA331DB7A7FC* (*) (const RuntimeMethod*))MonoSingleton_1_get_Instance_mFE13D85EC348477AD8766B57CB110DE050A792D1_gshared)(method);
}
// System.Boolean Rokid.UXR.Module.RKGlobalFpsModule::IsEnableAPM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RKGlobalFpsModule_IsEnableAPM_mF04A3D852F6C8D2F2106183D18B83101EB89B6A8 (RKGlobalFpsModule_t33E18B4B31ACBB4CF3465736A399BA331DB7A7FC* __this, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Module.RKGlobalFpsModule::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RKGlobalFpsModule_SetActive_m205A119834B2F82886F9EA214814C51D33ABC5D2 (RKGlobalFpsModule_t33E18B4B31ACBB4CF3465736A399BA331DB7A7FC* __this, bool ___0_active, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Module.RKGlobalFpsModule::DestroyInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RKGlobalFpsModule_DestroyInstance_m5B1981F6D2030C59F78BCF342E2102B878C6CF50 (RKGlobalFpsModule_t33E18B4B31ACBB4CF3465736A399BA331DB7A7FC* __this, const RuntimeMethod* method) ;
// T Rokid.UXR.MonoSingleton`1<Rokid.UXR.Module.RKTracePoseListener>::get_Instance()
inline RKTracePoseListener_t49EE5A6126428D66FACDFAFDF0ADA75CA01F4B0D* MonoSingleton_1_get_Instance_mB663B4F0665CD33790233BFCE8E5B614DF12A369 (const RuntimeMethod* method)
{
	return ((  RKTracePoseListener_t49EE5A6126428D66FACDFAFDF0ADA75CA01F4B0D* (*) (const RuntimeMethod*))MonoSingleton_1_get_Instance_mFE13D85EC348477AD8766B57CB110DE050A792D1_gshared)(method);
}
// System.Void Rokid.UXR.Module.RKTracePoseListener::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RKTracePoseListener_Initialize_m0092B7E71A4F9F989A8ED8CF7BEA242E4D1EA7AE (RKTracePoseListener_t49EE5A6126428D66FACDFAFDF0ADA75CA01F4B0D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<Rokid.UXR.Config.UXRSDKConfig>(System.String)
inline UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0* Resources_Load_TisUXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_m53CAF0D6EF73B8610E784A910167782965453FA0 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.RKLog::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RKLog_Error_mFCFCAE3B55881D774E1C1797331ADAE2A5B8BFCC (String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Config.UXRSDKConfig::LoadInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDKConfig_LoadInstance_m7E6F4EA080FDFC39C9171832960CA211AB9F5A76 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Mesh Rokid.UXR.Components.Axis::DrawArrow(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Axis_DrawArrow_mBDD447F5B7D04AC09ADED85D5F46FFC329DD9852 (Axis_tF6C86F2BD6257A506E6D31FB8EBDDEABDA887FED* __this, float ___0_arrowHeight, float ___1_arrowBottom, float ___2_height, float ___3_width, float ___4_length, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Components.Axis::UpdateArrowTsf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axis_UpdateArrowTsf_m5529C36524EF3104A2A0C38C3CC349D80FBE92CA (Axis_tF6C86F2BD6257A506E6D31FB8EBDDEABDA887FED* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetIndices(System.Int32[],UnityEngine.MeshTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_indices, int32_t ___1_topology, int32_t ___2_submesh, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_enterEventCamera_m2EBF9CB2E5C1B169F6B6BB066C9CF5B99A7476CF (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___2_cam, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_localPoint, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Components.BezierDragUI::AddBezierPointerData(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierDragUI_AddBezierPointerData_m2A28919A2964076DC9F314AA2BD63C824828D6EF (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.RKLog::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RKLog_Info_m4FAADBEEFD6EF57BBB4FAB562FB35F0F68F596A2 (String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Components.BezierDragUI::RemoveBezierPointerData(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierDragUI_RemoveBezierPointerData_m9DDAA48B0A5143E864539DD61945395D9907E1E8 (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Interaction.BezierPointerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierPointerData__ctor_m3D4F6B676097C708D4DEF81075FB2524742311FA (BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Rokid.UXR.Interaction.BezierPointerData>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2301489EC3FE75993E4E125002C228CE1AE41283 (Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C* __this, int32_t ___0_key, BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C*, int32_t, BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Rokid.UXR.Interaction.BezierPointerData>::Remove(TKey)
inline bool Dictionary_2_Remove_m8A91F6A91021AF16D88A34841C0BAC8536BA5F51 (Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Rokid.UXR.Interaction.BezierPointerData>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m5BC606BFF3BE91D90D9AB981592DABC71321A205 (Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C* __this, int32_t ___0_key, BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C*, int32_t, BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.RKLog::KeyInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RKLog_KeyInfo_m73E1DC39E5CDB54CCF0665FA9518DB2867ED7AC3 (String_t* ___0_msg, const RuntimeMethod* method) ;
// Rokid.UXR.Interaction.BezierPointerData Rokid.UXR.Components.BezierDragUI::GetBezierPointerData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* BezierDragUI_GetBezierPointerData_mBD3E678CE14D99069C6706DF4433DCF393887210 (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, int32_t ___0_pointerId, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Rokid.UXR.Interaction.BezierPointerData>::.ctor()
inline void Dictionary_2__ctor_mC81A9883B0746580E094650BBEFD4299592A9795 (Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void Rokid.UXR.Components.Ruler::ShowDial(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ruler_ShowDial_mD309BFD8DB4910014B6C6CE0B0C16E8D92A8587A (Ruler_tBEDC82B836F8FD9B828EAC20530B053204C93839* __this, int32_t ___0_length, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::get_Values()
inline ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9* Dictionary_2_get_Values_m083549762D5F7C4190DAC5437B16A38A2E0F5039 (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9* (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, const RuntimeMethod*))Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t1B1B97EE01684232088412E9E1ED06F6CC623536 ValueCollection_GetEnumerator_m196C6C32A4E0756C1BB362037B5D8FA37773F434 (ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1B1B97EE01684232088412E9E1ED06F6CC623536 (*) (ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9*, const RuntimeMethod*))ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_mD4CF08C235FFD2D4652E3BC011EADC9B99888F7B (Enumerator_t1B1B97EE01684232088412E9E1ED06F6CC623536* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1B1B97EE01684232088412E9E1ED06F6CC623536*, const RuntimeMethod*))Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m969801C34686FA6776C36952BF6D63FA0C8C0D3E_inline (Enumerator_t1B1B97EE01684232088412E9E1ED06F6CC623536* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t1B1B97EE01684232088412E9E1ED06F6CC623536*, const RuntimeMethod*))Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m19212131A523FF131030B9EC5FBF9F5BDA9DA449 (Enumerator_t1B1B97EE01684232088412E9E1ED06F6CC623536* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1B1B97EE01684232088412E9E1ED06F6CC623536*, const RuntimeMethod*))Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::get_Item(TKey)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___0_key, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, int32_t ___0_key, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, int32_t ___0_key, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858 (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<Rokid.UXR.Config.DeviceInfo> Rokid.UXR.Config.DeviceInfos::GetInfos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9* DeviceInfos_GetInfos_m59076D490E16386A0324832E53E725227A23D0BC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisList_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9_m01557409C579B16AC7ADA1B2C9892D2404672868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6948D8620BA24C0EBB68FA43BE9FBD278BB4C9E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (info == null)
		List_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9* L_0 = ((DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE_il2cpp_TypeInfo_var))->___info_0;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// info = Newtonsoft.Json.JsonConvert.DeserializeObject<List<DeviceInfo>>(Resources.Load<TextAsset>("Configs/DeviceInfo").ToString());
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_1;
		L_1 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral6948D8620BA24C0EBB68FA43BE9FBD278BB4C9E2, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		List_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9* L_3;
		L_3 = JsonConvert_DeserializeObject_TisList_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9_m01557409C579B16AC7ADA1B2C9892D2404672868(L_2, JsonConvert_DeserializeObject_TisList_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9_m01557409C579B16AC7ADA1B2C9892D2404672868_RuntimeMethod_var);
		((DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE_il2cpp_TypeInfo_var))->___info_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE_il2cpp_TypeInfo_var))->___info_0), (void*)L_3);
	}

IL_0020:
	{
		// return info;
		List_1_t0F96F09D50355E60F2DD5C43AFC63340C1BC4BE9* L_4 = ((DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE_il2cpp_TypeInfo_var))->___info_0;
		return L_4;
	}
}
// System.Void Rokid.UXR.Config.DeviceInfos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceInfos__ctor_m57245DD862125BDE78CC020531C05A23AE88136E (DeviceInfos_t24DD07E8FC1855EC94B484B3580362B294A302AE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rokid.UXR.Config.DeviceInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceInfo__ctor_mA0620A80E09991F02BDF317578FC73F1E3F9300A (DeviceInfo_t3A54DDD1F618ABC3C75DF4CC61C2F89CC59A26BA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rokid.UXR.Config.UXRSDK::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDK_Load_m14D2F51FA040FF90146A5074EB27874B1BA61195 (const RuntimeMethod* method) 
{
	{
		// InitModule();
		UXRSDK_InitModule_mAFC54F221BFAC02A09D59E01DB5CDC6C387A8F22(NULL);
		// InitSetting();
		UXRSDK_InitSetting_m1BEB3DDCD2954677AEA4ED7E9D241B324AA9025A(NULL);
		// }
		return;
	}
}
// System.Void Rokid.UXR.Config.UXRSDK::InitSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDK_InitSetting_m1BEB3DDCD2954677AEA4ED7E9D241B324AA9025A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// RKLog.SetLogEnable(UXRSDKConfig.Instance.LogActive);
		UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0* L_0;
		L_0 = UXRSDKConfig_get_Instance_mE5763DC96700468A54B425A985BDF09DF21B2EFD(NULL);
		NullCheck(L_0);
		bool L_1 = L_0->___LogActive_6;
		il2cpp_codegen_runtime_class_init_inline(RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		RKLog_SetLogEnable_m1C6568BE98439FBB1B62592CF8B26290AD5E7444_inline(L_1, NULL);
		// }
		return;
	}
}
// System.Void Rokid.UXR.Config.UXRSDK::InitModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDK_InitModule_mAFC54F221BFAC02A09D59E01DB5CDC6C387A8F22 (const RuntimeMethod* method) 
{
	{
		// InitGlobalFPS();
		UXRSDK_InitGlobalFPS_m89E1F8AED33C900A96A90C30B618B14DB78C5119(NULL);
		// InitTracePoseListener();
		UXRSDK_InitTracePoseListener_mD502D063362698B473DA05EE3D11C08F8219403B(NULL);
		// InitMRC();
		UXRSDK_InitMRC_mB6F437A2D994B336BE55FEDA50CA4B806D03F8CE(NULL);
		// }
		return;
	}
}
// System.Void Rokid.UXR.Config.UXRSDK::InitMRC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDK_InitMRC_mB6F437A2D994B336BE55FEDA50CA4B806D03F8CE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMRCLoader_tAB2E0B4B21B54CA91620486138F29F01C704F07A_mA97BAE07E589BF1A58B8A957E14C030C66CEB45D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UXRSDKConfig.Instance.MRCActive)
		UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0* L_0;
		L_0 = UXRSDKConfig_get_Instance_mE5763DC96700468A54B425A985BDF09DF21B2EFD(NULL);
		NullCheck(L_0);
		bool L_1 = L_0->___MRCActive_7;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// MainCameraCache.mainCamera.gameObject.AddComponent<MRCLoader>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = MainCameraCache_get_mainCamera_m17AACA4AA2AB5B55248813F061E86073DC2B590A(NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		MRCLoader_tAB2E0B4B21B54CA91620486138F29F01C704F07A* L_4;
		L_4 = GameObject_AddComponent_TisMRCLoader_tAB2E0B4B21B54CA91620486138F29F01C704F07A_mA97BAE07E589BF1A58B8A957E14C030C66CEB45D(L_3, GameObject_AddComponent_TisMRCLoader_tAB2E0B4B21B54CA91620486138F29F01C704F07A_mA97BAE07E589BF1A58B8A957E14C030C66CEB45D_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Rokid.UXR.Config.UXRSDK::InitGlobalFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDK_InitGlobalFPS_m89E1F8AED33C900A96A90C30B618B14DB78C5119 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_m9ACC992F2C76CC1F3ED09D62A252D927CF9CD8C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (RKGlobalFpsModule.Instance.IsEnableAPM())
		RKGlobalFpsModule_t33E18B4B31ACBB4CF3465736A399BA331DB7A7FC* L_0;
		L_0 = MonoSingleton_1_get_Instance_m9ACC992F2C76CC1F3ED09D62A252D927CF9CD8C5(MonoSingleton_1_get_Instance_m9ACC992F2C76CC1F3ED09D62A252D927CF9CD8C5_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = RKGlobalFpsModule_IsEnableAPM_mF04A3D852F6C8D2F2106183D18B83101EB89B6A8(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// RKGlobalFpsModule.Instance.SetActive(true);
		RKGlobalFpsModule_t33E18B4B31ACBB4CF3465736A399BA331DB7A7FC* L_2;
		L_2 = MonoSingleton_1_get_Instance_m9ACC992F2C76CC1F3ED09D62A252D927CF9CD8C5(MonoSingleton_1_get_Instance_m9ACC992F2C76CC1F3ED09D62A252D927CF9CD8C5_RuntimeMethod_var);
		NullCheck(L_2);
		RKGlobalFpsModule_SetActive_m205A119834B2F82886F9EA214814C51D33ABC5D2(L_2, (bool)1, NULL);
		return;
	}

IL_0018:
	{
		// RKGlobalFpsModule.Instance.DestroyInstance();
		RKGlobalFpsModule_t33E18B4B31ACBB4CF3465736A399BA331DB7A7FC* L_3;
		L_3 = MonoSingleton_1_get_Instance_m9ACC992F2C76CC1F3ED09D62A252D927CF9CD8C5(MonoSingleton_1_get_Instance_m9ACC992F2C76CC1F3ED09D62A252D927CF9CD8C5_RuntimeMethod_var);
		NullCheck(L_3);
		RKGlobalFpsModule_DestroyInstance_m5B1981F6D2030C59F78BCF342E2102B878C6CF50(L_3, NULL);
		// }
		return;
	}
}
// System.Void Rokid.UXR.Config.UXRSDK::InitTracePoseListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDK_InitTracePoseListener_mD502D063362698B473DA05EE3D11C08F8219403B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_mB663B4F0665CD33790233BFCE8E5B614DF12A369_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RKTracePoseListener.Instance.Initialize();
		RKTracePoseListener_t49EE5A6126428D66FACDFAFDF0ADA75CA01F4B0D* L_0;
		L_0 = MonoSingleton_1_get_Instance_mB663B4F0665CD33790233BFCE8E5B614DF12A369(MonoSingleton_1_get_Instance_mB663B4F0665CD33790233BFCE8E5B614DF12A369_RuntimeMethod_var);
		NullCheck(L_0);
		RKTracePoseListener_Initialize_m0092B7E71A4F9F989A8ED8CF7BEA242E4D1EA7AE(L_0, NULL);
		// }
		return;
	}
}
// System.Void Rokid.UXR.Config.UXRSDK::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDK__ctor_mC59556C80DD00309AEDB30C962F7CA3A8D2ACE43 (UXRSDK_t44046475A02BB6C5258B36EB56276F3E473D0DF0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rokid.UXR.Config.UXRSDKConfig::LoadInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDKConfig_LoadInstance_m7E6F4EA080FDFC39C9171832960CA211AB9F5A76 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_m53CAF0D6EF73B8610E784A910167782965453FA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA40BB6EBE8D066D047F233A9FE3060BEB6715EE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA8D2B6C0C16B7F0E685608364CA195BD8C168D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = Resources.Load<UXRSDKConfig>("UXRSDKConfig");
		UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0* L_0;
		L_0 = Resources_Load_TisUXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_m53CAF0D6EF73B8610E784A910167782965453FA0(_stringLiteralA40BB6EBE8D066D047F233A9FE3060BEB6715EE1, Resources_Load_TisUXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_m53CAF0D6EF73B8610E784A910167782965453FA0_RuntimeMethod_var);
		((UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_StaticFields*)il2cpp_codegen_static_fields_for(UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_il2cpp_TypeInfo_var))->____instance_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_StaticFields*)il2cpp_codegen_static_fields_for(UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_il2cpp_TypeInfo_var))->____instance_4), (void*)L_0);
		// if (_instance == null)
		UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0* L_1 = ((UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_StaticFields*)il2cpp_codegen_static_fields_for(UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// RKLog.Error("Not Find SDK Config, Will Use Default App Config.");
		il2cpp_codegen_runtime_class_init_inline(RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		RKLog_Error_mFCFCAE3B55881D774E1C1797331ADAE2A5B8BFCC(_stringLiteralDA8D2B6C0C16B7F0E685608364CA195BD8C168D3, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// Rokid.UXR.Config.UXRSDKConfig Rokid.UXR.Config.UXRSDKConfig::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0* UXRSDKConfig_get_Instance_mE5763DC96700468A54B425A985BDF09DF21B2EFD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0* L_0 = ((UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_StaticFields*)il2cpp_codegen_static_fields_for(UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// LoadInstance();
		UXRSDKConfig_LoadInstance_m7E6F4EA080FDFC39C9171832960CA211AB9F5A76(NULL);
	}

IL_0012:
	{
		// return _instance;
		UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0* L_2 = ((UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_StaticFields*)il2cpp_codegen_static_fields_for(UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0_il2cpp_TypeInfo_var))->____instance_4;
		return L_2;
	}
}
// System.Void Rokid.UXR.Config.UXRSDKConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXRSDKConfig__ctor_mE9B5A08B368403757F18C8CC2771A2CD779B025F (UXRSDKConfig_t5AFBCD532BC715611957402ADFFC73AE9D16CBF0* __this, const RuntimeMethod* method) 
{
	{
		// public bool MRCActive = true;
		__this->___MRCActive_7 = (bool)1;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rokid.UXR.Components.Axis::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axis_Start_m5D2E8E93BA279F5441CAF863981FC72BD4BC51F9 (Axis_tF6C86F2BD6257A506E6D31FB8EBDDEABDA887FED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CB235FDF341E57B3A3E3D289810AD3382B4E8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Find("X").GetComponent<MeshFilter>().mesh = DrawArrow(arrowHeight, arrowBottomSize, xLength, lineTickness, lineTickness);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, NULL);
		NullCheck(L_1);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2;
		L_2 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(L_1, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		float L_3 = __this->___arrowHeight_5;
		float L_4 = __this->___arrowBottomSize_4;
		float L_5 = __this->___xLength_6;
		float L_6 = __this->___lineTickness_9;
		float L_7 = __this->___lineTickness_9;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8;
		L_8 = Axis_DrawArrow_mBDD447F5B7D04AC09ADED85D5F46FFC329DD9852(__this, L_3, L_4, L_5, L_6, L_7, NULL);
		NullCheck(L_2);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_2, L_8, NULL);
		// transform.Find("Y").GetComponent<MeshFilter>().mesh = DrawArrow(arrowHeight, arrowBottomSize, yLength, lineTickness, lineTickness);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_9, _stringLiteralC5CB235FDF341E57B3A3E3D289810AD3382B4E8B, NULL);
		NullCheck(L_10);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_11;
		L_11 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(L_10, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		float L_12 = __this->___arrowHeight_5;
		float L_13 = __this->___arrowBottomSize_4;
		float L_14 = __this->___yLength_7;
		float L_15 = __this->___lineTickness_9;
		float L_16 = __this->___lineTickness_9;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_17;
		L_17 = Axis_DrawArrow_mBDD447F5B7D04AC09ADED85D5F46FFC329DD9852(__this, L_12, L_13, L_14, L_15, L_16, NULL);
		NullCheck(L_11);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_11, L_17, NULL);
		// transform.Find("Z").GetComponent<MeshFilter>().mesh = DrawArrow(arrowHeight, arrowBottomSize, zLength, lineTickness, lineTickness);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_18, _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380, NULL);
		NullCheck(L_19);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_20;
		L_20 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(L_19, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		float L_21 = __this->___arrowHeight_5;
		float L_22 = __this->___arrowBottomSize_4;
		float L_23 = __this->___zLength_8;
		float L_24 = __this->___lineTickness_9;
		float L_25 = __this->___lineTickness_9;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_26;
		L_26 = Axis_DrawArrow_mBDD447F5B7D04AC09ADED85D5F46FFC329DD9852(__this, L_21, L_22, L_23, L_24, L_25, NULL);
		NullCheck(L_20);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_20, L_26, NULL);
		// UpdateArrowTsf();
		Axis_UpdateArrowTsf_m5529C36524EF3104A2A0C38C3CC349D80FBE92CA(__this, NULL);
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.Axis::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axis_OnValidate_m72A02D1F85C127A75B4347599247547EEEF3919D (Axis_tF6C86F2BD6257A506E6D31FB8EBDDEABDA887FED* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.Axis::UpdateArrowTsf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axis_UpdateArrowTsf_m5529C36524EF3104A2A0C38C3CC349D80FBE92CA (Axis_tF6C86F2BD6257A506E6D31FB8EBDDEABDA887FED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49EAC01F1FE1AB3E022D37BA90128673D8F2C359);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CB235FDF341E57B3A3E3D289810AD3382B4E8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Find("X").localPosition = new Vector3(xLength, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, NULL);
		float L_2 = __this->___xLength_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_2, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_3, NULL);
		// transform.Find("Y").localPosition = new Vector3(0, yLength, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteralC5CB235FDF341E57B3A3E3D289810AD3382B4E8B, NULL);
		float L_6 = __this->___yLength_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), L_6, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_7, NULL);
		// transform.Find("Z").localPosition = new Vector3(0, 0, zLength);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_8, _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380, NULL);
		float L_10 = __this->___zLength_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), (0.0f), L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_11, NULL);
		// transform.Find("Center").localScale = Vector3.one * centerSize;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_12, _stringLiteral49EAC01F1FE1AB3E022D37BA90128673D8F2C359, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_15 = __this->___centerSize_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_16, NULL);
		// }
		return;
	}
}
// UnityEngine.Mesh Rokid.UXR.Components.Axis::DrawArrow(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Axis_DrawArrow_mBDD447F5B7D04AC09ADED85D5F46FFC329DD9852 (Axis_tF6C86F2BD6257A506E6D31FB8EBDDEABDA887FED* __this, float ___0_arrowHeight, float ___1_arrowBottom, float ___2_height, float ___3_width, float ___4_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t165B3C424FF942881B4626079236566D26260891____C43168E52D630D78C7F5327E1AD50ED4FC6D77DD5CC59ABA4402514F29FAF127_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		// var arrow = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// arrow.Clear();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		NullCheck(L_1);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_1, NULL);
		// Vector3[] vertexs = new Vector3[13];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		V_1 = L_2;
		// vertexs[0] = new Vector3(-arrowBottom / 2, 0, -arrowBottom / 2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_1;
		float L_4 = ___1_arrowBottom;
		float L_5 = ___1_arrowBottom;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((float)(((-L_4))/(2.0f))), (0.0f), ((float)(((-L_5))/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		// vertexs[1] = new Vector3(arrowBottom / 2, 0, -arrowBottom / 2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = V_1;
		float L_8 = ___1_arrowBottom;
		float L_9 = ___1_arrowBottom;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), ((float)(L_8/(2.0f))), (0.0f), ((float)(((-L_9))/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		// vertexs[2] = new Vector3(arrowBottom / 2, 0, arrowBottom / 2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_1;
		float L_12 = ___1_arrowBottom;
		float L_13 = ___1_arrowBottom;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), ((float)(L_12/(2.0f))), (0.0f), ((float)(L_13/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_14);
		// vertexs[3] = new Vector3(-arrowBottom / 2, 0, arrowBottom / 2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = V_1;
		float L_16 = ___1_arrowBottom;
		float L_17 = ___1_arrowBottom;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)(((-L_16))/(2.0f))), (0.0f), ((float)(L_17/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_18);
		// vertexs[4] = new Vector3(0, arrowHeight, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = V_1;
		float L_20 = ___0_arrowHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), (0.0f), L_20, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_21);
		// vertexs[5] = new Vector3(-width / 2, 0, -length / 2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = V_1;
		float L_23 = ___3_width;
		float L_24 = ___4_length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), ((float)(((-L_23))/(2.0f))), (0.0f), ((float)(((-L_24))/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_25);
		// vertexs[6] = new Vector3(width / 2, 0, -length / 2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = V_1;
		float L_27 = ___3_width;
		float L_28 = ___4_length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), ((float)(L_27/(2.0f))), (0.0f), ((float)(((-L_28))/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_29);
		// vertexs[7] = new Vector3(width / 2, 0, length / 2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = V_1;
		float L_31 = ___3_width;
		float L_32 = ___4_length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), ((float)(L_31/(2.0f))), (0.0f), ((float)(L_32/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_33);
		// vertexs[8] = new Vector3(-width / 2, 0, length / 2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = V_1;
		float L_35 = ___3_width;
		float L_36 = ___4_length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), ((float)(((-L_35))/(2.0f))), (0.0f), ((float)(L_36/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(8), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_37);
		// vertexs[9] = new Vector3(-width / 2, -height, -length / 2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38 = V_1;
		float L_39 = ___3_width;
		float L_40 = ___2_height;
		float L_41 = ___4_length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)(((-L_39))/(2.0f))), ((-L_40)), ((float)(((-L_41))/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_42);
		// vertexs[10] = new Vector3(width / 2, -height, -length / 2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = V_1;
		float L_44 = ___3_width;
		float L_45 = ___2_height;
		float L_46 = ___4_length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_47), ((float)(L_44/(2.0f))), ((-L_45)), ((float)(((-L_46))/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_47);
		// vertexs[11] = new Vector3(width / 2, -height, length / 2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = V_1;
		float L_49 = ___3_width;
		float L_50 = ___2_height;
		float L_51 = ___4_length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), ((float)(L_49/(2.0f))), ((-L_50)), ((float)(L_51/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_52);
		// vertexs[12] = new Vector3(-width / 2, -height, length / 2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_53 = V_1;
		float L_54 = ___3_width;
		float L_55 = ___2_height;
		float L_56 = ___4_length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_57), ((float)(((-L_54))/(2.0f))), ((-L_55)), ((float)(L_56/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_57);
		// arrow.vertices = vertexs;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_58 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = V_1;
		NullCheck(L_58);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_58, L_59, NULL);
		// int[] vertexIndices = new int[] {
		//     //bottom
		//     0,1,2,0,2,3,
		//     //up01
		//     0,4,1,
		//     //up02
		//     1,4,2,
		//     //up03
		//     2,4,3,
		//     //up04
		//     0,3,4,
		//     //????...
		//     5,10,9,5,6,10,
		//     6,11,10,6,7,11,
		//     7,12,11,7,8,12,
		//     5,9,12,5,12,8,
		//     9,10,12,10,11,12
		// };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = L_60;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_62 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t165B3C424FF942881B4626079236566D26260891____C43168E52D630D78C7F5327E1AD50ED4FC6D77DD5CC59ABA4402514F29FAF127_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_61, L_62, NULL);
		V_2 = L_61;
		// arrow.vertices = vertexs;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_63 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64 = V_1;
		NullCheck(L_63);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_63, L_64, NULL);
		// arrow.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_65 = V_0;
		NullCheck(L_65);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_65, NULL);
		// arrow.SetIndices(vertexIndices, MeshTopology.Triangles, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_66 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_2;
		NullCheck(L_66);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_66, L_67, 0, 0, NULL);
		// return arrow;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_68 = V_0;
		return L_68;
	}
}
// System.Void Rokid.UXR.Components.Axis::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axis__ctor_m43C458375D076DBDAEA5936D57F4CCE693F7FFD2 (Axis_tF6C86F2BD6257A506E6D31FB8EBDDEABDA887FED* __this, const RuntimeMethod* method) 
{
	{
		// public float arrowBottomSize = 0.2f;
		__this->___arrowBottomSize_4 = (0.200000003f);
		// public float arrowHeight = 0.3f;
		__this->___arrowHeight_5 = (0.300000012f);
		// public float xLength = 2;
		__this->___xLength_6 = (2.0f);
		// public float yLength = 2;
		__this->___yLength_7 = (2.0f);
		// public float zLength = 2;
		__this->___zLength_8 = (2.0f);
		// public float lineTickness = 0.05f;//?????
		__this->___lineTickness_9 = (0.0500000007f);
		// public float centerSize = 0.1f;
		__this->___centerSize_10 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rokid.UXR.Components.BezierDragUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierDragUI_Start_m187D92D7FE94105F7C9E9A8C1ECD0AF7A6CD5DD6 (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// imgRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___imgRect_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgRect_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.BezierDragUI::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierDragUI_OnDrag_mB4C83351321E971E69AD4BCCF3325DD53BD8151E (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 mouseDrag = eventData.position; //???????????
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_0, NULL);
		V_0 = L_1;
		// bool isRect = RectTransformUtility.ScreenPointToLocalPointInRectangle(canvas, mouseDrag, eventData.enterEventCamera, out uguiPos);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___canvas_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___0_eventData;
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = PointerEventData_get_enterEventCamera_m2EBF9CB2E5C1B169F6B6BB066C9CF5B99A7476CF(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_2, L_3, L_5, (&V_1), NULL);
		// if (isRect && Mathf.Abs(uguiPos.x) < Screen.width && Mathf.Abs(uguiPos.y) < Screen.height)
		if (!L_6)
		{
			goto IL_0075;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		float L_8 = L_7.___x_0;
		float L_9;
		L_9 = fabsf(L_8);
		int32_t L_10;
		L_10 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		if ((!(((float)L_9) < ((float)((float)L_10)))))
		{
			goto IL_0075;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_1;
		float L_12 = L_11.___y_1;
		float L_13;
		L_13 = fabsf(L_12);
		int32_t L_14;
		L_14 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		if ((!(((float)L_13) < ((float)((float)L_14)))))
		{
			goto IL_0075;
		}
	}
	{
		// if (!UseBezierCurve)
		bool L_15 = __this->___UseBezierCurve_8;
		if (L_15)
		{
			goto IL_0063;
		}
	}
	{
		// imgRect.anchoredPosition = offset + uguiPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___imgRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___offset_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_17, L_18, NULL);
		NullCheck(L_16);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_16, L_19, NULL);
		return;
	}

IL_0063:
	{
		// anchoredPos = offset + uguiPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->___offset_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_20, L_21, NULL);
		__this->___anchoredPos_11 = L_22;
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.BezierDragUI::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierDragUI_OnBeginDrag_m73F7628EDBA5D8324CD99AFC9E23375C8C5A57E3 (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IsDraging = true;
		__this->___IsDraging_7 = (bool)1;
		// AddBezierPointerData(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		BezierDragUI_AddBezierPointerData_m2A28919A2964076DC9F314AA2BD63C824828D6EF(__this, L_0, NULL);
		// Vector2 mouseDown = eventData.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		V_0 = L_2;
		// bool isRect = RectTransformUtility.ScreenPointToLocalPointInRectangle(canvas, mouseDown, eventData.enterEventCamera, out mouseUguiPos);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___canvas_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___0_eventData;
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = PointerEventData_get_enterEventCamera_m2EBF9CB2E5C1B169F6B6BB066C9CF5B99A7476CF(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_3, L_4, L_6, (&V_1), NULL);
		// if (isRect && Mathf.Abs(mouseUguiPos.x) < Screen.width && Mathf.Abs(mouseUguiPos.y) < Screen.height)
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_1;
		float L_9 = L_8.___x_0;
		float L_10;
		L_10 = fabsf(L_9);
		int32_t L_11;
		L_11 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		if ((!(((float)L_10) < ((float)((float)L_11)))))
		{
			goto IL_0069;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		float L_13 = L_12.___y_1;
		float L_14;
		L_14 = fabsf(L_13);
		int32_t L_15;
		L_15 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		if ((!(((float)L_14) < ((float)((float)L_15)))))
		{
			goto IL_0069;
		}
	}
	{
		// offset = imgRect.anchoredPosition - mouseUguiPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___imgRect_5;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_17, L_18, NULL);
		__this->___offset_6 = L_19;
		return;
	}

IL_0069:
	{
		// offset = imgRect.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___imgRect_5;
		NullCheck(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_20, NULL);
		__this->___offset_6 = L_21;
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.BezierDragUI::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierDragUI_OnEndDrag_m9B771C2AB1C39DB5FD33B2DB2B3D742095F9002A (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E3F46B637689859A35E00AC2BDDD188ADEA5B17);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RKLog.Info("On End Drag");
		il2cpp_codegen_runtime_class_init_inline(RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		RKLog_Info_m4FAADBEEFD6EF57BBB4FAB562FB35F0F68F596A2(_stringLiteral9E3F46B637689859A35E00AC2BDDD188ADEA5B17, NULL);
		// IsDraging = false;
		__this->___IsDraging_7 = (bool)0;
		// RemoveBezierPointerData(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		BezierDragUI_RemoveBezierPointerData_m9DDAA48B0A5143E864539DD61945395D9907E1E8(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.BezierDragUI::AddBezierPointerData(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierDragUI_AddBezierPointerData_m2A28919A2964076DC9F314AA2BD63C824828D6EF (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2301489EC3FE75993E4E125002C228CE1AE41283_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* V_0 = NULL;
	{
		// BezierPointerData bezierPointerData = new BezierPointerData();
		BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* L_0 = (BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526*)il2cpp_codegen_object_new(BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BezierPointerData__ctor_m3D4F6B676097C708D4DEF81075FB2524742311FA(L_0, NULL);
		V_0 = L_0;
		// bezierPointerData.pointerId = eventData.pointerId;
		BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* L_1 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_eventData;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_2, NULL);
		NullCheck(L_1);
		L_1->___pointerId_0 = L_3;
		// bezierPointerData.hitLocalNormal = transform.InverseTransformVector(eventData.pointerCurrentRaycast.worldNormal);
		BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___0_eventData;
		NullCheck(L_6);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_7;
		L_7 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7.___worldNormal_10;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044(L_5, L_8, NULL);
		NullCheck(L_4);
		L_4->___hitLocalNormal_2 = L_9;
		// bezierPointerData.hitLocalPos = transform.InverseTransformPoint(eventData.pointerCurrentRaycast.worldPosition);
		BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* L_10 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_12 = ___0_eventData;
		NullCheck(L_12);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_13;
		L_13 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13.___worldPosition_9;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_11, L_14, NULL);
		NullCheck(L_10);
		L_10->___hitLocalPos_1 = L_15;
		// bezierPointerDatas.Add(bezierPointerData.pointerId, bezierPointerData);
		Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C* L_16 = __this->___bezierPointerDatas_10;
		BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___pointerId_0;
		BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* L_19 = V_0;
		NullCheck(L_16);
		Dictionary_2_Add_m2301489EC3FE75993E4E125002C228CE1AE41283(L_16, L_18, L_19, Dictionary_2_Add_m2301489EC3FE75993E4E125002C228CE1AE41283_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.BezierDragUI::RemoveBezierPointerData(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierDragUI_RemoveBezierPointerData_m9DDAA48B0A5143E864539DD61945395D9907E1E8 (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m8A91F6A91021AF16D88A34841C0BAC8536BA5F51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bezierPointerDatas.Remove(eventData.pointerId);
		Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C* L_0 = __this->___bezierPointerDatas_10;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_Remove_m8A91F6A91021AF16D88A34841C0BAC8536BA5F51(L_0, L_2, Dictionary_2_Remove_m8A91F6A91021AF16D88A34841C0BAC8536BA5F51_RuntimeMethod_var);
		// }
		return;
	}
}
// Rokid.UXR.Interaction.BezierPointerData Rokid.UXR.Components.BezierDragUI::GetBezierPointerData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* BezierDragUI_GetBezierPointerData_mBD3E678CE14D99069C6706DF4433DCF393887210 (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, int32_t ___0_pointerId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5BC606BFF3BE91D90D9AB981592DABC71321A205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A15820B4A2F3C6EA9F759B6ED066328D4FCF0A4);
		s_Il2CppMethodInitialized = true;
	}
	BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* V_0 = NULL;
	{
		// if (bezierPointerDatas.TryGetValue(pointerId, out BezierPointerData bezierPointerData))
		Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C* L_0 = __this->___bezierPointerDatas_10;
		int32_t L_1 = ___0_pointerId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m5BC606BFF3BE91D90D9AB981592DABC71321A205(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m5BC606BFF3BE91D90D9AB981592DABC71321A205_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return bezierPointerData;
		BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		// RKLog.KeyInfo($"====BezierDragUI====: Can not find pointerId {pointerId}");
		int32_t L_4 = ___0_pointerId;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3A15820B4A2F3C6EA9F759B6ED066328D4FCF0A4, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		RKLog_KeyInfo_m73E1DC39E5CDB54CCF0665FA9518DB2867ED7AC3(L_7, NULL);
		// return null;
		return (BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526*)NULL;
	}
}
// System.Boolean Rokid.UXR.Components.BezierDragUI::IsEnablePinchBezierCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BezierDragUI_IsEnablePinchBezierCurve_m678BBFEDA7609825BA2E3B547FC2BD5D8FEEB3B7 (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, const RuntimeMethod* method) 
{
	{
		// return UseBezierCurve;
		bool L_0 = __this->___UseBezierCurve_8;
		return L_0;
	}
}
// System.Boolean Rokid.UXR.Components.BezierDragUI::IsEnableGripBezierCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BezierDragUI_IsEnableGripBezierCurve_m075740CA178C1FC32FDE5678DD8E6898FEA79C93 (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Rokid.UXR.Components.BezierDragUI::IsInBezierCurveDragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BezierDragUI_IsInBezierCurveDragging_mF24429DB8C071F4BDC0D95C8E6A3FED598C7EB6D (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, const RuntimeMethod* method) 
{
	{
		// return IsDraging;
		bool L_0 = __this->___IsDraging_7;
		return L_0;
	}
}
// UnityEngine.Vector3 Rokid.UXR.Components.BezierDragUI::GetBezierCurveEndPoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierDragUI_GetBezierCurveEndPoint_mA2361C7AC5542B52CE04C10AA5BCBDA13FF2B3D7 (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, int32_t ___0_pointerId, const RuntimeMethod* method) 
{
	BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* V_0 = NULL;
	{
		// BezierPointerData pointerData = GetBezierPointerData(pointerId);
		int32_t L_0 = ___0_pointerId;
		BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* L_1;
		L_1 = BezierDragUI_GetBezierPointerData_mBD3E678CE14D99069C6706DF4433DCF393887210(__this, L_0, NULL);
		V_0 = L_1;
		// if (pointerData != null)
		BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// return transform.TransformPoint(pointerData.hitLocalPos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		BezierPointerData_t7A629A46683FE31BE0021DE243FF3ABF1DAF2526* L_4 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___hitLocalPos_1;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_3, L_5, NULL);
		return L_6;
	}

IL_001d:
	{
		// return transform.TransformPoint(Vector3.zero);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_7, L_8, NULL);
		return L_9;
	}
}
// System.Void Rokid.UXR.Components.BezierDragUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierDragUI_Update_m957AB9C0338FBF6A8A06DD6210104239E2A968A7 (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, const RuntimeMethod* method) 
{
	{
		// if (UseBezierCurve && IsDraging)
		bool L_0 = __this->___UseBezierCurve_8;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		bool L_1 = __this->___IsDraging_7;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// imgRect.anchoredPosition = Vector2.Lerp(imgRect.anchoredPosition, anchoredPos, 1f - Mathf.Pow(moveLerpTime, Time.deltaTime));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___imgRect_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___imgRect_5;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___anchoredPos_11;
		float L_6 = __this->___moveLerpTime_9;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_8;
		L_8 = powf(L_6, L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_4, L_5, ((float)il2cpp_codegen_subtract((1.0f), L_8)), NULL);
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_9, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Rokid.UXR.Components.BezierDragUI::GetBezierCurveEndNormal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierDragUI_GetBezierCurveEndNormal_m6119BB9456C78A8F6D371AB00F27DFA1664CA8EB (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, int32_t ___0_pointerId, const RuntimeMethod* method) 
{
	{
		// return transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		return L_1;
	}
}
// System.Void Rokid.UXR.Components.BezierDragUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierDragUI__ctor_m411B419D64CA1CBDE8DC8677A382C9E1E9258194 (BezierDragUI_tD89BFC6C706049B1BDF4377F84D13471AB1E4749* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC81A9883B0746580E094650BBEFD4299592A9795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool UseBezierCurve = true;
		__this->___UseBezierCurve_8 = (bool)1;
		// private float moveLerpTime = 0.05f;
		__this->___moveLerpTime_9 = (0.0500000007f);
		// private Dictionary<int, BezierPointerData> bezierPointerDatas = new Dictionary<int, BezierPointerData>();
		Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C* L_0 = (Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C*)il2cpp_codegen_object_new(Dictionary_2_t20FEB98DA822938197046ABA6E363E19096A969C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC81A9883B0746580E094650BBEFD4299592A9795(L_0, Dictionary_2__ctor_mC81A9883B0746580E094650BBEFD4299592A9795_RuntimeMethod_var);
		__this->___bezierPointerDatas_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bezierPointerDatas_10), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rokid.UXR.Components.DragUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragUI_Start_m170353D4D7DE12BD25DA41918AC0A7D8B349C0AA (DragUI_t7CF9D5B0AD70099320A9FE807CFFF00E86595FDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// imgRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___imgRect_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgRect_6), (void*)L_0);
		// canvasGroup = GetComponent<CanvasGroup>();
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1;
		L_1 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(__this, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->___canvasGroup_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasGroup_7), (void*)L_1);
		// sibiling = transform.GetSiblingIndex();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_2, NULL);
		__this->___sibiling_10 = L_3;
		// oldParent = transform.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		__this->___oldParent_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oldParent_8), (void*)L_5);
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.DragUI::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragUI_OnDrag_m8A5239B88E356CDFB48EFED13FEE88149E4F7094 (DragUI_t7CF9D5B0AD70099320A9FE807CFFF00E86595FDA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 mouseDrag = eventData.position; //???????????
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_0, NULL);
		V_0 = L_1;
		// bool isRect = RectTransformUtility.ScreenPointToLocalPointInRectangle(canvas, mouseDrag, eventData.enterEventCamera, out uguiPos);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___canvas_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___0_eventData;
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = PointerEventData_get_enterEventCamera_m2EBF9CB2E5C1B169F6B6BB066C9CF5B99A7476CF(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_2, L_3, L_5, (&V_1), NULL);
		// if (isRect)
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// imgRect.anchoredPosition = offset + uguiPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___imgRect_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___offset_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_8, L_9, NULL);
		NullCheck(L_7);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_7, L_10, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.DragUI::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragUI_OnBeginDrag_mD0F16C3EACBED20E2B115AD57FB00AB40CB23509 (DragUI_t7CF9D5B0AD70099320A9FE807CFFF00E86595FDA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// canvasGroup.blocksRaycasts = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->___canvasGroup_7;
		NullCheck(L_0);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_0, (bool)0, NULL);
		// nowParent = transform.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		__this->___nowParent_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nowParent_9), (void*)L_2);
		// transform.SetParent(frontParent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___frontParent_5;
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// Vector2 mouseDown = eventData.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___0_eventData;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_5, NULL);
		V_0 = L_6;
		// bool isRect = RectTransformUtility.ScreenPointToLocalPointInRectangle(canvas, mouseDown, eventData.enterEventCamera, out mouseUguiPos);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___canvas_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_9 = ___0_eventData;
		NullCheck(L_9);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = PointerEventData_get_enterEventCamera_m2EBF9CB2E5C1B169F6B6BB066C9CF5B99A7476CF(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_7, L_8, L_10, (&V_1), NULL);
		// if (isRect)
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// offset = imgRect.anchoredPosition - mouseUguiPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___imgRect_6;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_13, L_14, NULL);
		__this->___offset_11 = L_15;
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.DragUI::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragUI_OnEndDrag_m123C078E2C7E471034A9D73FC344732C5E37BA74 (DragUI_t7CF9D5B0AD70099320A9FE807CFFF00E86595FDA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33D9BF91B85ABFF37913A45FC61783B08E415CC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E3F46B637689859A35E00AC2BDDD188ADEA5B17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAA2F44DE32C68853E4DA7500BA616A2A3B45D89);
		s_Il2CppMethodInitialized = true;
	}
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// RKLog.Info("On End Drag");
		il2cpp_codegen_runtime_class_init_inline(RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		RKLog_Info_m4FAADBEEFD6EF57BBB4FAB562FB35F0F68F596A2(_stringLiteral9E3F46B637689859A35E00AC2BDDD188ADEA5B17, NULL);
		// if (eventData.pointerCurrentRaycast.gameObject != null)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		NullCheck(L_0);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_1;
		L_1 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_0, NULL);
		V_0 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_00c7;
		}
	}
	{
		// if (eventData.pointerCurrentRaycast.gameObject.name == "Grid")
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___0_eventData;
		NullCheck(L_4);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_5;
		L_5 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_4, NULL);
		V_0 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&V_0), NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralCAA2F44DE32C68853E4DA7500BA616A2A3B45D89, NULL);
		if (!L_8)
		{
			goto IL_00a4;
		}
	}
	{
		// Transform targetParent = eventData.pointerCurrentRaycast.gameObject.transform;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_9 = ___0_eventData;
		NullCheck(L_9);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_10;
		L_10 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_9, NULL);
		V_0 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&V_0), NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		V_1 = L_12;
		// if (targetParent.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_13, NULL);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		// RKLog.Info("Change Position");
		il2cpp_codegen_runtime_class_init_inline(RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		RKLog_Info_m4FAADBEEFD6EF57BBB4FAB562FB35F0F68F596A2(_stringLiteral33D9BF91B85ABFF37913A45FC61783B08E415CC1, NULL);
		// Transform target = targetParent.GetChild(0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_15, 0, NULL);
		// target.SetParent(oldParent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = L_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___oldParent_8;
		NullCheck(L_17);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_17, L_18, NULL);
		// target.localPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_17);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_17, L_19, NULL);
	}

IL_0086:
	{
		// transform.SetParent(targetParent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_1;
		NullCheck(L_20);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_20, L_21, NULL);
		// transform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_22);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_23, NULL);
		goto IL_00e8;
	}

IL_00a4:
	{
		// transform.SetParent(oldParent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___oldParent_8;
		NullCheck(L_24);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_24, L_25, NULL);
		// transform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_26);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_26, L_27, NULL);
		goto IL_00e8;
	}

IL_00c7:
	{
		// transform.SetParent(oldParent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___oldParent_8;
		NullCheck(L_28);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_28, L_29, NULL);
		// transform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_30);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_30, L_31, NULL);
	}

IL_00e8:
	{
		// canvasGroup.blocksRaycasts = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_32 = __this->___canvasGroup_7;
		NullCheck(L_32);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_32, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.DragUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragUI__ctor_m457B07E3BF0094EE89A12020CAB98CDED18F8B5C (DragUI_t7CF9D5B0AD70099320A9FE807CFFF00E86595FDA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rokid.UXR.Components.Ruler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ruler_Update_m73986747983D1991C16628D1B4D23B4CA7743441 (Ruler_tBEDC82B836F8FD9B828EAC20530B053204C93839* __this, const RuntimeMethod* method) 
{
	{
		// if (oldLength != length)
		float L_0 = __this->___oldLength_8;
		int32_t L_1 = __this->___length_5;
		if ((((float)L_0) == ((float)((float)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		// oldLength = length;
		int32_t L_2 = __this->___length_5;
		__this->___oldLength_8 = ((float)L_2);
		// ShowDial(length);
		int32_t L_3 = __this->___length_5;
		Ruler_ShowDial_mD309BFD8DB4910014B6C6CE0B0C16E8D92A8587A(__this, L_3, NULL);
		// ruler.transform.localScale = new Vector3(0.4f, length, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___ruler_7;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		int32_t L_6 = __this->___length_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.400000006f), ((float)L_6), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_7, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.Ruler::ShowDial(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ruler_ShowDial_mD309BFD8DB4910014B6C6CE0B0C16E8D92A8587A (Ruler_tBEDC82B836F8FD9B828EAC20530B053204C93839* __this, int32_t ___0_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m083549762D5F7C4190DAC5437B16A38A2E0F5039_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD4CF08C235FFD2D4652E3BC011EADC9B99888F7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m19212131A523FF131030B9EC5FBF9F5BDA9DA449_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m969801C34686FA6776C36952BF6D63FA0C8C0D3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m196C6C32A4E0756C1BB362037B5D8FA37773F434_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1B1B97EE01684232088412E9E1ED06F6CC623536 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	{
		// foreach (var item in dialDict.Values)
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_0 = __this->___dialDict_4;
		NullCheck(L_0);
		ValueCollection_t945C1D1410FDCBD1C84A82D14A578BD5FFBC38F9* L_1;
		L_1 = Dictionary_2_get_Values_m083549762D5F7C4190DAC5437B16A38A2E0F5039(L_0, Dictionary_2_get_Values_m083549762D5F7C4190DAC5437B16A38A2E0F5039_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t1B1B97EE01684232088412E9E1ED06F6CC623536 L_2;
		L_2 = ValueCollection_GetEnumerator_m196C6C32A4E0756C1BB362037B5D8FA37773F434(L_1, ValueCollection_GetEnumerator_m196C6C32A4E0756C1BB362037B5D8FA37773F434_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD4CF08C235FFD2D4652E3BC011EADC9B99888F7B((&V_0), Enumerator_Dispose_mD4CF08C235FFD2D4652E3BC011EADC9B99888F7B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_0013_1:
			{
				// foreach (var item in dialDict.Values)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Enumerator_get_Current_m969801C34686FA6776C36952BF6D63FA0C8C0D3E_inline((&V_0), Enumerator_get_Current_m969801C34686FA6776C36952BF6D63FA0C8C0D3E_RuntimeMethod_var);
				V_1 = L_3;
				// if (item == null || item.gameObject == null)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_5)
				{
					goto IL_003e_1;
				}
			}
			{
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
				NullCheck(L_6);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_8;
				L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_8)
				{
					goto IL_003e_1;
				}
			}
			{
				// item.gameObject.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
				NullCheck(L_9);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
				NullCheck(L_10);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
			}

IL_003e_1:
			{
				// foreach (var item in dialDict.Values)
				bool L_11;
				L_11 = Enumerator_MoveNext_m19212131A523FF131030B9EC5FBF9F5BDA9DA449((&V_0), Enumerator_MoveNext_m19212131A523FF131030B9EC5FBF9F5BDA9DA449_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		// for (int i = 1; i < length; i++)
		V_2 = 1;
		goto IL_01c9;
	}

IL_005e:
	{
		// if (dialDict.ContainsKey(i) && dialDict[i].gameObject != null)
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_12 = __this->___dialDict_4;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F(L_12, L_13, Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_00a1;
		}
	}
	{
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_15 = __this->___dialDict_4;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA(L_15, L_16, Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_00a1;
		}
	}
	{
		// dialDict[i].gameObject.SetActive(true);
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_20 = __this->___dialDict_4;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA(L_20, L_21, Dictionary_2_get_Item_m714B6ABA10FFEA8A005D06BF26C04995FE8375FA_RuntimeMethod_var);
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_22, NULL);
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		goto IL_01c5;
	}

IL_00a1:
	{
		// Transform tsf = transform.Find(i + "m");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_25, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, NULL);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_24, L_26, NULL);
		V_3 = L_27;
		// if (tsf != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_00fb;
		}
	}
	{
		// if (dialDict.ContainsKey(i))
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_30 = __this->___dialDict_4;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		bool L_32;
		L_32 = Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F(L_30, L_31, Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F_RuntimeMethod_var);
		if (!L_32)
		{
			goto IL_00e8;
		}
	}
	{
		// dialDict[i] = tsf.gameObject;
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_33 = __this->___dialDict_4;
		int32_t L_34 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = V_3;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		NullCheck(L_33);
		Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA(L_33, L_34, L_36, Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA_RuntimeMethod_var);
		return;
	}

IL_00e8:
	{
		// dialDict.Add(i, tsf.gameObject);
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_37 = __this->___dialDict_4;
		int32_t L_38 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = V_3;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		NullCheck(L_37);
		Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF(L_37, L_38, L_40, Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF_RuntimeMethod_var);
		// return;
		return;
	}

IL_00fb:
	{
		// GameObject go = GameObject.Instantiate(tempDial, new Vector3(0, 0.001f, i), Quaternion.Euler(90, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___tempDial_6;
		int32_t L_42 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), (0.0f), (0.00100000005f), ((float)L_42), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((90.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_41, L_43, L_44, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_4 = L_45;
		// go.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = V_4;
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)1, NULL);
		// go.transform.SetParent(this.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = V_4;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_47, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_48);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_48, L_49, NULL);
		// go.transform.localPosition = new Vector3(0, 0.001f, i);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_4;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		int32_t L_52 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_53), (0.0f), (0.00100000005f), ((float)L_52), /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_51, L_53, NULL);
		// if (dialDict.ContainsKey(i))
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_54 = __this->___dialDict_4;
		int32_t L_55 = V_2;
		NullCheck(L_54);
		bool L_56;
		L_56 = Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F(L_54, L_55, Dictionary_2_ContainsKey_mFA96E2A287358EB00E7F0B92946AFB4A31F5B91F_RuntimeMethod_var);
		if (!L_56)
		{
			goto IL_0182;
		}
	}
	{
		// dialDict[i] = go;
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_57 = __this->___dialDict_4;
		int32_t L_58 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = V_4;
		NullCheck(L_57);
		Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA(L_57, L_58, L_59, Dictionary_2_set_Item_mBF96BE1E5EF00E034063E729F8A641482687AACA_RuntimeMethod_var);
		goto IL_0190;
	}

IL_0182:
	{
		// dialDict.Add(i, go);
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_60 = __this->___dialDict_4;
		int32_t L_61 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = V_4;
		NullCheck(L_60);
		Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF(L_60, L_61, L_62, Dictionary_2_Add_mA5013CBA44F1B1DC6398B4430E25EE98A9C11FDF_RuntimeMethod_var);
	}

IL_0190:
	{
		// go.GetComponentInChildren<Text>().text = i + "m";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = V_4;
		NullCheck(L_63);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_64;
		L_64 = GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13(L_63, GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		String_t* L_65;
		L_65 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_66;
		L_66 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_65, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, NULL);
		NullCheck(L_64);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_64, L_66);
		// go.name = i + "m";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = V_4;
		String_t* L_68;
		L_68 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_69;
		L_69 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_68, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, NULL);
		NullCheck(L_67);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_67, L_69, NULL);
	}

IL_01c5:
	{
		// for (int i = 1; i < length; i++)
		int32_t L_70 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_01c9:
	{
		// for (int i = 1; i < length; i++)
		int32_t L_71 = V_2;
		int32_t L_72 = ___0_length;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_005e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Rokid.UXR.Components.Ruler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ruler__ctor_m879800ECC6B9F883607946C5ECE51383E8501AE6 (Ruler_tBEDC82B836F8FD9B828EAC20530B053204C93839* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Dictionary<int, GameObject> dialDict = new Dictionary<int, GameObject>();
		Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* L_0 = (Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662*)il2cpp_codegen_object_new(Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858(L_0, Dictionary_2__ctor_mEC9E9E9AF403DF7262870C6B7233848BE7458858_RuntimeMethod_var);
		__this->___dialDict_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dialDict_4), (void*)L_0);
		// public int length = 1;
		__this->___length_5 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RKLog_SetLogEnable_m1C6568BE98439FBB1B62592CF8B26290AD5E7444_inline (bool ___0_logEnable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RKLog.logEnable = logEnable;
		bool L_0 = ___0_logEnable;
		il2cpp_codegen_runtime_class_init_inline(RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var);
		((RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_StaticFields*)il2cpp_codegen_static_fields_for(RKLog_tCA4158E5B52A6D030B468AABEB9A4D322305363C_il2cpp_TypeInfo_var))->___logEnable_1 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public int pointerId { get; set; }
		int32_t L_0 = __this->___U3CpointerIdU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = __this->___U3CpointerCurrentRaycastU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_a;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_b;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_a;
		float L_7 = L_6.___x_0;
		float L_8 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___0_a;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___1_b;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___0_a;
		float L_14 = L_13.___y_1;
		float L_15 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_GameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_GameObject_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
