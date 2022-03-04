#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Comparison`1<BlockType>
struct Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<BlockType>
struct List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54;
// System.Collections.Generic.List`1<Chunk>
struct List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector2Int>
struct List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<VoxelMod>
struct Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// BlockType[]
struct BlockTypeU5BU5D_tF80864147B127BB1CE1EDD0D0C79F4A79438EFA3;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Chunk[]
struct ChunkU5BU5D_t3DC2D112C743EDBADB6F98F2F8D357999DFEB2FB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// VoxelMod[]
struct VoxelModU5BU5D_tE20FC535DD822EF7788A5B22A3A64393C9987185;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// Chunk[,]
struct ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3;
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;
// System.Byte[,,]
struct ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// BiomeAttributes
struct BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083;
// BlockType
struct BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599;
// Buttons
struct Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Chunk
struct Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DeciduousForestBiome
struct DeciduousForestBiome_t1EFF4091C928FB9DBCEC33420F982CB443A2753C;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DesertBiome
struct DesertBiome_t6606106BFD34647E912C739DA06AE456F95E42EA;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Loader
struct Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TiagaBiome
struct TiagaBiome_t24149653E3AA758A2D7FB0678E2C97AD77290AA8;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VoxelMod
struct VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// World
struct World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// Loader/<LoadAsyncOperation>d__3
struct U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// World/<>c
struct U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5;

IL2CPP_EXTERN_C RuntimeClass* ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlockTypes_t64A3007772A174281F57DF45A4F087AF466AF586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____327336B1CA21CDCCBA0F9FEDD8AC5A2439F56FEDEAB79A03E24BF226CD74B18C_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E1E9E79D53CAC30542BB8F702A0858EB9ABC66F;
IL2CPP_EXTERN_C String_t* _stringLiteral5828A3ADA3BF55D7FCF310057E8E8D83EEF17E0F;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral96FFD63B17422DC4201E28F0F9A4E44E280CABDE;
IL2CPP_EXTERN_C String_t* _stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7;
IL2CPP_EXTERN_C String_t* _stringLiteralAC41E8F4837D2C0D778584628EAF69E5048498B6;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralD05429B2F418E84391233531A47B78CD03B7AB9B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0E79EFD1D346651307EA0283ACB160FB2BC97D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7F74D0550846D7BAA5A0B52A711FE60D44868EAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m02EE45B0FB462E64102878F9418E2E1E20212AD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWorld_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A_mBE73C6703E4BF5ACB52A011CC2ABB2A9AE6B86FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m40E5A66F960153686935BD4FF642E19D4D36BA1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE4028DB4640843341A84E278E1E4ED8D2C269072_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D3E36A587FC98AFD0A3C819B56CA5AF2D6CDAA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCC7E3652B85916B15144BC84022D495330D5BB98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m10E5FA90858C52C957967928E4A3E60E5F88968A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m39F3118DF8CD60263992588EAEC7657E3069C257_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAEBFD74C6C8CF3E70E6E414A7349E8EC3C476605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE1D9FD9DA1EF2CAC4F99EF4E013F05BB8C3507EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m9D787047CB23C896A2970286FD97ABF763229310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m992E7258145F988A857B42A58852EAF88A3796A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m1C6954F125D1AF35749D329B795C645CF40AC297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mF48C194C969E2A67F5B8AFC698EEDF0B8AC612F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsyncOperationU3Ed__3_System_Collections_IEnumerator_Reset_m399CF118B8862C0C3562C6C587F6C78DEF363120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegenWorldU3Eb__9_0_mB8312E46490968ADF344E8712D2FD4098E7871C2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3;
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;
struct ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<BlockType>
struct List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BlockTypeU5BU5D_tF80864147B127BB1CE1EDD0D0C79F4A79438EFA3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BlockTypeU5BU5D_tF80864147B127BB1CE1EDD0D0C79F4A79438EFA3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Chunk>
struct List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChunkU5BU5D_t3DC2D112C743EDBADB6F98F2F8D357999DFEB2FB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChunkU5BU5D_t3DC2D112C743EDBADB6F98F2F8D357999DFEB2FB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2Int>
struct List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<VoxelMod>
struct Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	VoxelModU5BU5D_tE20FC535DD822EF7788A5B22A3A64393C9987185* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// Noise
struct Noise_t38E71BA511B94B0BD09B876A96E5F251ED4A7353  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Structure
struct Structure_tCF726343B79D74DA445EF5D22006C23C5732A1AA  : public RuntimeObject
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

// VoxelData
struct VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598  : public RuntimeObject
{
};

struct VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields
{
	// System.Int32 VoxelData::ChunkWidth
	int32_t ___ChunkWidth_0;
	// System.Int32 VoxelData::ChunkHeight
	int32_t ___ChunkHeight_1;
	// System.Int32 VoxelData::WorldSizeInChunks
	int32_t ___WorldSizeInChunks_2;
	// System.Int32 VoxelData::TextureAtlasSizeInBlocks
	int32_t ___TextureAtlasSizeInBlocks_3;
	// UnityEngine.Vector3[] VoxelData::voxelVerts
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___voxelVerts_4;
	// UnityEngine.Vector3[] VoxelData::faceChecks
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___faceChecks_5;
	// System.Int32[,] VoxelData::voxelTris
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___voxelTris_6;
	// UnityEngine.Vector2[] VoxelData::voxelUVs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___voxelUVs_7;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Loader/<LoadAsyncOperation>d__3
struct U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3  : public RuntimeObject
{
	// System.Int32 Loader/<LoadAsyncOperation>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Loader/<LoadAsyncOperation>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Loader Loader/<LoadAsyncOperation>d__3::<>4__this
	Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8* ___U3CU3E4__this_2;
	// UnityEngine.AsyncOperation Loader/<LoadAsyncOperation>d__3::<asyncLoad>5__1
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CasyncLoadU3E5__1_3;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// World/<>c
struct U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5  : public RuntimeObject
{
};

struct U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_StaticFields
{
	// World/<>c World/<>c::<>9
	U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5* ___U3CU3E9_0;
	// System.Comparison`1<BlockType> World/<>c::<>9__9_0
	Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB* ___U3CU3E9__9_0_1;
};

// System.Collections.Generic.List`1/Enumerator<Chunk>
struct Enumerator_t107CFDFD7019E96B01A5700B99186BC49A9B4995 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
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

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB__padding[96];
	};
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
struct Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____current_3;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::327336B1CA21CDCCBA0F9FEDD8AC5A2439F56FEDEAB79A03E24BF226CD74B18C
	__StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB ___327336B1CA21CDCCBA0F9FEDD8AC5A2439F56FEDEAB79A03E24BF226CD74B18C_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// BlockTypes
struct BlockTypes_t64A3007772A174281F57DF45A4F087AF466AF586 
{
	// System.Byte BlockTypes::value__
	uint8_t ___value___2;
};

// Chunk
struct Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060  : public RuntimeObject
{
	// UnityEngine.Vector2Int Chunk::coord
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___coord_0;
	// UnityEngine.GameObject Chunk::chunkObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___chunkObj_1;
	// UnityEngine.MeshRenderer Chunk::meshRend
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRend_2;
	// UnityEngine.MeshFilter Chunk::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_3;
	// System.Int32 Chunk::vertexIndex
	int32_t ___vertexIndex_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Chunk::vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices_5;
	// System.Collections.Generic.List`1<System.Int32> Chunk::triangles
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___triangles_6;
	// System.Collections.Generic.List`1<System.Int32> Chunk::transparentTriangles
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___transparentTriangles_7;
	// UnityEngine.Material[] Chunk::mats
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___mats_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Chunk::uvs
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___uvs_9;
	// System.Byte[,,] Chunk::voxelMap
	ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69* ___voxelMap_10;
	// System.Collections.Generic.Queue`1<VoxelMod> Chunk::mods
	Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___mods_11;
	// World Chunk::m_world
	World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* ___m_world_12;
	// System.Boolean Chunk::IsVoxelMapPopulated
	bool ___IsVoxelMapPopulated_13;
	// System.Boolean Chunk::m_IsActive
	bool ___m_IsActive_14;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.TouchPhase
struct TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E 
{
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;
};

// UnityEngine.TouchType
struct TouchType_t84F82C73BC1A6012141735AD84DA67AA7F7AB43F 
{
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t8B4D3C5D68805ECC40B1C8CA6C7174184BB2C110 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;
};

// VoxelMod
struct VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657  : public RuntimeObject
{
	// UnityEngine.Vector3 VoxelMod::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// System.Byte VoxelMod::id
	uint8_t ___id_1;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// System.Comparison`1<BlockType>
struct Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// BiomeAttributes
struct BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String BiomeAttributes::biomeName
	String_t* ___biomeName_4;
	// System.Int32 BiomeAttributes::solidGroundHeight
	int32_t ___solidGroundHeight_5;
	// System.Int32 BiomeAttributes::terrainWeight
	int32_t ___terrainWeight_6;
	// System.Int32 BiomeAttributes::upperSoilDepth
	int32_t ___upperSoilDepth_7;
	// System.Int32 BiomeAttributes::middleSoilDepth
	int32_t ___middleSoilDepth_8;
	// System.Single BiomeAttributes::terrainScale
	float ___terrainScale_9;
	// System.Single BiomeAttributes::treeZoneScale
	float ___treeZoneScale_10;
	// System.Single BiomeAttributes::treeZoneThreshold
	float ___treeZoneThreshold_11;
	// System.Single BiomeAttributes::treePlacementScale
	float ___treePlacementScale_12;
	// System.Single BiomeAttributes::treePlacementThreshold
	float ___treePlacementThreshold_13;
	// System.Int32 BiomeAttributes::maxTreeHeight
	int32_t ___maxTreeHeight_14;
	// System.Int32 BiomeAttributes::minTreeHeight
	int32_t ___minTreeHeight_15;
	// System.Int32[,] BiomeAttributes::heightMap
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___heightMap_16;
	// World BiomeAttributes::m_world
	World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* ___m_world_17;
};

// BlockType
struct BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// BlockTypes BlockType::Type
	uint8_t ___Type_4;
	// System.Boolean BlockType::isSolid
	bool ___isSolid_5;
	// System.Boolean BlockType::renderNeighborFaces
	bool ___renderNeighborFaces_6;
	// System.Boolean BlockType::isChangeable
	bool ___isChangeable_7;
	// System.Int32 BlockType::backTexture
	int32_t ___backTexture_8;
	// System.Int32 BlockType::frontTexture
	int32_t ___frontTexture_9;
	// System.Int32 BlockType::topTexture
	int32_t ___topTexture_10;
	// System.Int32 BlockType::bottomTexture
	int32_t ___bottomTexture_11;
	// System.Int32 BlockType::leftTexture
	int32_t ___leftTexture_12;
	// System.Int32 BlockType::rightTexture
	int32_t ___rightTexture_13;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DeciduousForestBiome
struct DeciduousForestBiome_t1EFF4091C928FB9DBCEC33420F982CB443A2753C  : public BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083
{
	// System.Int32[,] DeciduousForestBiome::biomassMap
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___biomassMap_18;
	// System.Int32 DeciduousForestBiome::TreeThreshold
	int32_t ___TreeThreshold_19;
	// System.Int32 DeciduousForestBiome::InitialTreeCount
	int32_t ___InitialTreeCount_20;
	// System.Int32 DeciduousForestBiome::TreeDepletionRadius
	int32_t ___TreeDepletionRadius_21;
	// System.Int32 DeciduousForestBiome::TreeDepletionValue
	int32_t ___TreeDepletionValue_22;
	// System.Int32 DeciduousForestBiome::TreeCanopyRadius
	int32_t ___TreeCanopyRadius_23;
	// System.Int32 DeciduousForestBiome::TreeCanopyValue
	int32_t ___TreeCanopyValue_24;
	// System.Int32 DeciduousForestBiome::TreeNeighborRadius
	int32_t ___TreeNeighborRadius_25;
	// System.Int32 DeciduousForestBiome::TreeNeighborValue
	int32_t ___TreeNeighborValue_26;
};

// DesertBiome
struct DesertBiome_t6606106BFD34647E912C739DA06AE456F95E42EA  : public BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083
{
	// System.Single DesertBiome::mesaChance
	float ___mesaChance_18;
	// System.Int32 DesertBiome::mesaHeight
	int32_t ___mesaHeight_19;
	// System.Int32 DesertBiome::mesaBleedOff
	int32_t ___mesaBleedOff_20;
	// System.Single DesertBiome::playaChance
	float ___playaChance_21;
	// System.Single DesertBiome::barrelCactusChance
	float ___barrelCactusChance_22;
	// System.Single DesertBiome::saguaroCactusChance
	float ___saguaroCactusChance_23;
	// System.Int32 DesertBiome::minMesaHeight
	int32_t ___minMesaHeight_24;
	// System.Int32 DesertBiome::maxPlayaHeight
	int32_t ___maxPlayaHeight_25;
	// System.Int32 DesertBiome::minPlayaHeight
	int32_t ___minPlayaHeight_26;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// TiagaBiome
struct TiagaBiome_t24149653E3AA758A2D7FB0678E2C97AD77290AA8  : public BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083
{
	// System.Single TiagaBiome::firTreeGrowthRate
	float ___firTreeGrowthRate_18;
	// System.Single TiagaBiome::treeLinePercentage
	float ___treeLinePercentage_19;
	// System.Single TiagaBiome::muskegChance
	float ___muskegChance_20;
	// System.Int32 TiagaBiome::treeLineHeight
	int32_t ___treeLineHeight_21;
	// System.Int32 TiagaBiome::maxMuskegHeight
	int32_t ___maxMuskegHeight_22;
	// System.Int32 TiagaBiome::minMuskegHeight
	int32_t ___minMuskegHeight_23;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ARTapToPlaceObject::prefabToPlace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabToPlace_4;
	// UnityEngine.GameObject ARTapToPlaceObject::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_5;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARTapToPlaceObject::arRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___arRaycastManager_6;
	// UnityEngine.Vector2 ARTapToPlaceObject::touchPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchPosition_7;
};

struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> ARTapToPlaceObject::hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hits_8;
};

// Buttons
struct Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Loader
struct Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Loader::sceneToLoad
	String_t* ___sceneToLoad_4;
	// UnityEngine.UI.Image Loader::loadingBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___loadingBar_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// World
struct World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 World::Seed
	int32_t ___Seed_4;
	// BiomeAttributes World::biome
	BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083* ___biome_5;
	// UnityEngine.Material World::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_6;
	// UnityEngine.Material World::transparentMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___transparentMat_7;
	// System.Collections.Generic.List`1<BlockType> World::blockTypes
	List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* ___blockTypes_8;
	// Chunk[,] World::chunks
	ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* ___chunks_9;
	// System.Collections.Generic.Queue`1<VoxelMod> World::modifications
	Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___modifications_10;
	// System.Collections.Generic.List`1<Chunk> World::chunksToUpdate
	List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* ___chunksToUpdate_11;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F  : public RuntimeArray
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[,,]
struct ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
	inline uint8_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, uint8_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, uint8_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// Chunk[,]
struct ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3  : public RuntimeArray
{
	ALIGN_FIELD (8) Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* m_Items[1];

	inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A m_Items[1];

	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE1D9FD9DA1EF2CAC4F99EF4E013F05BB8C3507EF_gshared (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8D3E36A587FC98AFD0A3C819B56CA5AF2D6CDAA4_gshared (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_gshared_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_gshared (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_gshared (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean ARTapToPlaceObject::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTapToPlaceObject_TryGetTouchPosition_m37EFBE292089562CBB6BB562333B296B8E274999 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<World>()
inline World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* GameObject_GetComponent_TisWorld_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A_mBE73C6703E4BF5ACB52A011CC2ABB2A9AE6B86FE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void World::RegenWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_RegenWorld_m282136BDA02E34B78186241641902FA93C69BA33 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single Noise::Get2DPerlin(UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, float ___offset1, float ___scale2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3Int::op_Implicit(UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___v0, const RuntimeMethod* method) ;
// System.Boolean World::IsVoxelInWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool World_IsVoxelInWorld_mCAB443D36771C6A8B7673314643414B4662D391F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Void Structure::MakeOakTree(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeOakTree_m7E0F83A0543BBBB2B39ADE94C0172802A2DD4063 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, int32_t ___minTrunkHeight2, int32_t ___maxTrunkHeight3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<VoxelMod>::.ctor()
inline void Queue_1__ctor_m1C6954F125D1AF35749D329B795C645CF40AC297 (Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Chunk::set_IsActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_set_IsActive_mBFD106492533A9E326AEA6790B502BFE67483F7D (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Chunk::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_Init_m3C6077A588924D0CCDD27B671752B7B08E7CE4AE (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Chunk::ClearMeshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_ClearMeshData_m549226FEC5B9554B0A552C34D995A9A8568A6A5F (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_materials_mAB0270CEB5AF2F6A8D21A012E77440DBFCBF9001 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Chunk::PopulateVoxelChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_PopulateVoxelChunk_mB380D0D943E4703E0C7D7992F1FC57E7E7683A91 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) ;
// System.Void Chunk::UpdateChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_UpdateChunk_m70E43B1B78FAF14D6F8649187D85DD571849B835 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Chunk::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Chunk_get_Position_m22BAE7625EE95656B854E5133A13AA4D9032CAA6 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Byte World::CreateVoxel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t World_CreateVoxel_mAF12C5D98AED2C764EE24E59A756B18072C671D0 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<VoxelMod>::Dequeue()
inline VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* Queue_1_Dequeue_m992E7258145F988A857B42A58852EAF88A3796A2 (Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* __this, const RuntimeMethod* method)
{
	return ((  VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* (*) (Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Byte World::GetVoxel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t World_GetVoxel_mEF5B5FBF459C794A6729D6C73FC57FC7B14854BC (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<BlockType>::get_Item(System.Int32)
inline BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8 (List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* (*) (List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<VoxelMod>::get_Count()
inline int32_t Queue_1_get_Count_mF48C194C969E2A67F5B8AFC698EEDF0B8AC612F8_inline (Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void Chunk::UpdateMeshData(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_UpdateMeshData_mC6654131E04AE73B6CCB3CD8830F34ECBCD92AF2 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Void Chunk::CreateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_CreateMesh_mCA6A15729E13F300C92B898BBFA43B74A9928B95 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
inline void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_gshared_inline)(__this, method);
}
// System.Boolean Chunk::CheckVoxel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Chunk_CheckVoxel_m7B20C7D7D286D1577005F5E429671E0D5AE0D166 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Int32 BlockType::GetTextureID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlockType_GetTextureID_mF47DB42E0ECA9D6C3AB8E031870CA832870750BD (BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* __this, int32_t ___faceIndex0, const RuntimeMethod* method) ;
// System.Void Chunk::AddTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_AddTexture_mBD2CDA6508C13D8162FAFF5F662455C21A524D90 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, int32_t ___textureID0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_subMeshCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::SetTriangles(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles0, int32_t ___submesh1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void Chunk::UpdateSurroundingVoxels(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_UpdateSurroundingVoxels_m19FC0D486FA8FC1AC1AC4263D4A6ACA6194B4A88 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// System.Boolean Chunk::IsVoxelInChunk(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Chunk_IsVoxelInChunk_mFFD9CB45834DF1852C9D5CCFC2762468E1F7475D (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// Chunk World::GetChunkFromVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* World_GetChunkFromVector3_m39CCDD4BF22E4CA2E09D08D89A3EB7F45AF9549B (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean World::CheckForTransparentVoxel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool World_CheckForTransparentVoxel_mAA4419374C0C2F9221DE894B8FF9DD5AB98C93D1 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Single VoxelData::get_NormalizedBlockTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VoxelData_get_NormalizedBlockTextureSize_m7C7BC025AB495D39182B942C44B2B9A543EB95F6 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
inline void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline)(__this, ___item0, method);
}
// System.Void BiomeAttributes::CreateBiomeHeightMap(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiomeAttributes_CreateBiomeHeightMap_m0D5BBB81030412A46109C2D41C96CD24F0F49B5F (BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083* __this, int32_t ___mapWidth0, int32_t ___mapHeight1, int32_t ___seed2, const RuntimeMethod* method) ;
// System.Void DeciduousForestBiome::CreateBiomassMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeciduousForestBiome_CreateBiomassMap_mC13BDBA61A8CB52F33CF73007DCB70A56ED31B2C (DeciduousForestBiome_t1EFF4091C928FB9DBCEC33420F982CB443A2753C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::.ctor()
inline void List_1__ctor_mE1D9FD9DA1EF2CAC4F99EF4E013F05BB8C3507EF (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*, const RuntimeMethod*))List_1__ctor_mE1D9FD9DA1EF2CAC4F99EF4E013F05BB8C3507EF_gshared)(__this, method);
}
// System.Int32 VoxelData::get_WorldSizeInVoxels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Contains(T)
inline bool List_1_Contains_m8D3E36A587FC98AFD0A3C819B56CA5AF2D6CDAA4 (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))List_1_Contains_m8D3E36A587FC98AFD0A3C819B56CA5AF2D6CDAA4_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Add(T)
inline void List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_gshared_inline)(__this, ___item0, method);
}
// System.Void DeciduousForestBiome::UpdateBiomassMap(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeciduousForestBiome_UpdateBiomassMap_m81FB83915062A6634541DA565EB0A9C6FE721320 (DeciduousForestBiome_t1EFF4091C928FB9DBCEC33420F982CB443A2753C* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___treePoint0, const RuntimeMethod* method) ;
// System.Boolean DeciduousForestBiome::CalcTreePosition(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeciduousForestBiome_CalcTreePosition_mF1091D4BD7A2C97108CAC0A2740D7A87A6A820F4 (DeciduousForestBiome_t1EFF4091C928FB9DBCEC33420F982CB443A2753C* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___treePoint0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void BiomeAttributes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiomeAttributes__ctor_mF8BF494FE566405D219DD9509BEFB65850E6245B (BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083* __this, const RuntimeMethod* method) ;
// System.Boolean World::CheckForVoxel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool World_CheckForVoxel_mC09DF03B6CFC60530D2E59370AD2AFD28DE0A720 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Void Structure::MakeCactus(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>,System.Int32,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeCactus_mFEEDFE227E70A17EB41EBC5E0C523CD63F16465F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, int32_t ___minCactusHeight2, int32_t ___maxCactusHeight3, float ___barrelCactusChance4, float ___saguaroCactusChance5, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Loader::LoadAsyncOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loader_LoadAsyncOperation_m77CBD283596E2EF63E58878F53EA0298C86361D9 (Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Loader/<LoadAsyncOperation>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncOperationU3Ed__3__ctor_m11E8948200AE13EBEB6F76641760B8360425E478 (U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4 (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// System.Void VoxelMod::.ctor(UnityEngine.Vector3Int,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744 (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___pos0, uint8_t ___id1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<VoxelMod>::Enqueue(T)
inline void Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC (Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* __this, VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C*, VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void Structure::MakeBarrelCactus(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeBarrelCactus_m18E75B44A3349FDA97B290B6D5B6680A9E794657 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, const RuntimeMethod* method) ;
// System.Void Structure::MakeSaguaroCactus(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeSaguaroCactus_mE80FCA0B2B9064A94F45F13BDE284C9AA6187CAA (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, int32_t ___minCactusHeight2, int32_t ___maxCactusHeight3, const RuntimeMethod* method) ;
// System.Void Structure::MakeStandardCactus(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeStandardCactus_m02983B99636F64028347F14F8BCE5B9CD9544575 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, int32_t ___minCactusHeight2, int32_t ___maxCactusHeight3, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
inline Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
inline void Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6 (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
inline bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_gshared)(__this, method);
}
// System.Void Structure::MakeMuskeg(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeMuskeg_m5DA5EA565E9BD31DE1986CDA648A68FF103C9B36 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, const RuntimeMethod* method) ;
// System.Void Structure::MakeFirTree(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeFirTree_mC7B4917610E64CA22B61A2C1912C2199D033EC54 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, int32_t ___minTrunkHeight2, int32_t ___maxTrunkHeight3, float ___growthRate4, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<VoxelMod>::Clear()
inline void Queue_1_Clear_m9D787047CB23C896A2970286FD97ABF763229310 (Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Chunk>::Clear()
inline void List_1_Clear_mE4028DB4640843341A84E278E1E4ED8D2C269072_inline (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<BlockType>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m1843D7C1FF809202CA93549AAEF462B66564470D (Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<BlockType>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m39F3118DF8CD60263992588EAEC7657E3069C257 (List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* __this, Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54*, Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___comparison0, method);
}
// System.Void World::GenerateWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_GenerateWorld_m43F25BF94D90C4A9009A531350CE3A980EFF3217 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Chunk::.ctor(UnityEngine.Vector2Int,World,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk__ctor_mFEB4AC3A0F539428C76E2C2337B68F985A99307C (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___position0, World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* ___world1, bool ___generateOnLoad2, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int World::GetChunkCoordFromVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A World_GetChunkCoordFromVector3_mEDD6F9A0ACBCE5D6D51CBB881E18ED61F56353F9 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Chunk>::Contains(T)
inline bool List_1_Contains_mCC7E3652B85916B15144BC84022D495330D5BB98 (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* __this, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA*, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Chunk>::Add(T)
inline void List_1_Add_m40E5A66F960153686935BD4FF642E19D4D36BA1A_inline (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* __this, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA*, Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Chunk>::GetEnumerator()
inline Enumerator_t107CFDFD7019E96B01A5700B99186BC49A9B4995 List_1_GetEnumerator_m10E5FA90858C52C957967928E4A3E60E5F88968A (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t107CFDFD7019E96B01A5700B99186BC49A9B4995 (*) (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Chunk>::Dispose()
inline void Enumerator_Dispose_m0E79EFD1D346651307EA0283ACB160FB2BC97D8E (Enumerator_t107CFDFD7019E96B01A5700B99186BC49A9B4995* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t107CFDFD7019E96B01A5700B99186BC49A9B4995*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Chunk>::get_Current()
inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* Enumerator_get_Current_m02EE45B0FB462E64102878F9418E2E1E20212AD8_inline (Enumerator_t107CFDFD7019E96B01A5700B99186BC49A9B4995* __this, const RuntimeMethod* method)
{
	return ((  Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* (*) (Enumerator_t107CFDFD7019E96B01A5700B99186BC49A9B4995*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Chunk>::MoveNext()
inline bool Enumerator_MoveNext_m7F74D0550846D7BAA5A0B52A711FE60D44868EAA (Enumerator_t107CFDFD7019E96B01A5700B99186BC49A9B4995* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t107CFDFD7019E96B01A5700B99186BC49A9B4995*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Vector2Int VoxelData::Vector3ToVector2Int(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A VoxelData_Vector3ToVector2Int_mD86829589F9578B72B9BA1A7743C9EB0D9EB8116 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Byte Chunk::GetVoxelFromGlobalVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Chunk_GetVoxelFromGlobalVector3_mFC87E5E8549480CC63766BF3DB6A7CEB93B33AEA (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.Vector3Int::FloorToInt(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_FloorToInt_mC770CCF49963DEABABC73A2459D3CF8C5AE825E8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Chunk>::.ctor()
inline void List_1__ctor_mAEBFD74C6C8CF3E70E6E414A7349E8EC3C476605 (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void World/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEA50BA93FFE210ED82B11CCB903278E88919C5D9 (U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Enum::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enum_CompareTo_m7857C6F62098FB59C5334577863DD23559CD50B5 (RuntimeObject* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void ARTapToPlaceObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Awake_mD41874ABE87A6EB0F15949E24F6632BD8C246173 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// arRaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___arRaycastManager_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arRaycastManager_6), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean ARTapToPlaceObject::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTapToPlaceObject_TryGetTouchPosition_m37EFBE292089562CBB6BB562333B296B8E274999 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// if(Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// touchPosition = Input.GetTouch(0).position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___touchPosition0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_3;
		L_3 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_1 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_2 = L_4;
		// return true;
		V_2 = (bool)1;
		goto IL_0031;
	}

IL_0026:
	{
		// touchPosition = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___touchPosition0;
		il2cpp_codegen_initobj(L_5, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// return false;
		V_2 = (bool)0;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void ARTapToPlaceObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Update_m9B0A45DCE03CA35CFA8CF6CAB12F0369A1C1BAF4 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWorld_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A_mBE73C6703E4BF5ACB52A011CC2ABB2A9AE6B86FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// if(!TryGetTouchPosition(out Vector2 touchPosition))
		bool L_0;
		L_0 = ARTapToPlaceObject_TryGetTouchPosition_m37EFBE292089562CBB6BB562333B296B8E274999(__this, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_00a0;
	}

IL_0016:
	{
		// if(arRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_2 = __this->___arRaycastManager_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_4 = ((ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields*)il2cpp_codegen_static_fields_for(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var))->___hits_8;
		NullCheck(L_2);
		bool L_5;
		L_5 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_2, L_3, L_4, 1, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00a0;
		}
	}
	{
		// var hitPose = hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = ((ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields*)il2cpp_codegen_static_fields_for(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var))->___hits_8;
		NullCheck(L_7);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_8;
		L_8 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_7, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_4 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_4), NULL);
		V_3 = L_9;
		// if(spawnedObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___spawnedObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_11;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0086;
		}
	}
	{
		// spawnedObject = Instantiate(prefabToPlace, hitPose.position, hitPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___prefabToPlace_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = L_16.___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_13, L_15, L_17, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___spawnedObject_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_5), (void*)L_18);
		// spawnedObject.GetComponent<World>().RegenWorld();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___spawnedObject_5;
		NullCheck(L_19);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_20;
		L_20 = GameObject_GetComponent_TisWorld_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A_mBE73C6703E4BF5ACB52A011CC2ABB2A9AE6B86FE(L_19, GameObject_GetComponent_TisWorld_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A_mBE73C6703E4BF5ACB52A011CC2ABB2A9AE6B86FE_RuntimeMethod_var);
		NullCheck(L_20);
		World_RegenWorld_m282136BDA02E34B78186241641902FA93C69BA33(L_20, NULL);
		goto IL_009f;
	}

IL_0086:
	{
		// spawnedObject.transform.position = hitPose.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___spawnedObject_5;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_23 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23.___position_0;
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_24, NULL);
	}

IL_009f:
	{
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject__ctor_m835E4B900ABF4C300EE8938022D18FA3FDD16884 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ARTapToPlaceObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject__cctor_m84BFF41E28F3CC79B257B34BC38163E50A461774 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields*)il2cpp_codegen_static_fields_for(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var))->___hits_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields*)il2cpp_codegen_static_fields_for(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var))->___hits_8), (void*)L_0);
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
// System.Void BiomeAttributes::CreateBiomeHeightMap(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiomeAttributes_CreateBiomeHeightMap_m0D5BBB81030412A46109C2D41C96CD24F0F49B5F (BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083* __this, int32_t ___mapWidth0, int32_t ___mapHeight1, int32_t ___seed2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// heightMap = new int[mapWidth, mapHeight];
		int32_t L_0 = ___mapWidth0;
		int32_t L_1 = ___mapHeight1;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_2 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_3);
		__this->___heightMap_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heightMap_16), (void*)L_2);
		// for (int x = 0; x < mapWidth; x++)
		V_0 = 0;
		goto IL_0061;
	}

IL_0012:
	{
		// for (int z = 0; z < mapHeight; z++)
		V_1 = 0;
		goto IL_0054;
	}

IL_0017:
	{
		// heightMap[x, z] = Mathf.FloorToInt(terrainWeight * Noise.Get2DPerlin(new Vector2(x, z), seed, terrainScale)) + solidGroundHeight;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_4 = __this->___heightMap_16;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = __this->___terrainWeight_6;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)L_8), ((float)L_9), /*hidden argument*/NULL);
		int32_t L_11 = ___seed2;
		float L_12 = __this->___terrainScale_9;
		float L_13;
		L_13 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_10, ((float)L_11), L_12, NULL);
		int32_t L_14;
		L_14 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(((float)L_7), L_13)), NULL);
		int32_t L_15 = __this->___solidGroundHeight_5;
		NullCheck(L_4);
		(L_4)->SetAt(L_5, L_6, ((int32_t)il2cpp_codegen_add(L_14, L_15)));
		// for (int z = 0; z < mapHeight; z++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0054:
	{
		// for (int z = 0; z < mapHeight; z++)
		int32_t L_17 = V_1;
		int32_t L_18 = ___mapHeight1;
		V_2 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_2;
		if (L_19)
		{
			goto IL_0017;
		}
	}
	{
		// for (int x = 0; x < mapWidth; x++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0061:
	{
		// for (int x = 0; x < mapWidth; x++)
		int32_t L_21 = V_0;
		int32_t L_22 = ___mapWidth0;
		V_3 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_3;
		if (L_23)
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Byte BiomeAttributes::CreateBiomeSpecificVoxel(UnityEngine.Vector3Int,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BiomeAttributes_CreateBiomeSpecificVoxel_mBDF8A6ADBEE9F1D760A7D2F7054A8A663FBB7F8D (BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___pos0, int32_t ___seed1, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	uint8_t V_10 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// byte voxelValue = 0;
		V_0 = (uint8_t)0;
		// if (!World.IsVoxelInWorld(pos))
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_0, NULL);
		bool L_2;
		L_2 = World_IsVoxelInWorld_mCAB443D36771C6A8B7673314643414B4662D391F(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.NULL;//empty block
		V_0 = (uint8_t)0;
		goto IL_0157;
	}

IL_001e:
	{
		// else if (pos.y == 0)
		int32_t L_4;
		L_4 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Bedrock;//bedrock
		V_0 = (uint8_t)3;
		goto IL_0157;
	}

IL_0035:
	{
		// else if (pos.y > heightMap[pos.x, pos.z])//above ground
		int32_t L_6;
		L_6 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_7 = __this->___heightMap_16;
		int32_t L_8;
		L_8 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_9;
		L_9 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = (L_7)->GetAt(L_8, L_9);
		V_3 = (bool)((((int32_t)L_6) > ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Air;//air
		V_0 = (uint8_t)2;
		goto IL_0157;
	}

IL_0064:
	{
		// else if (pos.y == heightMap[pos.x, pos.z])//top layer
		int32_t L_12;
		L_12 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_13 = __this->___heightMap_16;
		int32_t L_14;
		L_14 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_15;
		L_15 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_13);
		int32_t L_16;
		L_16 = (L_13)->GetAt(L_14, L_15);
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Grass;
		V_0 = (uint8_t)6;
		goto IL_0157;
	}

IL_0095:
	{
		// else if (pos.y < heightMap[pos.x, pos.z] && pos.y >= heightMap[pos.x, pos.z] - upperSoilDepth)//upper soil layer
		int32_t L_18;
		L_18 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_19 = __this->___heightMap_16;
		int32_t L_20;
		L_20 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_21;
		L_21 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_19);
		int32_t L_22;
		L_22 = (L_19)->GetAt(L_20, L_21);
		if ((((int32_t)L_18) >= ((int32_t)L_22)))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_23;
		L_23 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_24 = __this->___heightMap_16;
		int32_t L_25;
		L_25 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_26;
		L_26 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_24);
		int32_t L_27;
		L_27 = (L_24)->GetAt(L_25, L_26);
		int32_t L_28 = __this->___upperSoilDepth_7;
		G_B11_0 = ((((int32_t)((((int32_t)L_23) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_27, L_28))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e6;
	}

IL_00e5:
	{
		G_B11_0 = 0;
	}

IL_00e6:
	{
		V_5 = (bool)G_B11_0;
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00f2;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Dirt;
		V_0 = (uint8_t)5;
		goto IL_0157;
	}

IL_00f2:
	{
		// else if (pos.y < heightMap[pos.x, pos.z] && pos.y > (heightMap[pos.x, pos.z] - upperSoilDepth) - middleSoilDepth)//mid soil layer
		int32_t L_30;
		L_30 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_31 = __this->___heightMap_16;
		int32_t L_32;
		L_32 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_33;
		L_33 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_31);
		int32_t L_34;
		L_34 = (L_31)->GetAt(L_32, L_33);
		if ((((int32_t)L_30) >= ((int32_t)L_34)))
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_35;
		L_35 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_36 = __this->___heightMap_16;
		int32_t L_37;
		L_37 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_38;
		L_38 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_36);
		int32_t L_39;
		L_39 = (L_36)->GetAt(L_37, L_38);
		int32_t L_40 = __this->___upperSoilDepth_7;
		int32_t L_41 = __this->___middleSoilDepth_8;
		G_B16_0 = ((((int32_t)L_35) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_39, L_40)), L_41))))? 1 : 0);
		goto IL_0147;
	}

IL_0146:
	{
		G_B16_0 = 0;
	}

IL_0147:
	{
		V_6 = (bool)G_B16_0;
		bool L_42 = V_6;
		if (!L_42)
		{
			goto IL_0153;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Dirt;
		V_0 = (uint8_t)5;
		goto IL_0157;
	}

IL_0153:
	{
		// voxelValue = (byte)BlockTypes.Stone;//stone, ores, other underground stuff
		V_0 = (uint8_t)4;
	}

IL_0157:
	{
		// if (pos.y == heightMap[pos.x, pos.z])
		int32_t L_43;
		L_43 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_44 = __this->___heightMap_16;
		int32_t L_45;
		L_45 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_46;
		L_46 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_44);
		int32_t L_47;
		L_47 = (L_44)->GetAt(L_45, L_46);
		V_7 = (bool)((((int32_t)L_43) == ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_7;
		if (!L_48)
		{
			goto IL_020d;
		}
	}
	{
		// if (Noise.Get2DPerlin(new Vector2(pos.x, pos.z), -seed, treeZoneScale) > treeZoneThreshold)
		int32_t L_49;
		L_49 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_50;
		L_50 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_51), ((float)L_49), ((float)L_50), /*hidden argument*/NULL);
		int32_t L_52 = ___seed1;
		float L_53 = __this->___treeZoneScale_10;
		float L_54;
		L_54 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_51, ((float)((-L_52))), L_53, NULL);
		float L_55 = __this->___treeZoneThreshold_11;
		V_8 = (bool)((((float)L_54) > ((float)L_55))? 1 : 0);
		bool L_56 = V_8;
		if (!L_56)
		{
			goto IL_020c;
		}
	}
	{
		// if (Noise.Get2DPerlin(new Vector2(pos.x, pos.z), -seed, treePlacementScale) > treePlacementThreshold)
		int32_t L_57;
		L_57 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_58;
		L_58 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_59), ((float)L_57), ((float)L_58), /*hidden argument*/NULL);
		int32_t L_60 = ___seed1;
		float L_61 = __this->___treePlacementScale_12;
		float L_62;
		L_62 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_59, ((float)((-L_60))), L_61, NULL);
		float L_63 = __this->___treePlacementThreshold_13;
		V_9 = (bool)((((float)L_62) > ((float)L_63))? 1 : 0);
		bool L_64 = V_9;
		if (!L_64)
		{
			goto IL_020b;
		}
	}
	{
		// Structure.MakeOakTree(pos, m_world.modifications, minTreeHeight, maxTreeHeight);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_65 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_65, NULL);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_67 = __this->___m_world_17;
		NullCheck(L_67);
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_68 = L_67->___modifications_10;
		int32_t L_69 = __this->___minTreeHeight_15;
		int32_t L_70 = __this->___maxTreeHeight_14;
		Structure_MakeOakTree_m7E0F83A0543BBBB2B39ADE94C0172802A2DD4063(L_66, L_68, L_69, L_70, NULL);
	}

IL_020b:
	{
	}

IL_020c:
	{
	}

IL_020d:
	{
		// return voxelValue;
		uint8_t L_71 = V_0;
		V_10 = L_71;
		goto IL_0212;
	}

IL_0212:
	{
		// }
		uint8_t L_72 = V_10;
		return L_72;
	}
}
// System.Void BiomeAttributes::SetUpReferences(World)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiomeAttributes_SetUpReferences_m5F999E52F8574D494F80088CA8D8FC147E57F7FA (BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083* __this, World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* ___world0, const RuntimeMethod* method) 
{
	{
		// m_world = world;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_0 = ___world0;
		__this->___m_world_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_world_17), (void*)L_0);
		// }
		return;
	}
}
// System.Void BiomeAttributes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiomeAttributes__ctor_mF8BF494FE566405D219DD9509BEFB65850E6245B (BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083* __this, const RuntimeMethod* method) 
{
	{
		// [Tooltip("Minimum ground height")] public int solidGroundHeight = 0;
		__this->___solidGroundHeight_5 = 0;
		// [Tooltip("Weight of the terrain")] public int terrainWeight = 0;
		__this->___terrainWeight_6 = 0;
		// [Tooltip("Depth of upper soil layer")] public int upperSoilDepth = 0;
		__this->___upperSoilDepth_7 = 0;
		// [Tooltip("Depth of midd soil layer")] public int middleSoilDepth = 0;
		__this->___middleSoilDepth_8 = 0;
		// [Tooltip("How agressively noise is applied")] public float terrainScale = 0;
		__this->___terrainScale_9 = (0.0f);
		// public float treeZoneScale = 1.3f;
		__this->___treeZoneScale_10 = (1.29999995f);
		// [Range(0f, 1f)] public float treeZoneThreshold = 0.6f;
		__this->___treeZoneThreshold_11 = (0.600000024f);
		// public float treePlacementScale = 15f;
		__this->___treePlacementScale_12 = (15.0f);
		// [Range(0f, 1f)] public float treePlacementThreshold = 0.8f;
		__this->___treePlacementThreshold_13 = (0.800000012f);
		// public int maxTreeHeight = 12;
		__this->___maxTreeHeight_14 = ((int32_t)12);
		// public int minTreeHeight = 5;
		__this->___minTreeHeight_15 = 5;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String BlockType::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BlockType_GetName_m646FDFE90AEC912A04D5D7BEC46701B49CC787EB (BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockTypes_t64A3007772A174281F57DF45A4F087AF466AF586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Type.ToString();
		uint8_t* L_0 = (&__this->___Type_4);
		Il2CppFakeBox<uint8_t> L_1(BlockTypes_t64A3007772A174281F57DF45A4F087AF466AF586_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 BlockType::GetTextureID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlockType_GetTextureID_mF47DB42E0ECA9D6C3AB8E031870CA832870750BD (BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* __this, int32_t ___faceIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5828A3ADA3BF55D7FCF310057E8E8D83EEF17E0F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (faceIndex)
		int32_t L_0 = ___faceIndex0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_0040;
			}
			case 4:
			{
				goto IL_0049;
			}
			case 5:
			{
				goto IL_0052;
			}
		}
	}
	{
		goto IL_005b;
	}

IL_0025:
	{
		// return backTexture;
		int32_t L_3 = __this->___backTexture_8;
		V_2 = L_3;
		goto IL_006a;
	}

IL_002e:
	{
		// return frontTexture;
		int32_t L_4 = __this->___frontTexture_9;
		V_2 = L_4;
		goto IL_006a;
	}

IL_0037:
	{
		// return topTexture;
		int32_t L_5 = __this->___topTexture_10;
		V_2 = L_5;
		goto IL_006a;
	}

IL_0040:
	{
		// return bottomTexture;
		int32_t L_6 = __this->___bottomTexture_11;
		V_2 = L_6;
		goto IL_006a;
	}

IL_0049:
	{
		// return leftTexture;
		int32_t L_7 = __this->___leftTexture_12;
		V_2 = L_7;
		goto IL_006a;
	}

IL_0052:
	{
		// return rightTexture;
		int32_t L_8 = __this->___rightTexture_13;
		V_2 = L_8;
		goto IL_006a;
	}

IL_005b:
	{
		// Debug.LogError("ERROR IN GetTextureID; INVALID FACE INDEX");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral5828A3ADA3BF55D7FCF310057E8E8D83EEF17E0F, NULL);
		// return 0;
		V_2 = 0;
		goto IL_006a;
	}

IL_006a:
	{
		// }
		int32_t L_9 = V_2;
		return L_9;
	}
}
// System.Void BlockType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockType__ctor_m01D147616C69AE038659A05074C55D6A7645A0AE (BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Buttons::LoadDesert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_LoadDesert_m8CCB19FC2355F3188CE22461F08C32AB1B3723E6 (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E1E9E79D53CAC30542BB8F702A0858EB9ABC66F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Loading Desert");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral0E1E9E79D53CAC30542BB8F702A0858EB9ABC66F, NULL);
		// }
		return;
	}
}
// System.Void Buttons::LoadTaiga()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_LoadTaiga_m1FD9162621F4A37AF10A807FBECF7AED4E5037D5 (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96FFD63B17422DC4201E28F0F9A4E44E280CABDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Loading Taiga");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral96FFD63B17422DC4201E28F0F9A4E44E280CABDE, NULL);
		// }
		return;
	}
}
// System.Void Buttons::LoadForest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_LoadForest_m7768240216B9A984088F0EE34380531DF253E6C8 (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC41E8F4837D2C0D778584628EAF69E5048498B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Loading Forest");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralAC41E8F4837D2C0D778584628EAF69E5048498B6, NULL);
		// }
		return;
	}
}
// System.Void Buttons::LoadMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_LoadMainMenu_m8E18919AE51BBBAAABE04511425444C6A931C219 (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Main Menu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7, NULL);
		// }
		return;
	}
}
// System.Void Buttons::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons__ctor_m3217EFBF53FE9D652EF123BDA4A06F98E196441D (Buttons_t1B1459E6D0D4AC3927CAC76C58780A554E0CD473* __this, const RuntimeMethod* method) 
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
// System.Boolean Chunk::get_IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Chunk_get_IsActive_mF3F2EBB6C33B53B7BB1813624AC578FF3682ADB2 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return m_IsActive;
		bool L_0 = __this->___m_IsActive_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Chunk::set_IsActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_set_IsActive_mBFD106492533A9E326AEA6790B502BFE67483F7D (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_IsActive = value;
		bool L_0 = ___value0;
		__this->___m_IsActive_14 = L_0;
		// if (chunkObj != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___chunkObj_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// chunkObj.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___chunkObj_1;
		bool L_5 = ___value0;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Chunk::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Chunk_get_Position_m22BAE7625EE95656B854E5133A13AA4D9032CAA6 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return chunkObj.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___chunkObj_1;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		return L_3;
	}
}
// System.Void Chunk::.ctor(UnityEngine.Vector2Int,World,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk__ctor_mFEB4AC3A0F539428C76E2C2337B68F985A99307C (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___position0, World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* ___world1, bool ___generateOnLoad2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m1C6954F125D1AF35749D329B795C645CF40AC297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// int vertexIndex = 0;
		__this->___vertexIndex_4 = 0;
		// List<Vector3> vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___vertices_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_5), (void*)L_0);
		// List<int> triangles = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_1, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___triangles_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___triangles_6), (void*)L_1);
		// List<int> transparentTriangles = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_2, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___transparentTriangles_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transparentTriangles_7), (void*)L_2);
		// Material[] mats = new Material[2];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)SZArrayNew(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___mats_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mats_8), (void*)L_3);
		// List<Vector2> uvs = new List<Vector2>();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_4 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_4, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		__this->___uvs_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uvs_9), (void*)L_4);
		// public byte[,,] voxelMap = new byte[VoxelData.ChunkWidth, VoxelData.ChunkHeight, VoxelData.ChunkWidth];
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_5 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		int32_t L_6 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkHeight_1;
		int32_t L_7 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		il2cpp_array_size_t L_9[] = { (il2cpp_array_size_t)L_5, (il2cpp_array_size_t)L_6, (il2cpp_array_size_t)L_7 };
		ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69* L_8 = (ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69*)GenArrayNew(ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69_il2cpp_TypeInfo_var, L_9);
		__this->___voxelMap_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voxelMap_10), (void*)L_8);
		// public Queue<VoxelMod> mods = new Queue<VoxelMod>();
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_10 = (Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C*)il2cpp_codegen_object_new(Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Queue_1__ctor_m1C6954F125D1AF35749D329B795C645CF40AC297(L_10, Queue_1__ctor_m1C6954F125D1AF35749D329B795C645CF40AC297_RuntimeMethod_var);
		__this->___mods_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mods_11), (void*)L_10);
		// public bool IsVoxelMapPopulated = false;
		__this->___IsVoxelMapPopulated_13 = (bool)0;
		// public Chunk(Vector2Int position, World world, bool generateOnLoad)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// coord = position;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_11 = ___position0;
		__this->___coord_0 = L_11;
		// m_world = world;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_12 = ___world1;
		__this->___m_world_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_world_12), (void*)L_12);
		// IsActive = true;
		Chunk_set_IsActive_mBFD106492533A9E326AEA6790B502BFE67483F7D(__this, (bool)1, NULL);
		// if (generateOnLoad)
		bool L_13 = ___generateOnLoad2;
		V_0 = L_13;
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_0097;
		}
	}
	{
		// Init();
		Chunk_Init_m3C6077A588924D0CCDD27B671752B7B08E7CE4AE(__this, NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void Chunk::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_Finalize_m381A17DEFB6220AD930645622AF60F4665FB6D41 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// ClearMeshData();
			Chunk_ClearMeshData_m549226FEC5B9554B0A552C34D995A9A8568A6A5F(__this, NULL);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Chunk::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_Init_m3C6077A588924D0CCDD27B671752B7B08E7CE4AE (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD05429B2F418E84391233531A47B78CD03B7AB9B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// chunkObj = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_0, NULL);
		__this->___chunkObj_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chunkObj_1), (void*)L_0);
		// meshFilter = chunkObj.AddComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___chunkObj_1;
		NullCheck(L_1);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2;
		L_2 = GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94(L_1, GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		__this->___meshFilter_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_3), (void*)L_2);
		// meshRend = chunkObj.AddComponent<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___chunkObj_1;
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D(L_3, GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		__this->___meshRend_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRend_2), (void*)L_4);
		// mats[0] = m_world.mat;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_5 = __this->___mats_8;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_6 = __this->___m_world_12;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = L_6->___mat_6;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_7);
		// mats[1] = m_world.transparentMat;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_8 = __this->___mats_8;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_9 = __this->___m_world_12;
		NullCheck(L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = L_9->___transparentMat_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_10);
		// meshRend.materials = mats;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_11 = __this->___meshRend_2;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_12 = __this->___mats_8;
		NullCheck(L_11);
		Renderer_set_materials_mAB0270CEB5AF2F6A8D21A012E77440DBFCBF9001(L_11, L_12, NULL);
		// chunkObj.transform.SetParent(m_world.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___chunkObj_1;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_15 = __this->___m_world_12;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_14);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_14, L_16, NULL);
		// chunkObj.transform.position = new Vector3(coord.x * VoxelData.ChunkWidth, 0, coord.y * VoxelData.ChunkWidth);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___chunkObj_1;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_19 = (&__this->___coord_0);
		int32_t L_20;
		L_20 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_21 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_22 = (&__this->___coord_0);
		int32_t L_23;
		L_23 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_22, NULL);
		int32_t L_24 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), ((float)((int32_t)il2cpp_codegen_multiply(L_20, L_21))), (0.0f), ((float)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_25, NULL);
		// chunkObj.name = "Chunk (" + coord.x + ", " + coord.y + ")";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___chunkObj_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteralD05429B2F418E84391233531A47B78CD03B7AB9B);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD05429B2F418E84391233531A47B78CD03B7AB9B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_30 = (&__this->___coord_0);
		int32_t L_31;
		L_31 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_30, NULL);
		V_0 = L_31;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_29;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_35 = (&__this->___coord_0);
		int32_t L_36;
		L_36 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_35, NULL);
		V_0 = L_36;
		String_t* L_37;
		L_37 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_34;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_39;
		L_39 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_38, NULL);
		NullCheck(L_26);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_26, L_39, NULL);
		// PopulateVoxelChunk();
		Chunk_PopulateVoxelChunk_mB380D0D943E4703E0C7D7992F1FC57E7E7683A91(__this, NULL);
		// UpdateChunk();
		Chunk_UpdateChunk_m70E43B1B78FAF14D6F8649187D85DD571849B835(__this, NULL);
		// }
		return;
	}
}
// System.Void Chunk::PopulateVoxelChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_PopulateVoxelChunk_mB380D0D943E4703E0C7D7992F1FC57E7E7683A91 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// for (int y = 0; y < VoxelData.ChunkHeight; y++)
		V_0 = 0;
		goto IL_0068;
	}

IL_0005:
	{
		// for (int x = 0; x < VoxelData.ChunkWidth; x++)
		V_1 = 0;
		goto IL_0055;
	}

IL_000a:
	{
		// for (int z = 0; z < VoxelData.ChunkWidth; z++)
		V_2 = 0;
		goto IL_0044;
	}

IL_000f:
	{
		// voxelMap[x, y, z] = m_world.CreateVoxel(new Vector3(x, y, z) + Position);
		ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69* L_0 = __this->___voxelMap_10;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_2;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_4 = __this->___m_world_12;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), ((float)L_5), ((float)L_6), ((float)L_7), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Chunk_get_Position_m22BAE7625EE95656B854E5133A13AA4D9032CAA6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_8, L_9, NULL);
		NullCheck(L_4);
		uint8_t L_11;
		L_11 = World_CreateVoxel_mAF12C5D98AED2C764EE24E59A756B18072C671D0(L_4, L_10, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(L_1, L_2, L_3, L_11);
		// for (int z = 0; z < VoxelData.ChunkWidth; z++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0044:
	{
		// for (int z = 0; z < VoxelData.ChunkWidth; z++)
		int32_t L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_14 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_000f;
		}
	}
	{
		// for (int x = 0; x < VoxelData.ChunkWidth; x++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0055:
	{
		// for (int x = 0; x < VoxelData.ChunkWidth; x++)
		int32_t L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_18 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_4;
		if (L_19)
		{
			goto IL_000a;
		}
	}
	{
		// for (int y = 0; y < VoxelData.ChunkHeight; y++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0068:
	{
		// for (int y = 0; y < VoxelData.ChunkHeight; y++)
		int32_t L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_22 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkHeight_1;
		V_5 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0005;
		}
	}
	{
		// IsVoxelMapPopulated = true;
		__this->___IsVoxelMapPopulated_13 = (bool)1;
		// }
		return;
	}
}
// System.Void Chunk::UpdateChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_UpdateChunk_m70E43B1B78FAF14D6F8649187D85DD571849B835 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m992E7258145F988A857B42A58852EAF88A3796A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mF48C194C969E2A67F5B8AFC698EEDF0B8AC612F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* V_0 = NULL;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		goto IL_0075;
	}

IL_0003:
	{
		// VoxelMod voxMod = mods.Dequeue();
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_0 = __this->___mods_11;
		NullCheck(L_0);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_1;
		L_1 = Queue_1_Dequeue_m992E7258145F988A857B42A58852EAF88A3796A2(L_0, Queue_1_Dequeue_m992E7258145F988A857B42A58852EAF88A3796A2_RuntimeMethod_var);
		V_0 = L_1;
		// if (m_world.blockTypes[m_world.GetVoxel(voxMod.position)].isChangeable)
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_2 = __this->___m_world_12;
		NullCheck(L_2);
		List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* L_3 = L_2->___blockTypes_8;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_4 = __this->___m_world_12;
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_5 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5->___position_0;
		NullCheck(L_4);
		uint8_t L_7;
		L_7 = World_GetVoxel_mEF5B5FBF459C794A6729D6C73FC57FC7B14854BC(L_4, L_6, NULL);
		NullCheck(L_3);
		BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* L_8;
		L_8 = List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8(L_3, L_7, List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_9 = L_8->___isChangeable_7;
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		// Vector3 pos = voxMod.position - Position;
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_11 = V_0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Chunk_get_Position_m22BAE7625EE95656B854E5133A13AA4D9032CAA6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_12, L_13, NULL);
		V_2 = L_14;
		// voxelMap[(int)pos.x, (int)pos.y, (int)pos.z] = voxMod.id;
		ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69* L_15 = __this->___voxelMap_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		float L_21 = L_20.___z_4;
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_22 = V_0;
		NullCheck(L_22);
		uint8_t L_23 = L_22->___id_1;
		NullCheck(L_15);
		(L_15)->SetAt(il2cpp_codegen_cast_double_to_int<int32_t>(L_17), il2cpp_codegen_cast_double_to_int<int32_t>(L_19), il2cpp_codegen_cast_double_to_int<int32_t>(L_21), L_23);
	}

IL_0074:
	{
	}

IL_0075:
	{
		// while (mods.Count > 0)
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_24 = __this->___mods_11;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Queue_1_get_Count_mF48C194C969E2A67F5B8AFC698EEDF0B8AC612F8_inline(L_24, Queue_1_get_Count_mF48C194C969E2A67F5B8AFC698EEDF0B8AC612F8_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
		bool L_26 = V_3;
		if (L_26)
		{
			goto IL_0003;
		}
	}
	{
		// ClearMeshData();
		Chunk_ClearMeshData_m549226FEC5B9554B0A552C34D995A9A8568A6A5F(__this, NULL);
		// for (int y = 0; y < VoxelData.ChunkHeight; y++)
		V_4 = 0;
		goto IL_011c;
	}

IL_0099:
	{
		// for (int x = 0; x < VoxelData.ChunkWidth; x++)
		V_5 = 0;
		goto IL_0106;
	}

IL_009f:
	{
		// for (int z = 0; z < VoxelData.ChunkWidth; z++)
		V_6 = 0;
		goto IL_00f0;
	}

IL_00a5:
	{
		// if (m_world.blockTypes[voxelMap[x, y, z]].isSolid)
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_27 = __this->___m_world_12;
		NullCheck(L_27);
		List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* L_28 = L_27->___blockTypes_8;
		ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69* L_29 = __this->___voxelMap_10;
		int32_t L_30 = V_5;
		int32_t L_31 = V_4;
		int32_t L_32 = V_6;
		NullCheck(L_29);
		uint8_t L_33;
		L_33 = (L_29)->GetAt(L_30, L_31, L_32);
		NullCheck(L_28);
		BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* L_34;
		L_34 = List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8(L_28, L_33, List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		NullCheck(L_34);
		bool L_35 = L_34->___isSolid_5;
		V_7 = L_35;
		bool L_36 = V_7;
		if (!L_36)
		{
			goto IL_00e9;
		}
	}
	{
		// UpdateMeshData(new Vector3(x, y, z));
		int32_t L_37 = V_5;
		int32_t L_38 = V_4;
		int32_t L_39 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), ((float)L_37), ((float)L_38), ((float)L_39), /*hidden argument*/NULL);
		Chunk_UpdateMeshData_mC6654131E04AE73B6CCB3CD8830F34ECBCD92AF2(__this, L_40, NULL);
	}

IL_00e9:
	{
		// for (int z = 0; z < VoxelData.ChunkWidth; z++)
		int32_t L_41 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00f0:
	{
		// for (int z = 0; z < VoxelData.ChunkWidth; z++)
		int32_t L_42 = V_6;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_43 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		V_8 = (bool)((((int32_t)L_42) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_8;
		if (L_44)
		{
			goto IL_00a5;
		}
	}
	{
		// for (int x = 0; x < VoxelData.ChunkWidth; x++)
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0106:
	{
		// for (int x = 0; x < VoxelData.ChunkWidth; x++)
		int32_t L_46 = V_5;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_47 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		V_9 = (bool)((((int32_t)L_46) < ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_9;
		if (L_48)
		{
			goto IL_009f;
		}
	}
	{
		// for (int y = 0; y < VoxelData.ChunkHeight; y++)
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_011c:
	{
		// for (int y = 0; y < VoxelData.ChunkHeight; y++)
		int32_t L_50 = V_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_51 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkHeight_1;
		V_10 = (bool)((((int32_t)L_50) < ((int32_t)L_51))? 1 : 0);
		bool L_52 = V_10;
		if (L_52)
		{
			goto IL_0099;
		}
	}
	{
		// CreateMesh();
		Chunk_CreateMesh_mCA6A15729E13F300C92B898BBFA43B74A9928B95(__this, NULL);
		// }
		return;
	}
}
// System.Void Chunk::ClearMeshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_ClearMeshData_m549226FEC5B9554B0A552C34D995A9A8568A6A5F (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// vertexIndex = 0;
		__this->___vertexIndex_4 = 0;
		// vertices.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___vertices_5;
		NullCheck(L_0);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_0, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// triangles.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = __this->___triangles_6;
		NullCheck(L_1);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_1, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// transparentTriangles.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___transparentTriangles_7;
		NullCheck(L_2);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_2, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// uvs.Clear();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_3 = __this->___uvs_9;
		NullCheck(L_3);
		List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline(L_3, List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Chunk::UpdateMeshData(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_UpdateMeshData_mC6654131E04AE73B6CCB3CD8830F34ECBCD92AF2 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	uint8_t V_6 = 0x0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// byte blockID = voxelMap[(int)pos.x, (int)pos.y, (int)pos.z];
		ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69* L_0 = __this->___voxelMap_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___pos0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___pos0;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___pos0;
		float L_6 = L_5.___z_4;
		NullCheck(L_0);
		uint8_t L_7;
		L_7 = (L_0)->GetAt(il2cpp_codegen_cast_double_to_int<int32_t>(L_2), il2cpp_codegen_cast_double_to_int<int32_t>(L_4), il2cpp_codegen_cast_double_to_int<int32_t>(L_6));
		V_0 = L_7;
		// bool isTransparent = m_world.blockTypes[blockID].renderNeighborFaces;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_8 = __this->___m_world_12;
		NullCheck(L_8);
		List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* L_9 = L_8->___blockTypes_8;
		uint8_t L_10 = V_0;
		NullCheck(L_9);
		BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* L_11;
		L_11 = List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8(L_9, L_10, List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		NullCheck(L_11);
		bool L_12 = L_11->___renderNeighborFaces_6;
		V_1 = L_12;
		// Vector3 neighborPos = Position + pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Chunk_get_Position_m22BAE7625EE95656B854E5133A13AA4D9032CAA6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_14, NULL);
		V_2 = L_15;
		// for (int i = 0; i < 6; i++)
		V_3 = 0;
		goto IL_030e;
	}

IL_004d:
	{
		// if (CheckVoxel(pos + VoxelData.faceChecks[i]))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___pos0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___faceChecks_5;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_16, L_20, NULL);
		bool L_22;
		L_22 = Chunk_CheckVoxel_m7B20C7D7D286D1577005F5E429671E0D5AE0D166(__this, L_21, NULL);
		V_4 = L_22;
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_0309;
		}
	}
	{
		// vertices.Add(pos + VoxelData.voxelVerts[VoxelData.voxelTris[i, 0]]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_24 = __this->___vertices_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___pos0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelVerts_4;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_27 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelTris_6;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29;
		L_29 = (L_27)->GetAt(L_28, 0);
		NullCheck(L_26);
		int32_t L_30 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_25, L_31, NULL);
		NullCheck(L_24);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_24, L_32, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(pos + VoxelData.voxelVerts[VoxelData.voxelTris[i, 1]]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_33 = __this->___vertices_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___pos0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_35 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelVerts_4;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_36 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelTris_6;
		int32_t L_37 = V_3;
		NullCheck(L_36);
		int32_t L_38;
		L_38 = (L_36)->GetAt(L_37, 1);
		NullCheck(L_35);
		int32_t L_39 = L_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_34, L_40, NULL);
		NullCheck(L_33);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_33, L_41, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(pos + VoxelData.voxelVerts[VoxelData.voxelTris[i, 2]]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_42 = __this->___vertices_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = ___pos0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_44 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelVerts_4;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_45 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelTris_6;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = (L_45)->GetAt(L_46, 2);
		NullCheck(L_44);
		int32_t L_48 = L_47;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_43, L_49, NULL);
		NullCheck(L_42);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_42, L_50, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vertices.Add(pos + VoxelData.voxelVerts[VoxelData.voxelTris[i, 3]]);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_51 = __this->___vertices_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = ___pos0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_53 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelVerts_4;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_54 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelTris_6;
		int32_t L_55 = V_3;
		NullCheck(L_54);
		int32_t L_56;
		L_56 = (L_54)->GetAt(L_55, 3);
		NullCheck(L_53);
		int32_t L_57 = L_56;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_52, L_58, NULL);
		NullCheck(L_51);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_51, L_59, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// AddTexture(m_world.blockTypes[blockID].GetTextureID(i));
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_60 = __this->___m_world_12;
		NullCheck(L_60);
		List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* L_61 = L_60->___blockTypes_8;
		uint8_t L_62 = V_0;
		NullCheck(L_61);
		BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* L_63;
		L_63 = List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8(L_61, L_62, List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		int32_t L_64 = V_3;
		NullCheck(L_63);
		int32_t L_65;
		L_65 = BlockType_GetTextureID_mF47DB42E0ECA9D6C3AB8E031870CA832870750BD(L_63, L_64, NULL);
		Chunk_AddTexture_mBD2CDA6508C13D8162FAFF5F662455C21A524D90(__this, L_65, NULL);
		// if (!isTransparent)
		bool L_66 = V_1;
		V_5 = (bool)((((int32_t)L_66) == ((int32_t)0))? 1 : 0);
		bool L_67 = V_5;
		if (!L_67)
		{
			goto IL_01b4;
		}
	}
	{
		// triangles.Add(vertexIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_68 = __this->___triangles_6;
		int32_t L_69 = __this->___vertexIndex_4;
		NullCheck(L_68);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_68, L_69, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// triangles.Add(vertexIndex + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_70 = __this->___triangles_6;
		int32_t L_71 = __this->___vertexIndex_4;
		NullCheck(L_70);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_70, ((int32_t)il2cpp_codegen_add(L_71, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// triangles.Add(vertexIndex + 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_72 = __this->___triangles_6;
		int32_t L_73 = __this->___vertexIndex_4;
		NullCheck(L_72);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_72, ((int32_t)il2cpp_codegen_add(L_73, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// triangles.Add(vertexIndex + 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_74 = __this->___triangles_6;
		int32_t L_75 = __this->___vertexIndex_4;
		NullCheck(L_74);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_74, ((int32_t)il2cpp_codegen_add(L_75, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// triangles.Add(vertexIndex + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_76 = __this->___triangles_6;
		int32_t L_77 = __this->___vertexIndex_4;
		NullCheck(L_76);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_76, ((int32_t)il2cpp_codegen_add(L_77, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// triangles.Add(vertexIndex + 3);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_78 = __this->___triangles_6;
		int32_t L_79 = __this->___vertexIndex_4;
		NullCheck(L_78);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_78, ((int32_t)il2cpp_codegen_add(L_79, 3)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		goto IL_02fa;
	}

IL_01b4:
	{
		// byte neighborID = m_world.GetVoxel(neighborPos + VoxelData.faceChecks[i]);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_80 = __this->___m_world_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_82 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___faceChecks_5;
		int32_t L_83 = V_3;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_81, L_85, NULL);
		NullCheck(L_80);
		uint8_t L_87;
		L_87 = World_GetVoxel_mEF5B5FBF459C794A6729D6C73FC57FC7B14854BC(L_80, L_86, NULL);
		V_6 = L_87;
		// if (neighborID != (byte)BlockTypes.STRUCTURE_PLACEHOLDER
		//     && (neighborID == (byte)BlockTypes.Air
		//     || neighborID == (byte)BlockTypes.NULL))
		uint8_t L_88 = V_6;
		if ((((int32_t)L_88) == ((int32_t)1)))
		{
			goto IL_01e7;
		}
	}
	{
		uint8_t L_89 = V_6;
		if ((((int32_t)L_89) == ((int32_t)2)))
		{
			goto IL_01e4;
		}
	}
	{
		uint8_t L_90 = V_6;
		G_B8_0 = ((((int32_t)L_90) == ((int32_t)0))? 1 : 0);
		goto IL_01e5;
	}

IL_01e4:
	{
		G_B8_0 = 1;
	}

IL_01e5:
	{
		G_B10_0 = G_B8_0;
		goto IL_01e8;
	}

IL_01e7:
	{
		G_B10_0 = 0;
	}

IL_01e8:
	{
		V_7 = (bool)G_B10_0;
		bool L_91 = V_7;
		if (!L_91)
		{
			goto IL_026b;
		}
	}
	{
		// transparentTriangles.Add(vertexIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_92 = __this->___transparentTriangles_7;
		int32_t L_93 = __this->___vertexIndex_4;
		NullCheck(L_92);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_92, L_93, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// transparentTriangles.Add(vertexIndex + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_94 = __this->___transparentTriangles_7;
		int32_t L_95 = __this->___vertexIndex_4;
		NullCheck(L_94);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_94, ((int32_t)il2cpp_codegen_add(L_95, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// transparentTriangles.Add(vertexIndex + 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_96 = __this->___transparentTriangles_7;
		int32_t L_97 = __this->___vertexIndex_4;
		NullCheck(L_96);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_96, ((int32_t)il2cpp_codegen_add(L_97, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// transparentTriangles.Add(vertexIndex + 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_98 = __this->___transparentTriangles_7;
		int32_t L_99 = __this->___vertexIndex_4;
		NullCheck(L_98);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_98, ((int32_t)il2cpp_codegen_add(L_99, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// transparentTriangles.Add(vertexIndex + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_100 = __this->___transparentTriangles_7;
		int32_t L_101 = __this->___vertexIndex_4;
		NullCheck(L_100);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_100, ((int32_t)il2cpp_codegen_add(L_101, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// transparentTriangles.Add(vertexIndex + 3);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_102 = __this->___transparentTriangles_7;
		int32_t L_103 = __this->___vertexIndex_4;
		NullCheck(L_102);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_102, ((int32_t)il2cpp_codegen_add(L_103, 3)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		goto IL_02f9;
	}

IL_026b:
	{
		// else if (neighborID != (byte)BlockTypes.STRUCTURE_PLACEHOLDER
		//     && neighborID != blockID)
		uint8_t L_104 = V_6;
		if ((((int32_t)L_104) == ((int32_t)1)))
		{
			goto IL_027a;
		}
	}
	{
		uint8_t L_105 = V_6;
		uint8_t L_106 = V_0;
		G_B15_0 = ((((int32_t)((((int32_t)L_105) == ((int32_t)L_106))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_027b;
	}

IL_027a:
	{
		G_B15_0 = 0;
	}

IL_027b:
	{
		V_8 = (bool)G_B15_0;
		bool L_107 = V_8;
		if (!L_107)
		{
			goto IL_02f9;
		}
	}
	{
		// triangles.Add(vertexIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_108 = __this->___triangles_6;
		int32_t L_109 = __this->___vertexIndex_4;
		NullCheck(L_108);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_108, L_109, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// triangles.Add(vertexIndex + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_110 = __this->___triangles_6;
		int32_t L_111 = __this->___vertexIndex_4;
		NullCheck(L_110);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_110, ((int32_t)il2cpp_codegen_add(L_111, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// triangles.Add(vertexIndex + 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_112 = __this->___triangles_6;
		int32_t L_113 = __this->___vertexIndex_4;
		NullCheck(L_112);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_112, ((int32_t)il2cpp_codegen_add(L_113, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// triangles.Add(vertexIndex + 2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_114 = __this->___triangles_6;
		int32_t L_115 = __this->___vertexIndex_4;
		NullCheck(L_114);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_114, ((int32_t)il2cpp_codegen_add(L_115, 2)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// triangles.Add(vertexIndex + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_116 = __this->___triangles_6;
		int32_t L_117 = __this->___vertexIndex_4;
		NullCheck(L_116);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_116, ((int32_t)il2cpp_codegen_add(L_117, 1)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// triangles.Add(vertexIndex + 3);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_118 = __this->___triangles_6;
		int32_t L_119 = __this->___vertexIndex_4;
		NullCheck(L_118);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_118, ((int32_t)il2cpp_codegen_add(L_119, 3)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_02f9:
	{
	}

IL_02fa:
	{
		// vertexIndex += 4;
		int32_t L_120 = __this->___vertexIndex_4;
		__this->___vertexIndex_4 = ((int32_t)il2cpp_codegen_add(L_120, 4));
	}

IL_0309:
	{
		// for (int i = 0; i < 6; i++)
		int32_t L_121 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_030e:
	{
		// for (int i = 0; i < 6; i++)
		int32_t L_122 = V_3;
		V_9 = (bool)((((int32_t)L_122) < ((int32_t)6))? 1 : 0);
		bool L_123 = V_9;
		if (L_123)
		{
			goto IL_004d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Chunk::CreateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_CreateMesh_mCA6A15729E13F300C92B898BBFA43B74A9928B95 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	{
		// Mesh mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// mesh.vertices = vertices.ToArray();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = __this->___vertices_5;
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3;
		L_3 = List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3(L_2, List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		NullCheck(L_1);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_1, L_3, NULL);
		// mesh.subMeshCount = 2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = V_0;
		NullCheck(L_4);
		Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28(L_4, 2, NULL);
		// mesh.SetTriangles(triangles.ToArray(), 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = __this->___triangles_6;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_6, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_5);
		Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258(L_5, L_7, 0, NULL);
		// mesh.SetTriangles(transparentTriangles.ToArray(), 1);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = __this->___transparentTriangles_7;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10;
		L_10 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_9, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		NullCheck(L_8);
		Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258(L_8, L_10, 1, NULL);
		// mesh.uv = uvs.ToArray();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_11 = V_0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_12 = __this->___uvs_9;
		NullCheck(L_12);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13;
		L_13 = List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5(L_12, List_1_ToArray_m9F2A058632994B7A2310424880C089F9DE5B1BA5_RuntimeMethod_var);
		NullCheck(L_11);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_11, L_13, NULL);
		// mesh.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = V_0;
		NullCheck(L_14);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_14, NULL);
		// meshFilter.mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_15 = __this->___meshFilter_3;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = V_0;
		NullCheck(L_15);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Boolean Chunk::IsVoxelInChunk(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Chunk_IsVoxelInChunk_mFFD9CB45834DF1852C9D5CCFC2762468E1F7475D (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
		// if (x < 0 || x > VoxelData.ChunkWidth - 1
		//     || y < 0 || y > VoxelData.ChunkWidth - 1
		//     || z < 0 || z > VoxelData.ChunkWidth - 1)
		int32_t L_0 = ___x0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_2 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___y1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_5 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, 1)))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_6 = ___z2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = ___z2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_8 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		G_B7_0 = ((((int32_t)L_7) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, 1))))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B7_0 = 1;
	}

IL_002e:
	{
		V_0 = (bool)G_B7_0;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_003c;
	}

IL_0037:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Void Chunk::EditVoxel(UnityEngine.Vector3,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_EditVoxel_mE15AB7386294BF4F26C962CAC563583FFA65B5D2 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, uint8_t ___newID1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int xCheck = Mathf.FloorToInt(pos.x) - Mathf.FloorToInt(chunkObj.transform.position.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___chunkObj_1;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		int32_t L_7;
		L_7 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, L_7));
		// int yCheck = Mathf.FloorToInt(pos.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___pos0;
		float L_9 = L_8.___y_3;
		int32_t L_10;
		L_10 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_9, NULL);
		V_1 = L_10;
		// int zCheck = Mathf.FloorToInt(pos.z) - Mathf.FloorToInt(chunkObj.transform.position.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___pos0;
		float L_12 = L_11.___z_4;
		int32_t L_13;
		L_13 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___chunkObj_1;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		int32_t L_18;
		L_18 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_17, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, L_18));
		// voxelMap[xCheck, yCheck, zCheck] = newID;
		ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69* L_19 = __this->___voxelMap_10;
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = V_2;
		uint8_t L_23 = ___newID1;
		NullCheck(L_19);
		(L_19)->SetAt(L_20, L_21, L_22, L_23);
		// UpdateSurroundingVoxels(xCheck, yCheck, zCheck);
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		int32_t L_26 = V_2;
		Chunk_UpdateSurroundingVoxels_m19FC0D486FA8FC1AC1AC4263D4A6ACA6194B4A88(__this, L_24, L_25, L_26, NULL);
		// UpdateChunk();
		Chunk_UpdateChunk_m70E43B1B78FAF14D6F8649187D85DD571849B835(__this, NULL);
		// }
		return;
	}
}
// System.Void Chunk::UpdateSurroundingVoxels(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_UpdateSurroundingVoxels_m19FC0D486FA8FC1AC1AC4263D4A6ACA6194B4A88 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	{
		// Vector3 thisVoxel = new Vector3(x, y, z);
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___z2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)L_0), ((float)L_1), ((float)L_2), NULL);
		// for (int p = 0; p < 6; p++)
		V_1 = 0;
		goto IL_006b;
	}

IL_0012:
	{
		// Vector3 currentVoxel = thisVoxel + VoxelData.faceChecks[p];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___faceChecks_5;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_7, NULL);
		V_2 = L_8;
		// if (!IsVoxelInChunk((int)currentVoxel.x, (int)currentVoxel.y, (int)currentVoxel.z))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		float L_10 = L_9.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_2;
		float L_14 = L_13.___z_4;
		bool L_15;
		L_15 = Chunk_IsVoxelInChunk_mFFD9CB45834DF1852C9D5CCFC2762468E1F7475D(__this, il2cpp_codegen_cast_double_to_int<int32_t>(L_10), il2cpp_codegen_cast_double_to_int<int32_t>(L_12), il2cpp_codegen_cast_double_to_int<int32_t>(L_14), NULL);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0066;
		}
	}
	{
		// m_world.GetChunkFromVector3(currentVoxel + Position).UpdateChunk();
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_17 = __this->___m_world_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Chunk_get_Position_m22BAE7625EE95656B854E5133A13AA4D9032CAA6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_18, L_19, NULL);
		NullCheck(L_17);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_21;
		L_21 = World_GetChunkFromVector3_m39CCDD4BF22E4CA2E09D08D89A3EB7F45AF9549B(L_17, L_20, NULL);
		NullCheck(L_21);
		Chunk_UpdateChunk_m70E43B1B78FAF14D6F8649187D85DD571849B835(L_21, NULL);
	}

IL_0066:
	{
		// for (int p = 0; p < 6; p++)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006b:
	{
		// for (int p = 0; p < 6; p++)
		int32_t L_23 = V_1;
		V_4 = (bool)((((int32_t)L_23) < ((int32_t)6))? 1 : 0);
		bool L_24 = V_4;
		if (L_24)
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Chunk::CheckVoxel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Chunk_CheckVoxel_m7B20C7D7D286D1577005F5E429671E0D5AE0D166 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		// int x = Mathf.FloorToInt(pos.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_1, NULL);
		V_0 = L_2;
		// int y = Mathf.FloorToInt(pos.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___pos0;
		float L_4 = L_3.___y_3;
		int32_t L_5;
		L_5 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_4, NULL);
		V_1 = L_5;
		// int z = Mathf.FloorToInt(pos.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___pos0;
		float L_7 = L_6.___z_4;
		int32_t L_8;
		L_8 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_7, NULL);
		V_2 = L_8;
		// if (!IsVoxelInChunk(x, y, z))
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		bool L_12;
		L_12 = Chunk_IsVoxelInChunk_mFFD9CB45834DF1852C9D5CCFC2762468E1F7475D(__this, L_9, L_10, L_11, NULL);
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		// return m_world.CheckForTransparentVoxel(pos + Position);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_14 = __this->___m_world_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Chunk_get_Position_m22BAE7625EE95656B854E5133A13AA4D9032CAA6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_16, NULL);
		NullCheck(L_14);
		bool L_18;
		L_18 = World_CheckForTransparentVoxel_mAA4419374C0C2F9221DE894B8FF9DD5AB98C93D1(L_14, L_17, NULL);
		V_4 = L_18;
		goto IL_0078;
	}

IL_0051:
	{
		// return m_world.blockTypes[voxelMap[x, y, z]].renderNeighborFaces;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_19 = __this->___m_world_12;
		NullCheck(L_19);
		List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* L_20 = L_19->___blockTypes_8;
		ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69* L_21 = __this->___voxelMap_10;
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_21);
		uint8_t L_25;
		L_25 = (L_21)->GetAt(L_22, L_23, L_24);
		NullCheck(L_20);
		BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* L_26;
		L_26 = List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8(L_20, L_25, List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		NullCheck(L_26);
		bool L_27 = L_26->___renderNeighborFaces_6;
		V_4 = L_27;
		goto IL_0078;
	}

IL_0078:
	{
		// }
		bool L_28 = V_4;
		return L_28;
	}
}
// System.Void Chunk::AddTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_AddTexture_mBD2CDA6508C13D8162FAFF5F662455C21A524D90 (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, int32_t ___textureID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float y = textureID / VoxelData.TextureAtlasSizeInBlocks;
		int32_t L_0 = ___textureID0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_1 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___TextureAtlasSizeInBlocks_3;
		V_0 = ((float)((int32_t)(L_0/L_1)));
		// float x = textureID - (y * VoxelData.TextureAtlasSizeInBlocks);
		int32_t L_2 = ___textureID0;
		float L_3 = V_0;
		int32_t L_4 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___TextureAtlasSizeInBlocks_3;
		V_1 = ((float)il2cpp_codegen_subtract(((float)L_2), ((float)il2cpp_codegen_multiply(L_3, ((float)L_4)))));
		// x *= VoxelData.NormalizedBlockTextureSize;
		float L_5 = V_1;
		float L_6;
		L_6 = VoxelData_get_NormalizedBlockTextureSize_m7C7BC025AB495D39182B942C44B2B9A543EB95F6(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_5, L_6));
		// y *= VoxelData.NormalizedBlockTextureSize;
		float L_7 = V_0;
		float L_8;
		L_8 = VoxelData_get_NormalizedBlockTextureSize_m7C7BC025AB495D39182B942C44B2B9A543EB95F6(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_7, L_8));
		// y = 1f - y - VoxelData.NormalizedBlockTextureSize;
		float L_9 = V_0;
		float L_10;
		L_10 = VoxelData_get_NormalizedBlockTextureSize_m7C7BC025AB495D39182B942C44B2B9A543EB95F6(NULL);
		V_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_9)), L_10));
		// uvs.Add(new Vector2(x, y));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_11 = __this->___uvs_9;
		float L_12 = V_1;
		float L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_11, L_14, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// uvs.Add(new Vector2(x, y + VoxelData.NormalizedBlockTextureSize));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_15 = __this->___uvs_9;
		float L_16 = V_1;
		float L_17 = V_0;
		float L_18;
		L_18 = VoxelData_get_NormalizedBlockTextureSize_m7C7BC025AB495D39182B942C44B2B9A543EB95F6(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_16, ((float)il2cpp_codegen_add(L_17, L_18)), /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_15, L_19, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// uvs.Add(new Vector2(x + VoxelData.NormalizedBlockTextureSize, y));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_20 = __this->___uvs_9;
		float L_21 = V_1;
		float L_22;
		L_22 = VoxelData_get_NormalizedBlockTextureSize_m7C7BC025AB495D39182B942C44B2B9A543EB95F6(NULL);
		float L_23 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), ((float)il2cpp_codegen_add(L_21, L_22)), L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_20, L_24, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// uvs.Add(new Vector2(x + VoxelData.NormalizedBlockTextureSize, y + VoxelData.NormalizedBlockTextureSize));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_25 = __this->___uvs_9;
		float L_26 = V_1;
		float L_27;
		L_27 = VoxelData_get_NormalizedBlockTextureSize_m7C7BC025AB495D39182B942C44B2B9A543EB95F6(NULL);
		float L_28 = V_0;
		float L_29;
		L_29 = VoxelData_get_NormalizedBlockTextureSize_m7C7BC025AB495D39182B942C44B2B9A543EB95F6(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_30), ((float)il2cpp_codegen_add(L_26, L_27)), ((float)il2cpp_codegen_add(L_28, L_29)), /*hidden argument*/NULL);
		NullCheck(L_25);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_25, L_30, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Byte Chunk::GetVoxelFromGlobalVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Chunk_GetVoxelFromGlobalVector3_mFC87E5E8549480CC63766BF3DB6A7CEB93B33AEA (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		// int xCheck = Mathf.FloorToInt(pos.x) - Mathf.FloorToInt(chunkObj.transform.position.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___chunkObj_1;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		int32_t L_7;
		L_7 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, L_7));
		// int yCheck = Mathf.FloorToInt(pos.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___pos0;
		float L_9 = L_8.___y_3;
		int32_t L_10;
		L_10 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_9, NULL);
		V_1 = L_10;
		// int zCheck = Mathf.FloorToInt(pos.z) - Mathf.FloorToInt(chunkObj.transform.position.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___pos0;
		float L_12 = L_11.___z_4;
		int32_t L_13;
		L_13 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___chunkObj_1;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		int32_t L_18;
		L_18 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_17, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, L_18));
		// return voxelMap[xCheck, yCheck, zCheck];
		ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69* L_19 = __this->___voxelMap_10;
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = V_2;
		NullCheck(L_19);
		uint8_t L_23;
		L_23 = (L_19)->GetAt(L_20, L_21, L_22);
		V_3 = L_23;
		goto IL_006c;
	}

IL_006c:
	{
		// }
		uint8_t L_24 = V_3;
		return L_24;
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
// System.Void DeciduousForestBiome::CreateBiomeHeightMap(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeciduousForestBiome_CreateBiomeHeightMap_m54110A0DA52DE1ADF4B3417781536AA952EE0295 (DeciduousForestBiome_t1EFF4091C928FB9DBCEC33420F982CB443A2753C* __this, int32_t ___mapWidth0, int32_t ___mapHeight1, int32_t ___seed2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D3E36A587FC98AFD0A3C819B56CA5AF2D6CDAA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE1D9FD9DA1EF2CAC4F99EF4E013F05BB8C3507EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* V_1 = NULL;
	int32_t V_2 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// base.CreateBiomeHeightMap(mapWidth, mapHeight, seed);
		int32_t L_0 = ___mapWidth0;
		int32_t L_1 = ___mapHeight1;
		int32_t L_2 = ___seed2;
		BiomeAttributes_CreateBiomeHeightMap_m0D5BBB81030412A46109C2D41C96CD24F0F49B5F(__this, L_0, L_1, L_2, NULL);
		// CreateBiomassMap();
		DeciduousForestBiome_CreateBiomassMap_mC13BDBA61A8CB52F33CF73007DCB70A56ED31B2C(__this, NULL);
		// int treeCount = 0;
		V_0 = 0;
		// List<Vector2Int> initTreeList = new List<Vector2Int>();
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_3 = (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*)il2cpp_codegen_object_new(List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mE1D9FD9DA1EF2CAC4F99EF4E013F05BB8C3507EF(L_3, List_1__ctor_mE1D9FD9DA1EF2CAC4F99EF4E013F05BB8C3507EF_RuntimeMethod_var);
		V_1 = L_3;
		// for (int i = 0; i < InitialTreeCount; i++)
		V_2 = 0;
		goto IL_007f;
	}

IL_001e:
	{
		// Vector2Int point = new Vector2Int(Random.Range(0, VoxelData.WorldSizeInVoxels), Random.Range(0, VoxelData.WorldSizeInVoxels));
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		int32_t L_5;
		L_5 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_4, NULL);
		int32_t L_6;
		L_6 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_6, NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_3), L_5, L_7, NULL);
		goto IL_005d;
	}

IL_003e:
	{
		// point = new Vector2Int(Random.Range(0, VoxelData.WorldSizeInVoxels), Random.Range(0, VoxelData.WorldSizeInVoxels));
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		int32_t L_9;
		L_9 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_8, NULL);
		int32_t L_10;
		L_10 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		int32_t L_11;
		L_11 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_10, NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_3), L_9, L_11, NULL);
	}

IL_005d:
	{
		// while (initTreeList.Contains(point))
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_12 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_13 = V_3;
		NullCheck(L_12);
		bool L_14;
		L_14 = List_1_Contains_m8D3E36A587FC98AFD0A3C819B56CA5AF2D6CDAA4(L_12, L_13, List_1_Contains_m8D3E36A587FC98AFD0A3C819B56CA5AF2D6CDAA4_RuntimeMethod_var);
		V_4 = L_14;
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_003e;
		}
	}
	{
		// initTreeList.Add(point);
		List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* L_16 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_17 = V_3;
		NullCheck(L_16);
		List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_inline(L_16, L_17, List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_RuntimeMethod_var);
		// UpdateBiomassMap(point);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_18 = V_3;
		DeciduousForestBiome_UpdateBiomassMap_m81FB83915062A6634541DA565EB0A9C6FE721320(__this, L_18, NULL);
		// for (int i = 0; i < InitialTreeCount; i++)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		// for (int i = 0; i < InitialTreeCount; i++)
		int32_t L_20 = V_2;
		int32_t L_21 = __this->___InitialTreeCount_20;
		V_5 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_001e;
		}
	}
	{
		// for (int x = 0; x < VoxelData.WorldSizeInVoxels; x++)
		V_6 = 0;
		goto IL_00d2;
	}

IL_0093:
	{
		// for (int y = 0; y < VoxelData.WorldSizeInVoxels; y++)
		V_7 = 0;
		goto IL_00bc;
	}

IL_0099:
	{
		// if (CalcTreePosition(new Vector2Int(x, y)))
		int32_t L_23 = V_6;
		int32_t L_24 = V_7;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_25), L_23, L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = DeciduousForestBiome_CalcTreePosition_mF1091D4BD7A2C97108CAC0A2740D7A87A6A820F4(__this, L_25, NULL);
		V_8 = L_26;
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_00b5;
		}
	}
	{
		// treeCount++;
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b5:
	{
		// for (int y = 0; y < VoxelData.WorldSizeInVoxels; y++)
		int32_t L_29 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00bc:
	{
		// for (int y = 0; y < VoxelData.WorldSizeInVoxels; y++)
		int32_t L_30 = V_7;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_31;
		L_31 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		V_9 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_9;
		if (L_32)
		{
			goto IL_0099;
		}
	}
	{
		// for (int x = 0; x < VoxelData.WorldSizeInVoxels; x++)
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00d2:
	{
		// for (int x = 0; x < VoxelData.WorldSizeInVoxels; x++)
		int32_t L_34 = V_6;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		V_10 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_10;
		if (L_36)
		{
			goto IL_0093;
		}
	}
	{
		// Debug.Log(treeCount);
		int32_t L_37 = V_0;
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_38);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_39, NULL);
		// }
		return;
	}
}
// System.Byte DeciduousForestBiome::CreateBiomeSpecificVoxel(UnityEngine.Vector3Int,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t DeciduousForestBiome_CreateBiomeSpecificVoxel_m7FE8D7B54EBAA50120F45DC52D1843DA04A301D9 (DeciduousForestBiome_t1EFF4091C928FB9DBCEC33420F982CB443A2753C* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___pos0, int32_t ___seed1, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	uint8_t V_8 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	{
		// byte voxelValue = 0;
		V_0 = (uint8_t)0;
		// if (!World.IsVoxelInWorld(pos))
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_0, NULL);
		bool L_2;
		L_2 = World_IsVoxelInWorld_mCAB443D36771C6A8B7673314643414B4662D391F(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.NULL;//empty block
		V_0 = (uint8_t)0;
		goto IL_0157;
	}

IL_001e:
	{
		// else if (pos.y == 0)
		int32_t L_4;
		L_4 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Bedrock;//bedrock
		V_0 = (uint8_t)3;
		goto IL_0157;
	}

IL_0035:
	{
		// else if (pos.y > heightMap[pos.x, pos.z])//above ground
		int32_t L_6;
		L_6 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_7 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_8;
		L_8 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_9;
		L_9 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = (L_7)->GetAt(L_8, L_9);
		V_3 = (bool)((((int32_t)L_6) > ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Air;//air
		V_0 = (uint8_t)2;
		goto IL_0157;
	}

IL_0064:
	{
		// else if (pos.y == heightMap[pos.x, pos.z])//top layer
		int32_t L_12;
		L_12 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_13 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_14;
		L_14 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_15;
		L_15 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_13);
		int32_t L_16;
		L_16 = (L_13)->GetAt(L_14, L_15);
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Grass;
		V_0 = (uint8_t)6;
		goto IL_0157;
	}

IL_0095:
	{
		// else if (pos.y < heightMap[pos.x, pos.z] && pos.y >= heightMap[pos.x, pos.z] - upperSoilDepth)//upper soil layer
		int32_t L_18;
		L_18 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_19 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_20;
		L_20 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_21;
		L_21 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_19);
		int32_t L_22;
		L_22 = (L_19)->GetAt(L_20, L_21);
		if ((((int32_t)L_18) >= ((int32_t)L_22)))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_23;
		L_23 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_24 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_25;
		L_25 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_26;
		L_26 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_24);
		int32_t L_27;
		L_27 = (L_24)->GetAt(L_25, L_26);
		int32_t L_28 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___upperSoilDepth_7;
		G_B11_0 = ((((int32_t)((((int32_t)L_23) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_27, L_28))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e6;
	}

IL_00e5:
	{
		G_B11_0 = 0;
	}

IL_00e6:
	{
		V_5 = (bool)G_B11_0;
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00f2;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Dirt;
		V_0 = (uint8_t)5;
		goto IL_0157;
	}

IL_00f2:
	{
		// else if (pos.y < heightMap[pos.x, pos.z] && pos.y > (heightMap[pos.x, pos.z] - upperSoilDepth) - middleSoilDepth)//mid soil layer
		int32_t L_30;
		L_30 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_31 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_32;
		L_32 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_33;
		L_33 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_31);
		int32_t L_34;
		L_34 = (L_31)->GetAt(L_32, L_33);
		if ((((int32_t)L_30) >= ((int32_t)L_34)))
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_35;
		L_35 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_36 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_37;
		L_37 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_38;
		L_38 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_36);
		int32_t L_39;
		L_39 = (L_36)->GetAt(L_37, L_38);
		int32_t L_40 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___upperSoilDepth_7;
		int32_t L_41 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___middleSoilDepth_8;
		G_B16_0 = ((((int32_t)L_35) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_39, L_40)), L_41))))? 1 : 0);
		goto IL_0147;
	}

IL_0146:
	{
		G_B16_0 = 0;
	}

IL_0147:
	{
		V_6 = (bool)G_B16_0;
		bool L_42 = V_6;
		if (!L_42)
		{
			goto IL_0153;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Dirt;
		V_0 = (uint8_t)5;
		goto IL_0157;
	}

IL_0153:
	{
		// voxelValue = (byte)BlockTypes.Stone;//stone, ores, other underground stuff
		V_0 = (uint8_t)4;
	}

IL_0157:
	{
		// if (pos.y == heightMap[pos.x, pos.z] && biomassMap[pos.x, pos.z] == -1)
		int32_t L_43;
		L_43 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_44 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_45;
		L_45 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_46;
		L_46 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_44);
		int32_t L_47;
		L_47 = (L_44)->GetAt(L_45, L_46);
		if ((!(((uint32_t)L_43) == ((uint32_t)L_47))))
		{
			goto IL_0197;
		}
	}
	{
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_48 = __this->___biomassMap_18;
		int32_t L_49;
		L_49 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_50;
		L_50 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_48);
		int32_t L_51;
		L_51 = (L_48)->GetAt(L_49, L_50);
		G_B22_0 = ((((int32_t)L_51) == ((int32_t)(-1)))? 1 : 0);
		goto IL_0198;
	}

IL_0197:
	{
		G_B22_0 = 0;
	}

IL_0198:
	{
		V_7 = (bool)G_B22_0;
		bool L_52 = V_7;
		if (!L_52)
		{
			goto IL_01c3;
		}
	}
	{
		// Structure.MakeOakTree(pos, m_world.modifications, minTreeHeight, maxTreeHeight);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_53 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_53, NULL);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_55 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___m_world_17;
		NullCheck(L_55);
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_56 = L_55->___modifications_10;
		int32_t L_57 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___minTreeHeight_15;
		int32_t L_58 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___maxTreeHeight_14;
		Structure_MakeOakTree_m7E0F83A0543BBBB2B39ADE94C0172802A2DD4063(L_54, L_56, L_57, L_58, NULL);
	}

IL_01c3:
	{
		// return voxelValue;
		uint8_t L_59 = V_0;
		V_8 = L_59;
		goto IL_01c8;
	}

IL_01c8:
	{
		// }
		uint8_t L_60 = V_8;
		return L_60;
	}
}
// System.Void DeciduousForestBiome::CreateBiomassMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeciduousForestBiome_CreateBiomassMap_mC13BDBA61A8CB52F33CF73007DCB70A56ED31B2C (DeciduousForestBiome_t1EFF4091C928FB9DBCEC33420F982CB443A2753C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// biomassMap = new int[VoxelData.WorldSizeInVoxels, VoxelData.WorldSizeInVoxels];
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		int32_t L_1;
		L_1 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_2 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_3);
		__this->___biomassMap_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___biomassMap_18), (void*)L_2);
		// for (int x = 0; x < VoxelData.WorldSizeInVoxels; x++)
		V_0 = 0;
		goto IL_004b;
	}

IL_001a:
	{
		// for (int y = 0; y < VoxelData.WorldSizeInVoxels; y++)
		V_1 = 0;
		goto IL_003a;
	}

IL_001f:
	{
		// biomassMap[x, y] = Random.Range(0, 100);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_4 = __this->___biomassMap_18;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)100), NULL);
		NullCheck(L_4);
		(L_4)->SetAt(L_5, L_6, L_7);
		// for (int y = 0; y < VoxelData.WorldSizeInVoxels; y++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003a:
	{
		// for (int y = 0; y < VoxelData.WorldSizeInVoxels; y++)
		int32_t L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_001f;
		}
	}
	{
		// for (int x = 0; x < VoxelData.WorldSizeInVoxels; x++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004b:
	{
		// for (int x = 0; x < VoxelData.WorldSizeInVoxels; x++)
		int32_t L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DeciduousForestBiome::UpdateBiomassMap(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeciduousForestBiome_UpdateBiomassMap_m81FB83915062A6634541DA565EB0A9C6FE721320 (DeciduousForestBiome_t1EFF4091C928FB9DBCEC33420F982CB443A2753C* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___treePoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B33_0 = 0;
	{
		// if (biomassMap[treePoint.x, treePoint.y] <= 0)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_0 = __this->___biomassMap_18;
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		V_3 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		goto IL_0320;
	}

IL_002a:
	{
		// int depletionThreshold = TreeDepletionRadius * TreeDepletionRadius;
		int32_t L_5 = __this->___TreeDepletionRadius_21;
		int32_t L_6 = __this->___TreeDepletionRadius_21;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// int canopyThreshold = TreeCanopyRadius * TreeCanopyRadius;
		int32_t L_7 = __this->___TreeCanopyRadius_23;
		int32_t L_8 = __this->___TreeCanopyRadius_23;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_7, L_8));
		// int neighborThreshold = TreeNeighborRadius * TreeNeighborRadius;
		int32_t L_9 = __this->___TreeNeighborRadius_25;
		int32_t L_10 = __this->___TreeNeighborRadius_25;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_9, L_10));
		// for (int x = -TreeDepletionRadius; x < TreeDepletionRadius; x++)
		int32_t L_11 = __this->___TreeDepletionRadius_21;
		V_4 = ((-L_11));
		goto IL_030d;
	}

IL_0062:
	{
		// for (int y = -TreeDepletionRadius; y < TreeDepletionRadius; y++)
		int32_t L_12 = __this->___TreeDepletionRadius_21;
		V_5 = ((-L_12));
		goto IL_02f3;
	}

IL_0071:
	{
		// if (treePoint.x + x < 0 || treePoint.x + x >= VoxelData.WorldSizeInVoxels
		//     || treePoint.y + y < 0 || treePoint.y + y >= VoxelData.WorldSizeInVoxels
		//     || biomassMap[treePoint.x + x, treePoint.y + y] == -1)
		int32_t L_13;
		L_13 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_14 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14))) < ((int32_t)0)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_15;
		L_15 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_16 = V_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16))) >= ((int32_t)L_17)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_18;
		L_18 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_19 = V_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_18, L_19))) < ((int32_t)0)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_20;
		L_20 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_21 = V_5;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))) >= ((int32_t)L_22)))
		{
			goto IL_00d2;
		}
	}
	{
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_23 = __this->___biomassMap_18;
		int32_t L_24;
		L_24 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_25 = V_4;
		int32_t L_26;
		L_26 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_27 = V_5;
		NullCheck(L_23);
		int32_t L_28;
		L_28 = (L_23)->GetAt(((int32_t)il2cpp_codegen_add(L_24, L_25)), ((int32_t)il2cpp_codegen_add(L_26, L_27)));
		G_B10_0 = ((((int32_t)L_28) == ((int32_t)(-1)))? 1 : 0);
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B10_0 = 1;
	}

IL_00d3:
	{
		V_7 = (bool)G_B10_0;
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00df;
		}
	}
	{
		// continue;
		goto IL_02ed;
	}

IL_00df:
	{
		// int value = x * x + y * y;
		int32_t L_30 = V_4;
		int32_t L_31 = V_4;
		int32_t L_32 = V_5;
		int32_t L_33 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_30, L_31)), ((int32_t)il2cpp_codegen_multiply(L_32, L_33))));
		// if (x == 0 && y == 0)
		int32_t L_34 = V_4;
		if (L_34)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_35 = V_5;
		G_B15_0 = ((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		goto IL_00f8;
	}

IL_00f7:
	{
		G_B15_0 = 0;
	}

IL_00f8:
	{
		V_8 = (bool)G_B15_0;
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_0125;
		}
	}
	{
		// biomassMap[treePoint.x + x, treePoint.y + y] = -1;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_37 = __this->___biomassMap_18;
		int32_t L_38;
		L_38 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_39 = V_4;
		int32_t L_40;
		L_40 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_41 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(((int32_t)il2cpp_codegen_add(L_38, L_39)), ((int32_t)il2cpp_codegen_add(L_40, L_41)), (-1));
		goto IL_02ec;
	}

IL_0125:
	{
		// else if (value <= neighborThreshold)
		int32_t L_42 = V_6;
		int32_t L_43 = V_2;
		V_9 = (bool)((((int32_t)((((int32_t)L_42) > ((int32_t)L_43))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_01bb;
		}
	}
	{
		// if (biomassMap[treePoint.x + x, treePoint.y + y] - TreeNeighborValue < 0)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_45 = __this->___biomassMap_18;
		int32_t L_46;
		L_46 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_47 = V_4;
		int32_t L_48;
		L_48 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_49 = V_5;
		NullCheck(L_45);
		int32_t L_50;
		L_50 = (L_45)->GetAt(((int32_t)il2cpp_codegen_add(L_46, L_47)), ((int32_t)il2cpp_codegen_add(L_48, L_49)));
		int32_t L_51 = __this->___TreeNeighborValue_26;
		V_10 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_50, L_51))) < ((int32_t)0))? 1 : 0);
		bool L_52 = V_10;
		if (!L_52)
		{
			goto IL_018a;
		}
	}
	{
		// biomassMap[treePoint.x + x, treePoint.y + y] = 0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_53 = __this->___biomassMap_18;
		int32_t L_54;
		L_54 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_55 = V_4;
		int32_t L_56;
		L_56 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_57 = V_5;
		NullCheck(L_53);
		(L_53)->SetAt(((int32_t)il2cpp_codegen_add(L_54, L_55)), ((int32_t)il2cpp_codegen_add(L_56, L_57)), 0);
		goto IL_01b5;
	}

IL_018a:
	{
		// biomassMap[treePoint.x + x, treePoint.y + y] -= TreeNeighborValue;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_58 = __this->___biomassMap_18;
		int32_t L_59;
		L_59 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_60 = V_4;
		int32_t L_61;
		L_61 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_62 = V_5;
		NullCheck(L_58);
		int32_t* L_63;
		L_63 = (L_58)->GetAddressAt(((int32_t)il2cpp_codegen_add(L_59, L_60)), ((int32_t)il2cpp_codegen_add(L_61, L_62)));
		int32_t* L_64 = L_63;
		int32_t L_65 = *((int32_t*)L_64);
		int32_t L_66 = __this->___TreeNeighborValue_26;
		*((int32_t*)L_64) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_65, L_66));
	}

IL_01b5:
	{
		goto IL_02ec;
	}

IL_01bb:
	{
		// else if (value >= neighborThreshold && value < canopyThreshold)
		int32_t L_67 = V_6;
		int32_t L_68 = V_2;
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_01c7;
		}
	}
	{
		int32_t L_69 = V_6;
		int32_t L_70 = V_1;
		G_B25_0 = ((((int32_t)L_69) < ((int32_t)L_70))? 1 : 0);
		goto IL_01c8;
	}

IL_01c7:
	{
		G_B25_0 = 0;
	}

IL_01c8:
	{
		V_11 = (bool)G_B25_0;
		bool L_71 = V_11;
		if (!L_71)
		{
			goto IL_0256;
		}
	}
	{
		// if (biomassMap[treePoint.x + x, treePoint.y + y] - TreeCanopyValue < 0)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_72 = __this->___biomassMap_18;
		int32_t L_73;
		L_73 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_74 = V_4;
		int32_t L_75;
		L_75 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_76 = V_5;
		NullCheck(L_72);
		int32_t L_77;
		L_77 = (L_72)->GetAt(((int32_t)il2cpp_codegen_add(L_73, L_74)), ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		int32_t L_78 = __this->___TreeCanopyValue_24;
		V_12 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_77, L_78))) < ((int32_t)0))? 1 : 0);
		bool L_79 = V_12;
		if (!L_79)
		{
			goto IL_0225;
		}
	}
	{
		// biomassMap[treePoint.x + x, treePoint.y + y] = 0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_80 = __this->___biomassMap_18;
		int32_t L_81;
		L_81 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_82 = V_4;
		int32_t L_83;
		L_83 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_84 = V_5;
		NullCheck(L_80);
		(L_80)->SetAt(((int32_t)il2cpp_codegen_add(L_81, L_82)), ((int32_t)il2cpp_codegen_add(L_83, L_84)), 0);
		goto IL_0250;
	}

IL_0225:
	{
		// biomassMap[treePoint.x + x, treePoint.y + y] -= TreeCanopyValue;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_85 = __this->___biomassMap_18;
		int32_t L_86;
		L_86 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_87 = V_4;
		int32_t L_88;
		L_88 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_89 = V_5;
		NullCheck(L_85);
		int32_t* L_90;
		L_90 = (L_85)->GetAddressAt(((int32_t)il2cpp_codegen_add(L_86, L_87)), ((int32_t)il2cpp_codegen_add(L_88, L_89)));
		int32_t* L_91 = L_90;
		int32_t L_92 = *((int32_t*)L_91);
		int32_t L_93 = __this->___TreeCanopyValue_24;
		*((int32_t*)L_91) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_92, L_93));
	}

IL_0250:
	{
		goto IL_02ec;
	}

IL_0256:
	{
		// else if (value >= canopyThreshold && value < depletionThreshold)
		int32_t L_94 = V_6;
		int32_t L_95 = V_1;
		if ((((int32_t)L_94) < ((int32_t)L_95)))
		{
			goto IL_0262;
		}
	}
	{
		int32_t L_96 = V_6;
		int32_t L_97 = V_0;
		G_B33_0 = ((((int32_t)L_96) < ((int32_t)L_97))? 1 : 0);
		goto IL_0263;
	}

IL_0262:
	{
		G_B33_0 = 0;
	}

IL_0263:
	{
		V_13 = (bool)G_B33_0;
		bool L_98 = V_13;
		if (!L_98)
		{
			goto IL_02ec;
		}
	}
	{
		// if (biomassMap[treePoint.x + x, treePoint.y + y] - TreeDepletionValue < 0)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_99 = __this->___biomassMap_18;
		int32_t L_100;
		L_100 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_101 = V_4;
		int32_t L_102;
		L_102 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_103 = V_5;
		NullCheck(L_99);
		int32_t L_104;
		L_104 = (L_99)->GetAt(((int32_t)il2cpp_codegen_add(L_100, L_101)), ((int32_t)il2cpp_codegen_add(L_102, L_103)));
		int32_t L_105 = __this->___TreeDepletionValue_22;
		V_14 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_104, L_105))) < ((int32_t)0))? 1 : 0);
		bool L_106 = V_14;
		if (!L_106)
		{
			goto IL_02c0;
		}
	}
	{
		// biomassMap[treePoint.x + x, treePoint.y + y] = 0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_107 = __this->___biomassMap_18;
		int32_t L_108;
		L_108 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_109 = V_4;
		int32_t L_110;
		L_110 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_111 = V_5;
		NullCheck(L_107);
		(L_107)->SetAt(((int32_t)il2cpp_codegen_add(L_108, L_109)), ((int32_t)il2cpp_codegen_add(L_110, L_111)), 0);
		goto IL_02eb;
	}

IL_02c0:
	{
		// biomassMap[treePoint.x + x, treePoint.y + y] -= TreeDepletionValue;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_112 = __this->___biomassMap_18;
		int32_t L_113;
		L_113 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_114 = V_4;
		int32_t L_115;
		L_115 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		int32_t L_116 = V_5;
		NullCheck(L_112);
		int32_t* L_117;
		L_117 = (L_112)->GetAddressAt(((int32_t)il2cpp_codegen_add(L_113, L_114)), ((int32_t)il2cpp_codegen_add(L_115, L_116)));
		int32_t* L_118 = L_117;
		int32_t L_119 = *((int32_t*)L_118);
		int32_t L_120 = __this->___TreeDepletionValue_22;
		*((int32_t*)L_118) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_119, L_120));
	}

IL_02eb:
	{
	}

IL_02ec:
	{
	}

IL_02ed:
	{
		// for (int y = -TreeDepletionRadius; y < TreeDepletionRadius; y++)
		int32_t L_121 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_02f3:
	{
		// for (int y = -TreeDepletionRadius; y < TreeDepletionRadius; y++)
		int32_t L_122 = V_5;
		int32_t L_123 = __this->___TreeDepletionRadius_21;
		V_15 = (bool)((((int32_t)L_122) < ((int32_t)L_123))? 1 : 0);
		bool L_124 = V_15;
		if (L_124)
		{
			goto IL_0071;
		}
	}
	{
		// for (int x = -TreeDepletionRadius; x < TreeDepletionRadius; x++)
		int32_t L_125 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_030d:
	{
		// for (int x = -TreeDepletionRadius; x < TreeDepletionRadius; x++)
		int32_t L_126 = V_4;
		int32_t L_127 = __this->___TreeDepletionRadius_21;
		V_16 = (bool)((((int32_t)L_126) < ((int32_t)L_127))? 1 : 0);
		bool L_128 = V_16;
		if (L_128)
		{
			goto IL_0062;
		}
	}

IL_0320:
	{
		// }
		return;
	}
}
// System.Boolean DeciduousForestBiome::CalcTreePosition(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeciduousForestBiome_CalcTreePosition_mF1091D4BD7A2C97108CAC0A2740D7A87A6A820F4 (DeciduousForestBiome_t1EFF4091C928FB9DBCEC33420F982CB443A2753C* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___treePoint0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (biomassMap[treePoint.x, treePoint.y] > TreeThreshold)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_0 = __this->___biomassMap_18;
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___treePoint0), NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___treePoint0), NULL);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		int32_t L_4 = __this->___TreeThreshold_19;
		V_0 = (bool)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// UpdateBiomassMap(treePoint);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = ___treePoint0;
		DeciduousForestBiome_UpdateBiomassMap_m81FB83915062A6634541DA565EB0A9C6FE721320(__this, L_6, NULL);
		// return true;
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0033:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void DeciduousForestBiome::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeciduousForestBiome__ctor_mD1F0E4442D0D590D3D0F984093F949030AADEA7E (DeciduousForestBiome_t1EFF4091C928FB9DBCEC33420F982CB443A2753C* __this, const RuntimeMethod* method) 
{
	{
		// [Tooltip("Minumum Tree Biomass")] public int TreeThreshold = 35;
		__this->___TreeThreshold_19 = ((int32_t)35);
		// [Tooltip("Initial Number of Trees")] public int InitialTreeCount = 10;
		__this->___InitialTreeCount_20 = ((int32_t)10);
		// [Tooltip("Resource Depletion Radius")] public int TreeDepletionRadius = 10;
		__this->___TreeDepletionRadius_21 = ((int32_t)10);
		// [Tooltip("Resource Depletion Amount")] public int TreeDepletionValue = 25;
		__this->___TreeDepletionValue_22 = ((int32_t)25);
		// [Tooltip("Resource Canopy Radius")] public int TreeCanopyRadius = 3;
		__this->___TreeCanopyRadius_23 = 3;
		// [Tooltip("Resource Canopy Amount")] public int TreeCanopyValue = 35;
		__this->___TreeCanopyValue_24 = ((int32_t)35);
		// [Tooltip("Neighbor Radius")] public int TreeNeighborRadius = 1;
		__this->___TreeNeighborRadius_25 = 1;
		// [Tooltip("Neighbor Resource Amount")] public int TreeNeighborValue = 50;
		__this->___TreeNeighborValue_26 = ((int32_t)50);
		BiomeAttributes__ctor_mF8BF494FE566405D219DD9509BEFB65850E6245B(__this, NULL);
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
// System.Void DesertBiome::CreateBiomeHeightMap(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesertBiome_CreateBiomeHeightMap_m4269EF960CEDDA2CA8319565A398EC8B8F6BE808 (DesertBiome_t6606106BFD34647E912C739DA06AE456F95E42EA* __this, int32_t ___mapWidth0, int32_t ___mapHeight1, int32_t ___seed2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	{
		// heightMap = new int[mapWidth, mapHeight];
		int32_t L_0 = ___mapWidth0;
		int32_t L_1 = ___mapHeight1;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_2 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_3);
		((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16), (void*)L_2);
		// int maxHeight = int.MinValue;
		V_0 = ((int32_t)-2147483648LL);
		// int minHeight = int.MaxValue;
		V_1 = ((int32_t)2147483647LL);
		// for (int x = 0; x < mapWidth; x++)
		V_2 = 0;
		goto IL_00c4;
	}

IL_0021:
	{
		// for (int z = 0; z < mapHeight; z++)
		V_3 = 0;
		goto IL_00b2;
	}

IL_0029:
	{
		// heightMap[x, z] = Mathf.FloorToInt(terrainWeight * Noise.Get2DPerlin(new Vector2(x, z), seed, terrainScale)) + solidGroundHeight;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_4 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		int32_t L_7 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___terrainWeight_6;
		int32_t L_8 = V_2;
		int32_t L_9 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)L_8), ((float)L_9), /*hidden argument*/NULL);
		int32_t L_11 = ___seed2;
		float L_12 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___terrainScale_9;
		float L_13;
		L_13 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_10, ((float)L_11), L_12, NULL);
		int32_t L_14;
		L_14 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(((float)L_7), L_13)), NULL);
		int32_t L_15 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___solidGroundHeight_5;
		NullCheck(L_4);
		(L_4)->SetAt(L_5, L_6, ((int32_t)il2cpp_codegen_add(L_14, L_15)));
		// if (heightMap[x, z] > maxHeight)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_16 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		int32_t L_19;
		L_19 = (L_16)->GetAt(L_17, L_18);
		int32_t L_20 = V_0;
		V_4 = (bool)((((int32_t)L_19) > ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0087;
		}
	}
	{
		// maxHeight = heightMap[x, z];
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_22 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_22);
		int32_t L_25;
		L_25 = (L_22)->GetAt(L_23, L_24);
		V_0 = L_25;
	}

IL_0087:
	{
		// if (heightMap[x, z] < minHeight)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_26 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		NullCheck(L_26);
		int32_t L_29;
		L_29 = (L_26)->GetAt(L_27, L_28);
		int32_t L_30 = V_1;
		V_5 = (bool)((((int32_t)L_29) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_00ad;
		}
	}
	{
		// minHeight = heightMap[x, z];
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_32 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = (L_32)->GetAt(L_33, L_34);
		V_1 = L_35;
	}

IL_00ad:
	{
		// for (int z = 0; z < mapHeight; z++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b2:
	{
		// for (int z = 0; z < mapHeight; z++)
		int32_t L_37 = V_3;
		int32_t L_38 = ___mapHeight1;
		V_6 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_6;
		if (L_39)
		{
			goto IL_0029;
		}
	}
	{
		// for (int x = 0; x < mapWidth; x++)
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00c4:
	{
		// for (int x = 0; x < mapWidth; x++)
		int32_t L_41 = V_2;
		int32_t L_42 = ___mapWidth0;
		V_7 = (bool)((((int32_t)L_41) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_7;
		if (L_43)
		{
			goto IL_0021;
		}
	}
	{
		// minMesaHeight = maxHeight - Mathf.FloorToInt(maxHeight * mesaChance);
		int32_t L_44 = V_0;
		int32_t L_45 = V_0;
		float L_46 = __this->___mesaChance_18;
		int32_t L_47;
		L_47 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(((float)L_45), L_46)), NULL);
		__this->___minMesaHeight_24 = ((int32_t)il2cpp_codegen_subtract(L_44, L_47));
		// maxPlayaHeight = minHeight + Mathf.FloorToInt(minHeight * playaChance);
		int32_t L_48 = V_1;
		int32_t L_49 = V_1;
		float L_50 = __this->___playaChance_21;
		int32_t L_51;
		L_51 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(((float)L_49), L_50)), NULL);
		__this->___maxPlayaHeight_25 = ((int32_t)il2cpp_codegen_add(L_48, L_51));
		// minPlayaHeight = minHeight;
		int32_t L_52 = V_1;
		__this->___minPlayaHeight_26 = L_52;
		// for (int x = 0; x < mapWidth; x++)
		V_8 = 0;
		goto IL_0199;
	}

IL_010c:
	{
		// for (int z = 0; z < mapHeight; z++)
		V_9 = 0;
		goto IL_0187;
	}

IL_0112:
	{
		// if (heightMap[x, z] >= minMesaHeight)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_53 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_54 = V_8;
		int32_t L_55 = V_9;
		NullCheck(L_53);
		int32_t L_56;
		L_56 = (L_53)->GetAt(L_54, L_55);
		int32_t L_57 = __this->___minMesaHeight_24;
		V_10 = (bool)((((int32_t)((((int32_t)L_56) < ((int32_t)L_57))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_014e;
		}
	}
	{
		// heightMap[x, z] += mesaHeight;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_59 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_60 = V_8;
		int32_t L_61 = V_9;
		NullCheck(L_59);
		int32_t* L_62;
		L_62 = (L_59)->GetAddressAt(L_60, L_61);
		int32_t* L_63 = L_62;
		int32_t L_64 = *((int32_t*)L_63);
		int32_t L_65 = __this->___mesaHeight_19;
		*((int32_t*)L_63) = (int32_t)((int32_t)il2cpp_codegen_add(L_64, L_65));
	}

IL_014e:
	{
		// if (heightMap[x, z] <= maxPlayaHeight)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_66 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_67 = V_8;
		int32_t L_68 = V_9;
		NullCheck(L_66);
		int32_t L_69;
		L_69 = (L_66)->GetAt(L_67, L_68);
		int32_t L_70 = __this->___maxPlayaHeight_25;
		V_11 = (bool)((((int32_t)((((int32_t)L_69) > ((int32_t)L_70))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_71 = V_11;
		if (!L_71)
		{
			goto IL_0180;
		}
	}
	{
		// heightMap[x, z] = minHeight;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_72 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_73 = V_8;
		int32_t L_74 = V_9;
		int32_t L_75 = V_1;
		NullCheck(L_72);
		(L_72)->SetAt(L_73, L_74, L_75);
	}

IL_0180:
	{
		// for (int z = 0; z < mapHeight; z++)
		int32_t L_76 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0187:
	{
		// for (int z = 0; z < mapHeight; z++)
		int32_t L_77 = V_9;
		int32_t L_78 = ___mapHeight1;
		V_12 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_12;
		if (L_79)
		{
			goto IL_0112;
		}
	}
	{
		// for (int x = 0; x < mapWidth; x++)
		int32_t L_80 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_0199:
	{
		// for (int x = 0; x < mapWidth; x++)
		int32_t L_81 = V_8;
		int32_t L_82 = ___mapWidth0;
		V_13 = (bool)((((int32_t)L_81) < ((int32_t)L_82))? 1 : 0);
		bool L_83 = V_13;
		if (L_83)
		{
			goto IL_010c;
		}
	}
	{
		// minMesaHeight -= mesaBleedOff;
		int32_t L_84 = __this->___minMesaHeight_24;
		int32_t L_85 = __this->___mesaBleedOff_20;
		__this->___minMesaHeight_24 = ((int32_t)il2cpp_codegen_subtract(L_84, L_85));
		// }
		return;
	}
}
// System.Byte DesertBiome::CreateBiomeSpecificVoxel(UnityEngine.Vector3Int,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t DesertBiome_CreateBiomeSpecificVoxel_m104ABA7FBB0C6DB2164473F47AFF66AB663E6342 (DesertBiome_t6606106BFD34647E912C739DA06AE456F95E42EA* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___pos0, int32_t ___seed1, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	uint8_t V_12 = 0x0;
	int32_t G_B12_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B31_0 = 0;
	{
		// byte voxelValue = 0;
		V_0 = (uint8_t)0;
		// if (!World.IsVoxelInWorld(pos))
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_0, NULL);
		bool L_2;
		L_2 = World_IsVoxelInWorld_mCAB443D36771C6A8B7673314643414B4662D391F(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.NULL;//empty block
		V_0 = (uint8_t)0;
		goto IL_01da;
	}

IL_001e:
	{
		// else if (pos.y == 0)
		int32_t L_4;
		L_4 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Bedrock;//bedrock
		V_0 = (uint8_t)3;
		goto IL_01da;
	}

IL_0035:
	{
		// else if (pos.y > heightMap[pos.x, pos.z])//above ground
		int32_t L_6;
		L_6 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_7 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_8;
		L_8 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_9;
		L_9 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = (L_7)->GetAt(L_8, L_9);
		V_3 = (bool)((((int32_t)L_6) > ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Air;//air
		V_0 = (uint8_t)2;
		goto IL_01da;
	}

IL_0064:
	{
		// else if (pos.y >= minMesaHeight)
		int32_t L_12;
		L_12 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_13 = __this->___minMesaHeight_24;
		V_4 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0086;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Mesa;
		V_0 = (uint8_t)((int32_t)9);
		goto IL_01da;
	}

IL_0086:
	{
		// else if (pos.y <= maxPlayaHeight && pos.y >= minPlayaHeight && !m_world.CheckForVoxel(new Vector3(pos.x, pos.y + 2, pos.z)))
		int32_t L_15;
		L_15 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_16 = __this->___maxPlayaHeight_25;
		if ((((int32_t)L_15) > ((int32_t)L_16)))
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_17;
		L_17 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_18 = __this->___minPlayaHeight_26;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_00d3;
		}
	}
	{
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_19 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___m_world_17;
		int32_t L_20;
		L_20 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_21;
		L_21 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_22;
		L_22 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)L_20), ((float)((int32_t)il2cpp_codegen_add(L_21, 2))), ((float)L_22), /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_24;
		L_24 = World_CheckForVoxel_mC09DF03B6CFC60530D2E59370AD2AFD28DE0A720(L_19, L_23, NULL);
		G_B12_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_00d4;
	}

IL_00d3:
	{
		G_B12_0 = 0;
	}

IL_00d4:
	{
		V_5 = (bool)G_B12_0;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00e4;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Saltflat;
		V_0 = (uint8_t)((int32_t)10);
		goto IL_01da;
	}

IL_00e4:
	{
		// else if (pos.y == heightMap[pos.x, pos.z])//top layer
		int32_t L_26;
		L_26 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_27 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_28;
		L_28 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_29;
		L_29 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_27);
		int32_t L_30;
		L_30 = (L_27)->GetAt(L_28, L_29);
		V_6 = (bool)((((int32_t)L_26) == ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_0115;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Sand;
		V_0 = (uint8_t)7;
		goto IL_01da;
	}

IL_0115:
	{
		// else if (pos.y < heightMap[pos.x, pos.z] && pos.y >= heightMap[pos.x, pos.z] - upperSoilDepth)//upper soil layer
		int32_t L_32;
		L_32 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_33 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_34;
		L_34 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_35;
		L_35 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_33);
		int32_t L_36;
		L_36 = (L_33)->GetAt(L_34, L_35);
		if ((((int32_t)L_32) >= ((int32_t)L_36)))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_37;
		L_37 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_38 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_39;
		L_39 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_40;
		L_40 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_38);
		int32_t L_41;
		L_41 = (L_38)->GetAt(L_39, L_40);
		int32_t L_42 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___upperSoilDepth_7;
		G_B19_0 = ((((int32_t)((((int32_t)L_37) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_41, L_42))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0166;
	}

IL_0165:
	{
		G_B19_0 = 0;
	}

IL_0166:
	{
		V_7 = (bool)G_B19_0;
		bool L_43 = V_7;
		if (!L_43)
		{
			goto IL_0172;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Sand;
		V_0 = (uint8_t)7;
		goto IL_01da;
	}

IL_0172:
	{
		// else if (pos.y < heightMap[pos.x, pos.z] && pos.y >= (heightMap[pos.x, pos.z] - upperSoilDepth) - middleSoilDepth)//mid soil layer
		int32_t L_44;
		L_44 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_45 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_46;
		L_46 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_47;
		L_47 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_45);
		int32_t L_48;
		L_48 = (L_45)->GetAt(L_46, L_47);
		if ((((int32_t)L_44) >= ((int32_t)L_48)))
		{
			goto IL_01c9;
		}
	}
	{
		int32_t L_49;
		L_49 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_50 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_51;
		L_51 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_52;
		L_52 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_50);
		int32_t L_53;
		L_53 = (L_50)->GetAt(L_51, L_52);
		int32_t L_54 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___upperSoilDepth_7;
		int32_t L_55 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___middleSoilDepth_8;
		G_B24_0 = ((((int32_t)((((int32_t)L_49) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_53, L_54)), L_55))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01ca;
	}

IL_01c9:
	{
		G_B24_0 = 0;
	}

IL_01ca:
	{
		V_8 = (bool)G_B24_0;
		bool L_56 = V_8;
		if (!L_56)
		{
			goto IL_01d6;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Sandstone;
		V_0 = (uint8_t)8;
		goto IL_01da;
	}

IL_01d6:
	{
		// voxelValue = (byte)BlockTypes.Stone;//stone, ores, other underground stuff
		V_0 = (uint8_t)4;
	}

IL_01da:
	{
		// if (pos.y == heightMap[pos.x, pos.z] && pos.y < minMesaHeight && pos.y > maxPlayaHeight)
		int32_t L_57;
		L_57 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_58 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_59;
		L_59 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_60;
		L_60 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_58);
		int32_t L_61;
		L_61 = (L_58)->GetAt(L_59, L_60);
		if ((!(((uint32_t)L_57) == ((uint32_t)L_61))))
		{
			goto IL_021c;
		}
	}
	{
		int32_t L_62;
		L_62 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_63 = __this->___minMesaHeight_24;
		if ((((int32_t)L_62) >= ((int32_t)L_63)))
		{
			goto IL_021c;
		}
	}
	{
		int32_t L_64;
		L_64 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_65 = __this->___maxPlayaHeight_25;
		G_B31_0 = ((((int32_t)L_64) > ((int32_t)L_65))? 1 : 0);
		goto IL_021d;
	}

IL_021c:
	{
		G_B31_0 = 0;
	}

IL_021d:
	{
		V_9 = (bool)G_B31_0;
		bool L_66 = V_9;
		if (!L_66)
		{
			goto IL_02bd;
		}
	}
	{
		// if (Noise.Get2DPerlin(new Vector2(pos.x, pos.z), -seed, treeZoneScale) > treeZoneThreshold)
		int32_t L_67;
		L_67 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_68;
		L_68 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_69), ((float)L_67), ((float)L_68), /*hidden argument*/NULL);
		int32_t L_70 = ___seed1;
		float L_71 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___treeZoneScale_10;
		float L_72;
		L_72 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_69, ((float)((-L_70))), L_71, NULL);
		float L_73 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___treeZoneThreshold_11;
		V_10 = (bool)((((float)L_72) > ((float)L_73))? 1 : 0);
		bool L_74 = V_10;
		if (!L_74)
		{
			goto IL_02bc;
		}
	}
	{
		// if (Noise.Get2DPerlin(new Vector2(pos.x, pos.z), -seed, treePlacementScale) > treePlacementThreshold)
		int32_t L_75;
		L_75 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_76;
		L_76 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_77), ((float)L_75), ((float)L_76), /*hidden argument*/NULL);
		int32_t L_78 = ___seed1;
		float L_79 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___treePlacementScale_12;
		float L_80;
		L_80 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_77, ((float)((-L_78))), L_79, NULL);
		float L_81 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___treePlacementThreshold_13;
		V_11 = (bool)((((float)L_80) > ((float)L_81))? 1 : 0);
		bool L_82 = V_11;
		if (!L_82)
		{
			goto IL_02bb;
		}
	}
	{
		// Structure.MakeCactus(pos, m_world.modifications, minTreeHeight, maxTreeHeight, barrelCactusChance, saguaroCactusChance);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_83 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_83, NULL);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_85 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___m_world_17;
		NullCheck(L_85);
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_86 = L_85->___modifications_10;
		int32_t L_87 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___minTreeHeight_15;
		int32_t L_88 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___maxTreeHeight_14;
		float L_89 = __this->___barrelCactusChance_22;
		float L_90 = __this->___saguaroCactusChance_23;
		Structure_MakeCactus_mFEEDFE227E70A17EB41EBC5E0C523CD63F16465F(L_84, L_86, L_87, L_88, L_89, L_90, NULL);
	}

IL_02bb:
	{
	}

IL_02bc:
	{
	}

IL_02bd:
	{
		// return voxelValue;
		uint8_t L_91 = V_0;
		V_12 = L_91;
		goto IL_02c2;
	}

IL_02c2:
	{
		// }
		uint8_t L_92 = V_12;
		return L_92;
	}
}
// System.Void DesertBiome::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesertBiome__ctor_m73EF31117F09FC7BB7C9816173B6B8D0FE44BB3F (DesertBiome_t6606106BFD34647E912C739DA06AE456F95E42EA* __this, const RuntimeMethod* method) 
{
	{
		// [Tooltip("Percent height max of a mesa")] public float mesaChance = 0;
		__this->___mesaChance_18 = (0.0f);
		// [Tooltip("Vertical offset height for a mesa")] public int mesaHeight = 0;
		__this->___mesaHeight_19 = 0;
		// [Tooltip("Number of blocks vertically the mesa bleeds out to")] public int mesaBleedOff = 1;
		__this->___mesaBleedOff_20 = 1;
		// [Tooltip("Percent height minimum of a playa")] public float playaChance = 0;
		__this->___playaChance_21 = (0.0f);
		// [Tooltip("Percent chance of a barrel cactus")] public float barrelCactusChance = 0.15f;
		__this->___barrelCactusChance_22 = (0.150000006f);
		// [Tooltip("Percent chance of a saguaro cactus")] public float saguaroCactusChance = 0.2f;
		__this->___saguaroCactusChance_23 = (0.200000003f);
		// private int minMesaHeight = 0;
		__this->___minMesaHeight_24 = 0;
		// private int maxPlayaHeight = 0;
		__this->___maxPlayaHeight_25 = 0;
		// private int minPlayaHeight = 0;
		__this->___minPlayaHeight_26 = 0;
		BiomeAttributes__ctor_mF8BF494FE566405D219DD9509BEFB65850E6245B(__this, NULL);
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
// System.Void Loader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_Start_mC8DA6EFF2E7C0B79052B4960CCA9039732951ED2 (Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(LoadAsyncOperation());
		RuntimeObject* L_0;
		L_0 = Loader_LoadAsyncOperation_m77CBD283596E2EF63E58878F53EA0298C86361D9(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Loader::LoadAsyncOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loader_LoadAsyncOperation_m77CBD283596E2EF63E58878F53EA0298C86361D9 (Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3* L_0 = (U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3*)il2cpp_codegen_object_new(U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAsyncOperationU3Ed__3__ctor_m11E8948200AE13EBEB6F76641760B8360425E478(L_0, 0, NULL);
		U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader__ctor_mCD8907E0B3E092C7FC55DB1F9A29CA8876A3E0E0 (Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8* __this, const RuntimeMethod* method) 
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
// System.Void Loader/<LoadAsyncOperation>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncOperationU3Ed__3__ctor_m11E8948200AE13EBEB6F76641760B8360425E478 (U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Loader/<LoadAsyncOperation>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncOperationU3Ed__3_System_IDisposable_Dispose_m9B05150D8BDF14B60F2127654D78EB73A8825C09 (U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Loader/<LoadAsyncOperation>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAsyncOperationU3Ed__3_MoveNext_mBAC5B8316F37945998443E2264B1CAF3DF83467A (U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0069;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneToLoad);
		Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		String_t* L_4 = L_3->___sceneToLoad_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5;
		L_5 = SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184(L_4, NULL);
		__this->___U3CasyncLoadU3E5__1_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncLoadU3E5__1_3), (void*)L_5);
		goto IL_0071;
	}

IL_0038:
	{
		// loadingBar.fillAmount = asyncLoad.progress;
		Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = L_6->___loadingBar_5;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_8 = __this->___U3CasyncLoadU3E5__1_3;
		NullCheck(L_8);
		float L_9;
		L_9 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_8, NULL);
		NullCheck(L_7);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_7, L_9, NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_10 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_10, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0069:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0071:
	{
		// while(asyncLoad.progress < 1)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_11 = __this->___U3CasyncLoadU3E5__1_3;
		NullCheck(L_11);
		float L_12;
		L_12 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_11, NULL);
		V_1 = (bool)((((float)L_12) < ((float)(1.0f)))? 1 : 0);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_0038;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Loader/<LoadAsyncOperation>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsyncOperationU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m18D06B02438CF317D47BDCA02BABD340543ED268 (U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Loader/<LoadAsyncOperation>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncOperationU3Ed__3_System_Collections_IEnumerator_Reset_m399CF118B8862C0C3562C6C587F6C78DEF363120 (U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsyncOperationU3Ed__3_System_Collections_IEnumerator_Reset_m399CF118B8862C0C3562C6C587F6C78DEF363120_RuntimeMethod_var)));
	}
}
// System.Object Loader/<LoadAsyncOperation>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsyncOperationU3Ed__3_System_Collections_IEnumerator_get_Current_mC2EE3EB77E9298AB2961D51A5BAC52ACCA85597C (U3CLoadAsyncOperationU3Ed__3_tEE40DAD6788F71D6FE19D7E5DD989C0BEBE95AA3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Single Noise::Get2DPerlin(UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, float ___offset1, float ___scale2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return Mathf.PerlinNoise((pos.x + 0.1f) / VoxelData.ChunkWidth * scale + offset, (pos.y + 0.1f) / VoxelData.ChunkWidth * scale + offset);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___pos0;
		float L_1 = L_0.___x_0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_2 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		float L_3 = ___scale2;
		float L_4 = ___offset1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___pos0;
		float L_6 = L_5.___y_1;
		int32_t L_7 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		float L_8 = ___scale2;
		float L_9 = ___offset1;
		float L_10;
		L_10 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_add(L_1, (0.100000001f)))/((float)L_2))), L_3)), L_4)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_add(L_6, (0.100000001f)))/((float)L_7))), L_8)), L_9)), NULL);
		V_0 = L_10;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		float L_11 = V_0;
		return L_11;
	}
}
// System.Boolean Noise::Get3DPerlinNoise(UnityEngine.Vector3,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Noise_Get3DPerlinNoise_m2BB4767CF6775A8CCCCDC6B2C99C25F6DC8B97C1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___offset1, float ___scale2, float ___threshold3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	bool V_9 = false;
	bool V_10 = false;
	{
		// float x = (pos.x + offset + 0.1f) * scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		float L_2 = ___offset1;
		float L_3 = ___scale2;
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_1, L_2)), (0.100000001f))), L_3));
		// float y = (pos.y + offset + 0.1f) * scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___pos0;
		float L_5 = L_4.___y_3;
		float L_6 = ___offset1;
		float L_7 = ___scale2;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_5, L_6)), (0.100000001f))), L_7));
		// float z = (pos.z + offset + 0.1f) * scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___pos0;
		float L_9 = L_8.___z_4;
		float L_10 = ___offset1;
		float L_11 = ___scale2;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_9, L_10)), (0.100000001f))), L_11));
		// float AB = Mathf.PerlinNoise(x, y);
		float L_12 = V_0;
		float L_13 = V_1;
		float L_14;
		L_14 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_12, L_13, NULL);
		V_3 = L_14;
		// float BC = Mathf.PerlinNoise(y, z);
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17;
		L_17 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_15, L_16, NULL);
		V_4 = L_17;
		// float AC = Mathf.PerlinNoise(x, z);
		float L_18 = V_0;
		float L_19 = V_2;
		float L_20;
		L_20 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_18, L_19, NULL);
		V_5 = L_20;
		// float BA = Mathf.PerlinNoise(y, x);
		float L_21 = V_1;
		float L_22 = V_0;
		float L_23;
		L_23 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_21, L_22, NULL);
		V_6 = L_23;
		// float CB = Mathf.PerlinNoise(z, y);
		float L_24 = V_2;
		float L_25 = V_1;
		float L_26;
		L_26 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_24, L_25, NULL);
		V_7 = L_26;
		// float CA = Mathf.PerlinNoise(z, x);
		float L_27 = V_2;
		float L_28 = V_0;
		float L_29;
		L_29 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(L_27, L_28, NULL);
		V_8 = L_29;
		// if ((AB + BC + AC + BA + CB + CA) / 6f > threshold)
		float L_30 = V_3;
		float L_31 = V_4;
		float L_32 = V_5;
		float L_33 = V_6;
		float L_34 = V_7;
		float L_35 = V_8;
		float L_36 = ___threshold3;
		V_9 = (bool)((((float)((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_30, L_31)), L_32)), L_33)), L_34)), L_35))/(6.0f)))) > ((float)L_36))? 1 : 0);
		bool L_37 = V_9;
		if (!L_37)
		{
			goto IL_008e;
		}
	}
	{
		// return true;
		V_10 = (bool)1;
		goto IL_0094;
	}

IL_008e:
	{
		// return false;
		V_10 = (bool)0;
		goto IL_0094;
	}

IL_0094:
	{
		// }
		bool L_38 = V_10;
		return L_38;
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
// System.Void Structure::MakeOakTree(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeOakTree_m7E0F83A0543BBBB2B39ADE94C0172802A2DD4063 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, int32_t ___minTrunkHeight2, int32_t ___maxTrunkHeight3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	{
		// int height = (int)(maxTrunkHeight * Noise.Get2DPerlin(new Vector2(position.x, position.z), 250f, 3f));
		int32_t L_0 = ___maxTrunkHeight3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		float L_4 = L_3.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_2, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_5, (250.0f), (3.0f), NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_0), L_6)));
		// if (height < minTrunkHeight)
		int32_t L_7 = V_0;
		int32_t L_8 = ___minTrunkHeight2;
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		// height = minTrunkHeight;
		int32_t L_10 = ___minTrunkHeight2;
		V_0 = L_10;
	}

IL_0032:
	{
		// for (int i = 1; i < height; i++)
		V_2 = 1;
		goto IL_0066;
	}

IL_0036:
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + i, (int)position.z), (byte)BlockTypes.Oak_Log));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_11 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___position0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___position0;
		float L_15 = L_14.___y_3;
		int32_t L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___position0;
		float L_18 = L_17.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_19), il2cpp_codegen_cast_double_to_int<int32_t>(L_13), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_15), L_16)), il2cpp_codegen_cast_double_to_int<int32_t>(L_18), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_20 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_20, L_19, (uint8_t)((int32_t)15), NULL);
		NullCheck(L_11);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_11, L_20, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// for (int i = 1; i < height; i++)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0066:
	{
		// for (int i = 1; i < height; i++)
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		V_3 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_3;
		if (L_24)
		{
			goto IL_0036;
		}
	}
	{
		// for (int x = -3; x < 4; x++)
		V_4 = ((int32_t)-3);
		goto IL_0180;
	}

IL_0077:
	{
		// for (int y = 0; y < 7; y++)
		V_5 = 0;
		goto IL_016b;
	}

IL_0080:
	{
		// for (int z = -3; z < 4; z++)
		V_6 = ((int32_t)-3);
		goto IL_0156;
	}

IL_008a:
	{
		// if ((int)position.x + x >= VoxelData.WorldSizeInVoxels || (int)position.z + z >= VoxelData.WorldSizeInVoxels
		//     || (int)position.x + x < 0 || (int)position.z + z < 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___position0;
		float L_26 = L_25.___x_2;
		int32_t L_27 = V_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_26), L_27))) >= ((int32_t)L_28)))
		{
			goto IL_00c9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___position0;
		float L_30 = L_29.___z_4;
		int32_t L_31 = V_6;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_32;
		L_32 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_30), L_31))) >= ((int32_t)L_32)))
		{
			goto IL_00c9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___position0;
		float L_34 = L_33.___x_2;
		int32_t L_35 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_34), L_35))) < ((int32_t)0)))
		{
			goto IL_00c9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___position0;
		float L_37 = L_36.___z_4;
		int32_t L_38 = V_6;
		G_B13_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_37), L_38))) < ((int32_t)0))? 1 : 0);
		goto IL_00ca;
	}

IL_00c9:
	{
		G_B13_0 = 1;
	}

IL_00ca:
	{
		V_7 = (bool)G_B13_0;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_00d3;
		}
	}
	{
		// continue;
		goto IL_0150;
	}

IL_00d3:
	{
		// if (x == 0 && z == 0 && y < 6)
		int32_t L_40 = V_4;
		if (L_40)
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_41 = V_6;
		if (L_41)
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_42 = V_5;
		G_B19_0 = ((((int32_t)L_42) < ((int32_t)6))? 1 : 0);
		goto IL_00e3;
	}

IL_00e2:
	{
		G_B19_0 = 0;
	}

IL_00e3:
	{
		V_8 = (bool)G_B19_0;
		bool L_43 = V_8;
		if (!L_43)
		{
			goto IL_011a;
		}
	}
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + height + y, (int)position.z), (byte)BlockTypes.Oak_Log));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_44 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___position0;
		float L_46 = L_45.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = ___position0;
		float L_48 = L_47.___y_3;
		int32_t L_49 = V_0;
		int32_t L_50 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = ___position0;
		float L_52 = L_51.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_53), il2cpp_codegen_cast_double_to_int<int32_t>(L_46), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_48), L_49)), L_50)), il2cpp_codegen_cast_double_to_int<int32_t>(L_52), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_54 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_54, L_53, (uint8_t)((int32_t)15), NULL);
		NullCheck(L_44);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_44, L_54, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		goto IL_014f;
	}

IL_011a:
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x + x, (int)position.y + height + y, (int)position.z + z), (byte)BlockTypes.Oak_Leaves));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_55 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ___position0;
		float L_57 = L_56.___x_2;
		int32_t L_58 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = ___position0;
		float L_60 = L_59.___y_3;
		int32_t L_61 = V_0;
		int32_t L_62 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ___position0;
		float L_64 = L_63.___z_4;
		int32_t L_65 = V_6;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_66), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_57), L_58)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_60), L_61)), L_62)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_64), L_65)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_67 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_67, L_66, (uint8_t)((int32_t)17), NULL);
		NullCheck(L_55);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_55, L_67, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
	}

IL_014f:
	{
	}

IL_0150:
	{
		// for (int z = -3; z < 4; z++)
		int32_t L_68 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_0156:
	{
		// for (int z = -3; z < 4; z++)
		int32_t L_69 = V_6;
		V_9 = (bool)((((int32_t)L_69) < ((int32_t)4))? 1 : 0);
		bool L_70 = V_9;
		if (L_70)
		{
			goto IL_008a;
		}
	}
	{
		// for (int y = 0; y < 7; y++)
		int32_t L_71 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_016b:
	{
		// for (int y = 0; y < 7; y++)
		int32_t L_72 = V_5;
		V_10 = (bool)((((int32_t)L_72) < ((int32_t)7))? 1 : 0);
		bool L_73 = V_10;
		if (L_73)
		{
			goto IL_0080;
		}
	}
	{
		// for (int x = -3; x < 4; x++)
		int32_t L_74 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0180:
	{
		// for (int x = -3; x < 4; x++)
		int32_t L_75 = V_4;
		V_11 = (bool)((((int32_t)L_75) < ((int32_t)4))? 1 : 0);
		bool L_76 = V_11;
		if (L_76)
		{
			goto IL_0077;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Structure::MakeFirTree(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeFirTree_mC7B4917610E64CA22B61A2C1912C2199D033EC54 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, int32_t ___minTrunkHeight2, int32_t ___maxTrunkHeight3, float ___growthRate4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	int32_t G_B21_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B34_0 = 0;
	{
		// int height = (int)(maxTrunkHeight * Noise.Get2DPerlin(new Vector2(position.x, position.z), 250f, 3f));
		int32_t L_0 = ___maxTrunkHeight3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		float L_4 = L_3.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_2, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_5, (250.0f), (3.0f), NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_0), L_6)));
		// if (height < minTrunkHeight)
		int32_t L_7 = V_0;
		int32_t L_8 = ___minTrunkHeight2;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		// height = minTrunkHeight;
		int32_t L_10 = ___minTrunkHeight2;
		V_0 = L_10;
	}

IL_0032:
	{
		// for (int i = 1; i < height; i++)
		V_3 = 1;
		goto IL_0066;
	}

IL_0036:
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + i, (int)position.z), (byte)BlockTypes.Fir_Log));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_11 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___position0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___position0;
		float L_15 = L_14.___y_3;
		int32_t L_16 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___position0;
		float L_18 = L_17.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_19), il2cpp_codegen_cast_double_to_int<int32_t>(L_13), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_15), L_16)), il2cpp_codegen_cast_double_to_int<int32_t>(L_18), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_20 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_20, L_19, (uint8_t)((int32_t)16), NULL);
		NullCheck(L_11);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_11, L_20, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// for (int i = 1; i < height; i++)
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0066:
	{
		// for (int i = 1; i < height; i++)
		int32_t L_22 = V_3;
		int32_t L_23 = V_0;
		V_4 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_4;
		if (L_24)
		{
			goto IL_0036;
		}
	}
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + height, (int)position.z), (byte)BlockTypes.Fir_Leaves));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_25 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ___position0;
		float L_27 = L_26.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___position0;
		float L_29 = L_28.___y_3;
		int32_t L_30 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___position0;
		float L_32 = L_31.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_33), il2cpp_codegen_cast_double_to_int<int32_t>(L_27), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_29), L_30)), il2cpp_codegen_cast_double_to_int<int32_t>(L_32), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_34 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_34, L_33, (uint8_t)((int32_t)18), NULL);
		NullCheck(L_25);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_25, L_34, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// float horizGrowth = 1;
		V_1 = (1.0f);
		// for (int y = height - 1; y > 3; y -= 2)
		int32_t L_35 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		goto IL_02c8;
	}

IL_00aa:
	{
		// if ((int)position.x + 1 < VoxelData.WorldSizeInVoxels)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___position0;
		float L_37 = L_36.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_38;
		L_38 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		V_7 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_37), 1))) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_00f0;
		}
	}
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x + 1, (int)position.y + y, (int)position.z), (byte)BlockTypes.Fir_Leaves));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_40 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = ___position0;
		float L_42 = L_41.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = ___position0;
		float L_44 = L_43.___y_3;
		int32_t L_45 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = ___position0;
		float L_47 = L_46.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_48), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_42), 1)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_44), L_45)), il2cpp_codegen_cast_double_to_int<int32_t>(L_47), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_49 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_49, L_48, (uint8_t)((int32_t)18), NULL);
		NullCheck(L_40);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_40, L_49, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
	}

IL_00f0:
	{
		// if ((int)position.x - 1 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = ___position0;
		float L_51 = L_50.___x_2;
		V_8 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_51), 1))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_8;
		if (!L_52)
		{
			goto IL_0134;
		}
	}
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x - 1, (int)position.y + y, (int)position.z), (byte)BlockTypes.Fir_Leaves));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_53 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = ___position0;
		float L_55 = L_54.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ___position0;
		float L_57 = L_56.___y_3;
		int32_t L_58 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = ___position0;
		float L_60 = L_59.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_61), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_55), 1)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_57), L_58)), il2cpp_codegen_cast_double_to_int<int32_t>(L_60), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_62 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_62, L_61, (uint8_t)((int32_t)18), NULL);
		NullCheck(L_53);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_53, L_62, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
	}

IL_0134:
	{
		// if ((int)position.z + 1 < VoxelData.WorldSizeInVoxels)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ___position0;
		float L_64 = L_63.___z_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_65;
		L_65 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		V_9 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_64), 1))) < ((int32_t)L_65))? 1 : 0);
		bool L_66 = V_9;
		if (!L_66)
		{
			goto IL_0179;
		}
	}
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + y, (int)position.z + 1), (byte)BlockTypes.Fir_Leaves));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_67 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = ___position0;
		float L_69 = L_68.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = ___position0;
		float L_71 = L_70.___y_3;
		int32_t L_72 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = ___position0;
		float L_74 = L_73.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_75), il2cpp_codegen_cast_double_to_int<int32_t>(L_69), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_71), L_72)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_74), 1)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_76 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_76, L_75, (uint8_t)((int32_t)18), NULL);
		NullCheck(L_67);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_67, L_76, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
	}

IL_0179:
	{
		// if ((int)position.z - 1 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = ___position0;
		float L_78 = L_77.___z_4;
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_78), 1))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_79 = V_10;
		if (!L_79)
		{
			goto IL_01bd;
		}
	}
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + y, (int)position.z - 1), (byte)BlockTypes.Fir_Leaves));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_80 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = ___position0;
		float L_82 = L_81.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = ___position0;
		float L_84 = L_83.___y_3;
		int32_t L_85 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = ___position0;
		float L_87 = L_86.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_88), il2cpp_codegen_cast_double_to_int<int32_t>(L_82), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_84), L_85)), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_87), 1)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_89 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_89);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_89, L_88, (uint8_t)((int32_t)18), NULL);
		NullCheck(L_80);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_80, L_89, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
	}

IL_01bd:
	{
		// horizGrowth += growthRate;
		float L_90 = V_1;
		float L_91 = ___growthRate4;
		V_1 = ((float)il2cpp_codegen_add(L_90, L_91));
		// int horizGrowthBlocks = Mathf.RoundToInt(horizGrowth);
		float L_92 = V_1;
		int32_t L_93;
		L_93 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(L_92, NULL);
		V_6 = L_93;
		// for (int x = -horizGrowthBlocks; x <= horizGrowthBlocks; x++)
		int32_t L_94 = V_6;
		V_11 = ((-L_94));
		goto IL_02af;
	}

IL_01d4:
	{
		// for (int z = -horizGrowthBlocks; z <= horizGrowthBlocks; z++)
		int32_t L_95 = V_6;
		V_12 = ((-L_95));
		goto IL_0296;
	}

IL_01df:
	{
		// if ((int)position.x + x >= VoxelData.WorldSizeInVoxels || (int)position.z + z >= VoxelData.WorldSizeInVoxels
		//     || (int)position.x + x < 0 || (int)position.z + z < 0)//checking the upper bound but not the lower bound
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = ___position0;
		float L_97 = L_96.___x_2;
		int32_t L_98 = V_11;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_99;
		L_99 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_97), L_98))) >= ((int32_t)L_99)))
		{
			goto IL_021e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = ___position0;
		float L_101 = L_100.___z_4;
		int32_t L_102 = V_12;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_103;
		L_103 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_101), L_102))) >= ((int32_t)L_103)))
		{
			goto IL_021e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = ___position0;
		float L_105 = L_104.___x_2;
		int32_t L_106 = V_11;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_105), L_106))) < ((int32_t)0)))
		{
			goto IL_021e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = ___position0;
		float L_108 = L_107.___z_4;
		int32_t L_109 = V_12;
		G_B21_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_108), L_109))) < ((int32_t)0))? 1 : 0);
		goto IL_021f;
	}

IL_021e:
	{
		G_B21_0 = 1;
	}

IL_021f:
	{
		V_13 = (bool)G_B21_0;
		bool L_110 = V_13;
		if (!L_110)
		{
			goto IL_0228;
		}
	}
	{
		// continue;
		goto IL_0290;
	}

IL_0228:
	{
		// if ((x == 0 && z == 0)
		//     || ((x == -horizGrowthBlocks || x == horizGrowthBlocks) && (z == -horizGrowthBlocks || z == horizGrowthBlocks)))
		int32_t L_111 = V_11;
		if (L_111)
		{
			goto IL_0230;
		}
	}
	{
		int32_t L_112 = V_12;
		if (!L_112)
		{
			goto IL_0252;
		}
	}

IL_0230:
	{
		int32_t L_113 = V_11;
		int32_t L_114 = V_6;
		if ((((int32_t)L_113) == ((int32_t)((-L_114)))))
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_115 = V_11;
		int32_t L_116 = V_6;
		if ((!(((uint32_t)L_115) == ((uint32_t)L_116))))
		{
			goto IL_024f;
		}
	}

IL_023d:
	{
		int32_t L_117 = V_12;
		int32_t L_118 = V_6;
		if ((((int32_t)L_117) == ((int32_t)((-L_118)))))
		{
			goto IL_024c;
		}
	}
	{
		int32_t L_119 = V_12;
		int32_t L_120 = V_6;
		G_B30_0 = ((((int32_t)L_119) == ((int32_t)L_120))? 1 : 0);
		goto IL_024d;
	}

IL_024c:
	{
		G_B30_0 = 1;
	}

IL_024d:
	{
		G_B32_0 = G_B30_0;
		goto IL_0250;
	}

IL_024f:
	{
		G_B32_0 = 0;
	}

IL_0250:
	{
		G_B34_0 = G_B32_0;
		goto IL_0253;
	}

IL_0252:
	{
		G_B34_0 = 1;
	}

IL_0253:
	{
		V_14 = (bool)G_B34_0;
		bool L_121 = V_14;
		if (!L_121)
		{
			goto IL_025c;
		}
	}
	{
		// continue;
		goto IL_0290;
	}

IL_025c:
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x + x, (int)position.y + y - 1, (int)position.z + z), (byte)BlockTypes.Fir_Leaves));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_122 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123 = ___position0;
		float L_124 = L_123.___x_2;
		int32_t L_125 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = ___position0;
		float L_127 = L_126.___y_3;
		int32_t L_128 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129 = ___position0;
		float L_130 = L_129.___z_4;
		int32_t L_131 = V_12;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_132;
		memset((&L_132), 0, sizeof(L_132));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_132), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_124), L_125)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_127), L_128)), 1)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_130), L_131)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_133 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_133);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_133, L_132, (uint8_t)((int32_t)18), NULL);
		NullCheck(L_122);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_122, L_133, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
	}

IL_0290:
	{
		// for (int z = -horizGrowthBlocks; z <= horizGrowthBlocks; z++)
		int32_t L_134 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_134, 1));
	}

IL_0296:
	{
		// for (int z = -horizGrowthBlocks; z <= horizGrowthBlocks; z++)
		int32_t L_135 = V_12;
		int32_t L_136 = V_6;
		V_15 = (bool)((((int32_t)((((int32_t)L_135) > ((int32_t)L_136))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_137 = V_15;
		if (L_137)
		{
			goto IL_01df;
		}
	}
	{
		// for (int x = -horizGrowthBlocks; x <= horizGrowthBlocks; x++)
		int32_t L_138 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_02af:
	{
		// for (int x = -horizGrowthBlocks; x <= horizGrowthBlocks; x++)
		int32_t L_139 = V_11;
		int32_t L_140 = V_6;
		V_16 = (bool)((((int32_t)((((int32_t)L_139) > ((int32_t)L_140))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_141 = V_16;
		if (L_141)
		{
			goto IL_01d4;
		}
	}
	{
		// for (int y = height - 1; y > 3; y -= 2)
		int32_t L_142 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_142, 2));
	}

IL_02c8:
	{
		// for (int y = height - 1; y > 3; y -= 2)
		int32_t L_143 = V_5;
		V_17 = (bool)((((int32_t)L_143) > ((int32_t)3))? 1 : 0);
		bool L_144 = V_17;
		if (L_144)
		{
			goto IL_00aa;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Structure::MakeCactus(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>,System.Int32,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeCactus_mFEEDFE227E70A17EB41EBC5E0C523CD63F16465F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, int32_t ___minCactusHeight2, int32_t ___maxCactusHeight3, float ___barrelCactusChance4, float ___saguaroCactusChance5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// float result = Random.Range(0, barrelCactusChance + saguaroCactusChance + 0.2f);
		float L_0 = ___barrelCactusChance4;
		float L_1 = ___saguaroCactusChance5;
		float L_2;
		L_2 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_0, L_1)), (0.200000003f))), NULL);
		V_0 = L_2;
		// if (result <= barrelCactusChance)
		float L_3 = V_0;
		float L_4 = ___barrelCactusChance4;
		V_1 = (bool)((((int32_t)((!(((float)L_3) <= ((float)L_4)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// MakeBarrelCactus(position, queue);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position0;
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_7 = ___queue1;
		Structure_MakeBarrelCactus_m18E75B44A3349FDA97B290B6D5B6680A9E794657(L_6, L_7, NULL);
		goto IL_0060;
	}

IL_002f:
	{
		// else if (result > barrelCactusChance && result <= barrelCactusChance + saguaroCactusChance)
		float L_8 = V_0;
		float L_9 = ___barrelCactusChance4;
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_0041;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = ___barrelCactusChance4;
		float L_12 = ___saguaroCactusChance5;
		G_B5_0 = ((((int32_t)((!(((float)L_10) <= ((float)((float)il2cpp_codegen_add(L_11, L_12)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = 0;
	}

IL_0042:
	{
		V_2 = (bool)G_B5_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		// MakeSaguaroCactus(position, queue, minCactusHeight, maxCactusHeight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___position0;
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_15 = ___queue1;
		int32_t L_16 = ___minCactusHeight2;
		int32_t L_17 = ___maxCactusHeight3;
		Structure_MakeSaguaroCactus_mE80FCA0B2B9064A94F45F13BDE284C9AA6187CAA(L_14, L_15, L_16, L_17, NULL);
		goto IL_0060;
	}

IL_0054:
	{
		// MakeStandardCactus(position, queue, minCactusHeight, maxCactusHeight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___position0;
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_19 = ___queue1;
		int32_t L_20 = ___minCactusHeight2;
		int32_t L_21 = ___maxCactusHeight3;
		Structure_MakeStandardCactus_m02983B99636F64028347F14F8BCE5B9CD9544575(L_18, L_19, L_20, L_21, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Structure::MakeBarrelCactus(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeBarrelCactus_m18E75B44A3349FDA97B290B6D5B6680A9E794657 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + 1, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_0 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___position0;
		float L_6 = L_5.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_7), il2cpp_codegen_cast_double_to_int<int32_t>(L_2), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_4), 1)), il2cpp_codegen_cast_double_to_int<int32_t>(L_6), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_8 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_8, L_7, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_0);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_0, L_8, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Structure::MakeSaguaroCactus(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeSaguaroCactus_mE80FCA0B2B9064A94F45F13BDE284C9AA6187CAA (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, int32_t ___minCactusHeight2, int32_t ___maxCactusHeight3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B28_0 = 0;
	{
		// int height = (int)(maxCactusHeight * Noise.Get2DPerlin(new Vector2(position.x, position.z), 250f, 3f));
		int32_t L_0 = ___maxCactusHeight3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		float L_4 = L_3.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_2, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_5, (250.0f), (3.0f), NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_0), L_6)));
		// if (height < minCactusHeight)
		int32_t L_7 = V_0;
		int32_t L_8 = ___minCactusHeight2;
		V_5 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0034;
		}
	}
	{
		// height = minCactusHeight;
		int32_t L_10 = ___minCactusHeight2;
		V_0 = L_10;
	}

IL_0034:
	{
		// for (int i = 1; i < height; i++)
		V_6 = 1;
		goto IL_006c;
	}

IL_0039:
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + i, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_11 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___position0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___position0;
		float L_15 = L_14.___y_3;
		int32_t L_16 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___position0;
		float L_18 = L_17.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_19), il2cpp_codegen_cast_double_to_int<int32_t>(L_13), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_15), L_16)), il2cpp_codegen_cast_double_to_int<int32_t>(L_18), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_20 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_20, L_19, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_11);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_11, L_20, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// for (int i = 1; i < height; i++)
		int32_t L_21 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_006c:
	{
		// for (int i = 1; i < height; i++)
		int32_t L_22 = V_6;
		int32_t L_23 = V_0;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_7;
		if (L_24)
		{
			goto IL_0039;
		}
	}
	{
		// int armCount = Random.Range(1, 5);
		int32_t L_25;
		L_25 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 5, NULL);
		V_1 = L_25;
		// int armStartHeight = (height / 2);
		int32_t L_26 = V_0;
		V_2 = ((int32_t)(L_26/2));
		// List<Vector3> armStartPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_27 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_27, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_3 = L_27;
		// switch (armCount)
		int32_t L_28 = V_1;
		V_9 = L_28;
		int32_t L_29 = V_9;
		V_8 = L_29;
		int32_t L_30 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract(L_30, 1)))
		{
			case 0:
			{
				goto IL_0261;
			}
			case 1:
			{
				goto IL_01d0;
			}
			case 2:
			{
				goto IL_013f;
			}
			case 3:
			{
				goto IL_00ae;
			}
		}
	}
	{
		goto IL_02f2;
	}

IL_00ae:
	{
		// if ((int)position.z + 2 < VoxelData.WorldSizeInVoxels && (int)position.z + 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___position0;
		float L_32 = L_31.___z_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_32), 2))) >= ((int32_t)L_33)))
		{
			goto IL_00cf;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___position0;
		float L_35 = L_34.___z_4;
		G_B10_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_35), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d0;
	}

IL_00cf:
	{
		G_B10_0 = 0;
	}

IL_00d0:
	{
		V_10 = (bool)G_B10_0;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_013d;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_37;
		L_37 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_4 = L_37;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z + 1), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_38 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = ___position0;
		float L_40 = L_39.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = ___position0;
		float L_42 = L_41.___y_3;
		int32_t L_43 = V_2;
		int32_t L_44 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___position0;
		float L_46 = L_45.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_47), il2cpp_codegen_cast_double_to_int<int32_t>(L_40), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_42), L_43)), L_44)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_46), 1)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_48 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_48, L_47, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_38);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_38, L_48, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z + 2));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_49 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = ___position0;
		float L_51 = L_50.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = ___position0;
		float L_53 = L_52.___y_3;
		int32_t L_54 = V_2;
		int32_t L_55 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ___position0;
		float L_57 = L_56.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_58), il2cpp_codegen_cast_double_to_int<int32_t>(L_51), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_53), L_54)), L_55)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_57), 2)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_58, NULL);
		NullCheck(L_49);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_49, L_59, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_013d:
	{
		// goto case 3;
		goto IL_013f;
	}

IL_013f:
	{
		// if ((int)position.x + 2 < VoxelData.WorldSizeInVoxels && (int)position.x + 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = ___position0;
		float L_61 = L_60.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_61), 2))) >= ((int32_t)L_62)))
		{
			goto IL_0160;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ___position0;
		float L_64 = L_63.___x_2;
		G_B16_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_64), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0161;
	}

IL_0160:
	{
		G_B16_0 = 0;
	}

IL_0161:
	{
		V_11 = (bool)G_B16_0;
		bool L_65 = V_11;
		if (!L_65)
		{
			goto IL_01ce;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_66;
		L_66 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_4 = L_66;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x + 1, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_67 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = ___position0;
		float L_69 = L_68.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = ___position0;
		float L_71 = L_70.___y_3;
		int32_t L_72 = V_2;
		int32_t L_73 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ___position0;
		float L_75 = L_74.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_76), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_69), 1)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_71), L_72)), L_73)), il2cpp_codegen_cast_double_to_int<int32_t>(L_75), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_77 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_77, L_76, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_67);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_67, L_77, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x + 2, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_78 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = ___position0;
		float L_80 = L_79.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = ___position0;
		float L_82 = L_81.___y_3;
		int32_t L_83 = V_2;
		int32_t L_84 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ___position0;
		float L_86 = L_85.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_87;
		memset((&L_87), 0, sizeof(L_87));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_87), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_80), 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_82), L_83)), L_84)), il2cpp_codegen_cast_double_to_int<int32_t>(L_86), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_87, NULL);
		NullCheck(L_78);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_78, L_88, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_01ce:
	{
		// goto case 2;
		goto IL_01d0;
	}

IL_01d0:
	{
		// if ((int)position.z - 2 < VoxelData.WorldSizeInVoxels && (int)position.z - 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = ___position0;
		float L_90 = L_89.___z_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_91;
		L_91 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_90), 2))) >= ((int32_t)L_91)))
		{
			goto IL_01f1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = ___position0;
		float L_93 = L_92.___z_4;
		G_B22_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_93), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01f2;
	}

IL_01f1:
	{
		G_B22_0 = 0;
	}

IL_01f2:
	{
		V_12 = (bool)G_B22_0;
		bool L_94 = V_12;
		if (!L_94)
		{
			goto IL_025f;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_95;
		L_95 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_4 = L_95;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z - 1), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_96 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = ___position0;
		float L_98 = L_97.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = ___position0;
		float L_100 = L_99.___y_3;
		int32_t L_101 = V_2;
		int32_t L_102 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = ___position0;
		float L_104 = L_103.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_105), il2cpp_codegen_cast_double_to_int<int32_t>(L_98), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_100), L_101)), L_102)), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_104), 1)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_106 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_106);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_106, L_105, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_96);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_96, L_106, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z - 2));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_107 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = ___position0;
		float L_109 = L_108.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = ___position0;
		float L_111 = L_110.___y_3;
		int32_t L_112 = V_2;
		int32_t L_113 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = ___position0;
		float L_115 = L_114.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_116;
		memset((&L_116), 0, sizeof(L_116));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_116), il2cpp_codegen_cast_double_to_int<int32_t>(L_109), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_111), L_112)), L_113)), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_115), 2)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_116, NULL);
		NullCheck(L_107);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_107, L_117, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_025f:
	{
		// goto case 1;
		goto IL_0261;
	}

IL_0261:
	{
		// if ((int)position.x - 2 < VoxelData.WorldSizeInVoxels && (int)position.x - 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = ___position0;
		float L_119 = L_118.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_120;
		L_120 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_119), 2))) >= ((int32_t)L_120)))
		{
			goto IL_0282;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = ___position0;
		float L_122 = L_121.___x_2;
		G_B28_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_122), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0283;
	}

IL_0282:
	{
		G_B28_0 = 0;
	}

IL_0283:
	{
		V_13 = (bool)G_B28_0;
		bool L_123 = V_13;
		if (!L_123)
		{
			goto IL_02f0;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_124;
		L_124 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_4 = L_124;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x - 1, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_125 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = ___position0;
		float L_127 = L_126.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = ___position0;
		float L_129 = L_128.___y_3;
		int32_t L_130 = V_2;
		int32_t L_131 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = ___position0;
		float L_133 = L_132.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_134;
		memset((&L_134), 0, sizeof(L_134));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_134), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_127), 1)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_129), L_130)), L_131)), il2cpp_codegen_cast_double_to_int<int32_t>(L_133), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_135 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_135);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_135, L_134, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_125);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_125, L_135, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x - 2, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_136 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = ___position0;
		float L_138 = L_137.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = ___position0;
		float L_140 = L_139.___y_3;
		int32_t L_141 = V_2;
		int32_t L_142 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = ___position0;
		float L_144 = L_143.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_145;
		memset((&L_145), 0, sizeof(L_145));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_145), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_138), 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_140), L_141)), L_142)), il2cpp_codegen_cast_double_to_int<int32_t>(L_144), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_145, NULL);
		NullCheck(L_136);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_136, L_146, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_02f0:
	{
		// break;
		goto IL_02f2;
	}

IL_02f2:
	{
		// foreach (Vector3 armPoint in armStartPoints)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_147 = V_3;
		NullCheck(L_147);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_148;
		L_148 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_147, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_14 = L_148;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_036a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_14), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_035f_1;
			}

IL_02fd_1:
			{
				// foreach (Vector3 armPoint in armStartPoints)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
				L_149 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_14), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_15 = L_149;
				// int armHeight = Random.Range(1, height - armStartHeight - 1);
				int32_t L_150 = V_0;
				int32_t L_151 = V_2;
				int32_t L_152;
				L_152 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_150, L_151)), 1)), NULL);
				V_16 = L_152;
				// for (int i = 0; i <= armHeight; i++)
				V_17 = 0;
				goto IL_034f_1;
			}

IL_0319_1:
			{
				// queue.Enqueue(new VoxelMod(new Vector3Int((int)armPoint.x, (int)armPoint.y + i, (int)armPoint.z), (byte)BlockTypes.Cactus));
				Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_153 = ___queue1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154 = V_15;
				float L_155 = L_154.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = V_15;
				float L_157 = L_156.___y_3;
				int32_t L_158 = V_17;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159 = V_15;
				float L_160 = L_159.___z_4;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_161;
				memset((&L_161), 0, sizeof(L_161));
				Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_161), il2cpp_codegen_cast_double_to_int<int32_t>(L_155), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_157), L_158)), il2cpp_codegen_cast_double_to_int<int32_t>(L_160), /*hidden argument*/NULL);
				VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_162 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
				NullCheck(L_162);
				VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_162, L_161, (uint8_t)((int32_t)14), NULL);
				NullCheck(L_153);
				Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_153, L_162, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
				// for (int i = 0; i <= armHeight; i++)
				int32_t L_163 = V_17;
				V_17 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_034f_1:
			{
				// for (int i = 0; i <= armHeight; i++)
				int32_t L_164 = V_17;
				int32_t L_165 = V_16;
				V_18 = (bool)((((int32_t)((((int32_t)L_164) > ((int32_t)L_165))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_166 = V_18;
				if (L_166)
				{
					goto IL_0319_1;
				}
			}
			{
			}

IL_035f_1:
			{
				// foreach (Vector3 armPoint in armStartPoints)
				bool L_167;
				L_167 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_14), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_167)
				{
					goto IL_02fd_1;
				}
			}
			{
				goto IL_0379;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0379:
	{
		// }
		return;
	}
}
// System.Void Structure::MakeStandardCactus(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeStandardCactus_m02983B99636F64028347F14F8BCE5B9CD9544575 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, int32_t ___minCactusHeight2, int32_t ___maxCactusHeight3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// int height = (int)(maxCactusHeight * Noise.Get2DPerlin(new Vector2(position.x, position.z), 250f, 3f));
		int32_t L_0 = ___maxCactusHeight3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		float L_4 = L_3.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_2, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_5, (250.0f), (3.0f), NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_0), L_6)));
		// if (height < minCactusHeight)
		int32_t L_7 = V_0;
		int32_t L_8 = ___minCactusHeight2;
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		// height = minCactusHeight;
		int32_t L_10 = ___minCactusHeight2;
		V_0 = L_10;
	}

IL_0032:
	{
		// for (int i = 1; i < height; i++)
		V_2 = 1;
		goto IL_0066;
	}

IL_0036:
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + i, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_11 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___position0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___position0;
		float L_15 = L_14.___y_3;
		int32_t L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___position0;
		float L_18 = L_17.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_19), il2cpp_codegen_cast_double_to_int<int32_t>(L_13), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_15), L_16)), il2cpp_codegen_cast_double_to_int<int32_t>(L_18), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_20 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_20, L_19, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_11);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_11, L_20, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// for (int i = 1; i < height; i++)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0066:
	{
		// for (int i = 1; i < height; i++)
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		V_3 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_3;
		if (L_24)
		{
			goto IL_0036;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Structure::MakeCrazyCactus(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeCrazyCactus_mEA145E34408017F660AA95B834B6ABD0AF625312 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, int32_t ___minCactusHeight2, int32_t ___maxCactusHeight3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B28_0 = 0;
	{
		// int height = (int)(maxCactusHeight * Noise.Get2DPerlin(new Vector2(position.x, position.z), 250f, 3f));
		int32_t L_0 = ___maxCactusHeight3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		float L_4 = L_3.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_2, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_5, (250.0f), (3.0f), NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_0), L_6)));
		// if (height < minCactusHeight)
		int32_t L_7 = V_0;
		int32_t L_8 = ___minCactusHeight2;
		V_5 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0034;
		}
	}
	{
		// height = minCactusHeight;
		int32_t L_10 = ___minCactusHeight2;
		V_0 = L_10;
	}

IL_0034:
	{
		// for (int i = 1; i < height; i++)
		V_6 = 1;
		goto IL_006c;
	}

IL_0039:
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + i, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_11 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___position0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___position0;
		float L_15 = L_14.___y_3;
		int32_t L_16 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___position0;
		float L_18 = L_17.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_19), il2cpp_codegen_cast_double_to_int<int32_t>(L_13), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_15), L_16)), il2cpp_codegen_cast_double_to_int<int32_t>(L_18), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_20 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_20, L_19, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_11);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_11, L_20, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// for (int i = 1; i < height; i++)
		int32_t L_21 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_006c:
	{
		// for (int i = 1; i < height; i++)
		int32_t L_22 = V_6;
		int32_t L_23 = V_0;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_7;
		if (L_24)
		{
			goto IL_0039;
		}
	}
	{
		// int armCount = Random.Range(1, 5);
		int32_t L_25;
		L_25 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 5, NULL);
		V_1 = L_25;
		// int armStartHeight = (height / 2);
		int32_t L_26 = V_0;
		V_2 = ((int32_t)(L_26/2));
		// List<Vector3> armStartPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_27 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_27, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_3 = L_27;
		// switch (armCount)
		int32_t L_28 = V_1;
		V_9 = L_28;
		int32_t L_29 = V_9;
		V_8 = L_29;
		int32_t L_30 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract(L_30, 1)))
		{
			case 0:
			{
				goto IL_0261;
			}
			case 1:
			{
				goto IL_01d0;
			}
			case 2:
			{
				goto IL_013f;
			}
			case 3:
			{
				goto IL_00ae;
			}
		}
	}
	{
		goto IL_02f2;
	}

IL_00ae:
	{
		// if ((int)position.z + 2 < VoxelData.WorldSizeInVoxels && (int)position.z + 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___position0;
		float L_32 = L_31.___z_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_32), 2))) >= ((int32_t)L_33)))
		{
			goto IL_00cf;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___position0;
		float L_35 = L_34.___z_4;
		G_B10_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_35), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d0;
	}

IL_00cf:
	{
		G_B10_0 = 0;
	}

IL_00d0:
	{
		V_10 = (bool)G_B10_0;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_013d;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_37;
		L_37 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_4 = L_37;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z + 1), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_38 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = ___position0;
		float L_40 = L_39.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = ___position0;
		float L_42 = L_41.___y_3;
		int32_t L_43 = V_2;
		int32_t L_44 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___position0;
		float L_46 = L_45.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_47), il2cpp_codegen_cast_double_to_int<int32_t>(L_40), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_42), L_43)), L_44)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_46), 1)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_48 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_48, L_47, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_38);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_38, L_48, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z + 2));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_49 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = ___position0;
		float L_51 = L_50.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = ___position0;
		float L_53 = L_52.___y_3;
		int32_t L_54 = V_2;
		int32_t L_55 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ___position0;
		float L_57 = L_56.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_58), il2cpp_codegen_cast_double_to_int<int32_t>(L_51), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_53), L_54)), L_55)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_57), 2)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_58, NULL);
		NullCheck(L_49);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_49, L_59, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_013d:
	{
		// goto case 3;
		goto IL_013f;
	}

IL_013f:
	{
		// if ((int)position.x + 2 < VoxelData.WorldSizeInVoxels && (int)position.x + 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = ___position0;
		float L_61 = L_60.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_61), 2))) >= ((int32_t)L_62)))
		{
			goto IL_0160;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ___position0;
		float L_64 = L_63.___x_2;
		G_B16_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_64), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0161;
	}

IL_0160:
	{
		G_B16_0 = 0;
	}

IL_0161:
	{
		V_11 = (bool)G_B16_0;
		bool L_65 = V_11;
		if (!L_65)
		{
			goto IL_01ce;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_66;
		L_66 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_4 = L_66;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x + 1, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_67 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = ___position0;
		float L_69 = L_68.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = ___position0;
		float L_71 = L_70.___y_3;
		int32_t L_72 = V_2;
		int32_t L_73 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ___position0;
		float L_75 = L_74.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_76), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_69), 1)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_71), L_72)), L_73)), il2cpp_codegen_cast_double_to_int<int32_t>(L_75), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_77 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_77, L_76, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_67);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_67, L_77, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x + 2, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_78 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = ___position0;
		float L_80 = L_79.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = ___position0;
		float L_82 = L_81.___y_3;
		int32_t L_83 = V_2;
		int32_t L_84 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ___position0;
		float L_86 = L_85.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_87;
		memset((&L_87), 0, sizeof(L_87));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_87), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_80), 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_82), L_83)), L_84)), il2cpp_codegen_cast_double_to_int<int32_t>(L_86), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_87, NULL);
		NullCheck(L_78);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_78, L_88, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_01ce:
	{
		// goto case 2;
		goto IL_01d0;
	}

IL_01d0:
	{
		// if ((int)position.z - 2 < VoxelData.WorldSizeInVoxels && (int)position.z - 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = ___position0;
		float L_90 = L_89.___z_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_91;
		L_91 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_90), 2))) >= ((int32_t)L_91)))
		{
			goto IL_01f1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = ___position0;
		float L_93 = L_92.___z_4;
		G_B22_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_93), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01f2;
	}

IL_01f1:
	{
		G_B22_0 = 0;
	}

IL_01f2:
	{
		V_12 = (bool)G_B22_0;
		bool L_94 = V_12;
		if (!L_94)
		{
			goto IL_025f;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_95;
		L_95 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_4 = L_95;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z - 1), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_96 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = ___position0;
		float L_98 = L_97.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = ___position0;
		float L_100 = L_99.___y_3;
		int32_t L_101 = V_2;
		int32_t L_102 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = ___position0;
		float L_104 = L_103.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_105), il2cpp_codegen_cast_double_to_int<int32_t>(L_98), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_100), L_101)), L_102)), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_104), 1)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_106 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_106);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_106, L_105, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_96);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_96, L_106, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z - 2));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_107 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = ___position0;
		float L_109 = L_108.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = ___position0;
		float L_111 = L_110.___y_3;
		int32_t L_112 = V_2;
		int32_t L_113 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = ___position0;
		float L_115 = L_114.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_116;
		memset((&L_116), 0, sizeof(L_116));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_116), il2cpp_codegen_cast_double_to_int<int32_t>(L_109), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_111), L_112)), L_113)), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_115), 2)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_116, NULL);
		NullCheck(L_107);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_107, L_117, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_025f:
	{
		// goto case 1;
		goto IL_0261;
	}

IL_0261:
	{
		// if ((int)position.x - 2 < VoxelData.WorldSizeInVoxels && (int)position.x - 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = ___position0;
		float L_119 = L_118.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_120;
		L_120 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_119), 2))) >= ((int32_t)L_120)))
		{
			goto IL_0282;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = ___position0;
		float L_122 = L_121.___x_2;
		G_B28_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_122), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0283;
	}

IL_0282:
	{
		G_B28_0 = 0;
	}

IL_0283:
	{
		V_13 = (bool)G_B28_0;
		bool L_123 = V_13;
		if (!L_123)
		{
			goto IL_02f0;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_124;
		L_124 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_4 = L_124;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x - 1, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_125 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = ___position0;
		float L_127 = L_126.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = ___position0;
		float L_129 = L_128.___y_3;
		int32_t L_130 = V_2;
		int32_t L_131 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = ___position0;
		float L_133 = L_132.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_134;
		memset((&L_134), 0, sizeof(L_134));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_134), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_127), 1)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_129), L_130)), L_131)), il2cpp_codegen_cast_double_to_int<int32_t>(L_133), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_135 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_135);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_135, L_134, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_125);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_125, L_135, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x - 2, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_136 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = ___position0;
		float L_138 = L_137.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = ___position0;
		float L_140 = L_139.___y_3;
		int32_t L_141 = V_2;
		int32_t L_142 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = ___position0;
		float L_144 = L_143.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_145;
		memset((&L_145), 0, sizeof(L_145));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_145), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_138), 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_140), L_141)), L_142)), il2cpp_codegen_cast_double_to_int<int32_t>(L_144), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_145, NULL);
		NullCheck(L_136);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_136, L_146, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_02f0:
	{
		// break;
		goto IL_02f2;
	}

IL_02f2:
	{
		// foreach (Vector3 armPoint in armStartPoints)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_147 = V_3;
		NullCheck(L_147);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_148;
		L_148 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_147, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_14 = L_148;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_036a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_14), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_035f_1;
			}

IL_02fd_1:
			{
				// foreach (Vector3 armPoint in armStartPoints)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
				L_149 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_14), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_15 = L_149;
				// int armHeight = Random.Range(1, height - armStartHeight - 1);
				int32_t L_150 = V_0;
				int32_t L_151 = V_2;
				int32_t L_152;
				L_152 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_150, L_151)), 1)), NULL);
				V_16 = L_152;
				// for (int i = 0; i <= armHeight; i++)
				V_17 = 0;
				goto IL_034f_1;
			}

IL_0319_1:
			{
				// queue.Enqueue(new VoxelMod(new Vector3Int((int)armPoint.x, (int)armPoint.y + i, (int)armPoint.z), (byte)BlockTypes.Cactus));
				Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_153 = ___queue1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154 = V_15;
				float L_155 = L_154.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = V_15;
				float L_157 = L_156.___y_3;
				int32_t L_158 = V_17;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159 = V_15;
				float L_160 = L_159.___z_4;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_161;
				memset((&L_161), 0, sizeof(L_161));
				Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_161), il2cpp_codegen_cast_double_to_int<int32_t>(L_155), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_157), L_158)), il2cpp_codegen_cast_double_to_int<int32_t>(L_160), /*hidden argument*/NULL);
				VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_162 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
				NullCheck(L_162);
				VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_162, L_161, (uint8_t)((int32_t)14), NULL);
				NullCheck(L_153);
				Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_153, L_162, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
				// for (int i = 0; i <= armHeight; i++)
				int32_t L_163 = V_17;
				V_17 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_034f_1:
			{
				// for (int i = 0; i <= armHeight; i++)
				int32_t L_164 = V_17;
				int32_t L_165 = V_16;
				V_18 = (bool)((((int32_t)((((int32_t)L_164) > ((int32_t)L_165))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_166 = V_18;
				if (L_166)
				{
					goto IL_0319_1;
				}
			}
			{
			}

IL_035f_1:
			{
				// foreach (Vector3 armPoint in armStartPoints)
				bool L_167;
				L_167 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_14), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_167)
				{
					goto IL_02fd_1;
				}
			}
			{
				goto IL_0379;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0379:
	{
		// }
		return;
	}
}
// System.Void Structure::MakeNorthInvalidCrazyCactusArms(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeNorthInvalidCrazyCactusArms_mB8F26B368D28D2F00A26EDF71915DC8155A0B9C7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// int armCount = Random.Range(0, 4);
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 4, NULL);
		V_0 = L_0;
		// int armStartHeight = Random.Range(1, 4);
		int32_t L_1;
		L_1 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		V_1 = L_1;
		// List<Vector3> armStartPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_2, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_2 = L_2;
		// switch (armCount)
		int32_t L_3 = V_0;
		V_5 = L_3;
		int32_t L_4 = V_5;
		V_4 = L_4;
		int32_t L_5 = V_4;
		switch (L_5)
		{
			case 0:
			{
				goto IL_01e4;
			}
			case 1:
			{
				goto IL_0156;
			}
			case 2:
			{
				goto IL_00c8;
			}
			case 3:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_01e6;
	}

IL_003a:
	{
		// if ((int)position.x + 2 < VoxelData.WorldSizeInVoxels && (int)position.x + 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position0;
		float L_7 = L_6.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_7), 2))) >= ((int32_t)L_8)))
		{
			goto IL_005b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___position0;
		float L_10 = L_9.___x_2;
		G_B5_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_10), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 0;
	}

IL_005c:
	{
		V_6 = (bool)G_B5_0;
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_00c6;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_12;
		L_12 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_3 = L_12;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x + 1, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_13 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___position0;
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___position0;
		float L_17 = L_16.___y_3;
		int32_t L_18 = V_1;
		int32_t L_19 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___position0;
		float L_21 = L_20.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_22), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_15), 1)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_17), L_18)), L_19)), il2cpp_codegen_cast_double_to_int<int32_t>(L_21), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_23 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_23, L_22, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_13);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_13, L_23, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x + 2, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___position0;
		float L_26 = L_25.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___position0;
		float L_28 = L_27.___y_3;
		int32_t L_29 = V_1;
		int32_t L_30 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___position0;
		float L_32 = L_31.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_33), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_26), 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_28), L_29)), L_30)), il2cpp_codegen_cast_double_to_int<int32_t>(L_32), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_33, NULL);
		NullCheck(L_24);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_24, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_00c6:
	{
		// goto case 2;
		goto IL_00c8;
	}

IL_00c8:
	{
		// if ((int)position.z - 2 < VoxelData.WorldSizeInVoxels && (int)position.z - 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = ___position0;
		float L_36 = L_35.___z_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_36), 2))) >= ((int32_t)L_37)))
		{
			goto IL_00e9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___position0;
		float L_39 = L_38.___z_4;
		G_B11_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_39), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B11_0 = 0;
	}

IL_00ea:
	{
		V_7 = (bool)G_B11_0;
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_0154;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_41;
		L_41 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_3 = L_41;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z - 1), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_42 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = ___position0;
		float L_44 = L_43.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___position0;
		float L_46 = L_45.___y_3;
		int32_t L_47 = V_1;
		int32_t L_48 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___position0;
		float L_50 = L_49.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_51), il2cpp_codegen_cast_double_to_int<int32_t>(L_44), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_46), L_47)), L_48)), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_50), 1)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_52 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_52, L_51, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_42);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_42, L_52, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z - 2));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_53 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = ___position0;
		float L_55 = L_54.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ___position0;
		float L_57 = L_56.___y_3;
		int32_t L_58 = V_1;
		int32_t L_59 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = ___position0;
		float L_61 = L_60.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_62), il2cpp_codegen_cast_double_to_int<int32_t>(L_55), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_57), L_58)), L_59)), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_61), 2)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_62, NULL);
		NullCheck(L_53);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_53, L_63, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_0154:
	{
		// goto case 1;
		goto IL_0156;
	}

IL_0156:
	{
		// if ((int)position.x - 2 < VoxelData.WorldSizeInVoxels && (int)position.x - 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ___position0;
		float L_65 = L_64.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_66;
		L_66 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_65), 2))) >= ((int32_t)L_66)))
		{
			goto IL_0177;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = ___position0;
		float L_68 = L_67.___x_2;
		G_B17_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_68), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0178;
	}

IL_0177:
	{
		G_B17_0 = 0;
	}

IL_0178:
	{
		V_8 = (bool)G_B17_0;
		bool L_69 = V_8;
		if (!L_69)
		{
			goto IL_01e2;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_70;
		L_70 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_3 = L_70;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x - 1, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_71 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = ___position0;
		float L_73 = L_72.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ___position0;
		float L_75 = L_74.___y_3;
		int32_t L_76 = V_1;
		int32_t L_77 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = ___position0;
		float L_79 = L_78.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_80), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_73), 1)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_75), L_76)), L_77)), il2cpp_codegen_cast_double_to_int<int32_t>(L_79), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_81 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_81, L_80, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_71);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_71, L_81, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x - 2, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_82 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = ___position0;
		float L_84 = L_83.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ___position0;
		float L_86 = L_85.___y_3;
		int32_t L_87 = V_1;
		int32_t L_88 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = ___position0;
		float L_90 = L_89.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_91), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_84), 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_86), L_87)), L_88)), il2cpp_codegen_cast_double_to_int<int32_t>(L_90), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_91, NULL);
		NullCheck(L_82);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_82, L_92, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_01e2:
	{
		// break;
		goto IL_01e6;
	}

IL_01e4:
	{
		// break;
		goto IL_01e6;
	}

IL_01e6:
	{
		// foreach (Vector3 armPoint in armStartPoints)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_93 = V_2;
		NullCheck(L_93);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_94;
		L_94 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_93, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_9 = L_94;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_025c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_9), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0251_1;
			}

IL_01f1_1:
			{
				// foreach (Vector3 armPoint in armStartPoints)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
				L_95 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_9), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_10 = L_95;
				// int armHeight = Random.Range(1, armStartHeight - 1);
				int32_t L_96 = V_1;
				int32_t L_97;
				L_97 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, ((int32_t)il2cpp_codegen_subtract(L_96, 1)), NULL);
				V_11 = L_97;
				// for (int i = 0; i <= armHeight; i++)
				V_12 = 0;
				goto IL_0241_1;
			}

IL_020b_1:
			{
				// queue.Enqueue(new VoxelMod(new Vector3Int((int)armPoint.x, (int)armPoint.y + i, (int)armPoint.z), (byte)BlockTypes.Cactus));
				Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_98 = ___queue1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = V_10;
				float L_100 = L_99.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_10;
				float L_102 = L_101.___y_3;
				int32_t L_103 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_10;
				float L_105 = L_104.___z_4;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_106;
				memset((&L_106), 0, sizeof(L_106));
				Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_106), il2cpp_codegen_cast_double_to_int<int32_t>(L_100), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_102), L_103)), il2cpp_codegen_cast_double_to_int<int32_t>(L_105), /*hidden argument*/NULL);
				VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_107 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
				NullCheck(L_107);
				VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_107, L_106, (uint8_t)((int32_t)14), NULL);
				NullCheck(L_98);
				Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_98, L_107, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
				// for (int i = 0; i <= armHeight; i++)
				int32_t L_108 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_108, 1));
			}

IL_0241_1:
			{
				// for (int i = 0; i <= armHeight; i++)
				int32_t L_109 = V_12;
				int32_t L_110 = V_11;
				V_13 = (bool)((((int32_t)((((int32_t)L_109) > ((int32_t)L_110))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_111 = V_13;
				if (L_111)
				{
					goto IL_020b_1;
				}
			}
			{
			}

IL_0251_1:
			{
				// foreach (Vector3 armPoint in armStartPoints)
				bool L_112;
				L_112 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_9), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_112)
				{
					goto IL_01f1_1;
				}
			}
			{
				goto IL_026b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_026b:
	{
		// }
		return;
	}
}
// System.Void Structure::MakeEastInvalidCrazyCactusArms(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeEastInvalidCrazyCactusArms_m3C4DF1B033B9B2CB0DABAFADAEA1A700807575CE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// int armCount = Random.Range(0, 4);
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 4, NULL);
		V_0 = L_0;
		// int armStartHeight = Random.Range(1, 4);
		int32_t L_1;
		L_1 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		V_1 = L_1;
		// List<Vector3> armStartPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_2, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_2 = L_2;
		// switch (armCount)
		int32_t L_3 = V_0;
		V_5 = L_3;
		int32_t L_4 = V_5;
		V_4 = L_4;
		int32_t L_5 = V_4;
		switch (L_5)
		{
			case 0:
			{
				goto IL_01e4;
			}
			case 1:
			{
				goto IL_0156;
			}
			case 2:
			{
				goto IL_00c8;
			}
			case 3:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_01e6;
	}

IL_003a:
	{
		// if ((int)position.z + 2 < VoxelData.WorldSizeInVoxels && (int)position.z + 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position0;
		float L_7 = L_6.___z_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_7), 2))) >= ((int32_t)L_8)))
		{
			goto IL_005b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___position0;
		float L_10 = L_9.___z_4;
		G_B5_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_10), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 0;
	}

IL_005c:
	{
		V_6 = (bool)G_B5_0;
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_00c6;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_12;
		L_12 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_3 = L_12;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z + 1), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_13 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___position0;
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___position0;
		float L_17 = L_16.___y_3;
		int32_t L_18 = V_1;
		int32_t L_19 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___position0;
		float L_21 = L_20.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_22), il2cpp_codegen_cast_double_to_int<int32_t>(L_15), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_17), L_18)), L_19)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_21), 1)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_23 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_23, L_22, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_13);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_13, L_23, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z + 2));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___position0;
		float L_26 = L_25.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___position0;
		float L_28 = L_27.___y_3;
		int32_t L_29 = V_1;
		int32_t L_30 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___position0;
		float L_32 = L_31.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_33), il2cpp_codegen_cast_double_to_int<int32_t>(L_26), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_28), L_29)), L_30)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_32), 2)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_33, NULL);
		NullCheck(L_24);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_24, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_00c6:
	{
		// goto case 2;
		goto IL_00c8;
	}

IL_00c8:
	{
		// if ((int)position.z - 2 < VoxelData.WorldSizeInVoxels && (int)position.z - 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = ___position0;
		float L_36 = L_35.___z_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_36), 2))) >= ((int32_t)L_37)))
		{
			goto IL_00e9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___position0;
		float L_39 = L_38.___z_4;
		G_B11_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_39), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B11_0 = 0;
	}

IL_00ea:
	{
		V_7 = (bool)G_B11_0;
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_0154;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_41;
		L_41 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_3 = L_41;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z - 1), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_42 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = ___position0;
		float L_44 = L_43.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___position0;
		float L_46 = L_45.___y_3;
		int32_t L_47 = V_1;
		int32_t L_48 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___position0;
		float L_50 = L_49.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_51), il2cpp_codegen_cast_double_to_int<int32_t>(L_44), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_46), L_47)), L_48)), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_50), 1)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_52 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_52, L_51, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_42);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_42, L_52, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z - 2));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_53 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = ___position0;
		float L_55 = L_54.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ___position0;
		float L_57 = L_56.___y_3;
		int32_t L_58 = V_1;
		int32_t L_59 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = ___position0;
		float L_61 = L_60.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_62), il2cpp_codegen_cast_double_to_int<int32_t>(L_55), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_57), L_58)), L_59)), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_61), 2)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_62, NULL);
		NullCheck(L_53);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_53, L_63, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_0154:
	{
		// goto case 1;
		goto IL_0156;
	}

IL_0156:
	{
		// if ((int)position.x - 2 < VoxelData.WorldSizeInVoxels && (int)position.x - 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ___position0;
		float L_65 = L_64.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_66;
		L_66 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_65), 2))) >= ((int32_t)L_66)))
		{
			goto IL_0177;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = ___position0;
		float L_68 = L_67.___x_2;
		G_B17_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_68), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0178;
	}

IL_0177:
	{
		G_B17_0 = 0;
	}

IL_0178:
	{
		V_8 = (bool)G_B17_0;
		bool L_69 = V_8;
		if (!L_69)
		{
			goto IL_01e2;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_70;
		L_70 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_3 = L_70;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x - 1, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_71 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = ___position0;
		float L_73 = L_72.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ___position0;
		float L_75 = L_74.___y_3;
		int32_t L_76 = V_1;
		int32_t L_77 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = ___position0;
		float L_79 = L_78.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_80), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_73), 1)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_75), L_76)), L_77)), il2cpp_codegen_cast_double_to_int<int32_t>(L_79), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_81 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_81, L_80, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_71);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_71, L_81, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x - 2, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_82 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = ___position0;
		float L_84 = L_83.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ___position0;
		float L_86 = L_85.___y_3;
		int32_t L_87 = V_1;
		int32_t L_88 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = ___position0;
		float L_90 = L_89.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_91), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_84), 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_86), L_87)), L_88)), il2cpp_codegen_cast_double_to_int<int32_t>(L_90), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_91, NULL);
		NullCheck(L_82);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_82, L_92, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_01e2:
	{
		// break;
		goto IL_01e6;
	}

IL_01e4:
	{
		// break;
		goto IL_01e6;
	}

IL_01e6:
	{
		// foreach (Vector3 armPoint in armStartPoints)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_93 = V_2;
		NullCheck(L_93);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_94;
		L_94 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_93, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_9 = L_94;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_025c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_9), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0251_1;
			}

IL_01f1_1:
			{
				// foreach (Vector3 armPoint in armStartPoints)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
				L_95 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_9), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_10 = L_95;
				// int armHeight = Random.Range(1, armStartHeight - 1);
				int32_t L_96 = V_1;
				int32_t L_97;
				L_97 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, ((int32_t)il2cpp_codegen_subtract(L_96, 1)), NULL);
				V_11 = L_97;
				// for (int i = 0; i <= armHeight; i++)
				V_12 = 0;
				goto IL_0241_1;
			}

IL_020b_1:
			{
				// queue.Enqueue(new VoxelMod(new Vector3Int((int)armPoint.x, (int)armPoint.y + i, (int)armPoint.z), (byte)BlockTypes.Cactus));
				Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_98 = ___queue1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = V_10;
				float L_100 = L_99.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_10;
				float L_102 = L_101.___y_3;
				int32_t L_103 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_10;
				float L_105 = L_104.___z_4;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_106;
				memset((&L_106), 0, sizeof(L_106));
				Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_106), il2cpp_codegen_cast_double_to_int<int32_t>(L_100), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_102), L_103)), il2cpp_codegen_cast_double_to_int<int32_t>(L_105), /*hidden argument*/NULL);
				VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_107 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
				NullCheck(L_107);
				VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_107, L_106, (uint8_t)((int32_t)14), NULL);
				NullCheck(L_98);
				Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_98, L_107, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
				// for (int i = 0; i <= armHeight; i++)
				int32_t L_108 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_108, 1));
			}

IL_0241_1:
			{
				// for (int i = 0; i <= armHeight; i++)
				int32_t L_109 = V_12;
				int32_t L_110 = V_11;
				V_13 = (bool)((((int32_t)((((int32_t)L_109) > ((int32_t)L_110))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_111 = V_13;
				if (L_111)
				{
					goto IL_020b_1;
				}
			}
			{
			}

IL_0251_1:
			{
				// foreach (Vector3 armPoint in armStartPoints)
				bool L_112;
				L_112 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_9), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_112)
				{
					goto IL_01f1_1;
				}
			}
			{
				goto IL_026b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_026b:
	{
		// }
		return;
	}
}
// System.Void Structure::MakeSoutInvalidCrazyCactusArms(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeSoutInvalidCrazyCactusArms_m6E99B83DD2168B621A722D3945BAF28FFFFD100C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// int armCount = Random.Range(0, 4);
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 4, NULL);
		V_0 = L_0;
		// int armStartHeight = Random.Range(1, 4);
		int32_t L_1;
		L_1 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		V_1 = L_1;
		// List<Vector3> armStartPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_2, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_2 = L_2;
		// switch (armCount)
		int32_t L_3 = V_0;
		V_5 = L_3;
		int32_t L_4 = V_5;
		V_4 = L_4;
		int32_t L_5 = V_4;
		switch (L_5)
		{
			case 0:
			{
				goto IL_01e4;
			}
			case 1:
			{
				goto IL_0156;
			}
			case 2:
			{
				goto IL_00c8;
			}
			case 3:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_01e6;
	}

IL_003a:
	{
		// if ((int)position.x + 2 < VoxelData.WorldSizeInVoxels && (int)position.x + 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position0;
		float L_7 = L_6.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_7), 2))) >= ((int32_t)L_8)))
		{
			goto IL_005b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___position0;
		float L_10 = L_9.___x_2;
		G_B5_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_10), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 0;
	}

IL_005c:
	{
		V_6 = (bool)G_B5_0;
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_00c6;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_12;
		L_12 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_3 = L_12;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x + 1, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_13 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___position0;
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___position0;
		float L_17 = L_16.___y_3;
		int32_t L_18 = V_1;
		int32_t L_19 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___position0;
		float L_21 = L_20.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_22), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_15), 1)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_17), L_18)), L_19)), il2cpp_codegen_cast_double_to_int<int32_t>(L_21), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_23 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_23, L_22, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_13);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_13, L_23, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x + 2, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___position0;
		float L_26 = L_25.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___position0;
		float L_28 = L_27.___y_3;
		int32_t L_29 = V_1;
		int32_t L_30 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___position0;
		float L_32 = L_31.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_33), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_26), 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_28), L_29)), L_30)), il2cpp_codegen_cast_double_to_int<int32_t>(L_32), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_33, NULL);
		NullCheck(L_24);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_24, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_00c6:
	{
		// goto case 2;
		goto IL_00c8;
	}

IL_00c8:
	{
		// if ((int)position.z + 2 < VoxelData.WorldSizeInVoxels && (int)position.z + 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = ___position0;
		float L_36 = L_35.___z_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_36), 2))) >= ((int32_t)L_37)))
		{
			goto IL_00e9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___position0;
		float L_39 = L_38.___z_4;
		G_B11_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_39), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B11_0 = 0;
	}

IL_00ea:
	{
		V_7 = (bool)G_B11_0;
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_0154;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_41;
		L_41 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_3 = L_41;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z + 1), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_42 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = ___position0;
		float L_44 = L_43.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___position0;
		float L_46 = L_45.___y_3;
		int32_t L_47 = V_1;
		int32_t L_48 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___position0;
		float L_50 = L_49.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_51), il2cpp_codegen_cast_double_to_int<int32_t>(L_44), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_46), L_47)), L_48)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_50), 1)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_52 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_52, L_51, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_42);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_42, L_52, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z + 2));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_53 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = ___position0;
		float L_55 = L_54.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ___position0;
		float L_57 = L_56.___y_3;
		int32_t L_58 = V_1;
		int32_t L_59 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = ___position0;
		float L_61 = L_60.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_62), il2cpp_codegen_cast_double_to_int<int32_t>(L_55), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_57), L_58)), L_59)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_61), 2)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_62, NULL);
		NullCheck(L_53);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_53, L_63, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_0154:
	{
		// goto case 1;
		goto IL_0156;
	}

IL_0156:
	{
		// if ((int)position.x - 2 < VoxelData.WorldSizeInVoxels && (int)position.x - 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ___position0;
		float L_65 = L_64.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_66;
		L_66 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_65), 2))) >= ((int32_t)L_66)))
		{
			goto IL_0177;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = ___position0;
		float L_68 = L_67.___x_2;
		G_B17_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_68), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0178;
	}

IL_0177:
	{
		G_B17_0 = 0;
	}

IL_0178:
	{
		V_8 = (bool)G_B17_0;
		bool L_69 = V_8;
		if (!L_69)
		{
			goto IL_01e2;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_70;
		L_70 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_3 = L_70;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x - 1, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_71 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = ___position0;
		float L_73 = L_72.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ___position0;
		float L_75 = L_74.___y_3;
		int32_t L_76 = V_1;
		int32_t L_77 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = ___position0;
		float L_79 = L_78.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_80), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_73), 1)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_75), L_76)), L_77)), il2cpp_codegen_cast_double_to_int<int32_t>(L_79), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_81 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_81, L_80, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_71);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_71, L_81, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x - 2, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_82 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = ___position0;
		float L_84 = L_83.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ___position0;
		float L_86 = L_85.___y_3;
		int32_t L_87 = V_1;
		int32_t L_88 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = ___position0;
		float L_90 = L_89.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_91), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_84), 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_86), L_87)), L_88)), il2cpp_codegen_cast_double_to_int<int32_t>(L_90), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_91, NULL);
		NullCheck(L_82);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_82, L_92, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_01e2:
	{
		// break;
		goto IL_01e6;
	}

IL_01e4:
	{
		// break;
		goto IL_01e6;
	}

IL_01e6:
	{
		// foreach (Vector3 armPoint in armStartPoints)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_93 = V_2;
		NullCheck(L_93);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_94;
		L_94 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_93, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_9 = L_94;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_025c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_9), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0251_1;
			}

IL_01f1_1:
			{
				// foreach (Vector3 armPoint in armStartPoints)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
				L_95 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_9), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_10 = L_95;
				// int armHeight = Random.Range(1, armStartHeight - 1);
				int32_t L_96 = V_1;
				int32_t L_97;
				L_97 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, ((int32_t)il2cpp_codegen_subtract(L_96, 1)), NULL);
				V_11 = L_97;
				// for (int i = 0; i <= armHeight; i++)
				V_12 = 0;
				goto IL_0241_1;
			}

IL_020b_1:
			{
				// queue.Enqueue(new VoxelMod(new Vector3Int((int)armPoint.x, (int)armPoint.y + i, (int)armPoint.z), (byte)BlockTypes.Cactus));
				Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_98 = ___queue1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = V_10;
				float L_100 = L_99.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_10;
				float L_102 = L_101.___y_3;
				int32_t L_103 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_10;
				float L_105 = L_104.___z_4;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_106;
				memset((&L_106), 0, sizeof(L_106));
				Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_106), il2cpp_codegen_cast_double_to_int<int32_t>(L_100), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_102), L_103)), il2cpp_codegen_cast_double_to_int<int32_t>(L_105), /*hidden argument*/NULL);
				VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_107 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
				NullCheck(L_107);
				VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_107, L_106, (uint8_t)((int32_t)14), NULL);
				NullCheck(L_98);
				Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_98, L_107, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
				// for (int i = 0; i <= armHeight; i++)
				int32_t L_108 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_108, 1));
			}

IL_0241_1:
			{
				// for (int i = 0; i <= armHeight; i++)
				int32_t L_109 = V_12;
				int32_t L_110 = V_11;
				V_13 = (bool)((((int32_t)((((int32_t)L_109) > ((int32_t)L_110))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_111 = V_13;
				if (L_111)
				{
					goto IL_020b_1;
				}
			}
			{
			}

IL_0251_1:
			{
				// foreach (Vector3 armPoint in armStartPoints)
				bool L_112;
				L_112 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_9), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_112)
				{
					goto IL_01f1_1;
				}
			}
			{
				goto IL_026b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_026b:
	{
		// }
		return;
	}
}
// System.Void Structure::MakeWestInvalidCrazyCactusArms(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeWestInvalidCrazyCactusArms_m18046FA1FD62DD4951AE2BEE7417F56F3DA9B5E9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// int armCount = Random.Range(0, 4);
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 4, NULL);
		V_0 = L_0;
		// int armStartHeight = Random.Range(1, 4);
		int32_t L_1;
		L_1 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		V_1 = L_1;
		// List<Vector3> armStartPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_2, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_2 = L_2;
		// switch (armCount)
		int32_t L_3 = V_0;
		V_5 = L_3;
		int32_t L_4 = V_5;
		V_4 = L_4;
		int32_t L_5 = V_4;
		switch (L_5)
		{
			case 0:
			{
				goto IL_01e4;
			}
			case 1:
			{
				goto IL_0156;
			}
			case 2:
			{
				goto IL_00c8;
			}
			case 3:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_01e6;
	}

IL_003a:
	{
		// if ((int)position.x + 2 < VoxelData.WorldSizeInVoxels && (int)position.x + 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position0;
		float L_7 = L_6.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_7), 2))) >= ((int32_t)L_8)))
		{
			goto IL_005b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___position0;
		float L_10 = L_9.___x_2;
		G_B5_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_10), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 0;
	}

IL_005c:
	{
		V_6 = (bool)G_B5_0;
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_00c6;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_12;
		L_12 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_3 = L_12;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x + 1, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_13 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___position0;
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___position0;
		float L_17 = L_16.___y_3;
		int32_t L_18 = V_1;
		int32_t L_19 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___position0;
		float L_21 = L_20.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_22), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_15), 1)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_17), L_18)), L_19)), il2cpp_codegen_cast_double_to_int<int32_t>(L_21), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_23 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_23, L_22, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_13);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_13, L_23, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x + 2, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___position0;
		float L_26 = L_25.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___position0;
		float L_28 = L_27.___y_3;
		int32_t L_29 = V_1;
		int32_t L_30 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___position0;
		float L_32 = L_31.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_33), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_26), 2)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_28), L_29)), L_30)), il2cpp_codegen_cast_double_to_int<int32_t>(L_32), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_33, NULL);
		NullCheck(L_24);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_24, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_00c6:
	{
		// goto case 2;
		goto IL_00c8;
	}

IL_00c8:
	{
		// if ((int)position.z - 2 < VoxelData.WorldSizeInVoxels && (int)position.z - 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = ___position0;
		float L_36 = L_35.___z_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_36), 2))) >= ((int32_t)L_37)))
		{
			goto IL_00e9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___position0;
		float L_39 = L_38.___z_4;
		G_B11_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_39), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B11_0 = 0;
	}

IL_00ea:
	{
		V_7 = (bool)G_B11_0;
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_0154;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_41;
		L_41 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_3 = L_41;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z - 1), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_42 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = ___position0;
		float L_44 = L_43.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___position0;
		float L_46 = L_45.___y_3;
		int32_t L_47 = V_1;
		int32_t L_48 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___position0;
		float L_50 = L_49.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_51), il2cpp_codegen_cast_double_to_int<int32_t>(L_44), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_46), L_47)), L_48)), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_50), 1)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_52 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_52, L_51, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_42);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_42, L_52, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z - 2));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_53 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = ___position0;
		float L_55 = L_54.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ___position0;
		float L_57 = L_56.___y_3;
		int32_t L_58 = V_1;
		int32_t L_59 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = ___position0;
		float L_61 = L_60.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_62), il2cpp_codegen_cast_double_to_int<int32_t>(L_55), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_57), L_58)), L_59)), ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_61), 2)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_62, NULL);
		NullCheck(L_53);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_53, L_63, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_0154:
	{
		// goto case 1;
		goto IL_0156;
	}

IL_0156:
	{
		// if ((int)position.z + 2 < VoxelData.WorldSizeInVoxels && (int)position.z + 2 >= 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ___position0;
		float L_65 = L_64.___z_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_66;
		L_66 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_65), 2))) >= ((int32_t)L_66)))
		{
			goto IL_0177;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = ___position0;
		float L_68 = L_67.___z_4;
		G_B17_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_68), 2))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0178;
	}

IL_0177:
	{
		G_B17_0 = 0;
	}

IL_0178:
	{
		V_8 = (bool)G_B17_0;
		bool L_69 = V_8;
		if (!L_69)
		{
			goto IL_01e2;
		}
	}
	{
		// armStartHeightOffset = Random.Range(-1, 2);
		int32_t L_70;
		L_70 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 2, NULL);
		V_3 = L_70;
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z + 1), (byte)BlockTypes.Cactus));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_71 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = ___position0;
		float L_73 = L_72.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ___position0;
		float L_75 = L_74.___y_3;
		int32_t L_76 = V_1;
		int32_t L_77 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = ___position0;
		float L_79 = L_78.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_80), il2cpp_codegen_cast_double_to_int<int32_t>(L_73), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_75), L_76)), L_77)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_79), 1)), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_81 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_81, L_80, (uint8_t)((int32_t)14), NULL);
		NullCheck(L_71);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_71, L_81, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// armStartPoints.Add(new Vector3Int((int)position.x, (int)position.y + armStartHeight + armStartHeightOffset, (int)position.z + 2));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_82 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = ___position0;
		float L_84 = L_83.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ___position0;
		float L_86 = L_85.___y_3;
		int32_t L_87 = V_1;
		int32_t L_88 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = ___position0;
		float L_90 = L_89.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_91), il2cpp_codegen_cast_double_to_int<int32_t>(L_84), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_86), L_87)), L_88)), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_90), 2)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_91, NULL);
		NullCheck(L_82);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_82, L_92, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_01e2:
	{
		// break;
		goto IL_01e6;
	}

IL_01e4:
	{
		// break;
		goto IL_01e6;
	}

IL_01e6:
	{
		// foreach (Vector3 armPoint in armStartPoints)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_93 = V_2;
		NullCheck(L_93);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_94;
		L_94 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_93, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_9 = L_94;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_025c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_9), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0251_1;
			}

IL_01f1_1:
			{
				// foreach (Vector3 armPoint in armStartPoints)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
				L_95 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_9), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_10 = L_95;
				// int armHeight = Random.Range(1, armStartHeight - 1);
				int32_t L_96 = V_1;
				int32_t L_97;
				L_97 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, ((int32_t)il2cpp_codegen_subtract(L_96, 1)), NULL);
				V_11 = L_97;
				// for (int i = 0; i <= armHeight; i++)
				V_12 = 0;
				goto IL_0241_1;
			}

IL_020b_1:
			{
				// queue.Enqueue(new VoxelMod(new Vector3Int((int)armPoint.x, (int)armPoint.y + i, (int)armPoint.z), (byte)BlockTypes.Cactus));
				Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_98 = ___queue1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = V_10;
				float L_100 = L_99.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_10;
				float L_102 = L_101.___y_3;
				int32_t L_103 = V_12;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_10;
				float L_105 = L_104.___z_4;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_106;
				memset((&L_106), 0, sizeof(L_106));
				Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_106), il2cpp_codegen_cast_double_to_int<int32_t>(L_100), ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_102), L_103)), il2cpp_codegen_cast_double_to_int<int32_t>(L_105), /*hidden argument*/NULL);
				VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_107 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
				NullCheck(L_107);
				VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_107, L_106, (uint8_t)((int32_t)14), NULL);
				NullCheck(L_98);
				Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_98, L_107, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
				// for (int i = 0; i <= armHeight; i++)
				int32_t L_108 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_108, 1));
			}

IL_0241_1:
			{
				// for (int i = 0; i <= armHeight; i++)
				int32_t L_109 = V_12;
				int32_t L_110 = V_11;
				V_13 = (bool)((((int32_t)((((int32_t)L_109) > ((int32_t)L_110))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_111 = V_13;
				if (L_111)
				{
					goto IL_020b_1;
				}
			}
			{
			}

IL_0251_1:
			{
				// foreach (Vector3 armPoint in armStartPoints)
				bool L_112;
				L_112 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_9), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_112)
				{
					goto IL_01f1_1;
				}
			}
			{
				goto IL_026b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_026b:
	{
		// }
		return;
	}
}
// System.Void Structure::MakeMuskeg(UnityEngine.Vector3,System.Collections.Generic.Queue`1<VoxelMod>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Structure_MakeMuskeg_m5DA5EA565E9BD31DE1986CDA648A68FF103C9B36 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* ___queue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// queue.Enqueue(new VoxelMod(new Vector3Int((int)position.x, (int)position.y, (int)position.z), (byte)BlockTypes.Muskeg));
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_0 = ___queue1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___position0;
		float L_6 = L_5.___z_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_7), il2cpp_codegen_cast_double_to_int<int32_t>(L_2), il2cpp_codegen_cast_double_to_int<int32_t>(L_4), il2cpp_codegen_cast_double_to_int<int32_t>(L_6), /*hidden argument*/NULL);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_8 = (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657*)il2cpp_codegen_object_new(VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744(L_8, L_7, (uint8_t)((int32_t)20), NULL);
		NullCheck(L_0);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_0, L_8, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// }
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
// System.Void TiagaBiome::CreateBiomeHeightMap(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiagaBiome_CreateBiomeHeightMap_m375E13731E26374BB45A66CAE6056BE9B5AD1EBD (TiagaBiome_t24149653E3AA758A2D7FB0678E2C97AD77290AA8* __this, int32_t ___mapWidth0, int32_t ___mapHeight1, int32_t ___seed2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	{
		// heightMap = new int[mapWidth, mapHeight];
		int32_t L_0 = ___mapWidth0;
		int32_t L_1 = ___mapHeight1;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_2 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_3);
		((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16), (void*)L_2);
		// int maxHeight = int.MinValue;
		V_0 = ((int32_t)-2147483648LL);
		// int minHeight = int.MaxValue;
		V_1 = ((int32_t)2147483647LL);
		// for (int x = 0; x < mapWidth; x++)
		V_2 = 0;
		goto IL_00c4;
	}

IL_0021:
	{
		// for (int z = 0; z < mapHeight; z++)
		V_3 = 0;
		goto IL_00b2;
	}

IL_0029:
	{
		// heightMap[x, z] = Mathf.FloorToInt(terrainWeight * Noise.Get2DPerlin(new Vector2(x, z), seed, terrainScale)) + solidGroundHeight;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_4 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		int32_t L_7 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___terrainWeight_6;
		int32_t L_8 = V_2;
		int32_t L_9 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)L_8), ((float)L_9), /*hidden argument*/NULL);
		int32_t L_11 = ___seed2;
		float L_12 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___terrainScale_9;
		float L_13;
		L_13 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_10, ((float)L_11), L_12, NULL);
		int32_t L_14;
		L_14 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(((float)L_7), L_13)), NULL);
		int32_t L_15 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___solidGroundHeight_5;
		NullCheck(L_4);
		(L_4)->SetAt(L_5, L_6, ((int32_t)il2cpp_codegen_add(L_14, L_15)));
		// if (heightMap[x, z] > maxHeight)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_16 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		int32_t L_19;
		L_19 = (L_16)->GetAt(L_17, L_18);
		int32_t L_20 = V_0;
		V_4 = (bool)((((int32_t)L_19) > ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0087;
		}
	}
	{
		// maxHeight = heightMap[x, z];
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_22 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_22);
		int32_t L_25;
		L_25 = (L_22)->GetAt(L_23, L_24);
		V_0 = L_25;
	}

IL_0087:
	{
		// if (heightMap[x, z] < minHeight)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_26 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		NullCheck(L_26);
		int32_t L_29;
		L_29 = (L_26)->GetAt(L_27, L_28);
		int32_t L_30 = V_1;
		V_5 = (bool)((((int32_t)L_29) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_00ad;
		}
	}
	{
		// minHeight = heightMap[x, z];
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_32 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = (L_32)->GetAt(L_33, L_34);
		V_1 = L_35;
	}

IL_00ad:
	{
		// for (int z = 0; z < mapHeight; z++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b2:
	{
		// for (int z = 0; z < mapHeight; z++)
		int32_t L_37 = V_3;
		int32_t L_38 = ___mapHeight1;
		V_6 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_6;
		if (L_39)
		{
			goto IL_0029;
		}
	}
	{
		// for (int x = 0; x < mapWidth; x++)
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00c4:
	{
		// for (int x = 0; x < mapWidth; x++)
		int32_t L_41 = V_2;
		int32_t L_42 = ___mapWidth0;
		V_7 = (bool)((((int32_t)L_41) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_7;
		if (L_43)
		{
			goto IL_0021;
		}
	}
	{
		// treeLineHeight = maxHeight - Mathf.RoundToInt(maxHeight * treeLinePercentage);
		int32_t L_44 = V_0;
		int32_t L_45 = V_0;
		float L_46 = __this->___treeLinePercentage_19;
		int32_t L_47;
		L_47 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(((float)L_45), L_46)), NULL);
		__this->___treeLineHeight_21 = ((int32_t)il2cpp_codegen_subtract(L_44, L_47));
		// maxMuskegHeight = minHeight + Mathf.RoundToInt(minHeight * muskegChance);
		int32_t L_48 = V_1;
		int32_t L_49 = V_1;
		float L_50 = __this->___muskegChance_20;
		int32_t L_51;
		L_51 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(((float)L_49), L_50)), NULL);
		__this->___maxMuskegHeight_22 = ((int32_t)il2cpp_codegen_add(L_48, L_51));
		// minMuskegHeight = minHeight;
		int32_t L_52 = V_1;
		__this->___minMuskegHeight_23 = L_52;
		// for (int x = 0; x < mapWidth; x++)
		V_8 = 0;
		goto IL_0160;
	}

IL_0109:
	{
		// for (int z = 0; z < mapHeight; z++)
		V_9 = 0;
		goto IL_014e;
	}

IL_010f:
	{
		// if (heightMap[x, z] <= maxMuskegHeight)
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_53 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_54 = V_8;
		int32_t L_55 = V_9;
		NullCheck(L_53);
		int32_t L_56;
		L_56 = (L_53)->GetAt(L_54, L_55);
		int32_t L_57 = __this->___maxMuskegHeight_22;
		V_10 = (bool)((((int32_t)((((int32_t)L_56) > ((int32_t)L_57))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_0147;
		}
	}
	{
		// heightMap[x, z] = maxMuskegHeight;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_59 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_60 = V_8;
		int32_t L_61 = V_9;
		int32_t L_62 = __this->___maxMuskegHeight_22;
		NullCheck(L_59);
		(L_59)->SetAt(L_60, L_61, L_62);
	}

IL_0147:
	{
		// for (int z = 0; z < mapHeight; z++)
		int32_t L_63 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_014e:
	{
		// for (int z = 0; z < mapHeight; z++)
		int32_t L_64 = V_9;
		int32_t L_65 = ___mapHeight1;
		V_11 = (bool)((((int32_t)L_64) < ((int32_t)L_65))? 1 : 0);
		bool L_66 = V_11;
		if (L_66)
		{
			goto IL_010f;
		}
	}
	{
		// for (int x = 0; x < mapWidth; x++)
		int32_t L_67 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0160:
	{
		// for (int x = 0; x < mapWidth; x++)
		int32_t L_68 = V_8;
		int32_t L_69 = ___mapWidth0;
		V_12 = (bool)((((int32_t)L_68) < ((int32_t)L_69))? 1 : 0);
		bool L_70 = V_12;
		if (L_70)
		{
			goto IL_0109;
		}
	}
	{
		// }
		return;
	}
}
// System.Byte TiagaBiome::CreateBiomeSpecificVoxel(UnityEngine.Vector3Int,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TiagaBiome_CreateBiomeSpecificVoxel_m4ADDAC89E2F4AB6068606FAB7454FDC748279684 (TiagaBiome_t24149653E3AA758A2D7FB0678E2C97AD77290AA8* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___pos0, int32_t ___seed1, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	uint8_t V_12 = 0x0;
	int32_t G_B9_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B37_0 = 0;
	{
		// byte voxelValue = 0;
		V_0 = (uint8_t)0;
		// if (!World.IsVoxelInWorld(pos))
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_0, NULL);
		bool L_2;
		L_2 = World_IsVoxelInWorld_mCAB443D36771C6A8B7673314643414B4662D391F(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.NULL;//empty block
		V_0 = (uint8_t)0;
		goto IL_022a;
	}

IL_001e:
	{
		// else if (pos.y == 0)
		int32_t L_4;
		L_4 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Bedrock;//bedrock
		V_0 = (uint8_t)3;
		goto IL_022a;
	}

IL_0035:
	{
		// else if (pos.y > heightMap[pos.x, pos.z])//above ground
		int32_t L_6;
		L_6 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_7 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_8;
		L_8 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_9;
		L_9 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = (L_7)->GetAt(L_8, L_9);
		V_3 = (bool)((((int32_t)L_6) > ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Air;//air
		V_0 = (uint8_t)2;
		goto IL_022a;
	}

IL_0064:
	{
		// else if (pos.y == heightMap[pos.x, pos.z] && pos.y >= treeLineHeight)
		int32_t L_12;
		L_12 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_13 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_14;
		L_14 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_15;
		L_15 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_13);
		int32_t L_16;
		L_16 = (L_13)->GetAt(L_14, L_15);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_16))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_17;
		L_17 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_18 = __this->___treeLineHeight_21;
		G_B9_0 = ((((int32_t)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B9_0 = 0;
	}

IL_009b:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00ab;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Cracked_Stone;
		V_0 = (uint8_t)((int32_t)19);
		goto IL_022a;
	}

IL_00ab:
	{
		// else if (pos.y <= maxMuskegHeight && pos.y >= minMuskegHeight && !m_world.CheckForVoxel(new Vector3(pos.x, pos.y + 2, pos.z)))
		int32_t L_20;
		L_20 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_21 = __this->___maxMuskegHeight_22;
		if ((((int32_t)L_20) > ((int32_t)L_21)))
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_22;
		L_22 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_23 = __this->___minMuskegHeight_23;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_00f8;
		}
	}
	{
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_24 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___m_world_17;
		int32_t L_25;
		L_25 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_26;
		L_26 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_27;
		L_27 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)L_25), ((float)((int32_t)il2cpp_codegen_add(L_26, 2))), ((float)L_27), /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_29;
		L_29 = World_CheckForVoxel_mC09DF03B6CFC60530D2E59370AD2AFD28DE0A720(L_24, L_28, NULL);
		G_B15_0 = ((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		goto IL_00f9;
	}

IL_00f8:
	{
		G_B15_0 = 0;
	}

IL_00f9:
	{
		V_5 = (bool)G_B15_0;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_011f;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.STRUCTURE_PLACEHOLDER;
		V_0 = (uint8_t)1;
		// Structure.MakeMuskeg(pos, m_world.modifications);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_31 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_31, NULL);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_33 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___m_world_17;
		NullCheck(L_33);
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_34 = L_33->___modifications_10;
		Structure_MakeMuskeg_m5DA5EA565E9BD31DE1986CDA648A68FF103C9B36(L_32, L_34, NULL);
		goto IL_022a;
	}

IL_011f:
	{
		// else if (pos.y == heightMap[pos.x, pos.z] && pos.y < treeLineHeight)//top layer
		int32_t L_35;
		L_35 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_36 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_37;
		L_37 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_38;
		L_38 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_36);
		int32_t L_39;
		L_39 = (L_36)->GetAt(L_37, L_38);
		if ((!(((uint32_t)L_35) == ((uint32_t)L_39))))
		{
			goto IL_0152;
		}
	}
	{
		int32_t L_40;
		L_40 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_41 = __this->___treeLineHeight_21;
		G_B20_0 = ((((int32_t)L_40) < ((int32_t)L_41))? 1 : 0);
		goto IL_0153;
	}

IL_0152:
	{
		G_B20_0 = 0;
	}

IL_0153:
	{
		V_6 = (bool)G_B20_0;
		bool L_42 = V_6;
		if (!L_42)
		{
			goto IL_0163;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Tiaga_Grass;
		V_0 = (uint8_t)((int32_t)12);
		goto IL_022a;
	}

IL_0163:
	{
		// else if (pos.y < heightMap[pos.x, pos.z] && pos.y >= heightMap[pos.x, pos.z] - upperSoilDepth)//upper soil layer
		int32_t L_43;
		L_43 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_44 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_45;
		L_45 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_46;
		L_46 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_44);
		int32_t L_47;
		L_47 = (L_44)->GetAt(L_45, L_46);
		if ((((int32_t)L_43) >= ((int32_t)L_47)))
		{
			goto IL_01b3;
		}
	}
	{
		int32_t L_48;
		L_48 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_49 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_50;
		L_50 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_51;
		L_51 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_49);
		int32_t L_52;
		L_52 = (L_49)->GetAt(L_50, L_51);
		int32_t L_53 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___upperSoilDepth_7;
		G_B25_0 = ((((int32_t)((((int32_t)L_48) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, L_53))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01b4;
	}

IL_01b3:
	{
		G_B25_0 = 0;
	}

IL_01b4:
	{
		V_7 = (bool)G_B25_0;
		bool L_54 = V_7;
		if (!L_54)
		{
			goto IL_01c1;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Tiaga_Dirt;
		V_0 = (uint8_t)((int32_t)11);
		goto IL_022a;
	}

IL_01c1:
	{
		// else if (pos.y < heightMap[pos.x, pos.z] && pos.y >= (heightMap[pos.x, pos.z] - upperSoilDepth) - middleSoilDepth)//mid soil layer
		int32_t L_55;
		L_55 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_56 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_57;
		L_57 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_58;
		L_58 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_56);
		int32_t L_59;
		L_59 = (L_56)->GetAt(L_57, L_58);
		if ((((int32_t)L_55) >= ((int32_t)L_59)))
		{
			goto IL_0218;
		}
	}
	{
		int32_t L_60;
		L_60 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_61 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_62;
		L_62 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_63;
		L_63 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_61);
		int32_t L_64;
		L_64 = (L_61)->GetAt(L_62, L_63);
		int32_t L_65 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___upperSoilDepth_7;
		int32_t L_66 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___middleSoilDepth_8;
		G_B30_0 = ((((int32_t)((((int32_t)L_60) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_64, L_65)), L_66))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0219;
	}

IL_0218:
	{
		G_B30_0 = 0;
	}

IL_0219:
	{
		V_8 = (bool)G_B30_0;
		bool L_67 = V_8;
		if (!L_67)
		{
			goto IL_0226;
		}
	}
	{
		// voxelValue = (byte)BlockTypes.Permafrost;
		V_0 = (uint8_t)((int32_t)13);
		goto IL_022a;
	}

IL_0226:
	{
		// voxelValue = (byte)BlockTypes.Stone;//stone, ores, other underground stuff
		V_0 = (uint8_t)4;
	}

IL_022a:
	{
		// if (pos.y == heightMap[pos.x, pos.z] && pos.y < treeLineHeight && pos.y > maxMuskegHeight)
		int32_t L_68;
		L_68 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_69 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___heightMap_16;
		int32_t L_70;
		L_70 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_71;
		L_71 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		NullCheck(L_69);
		int32_t L_72;
		L_72 = (L_69)->GetAt(L_70, L_71);
		if ((!(((uint32_t)L_68) == ((uint32_t)L_72))))
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_73;
		L_73 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_74 = __this->___treeLineHeight_21;
		if ((((int32_t)L_73) >= ((int32_t)L_74)))
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_75;
		L_75 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___pos0), NULL);
		int32_t L_76 = __this->___maxMuskegHeight_22;
		G_B37_0 = ((((int32_t)L_75) > ((int32_t)L_76))? 1 : 0);
		goto IL_026d;
	}

IL_026c:
	{
		G_B37_0 = 0;
	}

IL_026d:
	{
		V_9 = (bool)G_B37_0;
		bool L_77 = V_9;
		if (!L_77)
		{
			goto IL_0307;
		}
	}
	{
		// if (Noise.Get2DPerlin(new Vector2(pos.x, pos.z), -seed, treeZoneScale) > treeZoneThreshold)
		int32_t L_78;
		L_78 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_79;
		L_79 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_80), ((float)L_78), ((float)L_79), /*hidden argument*/NULL);
		int32_t L_81 = ___seed1;
		float L_82 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___treeZoneScale_10;
		float L_83;
		L_83 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_80, ((float)((-L_81))), L_82, NULL);
		float L_84 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___treeZoneThreshold_11;
		V_10 = (bool)((((float)L_83) > ((float)L_84))? 1 : 0);
		bool L_85 = V_10;
		if (!L_85)
		{
			goto IL_0306;
		}
	}
	{
		// if (Noise.Get2DPerlin(new Vector2(pos.x, pos.z), -seed, treePlacementScale) > treePlacementThreshold)
		int32_t L_86;
		L_86 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___pos0), NULL);
		int32_t L_87;
		L_87 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___pos0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_88), ((float)L_86), ((float)L_87), /*hidden argument*/NULL);
		int32_t L_89 = ___seed1;
		float L_90 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___treePlacementScale_12;
		float L_91;
		L_91 = Noise_Get2DPerlin_mDC089839CA9B7C4D02A6BFD74953B9FEE7B4A2F5(L_88, ((float)((-L_89))), L_90, NULL);
		float L_92 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___treePlacementThreshold_13;
		V_11 = (bool)((((float)L_91) > ((float)L_92))? 1 : 0);
		bool L_93 = V_11;
		if (!L_93)
		{
			goto IL_0305;
		}
	}
	{
		// Structure.MakeFirTree(pos, m_world.modifications, minTreeHeight, maxTreeHeight, firTreeGrowthRate);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_94 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_94, NULL);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_96 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___m_world_17;
		NullCheck(L_96);
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_97 = L_96->___modifications_10;
		int32_t L_98 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___minTreeHeight_15;
		int32_t L_99 = ((BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083*)__this)->___maxTreeHeight_14;
		float L_100 = __this->___firTreeGrowthRate_18;
		Structure_MakeFirTree_mC7B4917610E64CA22B61A2C1912C2199D033EC54(L_95, L_97, L_98, L_99, L_100, NULL);
	}

IL_0305:
	{
	}

IL_0306:
	{
	}

IL_0307:
	{
		// return voxelValue;
		uint8_t L_101 = V_0;
		V_12 = L_101;
		goto IL_030c;
	}

IL_030c:
	{
		// }
		uint8_t L_102 = V_12;
		return L_102;
	}
}
// System.Void TiagaBiome::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiagaBiome__ctor_mA7C28F050C073694AF6CADB9296C70011FE4481D (TiagaBiome_t24149653E3AA758A2D7FB0678E2C97AD77290AA8* __this, const RuntimeMethod* method) 
{
	{
		// [Tooltip("# of blocks tree grows out by")] public float firTreeGrowthRate = 0.5f;
		__this->___firTreeGrowthRate_18 = (0.5f);
		// public float treeLinePercentage = 0.15f;
		__this->___treeLinePercentage_19 = (0.150000006f);
		// public float muskegChance = 0.1f;
		__this->___muskegChance_20 = (0.100000001f);
		BiomeAttributes__ctor_mF8BF494FE566405D219DD9509BEFB65850E6245B(__this, NULL);
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
// System.Int32 VoxelData::get_WorldSizeInVoxels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return WorldSizeInChunks * ChunkWidth;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_0 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		int32_t L_1 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Single VoxelData::get_NormalizedBlockTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VoxelData_get_NormalizedBlockTextureSize_m7C7BC025AB495D39182B942C44B2B9A543EB95F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return 1f / (float)TextureAtlasSizeInBlocks;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_0 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___TextureAtlasSizeInBlocks_3;
		V_0 = ((float)((1.0f)/((float)L_0)));
		goto IL_0010;
	}

IL_0010:
	{
		// }
		float L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector2Int VoxelData::Vector3ToVector2Int(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A VoxelData_Vector3ToVector2Int_mD86829589F9578B72B9BA1A7743C9EB0D9EB8116 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int xCheck = Mathf.FloorToInt(pos.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_1, NULL);
		V_0 = L_2;
		// int zCheck = Mathf.FloorToInt(pos.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___pos0;
		float L_4 = L_3.___z_4;
		int32_t L_5;
		L_5 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_4, NULL);
		V_1 = L_5;
		// return new Vector2Int(xCheck / ChunkWidth, zCheck / ChunkWidth);
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_7 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		int32_t L_8 = V_1;
		int32_t L_9 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_10), ((int32_t)(L_6/L_7)), ((int32_t)(L_8/L_9)), /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_11 = V_2;
		return L_11;
	}
}
// System.Void VoxelData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoxelData__cctor_mAF08910F68FCA8EF5ECCCE77172FD7EE1E448553 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____327336B1CA21CDCCBA0F9FEDD8AC5A2439F56FEDEAB79A03E24BF226CD74B18C_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int ChunkWidth = 10;
		((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0 = ((int32_t)10);
		// public static readonly int ChunkHeight = 100;
		((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkHeight_1 = ((int32_t)100);
		// public static readonly int WorldSizeInChunks = 10;
		((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2 = ((int32_t)10);
		// public static readonly int TextureAtlasSizeInBlocks = 8;
		((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___TextureAtlasSizeInBlocks_3 = 8;
		// public static readonly Vector3[] voxelVerts = new Vector3[8]
		// {
		//     new Vector3(0,0,0), //VERT 0
		//     new Vector3(1,0,0), //VERT 1
		//     new Vector3(1,1,0), //VERT 2
		//     new Vector3(0,1,0), //VERT 3
		//     new Vector3(0,0,1), //VERT 4
		//     new Vector3(1,0,1), //VERT 5
		//     new Vector3(1,1,1), //VERT 6
		//     new Vector3(0,1,1) //VERT 7
		// };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)8);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_14);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelVerts_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelVerts_4), (void*)L_15);
		// public static readonly Vector3[] faceChecks = new Vector3[6]
		// {
		//     new Vector3(0, 0, -1),
		//     new Vector3(0, 0, 1),
		//     new Vector3(0, 1, 0),
		//     new Vector3(0, -1, 0),
		//     new Vector3(-1, 0, 0),
		//     new Vector3(1, 0, 0)
		// };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_21);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_23);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = L_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_25);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = L_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_27);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_29);
		((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___faceChecks_5 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___faceChecks_5), (void*)L_28);
		// public static readonly int[,] voxelTris = new int[6, 4]
		// {
		//     {0,3,1,2 }, //BACK FACE
		//     {5,6,4,7 }, //FRONT FACE
		//     {3,7,2,6 }, //TOP FACE
		//     {1,5,0,4 }, //BOTTOM FACE
		//     {4,7,0,3 }, //LEFT FACE
		//     {1,2,5,6 } //RIGHT FACE
		// };
		il2cpp_array_size_t L_31[] = { (il2cpp_array_size_t)6, (il2cpp_array_size_t)4 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_30 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_31);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_32 = L_30;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_33 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____327336B1CA21CDCCBA0F9FEDD8AC5A2439F56FEDEAB79A03E24BF226CD74B18C_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_32, L_33, NULL);
		((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelTris_6 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelTris_6), (void*)L_32);
		// public static readonly Vector2[] voxelUVs = new Vector2[4]
		// {
		//     new Vector2(0,0),
		//     new Vector2(0,1),
		//     new Vector2(1,0),
		//     new Vector2(1,1)
		// };
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_34 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_35 = L_34;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_36);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_37 = L_35;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_38);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_39 = L_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_40);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_41 = L_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_42), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_42);
		((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelUVs_7 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___voxelUVs_7), (void*)L_41);
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
// System.Void VoxelMod::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoxelMod__ctor_mCE1D259AE3AF86211B0565F20FCC9C76CBD90172 (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* __this, const RuntimeMethod* method) 
{
	{
		// public VoxelMod()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// position = new Vector3();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___position_0);
		il2cpp_codegen_initobj(L_0, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// id = 0;
		__this->___id_1 = (uint8_t)0;
		// }
		return;
	}
}
// System.Void VoxelMod::.ctor(UnityEngine.Vector3Int,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoxelMod__ctor_mA5091EE67360DB6E6F77F5BD062021C3D34C0744 (VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___pos0, uint8_t ___id1, const RuntimeMethod* method) 
{
	{
		// public VoxelMod(Vector3Int pos, byte id)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// position = pos;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline(L_0, NULL);
		__this->___position_0 = L_1;
		// this.id = id;
		uint8_t L_2 = ___id1;
		__this->___id_1 = L_2;
		// }
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
// System.Void World::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Start_mFF594A74C1DE2C5CDF4C18583DCA40EC7924F24F (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, const RuntimeMethod* method) 
{
	{
		// biome.SetUpReferences(this);
		BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083* L_0 = __this->___biome_5;
		NullCheck(L_0);
		VirtualActionInvoker1< World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* >::Invoke(6 /* System.Void BiomeAttributes::SetUpReferences(World) */, L_0, __this);
		// RegenWorld();
		World_RegenWorld_m282136BDA02E34B78186241641902FA93C69BA33(__this, NULL);
		// }
		return;
	}
}
// System.Void World::RegenWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_RegenWorld_m282136BDA02E34B78186241641902FA93C69BA33 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE4028DB4640843341A84E278E1E4ED8D2C269072_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m39F3118DF8CD60263992588EAEC7657E3069C257_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m9D787047CB23C896A2970286FD97ABF763229310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegenWorldU3Eb__9_0_mB8312E46490968ADF344E8712D2FD4098E7871C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB* G_B10_0 = NULL;
	List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* G_B10_1 = NULL;
	Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB* G_B9_0 = NULL;
	List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* G_B9_1 = NULL;
	{
		// modifications.Clear();
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_0 = __this->___modifications_10;
		NullCheck(L_0);
		Queue_1_Clear_m9D787047CB23C896A2970286FD97ABF763229310(L_0, Queue_1_Clear_m9D787047CB23C896A2970286FD97ABF763229310_RuntimeMethod_var);
		// chunksToUpdate.Clear();
		List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* L_1 = __this->___chunksToUpdate_11;
		NullCheck(L_1);
		List_1_Clear_mE4028DB4640843341A84E278E1E4ED8D2C269072_inline(L_1, List_1_Clear_mE4028DB4640843341A84E278E1E4ED8D2C269072_RuntimeMethod_var);
		// foreach (Transform child in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_0028_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_8, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// Destroy(child.gameObject);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
				NullCheck(L_9);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_10, NULL);
			}

IL_0042_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// chunks = new Chunk[VoxelData.WorldSizeInChunks, VoxelData.WorldSizeInChunks];
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_13 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		int32_t L_14 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		il2cpp_array_size_t L_16[] = { (il2cpp_array_size_t)L_13, (il2cpp_array_size_t)L_14 };
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_15 = (ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3*)GenArrayNew(ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3_il2cpp_TypeInfo_var, L_16);
		__this->___chunks_9 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chunks_9), (void*)L_15);
		// blockTypes.Sort((x, y) => x.Type.CompareTo(y.Type));
		List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* L_17 = __this->___blockTypes_8;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_il2cpp_TypeInfo_var);
		Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB* L_18 = ((U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB* L_19 = L_18;
		G_B9_0 = L_19;
		G_B9_1 = L_17;
		if (L_19)
		{
			G_B10_0 = L_19;
			G_B10_1 = L_17;
			goto IL_0098;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_il2cpp_TypeInfo_var);
		U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5* L_20 = ((U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB* L_21 = (Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB*)il2cpp_codegen_object_new(Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Comparison_1__ctor_m1843D7C1FF809202CA93549AAEF462B66564470D(L_21, L_20, (intptr_t)((void*)U3CU3Ec_U3CRegenWorldU3Eb__9_0_mB8312E46490968ADF344E8712D2FD4098E7871C2_RuntimeMethod_var), NULL);
		Comparison_1_tE4197073205D50FE3D320A6B7EA727CBEB0B2CCB* L_22 = L_21;
		((U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_22);
		G_B10_0 = L_22;
		G_B10_1 = G_B9_1;
	}

IL_0098:
	{
		NullCheck(G_B10_1);
		List_1_Sort_m39F3118DF8CD60263992588EAEC7657E3069C257(G_B10_1, G_B10_0, List_1_Sort_m39F3118DF8CD60263992588EAEC7657E3069C257_RuntimeMethod_var);
		// Seed = Random.Range(-1000, 1001);
		int32_t L_23;
		L_23 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)-1000), ((int32_t)1001), NULL);
		__this->___Seed_4 = L_23;
		// GenerateWorld();
		World_GenerateWorld_m43F25BF94D90C4A9009A531350CE3A980EFF3217(__this, NULL);
		// transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), (0.100000001f), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_24, L_25, NULL);
		// }
		return;
	}
}
// System.Void World::GenerateWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_GenerateWorld_m43F25BF94D90C4A9009A531350CE3A980EFF3217 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0E79EFD1D346651307EA0283ACB160FB2BC97D8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7F74D0550846D7BAA5A0B52A711FE60D44868EAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m02EE45B0FB462E64102878F9418E2E1E20212AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m40E5A66F960153686935BD4FF642E19D4D36BA1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE4028DB4640843341A84E278E1E4ED8D2C269072_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCC7E3652B85916B15144BC84022D495330D5BB98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m10E5FA90858C52C957967928E4A3E60E5F88968A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m992E7258145F988A857B42A58852EAF88A3796A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mF48C194C969E2A67F5B8AFC698EEDF0B8AC612F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* V_4 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Enumerator_t107CFDFD7019E96B01A5700B99186BC49A9B4995 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* V_10 = NULL;
	{
		// biome.CreateBiomeHeightMap(VoxelData.WorldSizeInChunks * VoxelData.ChunkWidth, VoxelData.WorldSizeInChunks * VoxelData.ChunkWidth, Seed);
		BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083* L_0 = __this->___biome_5;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_1 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		int32_t L_2 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		int32_t L_3 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		int32_t L_4 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		int32_t L_5 = __this->___Seed_4;
		NullCheck(L_0);
		VirtualActionInvoker3< int32_t, int32_t, int32_t >::Invoke(4 /* System.Void BiomeAttributes::CreateBiomeHeightMap(System.Int32,System.Int32,System.Int32) */, L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2)), ((int32_t)il2cpp_codegen_multiply(L_3, L_4)), L_5);
		// for (int x = 0; x < VoxelData.WorldSizeInChunks; x++)
		V_0 = 0;
		goto IL_0064;
	}

IL_002d:
	{
		// for (int z = 0; z < VoxelData.WorldSizeInChunks; z++)
		V_1 = 0;
		goto IL_0053;
	}

IL_0032:
	{
		// chunks[x, z] = new Chunk(new Vector2Int(x, z), this, true);
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_6 = __this->___chunks_9;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_11), L_9, L_10, /*hidden argument*/NULL);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_12 = (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060*)il2cpp_codegen_object_new(Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Chunk__ctor_mFEB4AC3A0F539428C76E2C2337B68F985A99307C(L_12, L_11, __this, (bool)1, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(L_7, L_8, L_12);
		// for (int z = 0; z < VoxelData.WorldSizeInChunks; z++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0053:
	{
		// for (int z = 0; z < VoxelData.WorldSizeInChunks; z++)
		int32_t L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_15 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		V_2 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_0032;
		}
	}
	{
		// for (int x = 0; x < VoxelData.WorldSizeInChunks; x++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0064:
	{
		// for (int x = 0; x < VoxelData.WorldSizeInChunks; x++)
		int32_t L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_19 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		V_3 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0153;
	}

IL_0075:
	{
		// VoxelMod voxMod = modifications.Dequeue();
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_21 = __this->___modifications_10;
		NullCheck(L_21);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_22;
		L_22 = Queue_1_Dequeue_m992E7258145F988A857B42A58852EAF88A3796A2(L_21, Queue_1_Dequeue_m992E7258145F988A857B42A58852EAF88A3796A2_RuntimeMethod_var);
		V_4 = L_22;
		// Vector2Int chunkCoord = GetChunkCoordFromVector3(voxMod.position);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_23 = V_4;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___position_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_25;
		L_25 = World_GetChunkCoordFromVector3_mEDD6F9A0ACBCE5D6D51CBB881E18ED61F56353F9(__this, L_24, NULL);
		V_5 = L_25;
		// if (chunks[chunkCoord.x, chunkCoord.y] == null)
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_26 = __this->___chunks_9;
		int32_t L_27;
		L_27 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_5), NULL);
		int32_t L_28;
		L_28 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_5), NULL);
		NullCheck(L_26);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_29;
		L_29 = (L_26)->GetAt(L_27, L_28);
		V_6 = (bool)((((RuntimeObject*)(Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060*)L_29) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_00d8;
		}
	}
	{
		// chunks[chunkCoord.x, chunkCoord.y] = new Chunk(chunkCoord, this, true);
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_31 = __this->___chunks_9;
		int32_t L_32;
		L_32 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_5), NULL);
		int32_t L_33;
		L_33 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_5), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_34 = V_5;
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_35 = (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060*)il2cpp_codegen_object_new(Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Chunk__ctor_mFEB4AC3A0F539428C76E2C2337B68F985A99307C(L_35, L_34, __this, (bool)1, NULL);
		NullCheck(L_31);
		(L_31)->SetAt(L_32, L_33, L_35);
	}

IL_00d8:
	{
		// chunks[chunkCoord.x, chunkCoord.y].mods.Enqueue(voxMod);
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_36 = __this->___chunks_9;
		int32_t L_37;
		L_37 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_5), NULL);
		int32_t L_38;
		L_38 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_5), NULL);
		NullCheck(L_36);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_39;
		L_39 = (L_36)->GetAt(L_37, L_38);
		NullCheck(L_39);
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_40 = L_39->___mods_11;
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_41 = V_4;
		NullCheck(L_40);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_40, L_41, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// if (!chunksToUpdate.Contains(chunks[chunkCoord.x, chunkCoord.y]))
		List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* L_42 = __this->___chunksToUpdate_11;
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_43 = __this->___chunks_9;
		int32_t L_44;
		L_44 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_5), NULL);
		int32_t L_45;
		L_45 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_5), NULL);
		NullCheck(L_43);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_46;
		L_46 = (L_43)->GetAt(L_44, L_45);
		NullCheck(L_42);
		bool L_47;
		L_47 = List_1_Contains_mCC7E3652B85916B15144BC84022D495330D5BB98(L_42, L_46, List_1_Contains_mCC7E3652B85916B15144BC84022D495330D5BB98_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_7;
		if (!L_48)
		{
			goto IL_0152;
		}
	}
	{
		// chunksToUpdate.Add(chunks[chunkCoord.x, chunkCoord.y]);
		List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* L_49 = __this->___chunksToUpdate_11;
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_50 = __this->___chunks_9;
		int32_t L_51;
		L_51 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_5), NULL);
		int32_t L_52;
		L_52 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_5), NULL);
		NullCheck(L_50);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_53;
		L_53 = (L_50)->GetAt(L_51, L_52);
		NullCheck(L_49);
		List_1_Add_m40E5A66F960153686935BD4FF642E19D4D36BA1A_inline(L_49, L_53, List_1_Add_m40E5A66F960153686935BD4FF642E19D4D36BA1A_RuntimeMethod_var);
	}

IL_0152:
	{
	}

IL_0153:
	{
		// while (modifications.Count > 0)
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_54 = __this->___modifications_10;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = Queue_1_get_Count_mF48C194C969E2A67F5B8AFC698EEDF0B8AC612F8_inline(L_54, Queue_1_get_Count_mF48C194C969E2A67F5B8AFC698EEDF0B8AC612F8_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_55) > ((int32_t)0))? 1 : 0);
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_0075;
		}
	}
	{
		// foreach (Chunk chunk in chunksToUpdate)
		List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* L_57 = __this->___chunksToUpdate_11;
		NullCheck(L_57);
		Enumerator_t107CFDFD7019E96B01A5700B99186BC49A9B4995 L_58;
		L_58 = List_1_GetEnumerator_m10E5FA90858C52C957967928E4A3E60E5F88968A(L_57, List_1_GetEnumerator_m10E5FA90858C52C957967928E4A3E60E5F88968A_RuntimeMethod_var);
		V_9 = L_58;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0198:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0E79EFD1D346651307EA0283ACB160FB2BC97D8E((&V_9), Enumerator_Dispose_m0E79EFD1D346651307EA0283ACB160FB2BC97D8E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_018d_1;
			}

IL_017a_1:
			{
				// foreach (Chunk chunk in chunksToUpdate)
				Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_59;
				L_59 = Enumerator_get_Current_m02EE45B0FB462E64102878F9418E2E1E20212AD8_inline((&V_9), Enumerator_get_Current_m02EE45B0FB462E64102878F9418E2E1E20212AD8_RuntimeMethod_var);
				V_10 = L_59;
				// chunk.UpdateChunk();
				Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_60 = V_10;
				NullCheck(L_60);
				Chunk_UpdateChunk_m70E43B1B78FAF14D6F8649187D85DD571849B835(L_60, NULL);
			}

IL_018d_1:
			{
				// foreach (Chunk chunk in chunksToUpdate)
				bool L_61;
				L_61 = Enumerator_MoveNext_m7F74D0550846D7BAA5A0B52A711FE60D44868EAA((&V_9), Enumerator_MoveNext_m7F74D0550846D7BAA5A0B52A711FE60D44868EAA_RuntimeMethod_var);
				if (L_61)
				{
					goto IL_017a_1;
				}
			}
			{
				goto IL_01a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01a7:
	{
		// chunksToUpdate.Clear();
		List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* L_62 = __this->___chunksToUpdate_11;
		NullCheck(L_62);
		List_1_Clear_mE4028DB4640843341A84E278E1E4ED8D2C269072_inline(L_62, List_1_Clear_mE4028DB4640843341A84E278E1E4ED8D2C269072_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Vector2Int World::GetChunkCoordFromVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A World_GetChunkCoordFromVector3_mEDD6F9A0ACBCE5D6D51CBB881E18ED61F56353F9 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector2Int(Mathf.FloorToInt(pos.x / VoxelData.ChunkWidth), Mathf.FloorToInt(pos.z / VoxelData.ChunkWidth));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_2 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		int32_t L_3;
		L_3 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(L_1/((float)L_2))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___pos0;
		float L_5 = L_4.___z_4;
		int32_t L_6 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		int32_t L_7;
		L_7 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(L_5/((float)L_6))), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_8), L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9 = V_0;
		return L_9;
	}
}
// Chunk World::GetChunkFromVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* World_GetChunkFromVector3_m39CCDD4BF22E4CA2E09D08D89A3EB7F45AF9549B (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* V_3 = NULL;
	int32_t G_B5_0 = 0;
	{
		// int x = Mathf.FloorToInt(pos.x / VoxelData.ChunkWidth);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_2 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		int32_t L_3;
		L_3 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(L_1/((float)L_2))), NULL);
		V_0 = L_3;
		// int z = Mathf.FloorToInt(pos.z / VoxelData.ChunkWidth);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___pos0;
		float L_5 = L_4.___z_4;
		int32_t L_6 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		int32_t L_7;
		L_7 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(L_5/((float)L_6))), NULL);
		V_1 = L_7;
		// if (x < 0 || x >= VoxelData.WorldSizeInChunks
		//     || z < 0 || z >= VoxelData.WorldSizeInChunks)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_10 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_13 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		G_B5_0 = ((((int32_t)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B5_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B5_0;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_004e;
		}
	}
	{
		// return null;
		V_3 = (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060*)NULL;
		goto IL_005e;
	}

IL_004e:
	{
		// return chunks[x, z];
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_15 = __this->___chunks_9;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_15);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_18;
		L_18 = (L_15)->GetAt(L_16, L_17);
		V_3 = L_18;
		goto IL_005e;
	}

IL_005e:
	{
		// }
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_19 = V_3;
		return L_19;
	}
}
// System.Boolean World::CheckForVoxel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool World_CheckForVoxel_mC09DF03B6CFC60530D2E59370AD2AFD28DE0A720 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// Vector2Int thisChunk = VoxelData.Vector3ToVector2Int(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
		L_1 = VoxelData_Vector3ToVector2Int_mD86829589F9578B72B9BA1A7743C9EB0D9EB8116(L_0, NULL);
		V_0 = L_1;
		// if (!IsVoxelInWorld(pos))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos0;
		bool L_3;
		L_3 = World_IsVoxelInWorld_mCAB443D36771C6A8B7673314643414B4662D391F(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00aa;
	}

IL_001d:
	{
		// if (chunks[thisChunk.x, thisChunk.y] != null && chunks[thisChunk.x, thisChunk.y].IsVoxelMapPopulated)
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_5 = __this->___chunks_9;
		int32_t L_6;
		L_6 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_7;
		L_7 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		NullCheck(L_5);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_8;
		L_8 = (L_5)->GetAt(L_6, L_7);
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_9 = __this->___chunks_9;
		int32_t L_10;
		L_10 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_11;
		L_11 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		NullCheck(L_9);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_12;
		L_12 = (L_9)->GetAt(L_10, L_11);
		NullCheck(L_12);
		bool L_13 = L_12->___IsVoxelMapPopulated_13;
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0059;
	}

IL_0058:
	{
		G_B5_0 = 0;
	}

IL_0059:
	{
		V_3 = (bool)G_B5_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0090;
		}
	}
	{
		// return blockTypes[chunks[thisChunk.x, thisChunk.y].GetVoxelFromGlobalVector3(pos)].isSolid;
		List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* L_15 = __this->___blockTypes_8;
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_16 = __this->___chunks_9;
		int32_t L_17;
		L_17 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_18;
		L_18 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		NullCheck(L_16);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_19;
		L_19 = (L_16)->GetAt(L_17, L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___pos0;
		NullCheck(L_19);
		uint8_t L_21;
		L_21 = Chunk_GetVoxelFromGlobalVector3_mFC87E5E8549480CC63766BF3DB6A7CEB93B33AEA(L_19, L_20, NULL);
		NullCheck(L_15);
		BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* L_22;
		L_22 = List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8(L_15, L_21, List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		NullCheck(L_22);
		bool L_23 = L_22->___isSolid_5;
		V_2 = L_23;
		goto IL_00aa;
	}

IL_0090:
	{
		// return blockTypes[CreateVoxel(pos)].isSolid;
		List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* L_24 = __this->___blockTypes_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___pos0;
		uint8_t L_26;
		L_26 = World_CreateVoxel_mAF12C5D98AED2C764EE24E59A756B18072C671D0(__this, L_25, NULL);
		NullCheck(L_24);
		BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* L_27;
		L_27 = List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8(L_24, L_26, List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		NullCheck(L_27);
		bool L_28 = L_27->___isSolid_5;
		V_2 = L_28;
		goto IL_00aa;
	}

IL_00aa:
	{
		// }
		bool L_29 = V_2;
		return L_29;
	}
}
// System.Boolean World::CheckForTransparentVoxel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool World_CheckForTransparentVoxel_mAA4419374C0C2F9221DE894B8FF9DD5AB98C93D1 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// Vector2Int thisChunk = VoxelData.Vector3ToVector2Int(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
		L_1 = VoxelData_Vector3ToVector2Int_mD86829589F9578B72B9BA1A7743C9EB0D9EB8116(L_0, NULL);
		V_0 = L_1;
		// if (!IsVoxelInWorld(pos))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos0;
		bool L_3;
		L_3 = World_IsVoxelInWorld_mCAB443D36771C6A8B7673314643414B4662D391F(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_00aa;
	}

IL_001d:
	{
		// if (chunks[thisChunk.x, thisChunk.y] != null && chunks[thisChunk.x, thisChunk.y].IsVoxelMapPopulated)
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_5 = __this->___chunks_9;
		int32_t L_6;
		L_6 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_7;
		L_7 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		NullCheck(L_5);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_8;
		L_8 = (L_5)->GetAt(L_6, L_7);
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_9 = __this->___chunks_9;
		int32_t L_10;
		L_10 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_11;
		L_11 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		NullCheck(L_9);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_12;
		L_12 = (L_9)->GetAt(L_10, L_11);
		NullCheck(L_12);
		bool L_13 = L_12->___IsVoxelMapPopulated_13;
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0059;
	}

IL_0058:
	{
		G_B5_0 = 0;
	}

IL_0059:
	{
		V_3 = (bool)G_B5_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0090;
		}
	}
	{
		// return blockTypes[chunks[thisChunk.x, thisChunk.y].GetVoxelFromGlobalVector3(pos)].renderNeighborFaces;
		List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* L_15 = __this->___blockTypes_8;
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_16 = __this->___chunks_9;
		int32_t L_17;
		L_17 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_18;
		L_18 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		NullCheck(L_16);
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_19;
		L_19 = (L_16)->GetAt(L_17, L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___pos0;
		NullCheck(L_19);
		uint8_t L_21;
		L_21 = Chunk_GetVoxelFromGlobalVector3_mFC87E5E8549480CC63766BF3DB6A7CEB93B33AEA(L_19, L_20, NULL);
		NullCheck(L_15);
		BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* L_22;
		L_22 = List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8(L_15, L_21, List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		NullCheck(L_22);
		bool L_23 = L_22->___renderNeighborFaces_6;
		V_2 = L_23;
		goto IL_00aa;
	}

IL_0090:
	{
		// return blockTypes[CreateVoxel(pos)].renderNeighborFaces;
		List_1_t69EDAAAFA114AC4B00DD101A3933AF1F9F90BF54* L_24 = __this->___blockTypes_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___pos0;
		uint8_t L_26;
		L_26 = World_CreateVoxel_mAF12C5D98AED2C764EE24E59A756B18072C671D0(__this, L_25, NULL);
		NullCheck(L_24);
		BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* L_27;
		L_27 = List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8(L_24, L_26, List_1_get_Item_mA198BB0344970808FB40036FCEBC601245E431B8_RuntimeMethod_var);
		NullCheck(L_27);
		bool L_28 = L_27->___renderNeighborFaces_6;
		V_2 = L_28;
		goto IL_00aa;
	}

IL_00aa:
	{
		// }
		bool L_29 = V_2;
		return L_29;
	}
}
// System.Byte World::CreateVoxel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t World_CreateVoxel_mAF12C5D98AED2C764EE24E59A756B18072C671D0 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		// return biome.CreateBiomeSpecificVoxel(Vector3Int.FloorToInt(pos), Seed);
		BiomeAttributes_t71224132B195FD1CC6BCD3F9FCC37907F00FC083* L_0 = __this->___biome_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___pos0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2;
		L_2 = Vector3Int_FloorToInt_mC770CCF49963DEABABC73A2459D3CF8C5AE825E8_inline(L_1, NULL);
		int32_t L_3 = __this->___Seed_4;
		NullCheck(L_0);
		uint8_t L_4;
		L_4 = VirtualFuncInvoker2< uint8_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, int32_t >::Invoke(5 /* System.Byte BiomeAttributes::CreateBiomeSpecificVoxel(UnityEngine.Vector3Int,System.Int32) */, L_0, L_2, L_3);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		uint8_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean World::IsChunkInWorld(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool World_IsChunkInWorld_m348AC573601802FCB463C7D88DF864A7C180065B (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (pos.x > 0 && pos.x < VoxelData.WorldSizeInChunks - 1
		//     && pos.y > 0 && pos.y < VoxelData.WorldSizeInChunks - 1)
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___pos0), NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___pos0), NULL);
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_2 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___pos0), NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_4;
		L_4 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___pos0), NULL);
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_5 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		G_B5_0 = ((((int32_t)L_4) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, 1))))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = 0;
	}

IL_0038:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0046;
	}

IL_0041:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void World::AddVoxelMod(VoxelMod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_AddVoxelMod_m48A9C917FB287DC57A2DAB8424176A1857F2C378 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* ___mod0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// modifications.Enqueue(mod);
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_0 = __this->___modifications_10;
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_1 = ___mod0;
		NullCheck(L_0);
		Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC(L_0, L_1, Queue_1_Enqueue_mBB85858701F2EAEC0E8F6C68DEEB498DB402D5BC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void World::RemoveVoxelMod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_RemoveVoxelMod_mEF8C9F37D492CD4C77B96F821B072CF22F846D83 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m992E7258145F988A857B42A58852EAF88A3796A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// modifications.Dequeue();
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_0 = __this->___modifications_10;
		NullCheck(L_0);
		VoxelMod_tB25F322B4FB2CBC0367C7CCD438523853F3A4657* L_1;
		L_1 = Queue_1_Dequeue_m992E7258145F988A857B42A58852EAF88A3796A2(L_0, Queue_1_Dequeue_m992E7258145F988A857B42A58852EAF88A3796A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean World::IsVoxelInWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool World_IsVoxelInWorld_mCAB443D36771C6A8B7673314643414B4662D391F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
		// if (pos.x >= 0 && pos.x < VoxelData.WorldSizeInVoxels
		//     && pos.y >= 0 && pos.y < VoxelData.ChunkHeight
		//     && pos.z >= 0 && pos.z < VoxelData.WorldSizeInVoxels)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos0;
		float L_3 = L_2.___x_2;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		if ((!(((float)L_3) < ((float)((float)L_4)))))
		{
			goto IL_0054;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___pos0;
		float L_6 = L_5.___y_3;
		if ((!(((float)L_6) >= ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___pos0;
		float L_8 = L_7.___y_3;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_9 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkHeight_1;
		if ((!(((float)L_8) < ((float)((float)L_9)))))
		{
			goto IL_0054;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___pos0;
		float L_11 = L_10.___z_4;
		if ((!(((float)L_11) >= ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___pos0;
		float L_13 = L_12.___z_4;
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = VoxelData_get_WorldSizeInVoxels_m41623D0E569C49DF8159BAB46124FD8A81EF625E(NULL);
		G_B7_0 = ((((float)L_13) < ((float)((float)L_14)))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 0;
	}

IL_0055:
	{
		V_0 = (bool)G_B7_0;
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0063;
	}

IL_005e:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0063;
	}

IL_0063:
	{
		// }
		bool L_16 = V_1;
		return L_16;
	}
}
// System.Byte World::GetVoxel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t World_GetVoxel_mEF5B5FBF459C794A6729D6C73FC57FC7B14854BC (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* V_1 = NULL;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t V_4 = 0x0;
	{
		// if (IsVoxelInWorld(worldPos))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___worldPos0;
		bool L_1;
		L_1 = World_IsVoxelInWorld_mCAB443D36771C6A8B7673314643414B4662D391F(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0081;
		}
	}
	{
		// Chunk chunk = GetChunkFromVector3(worldPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___worldPos0;
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_4;
		L_4 = World_GetChunkFromVector3_m39CCDD4BF22E4CA2E09D08D89A3EB7F45AF9549B(__this, L_3, NULL);
		V_1 = L_4;
		// if (chunk != null)
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_5 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0080;
		}
	}
	{
		// Vector3 localPosition = new Vector3(worldPos.x - (chunk.coord.x * VoxelData.ChunkWidth), worldPos.y, worldPos.z - (chunk.coord.y * VoxelData.ChunkWidth));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___worldPos0;
		float L_8 = L_7.___x_2;
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_9 = V_1;
		NullCheck(L_9);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_10 = (&L_9->___coord_0);
		int32_t L_11;
		L_11 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_12 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___worldPos0;
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___worldPos0;
		float L_16 = L_15.___z_4;
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_17 = V_1;
		NullCheck(L_17);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_18 = (&L_17->___coord_0);
		int32_t L_19;
		L_19 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_18, NULL);
		int32_t L_20 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___ChunkWidth_0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), ((float)il2cpp_codegen_subtract(L_8, ((float)((int32_t)il2cpp_codegen_multiply(L_11, L_12))))), L_14, ((float)il2cpp_codegen_subtract(L_16, ((float)((int32_t)il2cpp_codegen_multiply(L_19, L_20))))), NULL);
		// return chunk.voxelMap[(int)localPosition.x, (int)localPosition.y, (int)localPosition.z];
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_21 = V_1;
		NullCheck(L_21);
		ByteU5BU2CU2CU5D_t3FBE5CF6C6449612127BE6609BC84828FADB4F69* L_22 = L_21->___voxelMap_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		float L_24 = L_23.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		float L_26 = L_25.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_3;
		float L_28 = L_27.___z_4;
		NullCheck(L_22);
		uint8_t L_29;
		L_29 = (L_22)->GetAt(il2cpp_codegen_cast_double_to_int<int32_t>(L_24), il2cpp_codegen_cast_double_to_int<int32_t>(L_26), il2cpp_codegen_cast_double_to_int<int32_t>(L_28));
		V_4 = L_29;
		goto IL_0086;
	}

IL_0080:
	{
	}

IL_0081:
	{
		// return (byte)BlockTypes.NULL;
		V_4 = (uint8_t)0;
		goto IL_0086;
	}

IL_0086:
	{
		// }
		uint8_t L_30 = V_4;
		return L_30;
	}
}
// System.Void World::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World__ctor_mAFAEE7FBF3A190572FB70B6BFCFEEC8655B5E354 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAEBFD74C6C8CF3E70E6E414A7349E8EC3C476605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m1C6954F125D1AF35749D329B795C645CF40AC297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Chunk[,] chunks = new Chunk[VoxelData.WorldSizeInChunks, VoxelData.WorldSizeInChunks];
		il2cpp_codegen_runtime_class_init_inline(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var);
		int32_t L_0 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		int32_t L_1 = ((VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_StaticFields*)il2cpp_codegen_static_fields_for(VoxelData_tE120DE26F449523B0A88FA63B3A5B43583C21598_il2cpp_TypeInfo_var))->___WorldSizeInChunks_2;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3* L_2 = (ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3*)GenArrayNew(ChunkU5BU2CU5D_t293BA1C2599C15B78458E3B8ABBB32846A9652E3_il2cpp_TypeInfo_var, L_3);
		__this->___chunks_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chunks_9), (void*)L_2);
		// public Queue<VoxelMod> modifications = new Queue<VoxelMod>();
		Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C* L_4 = (Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C*)il2cpp_codegen_object_new(Queue_1_tE73A4E67569DED97727175F660C1A7CE41F2054C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Queue_1__ctor_m1C6954F125D1AF35749D329B795C645CF40AC297(L_4, Queue_1__ctor_m1C6954F125D1AF35749D329B795C645CF40AC297_RuntimeMethod_var);
		__this->___modifications_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modifications_10), (void*)L_4);
		// [SerializeField] private List<Chunk> chunksToUpdate = new List<Chunk>();
		List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA* L_5 = (List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA*)il2cpp_codegen_object_new(List_1_tF15BA603692FD1C7E4A0EF1025F847BF37D009BA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mAEBFD74C6C8CF3E70E6E414A7349E8EC3C476605(L_5, List_1__ctor_mAEBFD74C6C8CF3E70E6E414A7349E8EC3C476605_RuntimeMethod_var);
		__this->___chunksToUpdate_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chunksToUpdate_11), (void*)L_5);
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
// System.Void World/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9A39F9CE783D641709F4A1989DBA9D16FF233BAC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5* L_0 = (U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5*)il2cpp_codegen_object_new(U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEA50BA93FFE210ED82B11CCB903278E88919C5D9(L_0, NULL);
		((U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void World/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEA50BA93FFE210ED82B11CCB903278E88919C5D9 (U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 World/<>c::<RegenWorld>b__9_0(BlockType,BlockType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRegenWorldU3Eb__9_0_mB8312E46490968ADF344E8712D2FD4098E7871C2 (U3CU3Ec_tA818B9FEF920BDD3CD81EE3E590826AEABF371F5* __this, BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* ___x0, BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockTypes_t64A3007772A174281F57DF45A4F087AF466AF586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// blockTypes.Sort((x, y) => x.Type.CompareTo(y.Type));
		BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* L_0 = ___x0;
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Type_4);
		BlockType_t5FFE36E646F517C22651D64FBC6FEC6243742599* L_2 = ___y1;
		NullCheck(L_2);
		uint8_t L_3 = L_2->___Type_4;
		uint8_t L_4 = L_3;
		RuntimeObject* L_5 = Box(BlockTypes_t64A3007772A174281F57DF45A4F087AF466AF586_il2cpp_TypeInfo_var, &L_4);
		Il2CppFakeBox<uint8_t> L_6(BlockTypes_t64A3007772A174281F57DF45A4F087AF466AF586_il2cpp_TypeInfo_var, L_1);
		int32_t L_7;
		L_7 = Enum_CompareTo_m7857C6F62098FB59C5334577863DD23559CD50B5((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), L_5, NULL);
		return L_7;
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Int_op_Implicit_mC033C628DD897DDBC75F29D06ACB30DC437A838A_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___v0), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___v0), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___v0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), ((float)L_0), ((float)L_1), ((float)L_2), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		int32_t L_2 = ___z2;
		__this->___m_Z_2 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Vector3Int_FloorToInt_mC770CCF49963DEABABC73A2459D3CF8C5AE825E8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___v0;
		float L_4 = L_3.___y_3;
		int32_t L_5;
		L_5 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___v0;
		float L_7 = L_6.___z_4;
		int32_t L_8;
		L_8 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(L_7, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_002a;
	}

IL_002a:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) 
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_8);
		return;
	}

IL_0034:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___item0;
		((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m771AC7A01DFC931CCCFCCF949C1F4D56B5E98A1B_gshared_inline (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___item0, const RuntimeMethod* method) 
{
	Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_1 = (Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)L_8);
		return;
	}

IL_0034:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9 = ___item0;
		((  void (*) (List_1_tB56F1028A724D2CE4E84861619D1CF68C68C983D*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
