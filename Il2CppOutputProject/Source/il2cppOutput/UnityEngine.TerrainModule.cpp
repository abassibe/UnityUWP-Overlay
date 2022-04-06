#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>
struct Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C;
// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F;
// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.TerrainUtils.TerrainTileCoord>
struct IEqualityComparer_1_t88286C29EF8964DB1FA6326A0679A19AC8C74709;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.TerrainUtils.TerrainMap>
struct KeyCollection_t97828E793E08E7AE593254EBFD6895A9E9604AF2;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<UnityEngine.Terrain>
struct Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.TerrainUtils.TerrainMap>
struct ValueCollection_tBB50DA6B04BF6793F609F48ADA1A351088E36D60;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct ValueCollection_tAD845AD3A8539F70A13D1BE6F0351D29799ADEAB;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.TerrainUtils.TerrainMap>[]
struct EntryU5BU5D_t0D4B039A690585E4A149FAC6B11C554E9BAA164A;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>[]
struct EntryU5BU5D_tF5367AE3FB34F62A304459CBC2E961FB1A82E6DA;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t62225631BB65062906FDEF1ED16845EF6E34BB4A;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tA42E96C61DFF3800E657E708BCD33A06F6CD2D7B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667;
// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24;
// UnityEngine.TerrainUtils.TerrainMap
struct TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.TerrainCallbacks/HeightmapChangedCallback
struct HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0;
// UnityEngine.TerrainCallbacks/TextureChangedCallback
struct TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F;
// UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3;
// UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E;
// UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1
struct U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_TerrainModule[];
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m265E9FB46C80D234AEB47C08D701628D57DBA132_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4E7AE6465929CEEA79B5921CFF3D4BD64E249AF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m384365266E590EDD82F8949169A3C502E643AC95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m5461BE3EE48320EA8E593506F16860A2CB4E9056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA4944115ADCBA991881F907C9E48413EB1EFE42A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5665AD243B285B8D26138C699D544F4124AC7D78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA22422F902B1FF70914D8FA2EF849DA0DCDC87D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m001233C3B4F8B3D1A8F044C9D43104F1671688DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mBE9BF06497225D54AC2D2D7AEF6D0F94169B10D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmbeddedAttribute__ctor_mBB01735E786E7770A1B2ECAA65D1219B6D039DA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m09F8467FB404D375259C17136F2213FC8455F2BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC60AECD5D4FA770371F4B374F2B026F7198CEF03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1CEA4A6A000E5344DB72DFF5E4FF563FF67F3558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6430F89661ED2AEDEAD6FD241BBDA21BF02135DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1F085EA2ABB67CCEB29CC4A10D6FBC0F2B963349_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m88A7ECB72C871AEFAD87667D8512A109C33E7080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAB48908F9E456DE35489D40F781F13159CD102CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC41EF0278150018906F2AB9D7CF81AE865E6AA1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IsReadOnlyAttribute__ctor_mC20B41FF7D952FD1FE27E289E221F34681837870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m7D86741C1BEF055A22281CF69C6235BFD1E7D521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m32D4949D8D2F580E35346D41EBB14C7933B93482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainCallbacks_InvokeHeightmapChangedCallback_mC8C1BF66F73C3F3A1A04E24E40B80038E5610C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainCallbacks_InvokeTextureChangedCallback_m6F342786284265520DC5D1937D37EC95C76FF822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainData__cctor_mEB22E8F61FAF85823DF58E7BB8F7C04E1DADB118_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainData__ctor_m1B68EB89248D5706C2528F47279812F824E27A2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainMap_AddTerrainInternal_m507CE3A3F880B33CA2330F69464E3511D5B9BD71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainMap_CreateFromPlacement_m46B8BF6067F682A5C260B56BBF67E428214F4653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainMap_CreateFromPlacement_mD7B0ED7EB7EF12DC6F22A05BD276FAF3139E49C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainMap_TryToAddTerrain_m03A05C883F317FD2E6956ADD6625409E8A90BE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainMap_ValidateTerrain_m8D9B035B3851E0ED8BB5877BD11F63BA85029653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainMap_Validate_mAFBB4A2D0290E25D59902A1BD5DA1EBC2ACD1326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainMap__ctor_mCDB47BA50D9D54E65754028F9CF8F91828FE616F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainUtility_AutoConnect_mA85DE7983D0D26892CB6346D695FE66DE2BFF04A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainUtility_ClearConnectivity_m1BE6D9A50F4A6A0766F8206E2E08CFD34CACA96A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainUtility_CollectTerrains_mFB908E86B0DB275283771AAF172C9903CB00973F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainUtility_ValidTerrainsExist_m6AB88A3DD0992C1C41B92F75D941F9AA203F55E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Terrain__ctor_m11F03EC6C1E68752DDCAE8EF2DED99CFD939FCDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0__ctor_m4C022C4675BA4CFC7E7AAA5692979CDE6CD8E611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_1_U3CCollectTerrainsU3Eb__0_m57E871EB2399E5FB7DF78B3C9EBFBF152116AC2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_1__ctor_mA329ED5B221AE8787EAEA1124A2A95675FDD1695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CCreateFromPlacementU3Eb__0_m703A4D4E3D378C9896199B70A89FCDF1A07C737B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0__ctor_mAFD4AEF760F5CC7CE66BAD750DAD3697397E8945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TerrainMapStatusCode_t5F36434C02953C1E58623F2E3A41D7B5FC8ADCA8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t72986D6E9DA49B1952335DAFFF9250DC3CDDEA8E 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>
struct Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0D4B039A690585E4A149FAC6B11C554E9BAA164A* ____entries_1;
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
	KeyCollection_t97828E793E08E7AE593254EBFD6895A9E9604AF2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBB50DA6B04BF6793F609F48ADA1A351088E36D60* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF5367AE3FB34F62A304459CBC2E961FB1A82E6DA* ____entries_1;
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
	KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAD845AD3A8539F70A13D1BE6F0351D29799ADEAB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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

// UnityEngine.TerrainCallbacks
struct TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C  : public RuntimeObject
{
};

struct TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_StaticFields
{
	// UnityEngine.TerrainCallbacks/HeightmapChangedCallback UnityEngine.TerrainCallbacks::heightmapChanged
	HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* ___heightmapChanged_0;
	// UnityEngine.TerrainCallbacks/TextureChangedCallback UnityEngine.TerrainCallbacks::textureChanged
	TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* ___textureChanged_1;
};

// UnityEngine.TerrainUtils.TerrainUtility
struct TerrainUtility_t2033CBF4E86976650C0371A424B6BDD6B051451D  : public RuntimeObject
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

// UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3  : public RuntimeObject
{
	// System.Int32 UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0::groupID
	int32_t ___groupID_0;
};

// UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E  : public RuntimeObject
{
	// System.Boolean UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0::onlyAutoConnectedTerrains
	bool ___onlyAutoConnectedTerrains_0;
};

// UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1
struct U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951  : public RuntimeObject
{
	// UnityEngine.Terrain UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1::t
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___t_0;
	// UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0 UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* ___CSU24U3CU3E8__locals1_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>
struct KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* ___value_1;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t62225631BB65062906FDEF1ED16845EF6E34BB4A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tA42E96C61DFF3800E657E708BCD33A06F6CD2D7B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.TerrainUtils.TerrainTileCoord
struct TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 
{
	// System.Int32 UnityEngine.TerrainUtils.TerrainTileCoord::tileX
	int32_t ___tileX_0;
	// System.Int32 UnityEngine.TerrainUtils.TerrainTileCoord::tileZ
	int32_t ___tileZ_1;
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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.TerrainUtils.TerrainMap>
struct Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct Enumerator_tF5348A6D692C0422DAF82BC55E5276A4D29BEF53 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ____currentKey_3;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___value_1;
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

// UnityEngine.TerrainUtils.TerrainMapStatusCode
struct TerrainMapStatusCode_t5F36434C02953C1E58623F2E3A41D7B5FC8ADCA8 
{
	// System.Int32 UnityEngine.TerrainUtils.TerrainMapStatusCode::value__
	int32_t ___value___2;
};

// UnityEngine.TerrainData/BoundaryValueType
struct BoundaryValueType_t2B2F2E941A2F5A0411741220B4700D421279EF67 
{
	// System.Int32 UnityEngine.TerrainData/BoundaryValueType::value__
	int32_t ___value___2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>
struct Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>
struct Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields
{
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_4;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_5;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_6;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_7;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailsPerRes
	int32_t ___k_MaximumDetailsPerRes_8;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_9;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_10;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_11;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_12;
};

// UnityEngine.TerrainUtils.TerrainMap
struct TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.TerrainUtils.TerrainMap::m_patchSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_patchSize_0;
	// UnityEngine.TerrainUtils.TerrainMapStatusCode UnityEngine.TerrainUtils.TerrainMap::m_errorCode
	int32_t ___m_errorCode_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain> UnityEngine.TerrainUtils.TerrainMap::m_terrainTiles
	Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* ___m_terrainTiles_2;
};

// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12  : public MulticastDelegate_t
{
};

// System.Predicate`1<UnityEngine.Terrain>
struct Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TerrainCallbacks/HeightmapChangedCallback
struct HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0  : public MulticastDelegate_t
{
};

// UnityEngine.TerrainCallbacks/TextureChangedCallback
struct TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F  : public MulticastDelegate_t
{
};

// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE  : public RuntimeArray
{
	ALIGN_FIELD (8) Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* m_Items[1];

	inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mF6F2C5F869485AA206FDE526CAA58BBC691A8AD5_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m7D1C8AC9355A50AF1C84A0A4B186C1D52083FBB7_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBEB6B3A304C6A01DA2A2E016B112DD4E73D6A0B8_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mCDB94B777C71A4AEC648AEE14D9C777B05667901_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59* Dictionary_2_get_Keys_m1A371FDB5221EB779B15B24DE039B1191CB9394D_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF5348A6D692C0422DAF82BC55E5276A4D29BEF53 KeyCollection_GetEnumerator_m0046DC4034F114EC3737521FFB2F49F4C1E6F869_gshared (KeyCollection_t8A862CFF968D9AAD432E0AFA29DECB342BF06F59* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m499372F99070BD8E7376FF1B2EE3040325A7E141_gshared (Enumerator_tF5348A6D692C0422DAF82BC55E5276A4D29BEF53* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 Enumerator_get_Current_mC41EF0278150018906F2AB9D7CF81AE865E6AA1C_gshared_inline (Enumerator_tF5348A6D692C0422DAF82BC55E5276A4D29BEF53* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEE338DC5230565298472253C6A1646332E2E83CF_gshared (Enumerator_tF5348A6D692C0422DAF82BC55E5276A4D29BEF53* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7 Dictionary_2_GetEnumerator_mE58E6AC88AD044F9EB9989FF2F6AA6F05ECA402F_gshared (Dictionary_2_t22B5EE7684537D7D143E6F6FCDC4C58B5D53F68F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE3662EBE47C6E066285CDB5B63ACB07D73B5CD84_gshared (Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE Enumerator_get_Current_mAB48908F9E456DE35489D40F781F13159CD102CA_gshared_inline (Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_gshared_inline (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0192F3C0DFB719827E8F40E0992166F0CE78BEE6_gshared (Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// UnityEngine.Terrain[] UnityEngine.TerrainData::get_users()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainCallbacks/HeightmapChangedCallback::Invoke(UnityEngine.Terrain,UnityEngine.RectInt,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_inline (HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainCallbacks/TextureChangedCallback::Invoke(UnityEngine.Terrain,System.String,UnityEngine.RectInt,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_inline (TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_Create_m0CF559BB2C5F3B5246D4D147E0A10F88360B2F4E (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* ___terrainData0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_get_size_Injected_m0F56E87C4D7EDD1D84F038E4AF0F273D328CF661 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F (int32_t ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainUtils.TerrainTileCoord::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA4944115ADCBA991881F907C9E48413EB1EFE42A (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667**, const RuntimeMethod*))Dictionary_2_TryGetValue_mF6F2C5F869485AA206FDE526CAA58BBC691A8AD5_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mAFD4AEF760F5CC7CE66BAD750DAD3697397E8945 (U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Terrain::get_groupingID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<UnityEngine.Terrain>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m80A5EFAAAC439A069D5782C725DF325FDD5D891C (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.TerrainUtils.TerrainMap UnityEngine.TerrainUtils.TerrainMap::CreateFromPlacement(UnityEngine.Vector2,UnityEngine.Vector2,System.Predicate`1<UnityEngine.Terrain>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* TerrainMap_CreateFromPlacement_mD7B0ED7EB7EF12DC6F22A05BD276FAF3139E49C0 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gridOrigin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gridSize1, Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* ___filter2, bool ___fullValidation3, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainUtils.TerrainMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap__ctor_mCDB47BA50D9D54E65754028F9CF8F91828FE616F (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Predicate`1<UnityEngine.Terrain>::Invoke(T)
inline bool Predicate_1_Invoke_mA6B25B82B5FF8BFA2DCF9E5A8600C761222B0B2A_inline (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, const RuntimeMethod*))Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TerrainUtils.TerrainMap::TryToAddTerrain(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainMap_TryToAddTerrain_m03A05C883F317FD2E6956ADD6625409E8A90BE15 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___tileX0, int32_t ___tileZ1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain2, const RuntimeMethod* method) ;
// UnityEngine.TerrainUtils.TerrainMapStatusCode UnityEngine.TerrainUtils.TerrainMap::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainMap_Validate_mAFBB4A2D0290E25D59902A1BD5DA1EBC2ACD1326 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::get_Count()
inline int32_t Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024 (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*, const RuntimeMethod*))Dictionary_2_get_Count_m7D1C8AC9355A50AF1C84A0A4B186C1D52083FBB7_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::.ctor()
inline void Dictionary_2__ctor_mCA22422F902B1FF70914D8FA2EF849DA0DCDC87D (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*, const RuntimeMethod*))Dictionary_2__ctor_mBEB6B3A304C6A01DA2A2E016B112DD4E73D6A0B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::Add(TKey,TValue)
inline void Dictionary_2_Add_m265E9FB46C80D234AEB47C08D701628D57DBA132 (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, const RuntimeMethod*))Dictionary_2_Add_mCDB94B777C71A4AEC648AEE14D9C777B05667901_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Terrain UnityEngine.TerrainUtils.TerrainMap::GetTerrain(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainUtils.TerrainMap::AddTerrainInternal(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap_AddTerrainInternal_m507CE3A3F880B33CA2330F69464E3511D5B9BD71 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___x0, int32_t ___z1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::get_Keys()
inline KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E* Dictionary_2_get_Keys_mBE9BF06497225D54AC2D2D7AEF6D0F94169B10D4 (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E* (*) (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*, const RuntimeMethod*))Dictionary_2_get_Keys_m1A371FDB5221EB779B15B24DE039B1191CB9394D_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::GetEnumerator()
inline Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689 KeyCollection_GetEnumerator_m7D86741C1BEF055A22281CF69C6235BFD1E7D521 (KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689 (*) (KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E*, const RuntimeMethod*))KeyCollection_GetEnumerator_m0046DC4034F114EC3737521FFB2F49F4C1E6F869_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::Dispose()
inline void Enumerator_Dispose_mC60AECD5D4FA770371F4B374F2B026F7198CEF03 (Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689*, const RuntimeMethod*))Enumerator_Dispose_m499372F99070BD8E7376FF1B2EE3040325A7E141_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::get_Current()
inline TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 Enumerator_get_Current_m88A7ECB72C871AEFAD87667D8512A109C33E7080_inline (Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689* __this, const RuntimeMethod* method)
{
	return ((  TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 (*) (Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689*, const RuntimeMethod*))Enumerator_get_Current_mC41EF0278150018906F2AB9D7CF81AE865E6AA1C_gshared_inline)(__this, method);
}
// System.Void UnityEngine.TerrainUtils.TerrainMap::ValidateTerrain(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap_ValidateTerrain_m8D9B035B3851E0ED8BB5877BD11F63BA85029653 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::MoveNext()
inline bool Enumerator_MoveNext_m6430F89661ED2AEDEAD6FD241BBDA21BF02135DC (Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689*, const RuntimeMethod*))Enumerator_MoveNext_mEE338DC5230565298472253C6A1646332E2E83CF_gshared)(__this, method);
}
// System.Boolean UnityEngine.Terrain::get_allowAutoConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___left0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___top1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___right2, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___bottom3, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m4C022C4675BA4CFC7E7AAA5692979CDE6CD8E611 (U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.TerrainUtils.TerrainUtility::ValidTerrainsExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainUtility_ValidTerrainsExist_m6AB88A3DD0992C1C41B92F75D941F9AA203F55E8 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::.ctor()
inline void Dictionary_2__ctor_m5665AD243B285B8D26138C699D544F4124AC7D78 (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_1__ctor_mA329ED5B221AE8787EAEA1124A2A95675FDD1695 (U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m384365266E590EDD82F8949169A3C502E643AC95 (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// UnityEngine.TerrainUtils.TerrainMap UnityEngine.TerrainUtils.TerrainMap::CreateFromPlacement(UnityEngine.Terrain,System.Predicate`1<UnityEngine.Terrain>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* TerrainMap_CreateFromPlacement_m46B8BF6067F682A5C260B56BBF67E428214F4653 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___originTerrain0, Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* ___filter1, bool ___fullValidation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::Add(TKey,TValue)
inline void Dictionary_2_Add_m4E7AE6465929CEEA79B5921CFF3D4BD64E249AF9 (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* __this, int32_t ___key0, TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*, int32_t, TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::get_Count()
inline int32_t Dictionary_2_get_Count_m001233C3B4F8B3D1A8F044C9D43104F1671688DC (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*, const RuntimeMethod*))Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared)(__this, method);
}
// System.Void UnityEngine.TerrainUtils.TerrainUtility::ClearConnectivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainUtility_ClearConnectivity_m1BE6D9A50F4A6A0766F8206E2E08CFD34CACA96A (const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap> UnityEngine.TerrainUtils.TerrainUtility::CollectTerrains(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* TerrainUtility_CollectTerrains_mFB908E86B0DB275283771AAF172C9903CB00973F (bool ___onlyAutoConnectedTerrains0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::GetEnumerator()
inline Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F Dictionary_2_GetEnumerator_m5461BE3EE48320EA8E593506F16860A2CB4E9056 (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F (*) (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::Dispose()
inline void Enumerator_Dispose_m09F8467FB404D375259C17136F2213FC8455F2BF (Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F*, const RuntimeMethod*))Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::get_Current()
inline KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873 Enumerator_get_Current_m1F085EA2ABB67CCEB29CC4A10D6FBC0F2B963349_inline (Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873 (*) (Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F*, const RuntimeMethod*))Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::get_Value()
inline TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* KeyValuePair_2_get_Value_m32D4949D8D2F580E35346D41EBB14C7933B93482_inline (KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873* __this, const RuntimeMethod* method)
{
	return ((  TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* (*) (KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain> UnityEngine.TerrainUtils.TerrainMap::get_terrainTiles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB_inline (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::GetEnumerator()
inline Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473 (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B (*) (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mE58E6AC88AD044F9EB9989FF2F6AA6F05ECA402F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::Dispose()
inline void Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7 (Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B*, const RuntimeMethod*))Enumerator_Dispose_mE3662EBE47C6E066285CDB5B63ACB07D73B5CD84_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::get_Current()
inline KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_inline (Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 (*) (Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B*, const RuntimeMethod*))Enumerator_get_Current_mAB48908F9E456DE35489D40F781F13159CD102CA_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::get_Key()
inline TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_inline (KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3* __this, const RuntimeMethod* method)
{
	return ((  TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 (*) (KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3*, const RuntimeMethod*))KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain>::MoveNext()
inline bool Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4 (Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B*, const RuntimeMethod*))Enumerator_MoveNext_m0192F3C0DFB719827E8F40E0992166F0CE78BEE6_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.TerrainUtils.TerrainMap>::MoveNext()
inline bool Enumerator_MoveNext_m1CEA4A6A000E5344DB72DFF5E4FF563FF67F3558 (Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F*, const RuntimeMethod*))Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared)(__this, method);
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mBB01735E786E7770A1B2ECAA65D1219B6D039DA5 (EmbeddedAttribute_t62225631BB65062906FDEF1ED16845EF6E34BB4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmbeddedAttribute__ctor_mBB01735E786E7770A1B2ECAA65D1219B6D039DA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, EmbeddedAttribute__ctor_mBB01735E786E7770A1B2ECAA65D1219B6D039DA5_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mC20B41FF7D952FD1FE27E289E221F34681837870 (IsReadOnlyAttribute_tA42E96C61DFF3800E657E708BCD33A06F6CD2D7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsReadOnlyAttribute__ctor_mC20B41FF7D952FD1FE27E289E221F34681837870_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IsReadOnlyAttribute__ctor_mC20B41FF7D952FD1FE27E289E221F34681837870_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* (*Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_terrainData()");
	TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Terrain::get_allowAutoConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef bool (*Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_allowAutoConnect()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Terrain::get_groupingID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_groupingID()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___left0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___top1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___right2, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___bottom3, const RuntimeMethod* method) 
{
	typedef void (*Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E_ftn) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*);
	static Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)");
	_il2cpp_icall_func(__this, ___left0, ___top1, ___right2, ___bottom3);
}
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF (const RuntimeMethod* method) 
{
	typedef TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* (*Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF_ftn) ();
	static Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_activeTerrains()");
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Terrain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain__ctor_m11F03EC6C1E68752DDCAE8EF2DED99CFD939FCDC (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Terrain__ctor_m11F03EC6C1E68752DDCAE8EF2DED99CFD939FCDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Terrain__ctor_m11F03EC6C1E68752DDCAE8EF2DED99CFD939FCDC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
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
// System.Void UnityEngine.TerrainCallbacks::InvokeHeightmapChangedCallback(UnityEngine.TerrainData,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainCallbacks_InvokeHeightmapChangedCallback_mC8C1BF66F73C3F3A1A04E24E40B80038E5610C4A (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* ___terrainData0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainCallbacks_InvokeHeightmapChangedCallback_mC8C1BF66F73C3F3A1A04E24E40B80038E5610C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_1 = NULL;
	int32_t V_2 = 0;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_3 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___terrainData0), (&___heightRegion1), (&___synched2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainCallbacks_InvokeHeightmapChangedCallback_mC8C1BF66F73C3F3A1A04E24E40B80038E5610C4A_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 3));
		HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* L_0 = ((TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_StaticFields*)il2cpp_codegen_static_fields_for(TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var))->___heightmapChanged_0;
		V_0 = (bool)((!(((RuntimeObject*)(HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 4));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 7));
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_2 = ___terrainData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 8));
		NullCheck(L_2);
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_3;
		L_3 = TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 8));
		V_1 = L_3;
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 9));
		goto IL_0030;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 10));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 11));
		HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* L_8 = ((TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_StaticFields*)il2cpp_codegen_static_fields_for(TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var))->___heightmapChanged_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_9 = V_3;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_10 = ___heightRegion1;
		bool L_11 = ___synched2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 12));
		NullCheck(L_8);
		HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_inline(L_8, L_9, L_10, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 13));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 14));
		int32_t L_13 = V_2;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 15));
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 16));
		return;
	}
}
// System.Void UnityEngine.TerrainCallbacks::InvokeTextureChangedCallback(UnityEngine.TerrainData,System.String,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainCallbacks_InvokeTextureChangedCallback_m6F342786284265520DC5D1937D37EC95C76FF822 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* ___terrainData0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainCallbacks_InvokeTextureChangedCallback_m6F342786284265520DC5D1937D37EC95C76FF822_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_1 = NULL;
	int32_t V_2 = 0;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_3 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___terrainData0), (&___textureName1), (&___texelRegion2), (&___synched3));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainCallbacks_InvokeTextureChangedCallback_m6F342786284265520DC5D1937D37EC95C76FF822_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 17));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 18));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 20));
		TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* L_0 = ((TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_StaticFields*)il2cpp_codegen_static_fields_for(TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var))->___textureChanged_1;
		V_0 = (bool)((!(((RuntimeObject*)(TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 21));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 23));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 24));
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_2 = ___terrainData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 25));
		NullCheck(L_2);
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_3;
		L_3 = TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 25));
		V_1 = L_3;
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 26));
		goto IL_0031;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 27));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 28));
		TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* L_8 = ((TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_StaticFields*)il2cpp_codegen_static_fields_for(TerrainCallbacks_tE504E6C7F9609FDE7009DFEA9E405218E5212B5C_il2cpp_TypeInfo_var))->___textureChanged_1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_9 = V_3;
		String_t* L_10 = ___textureName1;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_11 = ___texelRegion2;
		bool L_12 = ___synched3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 29));
		NullCheck(L_8);
		TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_inline(L_8, L_9, L_10, L_11, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 30));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0031:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 31));
		int32_t L_14 = V_2;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 32));
	}

IL_0038:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 33));
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
void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_Multicast(HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* currentDelegate = reinterpret_cast<HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___terrain0, ___heightRegion1, ___synched2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_Open(HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___terrain0, ___heightRegion1, ___synched2, method);
}
void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_Closed(HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___terrain0, ___heightRegion1, ___synched2, method);
}
void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_OpenStaticInvoker(HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___terrain0, ___heightRegion1, ___synched2);
}
void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_ClosedStaticInvoker(HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___terrain0, ___heightRegion1, ___synched2);
}
// System.Void UnityEngine.TerrainCallbacks/HeightmapChangedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightmapChangedCallback__ctor_m6A7E4189E0A7A1B70EE73818B93B0FC9F613648C (HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_Closed;
	}
	else
	{
		bool isOpen = methodCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_Multicast;
}
// System.Void UnityEngine.TerrainCallbacks/HeightmapChangedCallback::Invoke(UnityEngine.Terrain,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875 (HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___terrain0, ___heightRegion1, ___synched2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_Multicast(TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* currentDelegate = reinterpret_cast<TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___terrain0, ___textureName1, ___texelRegion2, ___synched3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_Open(TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, String_t*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___terrain0, ___textureName1, ___texelRegion2, ___synched3, method);
}
void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_Closed(TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, String_t*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___terrain0, ___textureName1, ___texelRegion2, ___synched3, method);
}
void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_OpenStaticInvoker(TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, String_t*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___terrain0, ___textureName1, ___texelRegion2, ___synched3);
}
void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_ClosedStaticInvoker(TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, String_t*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___terrain0, ___textureName1, ___texelRegion2, ___synched3);
}
// System.Void UnityEngine.TerrainCallbacks/TextureChangedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureChangedCallback__ctor_m64076D799FEB79E3D6BE2C4EB33CD081A398F0EF (TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_Closed;
	}
	else
	{
		bool isOpen = methodCount == 3;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_Multicast;
}
// System.Void UnityEngine.TerrainCallbacks/TextureChangedCallback::Invoke(UnityEngine.Terrain,System.String,UnityEngine.RectInt,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE (TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___terrain0, ___textureName1, ___texelRegion2, ___synched3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F (int32_t ___type0, const RuntimeMethod* method) 
{
	typedef int32_t (*TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F_ftn) (int32_t);
	static TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)");
	int32_t icallRetVal = _il2cpp_icall_func(___type0);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData__ctor_m1B68EB89248D5706C2528F47279812F824E27A2E (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData__ctor_m1B68EB89248D5706C2528F47279812F824E27A2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainData__ctor_m1B68EB89248D5706C2528F47279812F824E27A2E_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 34));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 35));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 36));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 37));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 37));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 38));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 39));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 40));
		il2cpp_codegen_runtime_class_init_inline(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		TerrainData_Internal_Create_m0CF559BB2C5F3B5246D4D147E0A10F88360B2F4E(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 40));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 41));
		return;
	}
}
// System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_Internal_Create_m0CF559BB2C5F3B5246D4D147E0A10F88360B2F4E (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* ___terrainData0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_Internal_Create_m0CF559BB2C5F3B5246D4D147E0A10F88360B2F4E_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_Internal_Create_m0CF559BB2C5F3B5246D4D147E0A10F88360B2F4E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_Create_m0CF559BB2C5F3B5246D4D147E0A10F88360B2F4E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)");
	_il2cpp_icall_func(___terrainData0);
}
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TerrainData_get_size_Injected_m0F56E87C4D7EDD1D84F038E4AF0F273D328CF661(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.TerrainData::GetAlphamapResolutionInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainData_GetAlphamapResolutionInternal_m5C312434763B8F0BD8DE760ACF439DFEFAC2F3E5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef float (*TerrainData_GetAlphamapResolutionInternal_m5C312434763B8F0BD8DE760ACF439DFEFAC2F3E5_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_GetAlphamapResolutionInternal_m5C312434763B8F0BD8DE760ACF439DFEFAC2F3E5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetAlphamapResolutionInternal_m5C312434763B8F0BD8DE760ACF439DFEFAC2F3E5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetAlphamapResolutionInternal()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Terrain[] UnityEngine.TerrainData::get_users()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) 
{
	typedef TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* (*TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*);
	static TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_users_m0C569F1AD5853CEBF3C572723A1CAD04AC8433C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_users()");
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.TerrainData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData__cctor_mEB22E8F61FAF85823DF58E7BB8F7C04E1DADB118 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData__cctor_mEB22E8F61FAF85823DF58E7BB8F7C04E1DADB118_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainData__cctor_mEB22E8F61FAF85823DF58E7BB8F7C04E1DADB118_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 42));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 43));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 44));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 45));
		int32_t L_0;
		L_0 = TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F(0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 45));
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumResolution_4 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 46));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 47));
		int32_t L_1;
		L_1 = TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F(1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 47));
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumDetailResolutionPerPatch_5 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 48));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 49));
		int32_t L_2;
		L_2 = TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F(2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 49));
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumDetailResolutionPerPatch_6 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 50));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 51));
		int32_t L_3;
		L_3 = TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F(3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 51));
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumDetailPatchCount_7 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 52));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 53));
		int32_t L_4;
		L_4 = TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F(4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 53));
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumDetailsPerRes_8 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 54));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 55));
		int32_t L_5;
		L_5 = TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F(5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 55));
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumAlphamapResolution_9 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 56));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 57));
		int32_t L_6;
		L_6 = TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F(6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 57));
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumAlphamapResolution_10 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 58));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 59));
		int32_t L_7;
		L_7 = TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F(7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 59));
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MinimumBaseMapResolution_11 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 60));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 61));
		int32_t L_8;
		L_8 = TerrainData_GetBoundaryValue_m86EA6F098B2283F222E94EE8620DEED22B34FB2F(8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 61));
		((TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_il2cpp_TypeInfo_var))->___k_MaximumBaseMapResolution_12 = L_8;
		return;
	}
}
// System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_get_size_Injected_m0F56E87C4D7EDD1D84F038E4AF0F273D328CF661 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TerrainData_get_size_Injected_m0F56E87C4D7EDD1D84F038E4AF0F273D328CF661_ftn) (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TerrainData_get_size_Injected_m0F56E87C4D7EDD1D84F038E4AF0F273D328CF661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_size_Injected_m0F56E87C4D7EDD1D84F038E4AF0F273D328CF661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TerrainUtils.TerrainTileCoord::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___tileX0), (&___tileZ1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 62));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 63));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 64));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 65));
		int32_t L_0 = ___tileX0;
		__this->___tileX_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 66));
		int32_t L_1 = ___tileZ1;
		__this->___tileZ_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 67));
		return;
	}
}
IL2CPP_EXTERN_C  void TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A_AdjustorThunk (RuntimeObject* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method)
{
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09*>(__this + _offset);
	TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A(_thisAdjusted, ___tileX0, ___tileZ1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Terrain UnityEngine.TerrainUtils.TerrainMap::GetTerrain(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA4944115ADCBA991881F907C9E48413EB1EFE42A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_0 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___tileX0), (&___tileZ1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 68));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 69));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 70));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 71));
		V_0 = (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*)NULL;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 72));
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_0 = __this->___m_terrainTiles_2;
		int32_t L_1 = ___tileX0;
		int32_t L_2 = ___tileZ1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 73));
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_3;
		memset((&L_3), 0, sizeof(L_3));
		TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A((&L_3), L_1, L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 73));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 74));
		NullCheck(L_0);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mA4944115ADCBA991881F907C9E48413EB1EFE42A(L_0, L_3, (&V_0), Dictionary_2_TryGetValue_mA4944115ADCBA991881F907C9E48413EB1EFE42A_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 74));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 75));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_5 = V_0;
		V_1 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 76));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.TerrainUtils.TerrainMap UnityEngine.TerrainUtils.TerrainMap::CreateFromPlacement(UnityEngine.Terrain,System.Predicate`1<UnityEngine.Terrain>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* TerrainMap_CreateFromPlacement_m46B8BF6067F682A5C260B56BBF67E428214F4653 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___originTerrain0, Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* ___filter1, bool ___fullValidation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_CreateFromPlacement_m46B8BF6067F682A5C260B56BBF67E428214F4653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CCreateFromPlacementU3Eb__0_m703A4D4E3D378C9896199B70A89FCDF1A07C737B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___originTerrain0), (&___filter1), (&___fullValidation2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainMap_CreateFromPlacement_m46B8BF6067F682A5C260B56BBF67E428214F4653_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 77));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 78));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 79));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 80));
		U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* L_0 = (U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_mAFD4AEF760F5CC7CE66BAD750DAD3697397E8945(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 80));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 81));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 82));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 83));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_1;
		L_1 = Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 83));
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 84));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_2;
		L_2 = Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 84));
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_001f;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = ___originTerrain0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 85));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 85));
		G_B4_0 = ((int32_t)(L_4));
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 1;
	}

IL_0020:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 86));
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 87));
		V_6 = (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)NULL;
		goto IL_00cb;
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 88));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = ___originTerrain0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 89));
		NullCheck(L_6);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_7;
		L_7 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 89));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 90));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 90));
		V_7 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 91));
		bool L_9 = V_7;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 92));
		V_6 = (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)NULL;
		goto IL_00cb;
	}

IL_0048:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 93));
		U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* L_10 = V_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11 = ___originTerrain0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 94));
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24(L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 94));
		NullCheck(L_10);
		L_10->___groupID_0 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 95));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_13 = ___originTerrain0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 96));
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 96));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 97));
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 97));
		float L_16 = L_15.___x_2;
		V_1 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 98));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_17 = ___originTerrain0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 99));
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 99));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 100));
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 100));
		float L_20 = L_19.___z_4;
		V_2 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 101));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_21 = ___originTerrain0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 102));
		NullCheck(L_21);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_22;
		L_22 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 102));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 103));
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 103));
		float L_24 = L_23.___x_2;
		V_3 = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 104));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_25 = ___originTerrain0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 105));
		NullCheck(L_25);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_26;
		L_26 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 105));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 106));
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 106));
		float L_28 = L_27.___z_4;
		V_4 = L_28;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 107));
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_29 = ___filter1;
		V_8 = (bool)((((RuntimeObject*)(Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055*)L_29) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 108));
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00b1;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 109));
		U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* L_31 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 110));
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_32 = (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055*)il2cpp_codegen_object_new(Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Predicate_1__ctor_m80A5EFAAAC439A069D5782C725DF325FDD5D891C(L_32, L_31, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CCreateFromPlacementU3Eb__0_m703A4D4E3D378C9896199B70A89FCDF1A07C737B_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 110));
		___filter1 = L_32;
	}

IL_00b1:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 111));
		float L_33 = V_1;
		float L_34 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 112));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_35), L_33, L_34, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 112));
		float L_36 = V_3;
		float L_37 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 113));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), L_36, L_37, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 113));
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_39 = ___filter1;
		bool L_40 = ___fullValidation2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 114));
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_41;
		L_41 = TerrainMap_CreateFromPlacement_mD7B0ED7EB7EF12DC6F22A05BD276FAF3139E49C0(L_35, L_38, L_39, L_40, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 114));
		V_6 = L_41;
		goto IL_00cb;
	}

IL_00cb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 115));
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_42 = V_6;
		return L_42;
	}
}
// UnityEngine.TerrainUtils.TerrainMap UnityEngine.TerrainUtils.TerrainMap::CreateFromPlacement(UnityEngine.Vector2,UnityEngine.Vector2,System.Predicate`1<UnityEngine.Terrain>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* TerrainMap_CreateFromPlacement_mD7B0ED7EB7EF12DC6F22A05BD276FAF3139E49C0 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gridOrigin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___gridSize1, Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* ___filter2, bool ___fullValidation3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_CreateFromPlacement_mD7B0ED7EB7EF12DC6F22A05BD276FAF3139E49C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_4 = NULL;
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_5 = NULL;
	int32_t V_6 = 0;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___gridOrigin0), (&___gridSize1), (&___filter2), (&___fullValidation3));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_7), (&V_10), (&V_11), (&V_12));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainMap_CreateFromPlacement_mD7B0ED7EB7EF12DC6F22A05BD276FAF3139E49C0_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 116));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 117));
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* G_B21_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 118));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 119));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 120));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_0;
		L_0 = Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 120));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 121));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_1;
		L_1 = Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 121));
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 122));
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 123));
		V_4 = (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)NULL;
		goto IL_0102;
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 124));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 125));
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_3 = (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)il2cpp_codegen_object_new(TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TerrainMap__ctor_mCDB47BA50D9D54E65754028F9CF8F91828FE616F(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 125));
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 126));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___gridSize1;
		float L_5 = L_4.___x_0;
		V_1 = ((float)((1.0f)/L_5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 127));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___gridSize1;
		float L_7 = L_6.___y_1;
		V_2 = ((float)((1.0f)/L_7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 128));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 129));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 130));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_8;
		L_8 = Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 130));
		V_5 = L_8;
		V_6 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 131));
		goto IL_00d3;
	}

IL_0050:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 132));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_9 = V_5;
		int32_t L_10 = V_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_7 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 133));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 134));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_13 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 135));
		NullCheck(L_13);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_14;
		L_14 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 135));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 136));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 136));
		V_8 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 137));
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 138));
		goto IL_00cd;
	}

IL_006d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 139));
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_17 = ___filter2;
		if (!L_17)
		{
			goto IL_007a;
		}
	}
	{
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_18 = ___filter2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_19 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 140));
		NullCheck(L_18);
		bool L_20;
		L_20 = Predicate_1_Invoke_mA6B25B82B5FF8BFA2DCF9E5A8600C761222B0B2A_inline(L_18, L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 140));
		G_B11_0 = ((int32_t)(L_20));
		goto IL_007b;
	}

IL_007a:
	{
		G_B11_0 = 1;
	}

IL_007b:
	{
		V_9 = (bool)G_B11_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 141));
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_00cc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 142));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 143));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_22 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 144));
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 144));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 145));
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 145));
		V_10 = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 146));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_10;
		float L_26 = L_25.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = ___gridOrigin0;
		float L_28 = L_27.___x_0;
		float L_29 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 147));
		int32_t L_30;
		L_30 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 147));
		V_11 = L_30;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 148));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_10;
		float L_32 = L_31.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ___gridOrigin0;
		float L_34 = L_33.___y_1;
		float L_35 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 149));
		int32_t L_36;
		L_36 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_32, L_34)), L_35)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 149));
		V_12 = L_36;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 150));
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_37 = V_0;
		int32_t L_38 = V_11;
		int32_t L_39 = V_12;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_40 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 151));
		NullCheck(L_37);
		bool L_41;
		L_41 = TerrainMap_TryToAddTerrain_m03A05C883F317FD2E6956ADD6625409E8A90BE15(L_37, L_38, L_39, L_40, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 151));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 152));
	}

IL_00cc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 153));
	}

IL_00cd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 154));
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00d3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 155));
		int32_t L_43 = V_6;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_44 = V_5;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 156));
		bool L_45 = ___fullValidation3;
		V_13 = L_45;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 157));
		bool L_46 = V_13;
		if (!L_46)
		{
			goto IL_00ec;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 158));
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_47 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 159));
		NullCheck(L_47);
		int32_t L_48;
		L_48 = TerrainMap_Validate_mAFBB4A2D0290E25D59902A1BD5DA1EBC2ACD1326(L_47, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 159));
	}

IL_00ec:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 160));
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_49 = V_0;
		NullCheck(L_49);
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_50 = L_49->___m_terrainTiles_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 161));
		NullCheck(L_50);
		int32_t L_51;
		L_51 = Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024(L_50, Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 161));
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_00fd;
		}
	}
	{
		G_B21_0 = ((TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)(NULL));
		goto IL_00fe;
	}

IL_00fd:
	{
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_52 = V_0;
		G_B21_0 = L_52;
	}

IL_00fe:
	{
		V_4 = G_B21_0;
		goto IL_0102;
	}

IL_0102:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 162));
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_53 = V_4;
		return L_53;
	}
}
// System.Collections.Generic.Dictionary`2<UnityEngine.TerrainUtils.TerrainTileCoord,UnityEngine.Terrain> UnityEngine.TerrainUtils.TerrainMap::get_terrainTiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 163));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 164));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 165));
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_0 = __this->___m_terrainTiles_2;
		return L_0;
	}
}
// System.Void UnityEngine.TerrainUtils.TerrainMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap__ctor_mCDB47BA50D9D54E65754028F9CF8F91828FE616F (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCA22422F902B1FF70914D8FA2EF849DA0DCDC87D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap__ctor_mCDB47BA50D9D54E65754028F9CF8F91828FE616F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainMap__ctor_mCDB47BA50D9D54E65754028F9CF8F91828FE616F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 166));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 167));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 168));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 169));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 169));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 170));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 171));
		__this->___m_errorCode_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 172));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 173));
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_0 = (Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119*)il2cpp_codegen_object_new(Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mCA22422F902B1FF70914D8FA2EF849DA0DCDC87D(L_0, Dictionary_2__ctor_mCA22422F902B1FF70914D8FA2EF849DA0DCDC87D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 173));
		__this->___m_terrainTiles_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_terrainTiles_2), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 174));
		return;
	}
}
// System.Void UnityEngine.TerrainUtils.TerrainMap::AddTerrainInternal(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap_AddTerrainInternal_m507CE3A3F880B33CA2330F69464E3511D5B9BD71 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___x0, int32_t ___z1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m265E9FB46C80D234AEB47C08D701628D57DBA132_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_AddTerrainInternal_m507CE3A3F880B33CA2330F69464E3511D5B9BD71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___z1), (&___terrain2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainMap_AddTerrainInternal_m507CE3A3F880B33CA2330F69464E3511D5B9BD71_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 175));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 176));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 177));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 178));
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_0 = __this->___m_terrainTiles_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 179));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024(L_0, Dictionary_2_get_Count_m876E3F2E32CD5DE6F869A52E21B755854D74C024_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 179));
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 180));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 181));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = ___terrain2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 182));
		NullCheck(L_3);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_4;
		L_4 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 182));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 183));
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 183));
		__this->___m_patchSize_0 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 184));
		goto IL_0052;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 185));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 186));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = ___terrain2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 187));
		NullCheck(L_6);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_7;
		L_7 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 187));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 188));
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 188));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___m_patchSize_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 189));
		bool L_10;
		L_10 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_8, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 189));
		V_1 = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 190));
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 191));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 192));
		int32_t L_12 = __this->___m_errorCode_1;
		__this->___m_errorCode_1 = ((int32_t)((int32_t)L_12|4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 193));
	}

IL_0051:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 194));
	}

IL_0052:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 195));
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_13 = __this->___m_terrainTiles_2;
		int32_t L_14 = ___x0;
		int32_t L_15 = ___z1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 196));
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_16;
		memset((&L_16), 0, sizeof(L_16));
		TerrainTileCoord__ctor_m6B6744655B9C3BA9B1A92076F07002B4B4EB899A((&L_16), L_14, L_15, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 196));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_17 = ___terrain2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 197));
		NullCheck(L_13);
		Dictionary_2_Add_m265E9FB46C80D234AEB47C08D701628D57DBA132(L_13, L_16, L_17, Dictionary_2_Add_m265E9FB46C80D234AEB47C08D701628D57DBA132_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 197));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 198));
		return;
	}
}
// System.Boolean UnityEngine.TerrainUtils.TerrainMap::TryToAddTerrain(System.Int32,System.Int32,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainMap_TryToAddTerrain_m03A05C883F317FD2E6956ADD6625409E8A90BE15 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___tileX0, int32_t ___tileZ1, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_TryToAddTerrain_m03A05C883F317FD2E6956ADD6625409E8A90BE15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___tileX0), (&___tileZ1), (&___terrain2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainMap_TryToAddTerrain_m03A05C883F317FD2E6956ADD6625409E8A90BE15_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 199));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 200));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 201));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 202));
		V_0 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 203));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 204));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 204));
		V_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 205));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 206));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 207));
		int32_t L_3 = ___tileX0;
		int32_t L_4 = ___tileZ1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 208));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_5;
		L_5 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(__this, L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 208));
		V_2 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 209));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 210));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 210));
		V_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 211));
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 212));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 213));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_9 = V_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_10 = ___terrain2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 214));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 214));
		V_4 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 215));
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0041;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 216));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 217));
		int32_t L_13 = __this->___m_errorCode_1;
		__this->___m_errorCode_1 = ((int32_t)((int32_t)L_13|1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 218));
	}

IL_0041:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 219));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 220));
		goto IL_0052;
	}

IL_0044:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 221));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 222));
		int32_t L_14 = ___tileX0;
		int32_t L_15 = ___tileZ1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_16 = ___terrain2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 223));
		TerrainMap_AddTerrainInternal_m507CE3A3F880B33CA2330F69464E3511D5B9BD71(__this, L_14, L_15, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 223));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 224));
		V_0 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 225));
	}

IL_0052:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 226));
	}

IL_0053:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 227));
		bool L_17 = V_0;
		V_5 = L_17;
		goto IL_0058;
	}

IL_0058:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 228));
		bool L_18 = V_5;
		return L_18;
	}
}
// System.Void UnityEngine.TerrainUtils.TerrainMap::ValidateTerrain(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMap_ValidateTerrain_m8D9B035B3851E0ED8BB5877BD11F63BA85029653 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_ValidateTerrain_m8D9B035B3851E0ED8BB5877BD11F63BA85029653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_0 = NULL;
	bool V_1 = false;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_2 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_3 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_4 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___tileX0), (&___tileZ1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3), (&V_4), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainMap_ValidateTerrain_m8D9B035B3851E0ED8BB5877BD11F63BA85029653_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 229));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 230));
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 231));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 232));
		int32_t L_0 = ___tileX0;
		int32_t L_1 = ___tileZ1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 233));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2;
		L_2 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(__this, L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 233));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 234));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 235));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 235));
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 236));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_026d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 237));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 238));
		int32_t L_6 = ___tileX0;
		int32_t L_7 = ___tileZ1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 239));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8;
		L_8 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(__this, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 239));
		V_2 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 240));
		int32_t L_9 = ___tileX0;
		int32_t L_10 = ___tileZ1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 241));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11;
		L_11 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 241));
		V_3 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 242));
		int32_t L_12 = ___tileX0;
		int32_t L_13 = ___tileZ1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 243));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_14;
		L_14 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(__this, L_12, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 243));
		V_4 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 244));
		int32_t L_15 = ___tileX0;
		int32_t L_16 = ___tileZ1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 245));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_17;
		L_17 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(__this, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 245));
		V_5 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 246));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 247));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_18 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 248));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 248));
		V_6 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 249));
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00cf;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 250));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 251));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_21 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 252));
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 252));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 253));
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 253));
		float L_24 = L_23.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_25 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 254));
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 254));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 255));
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 255));
		float L_28 = L_27.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_29 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 256));
		NullCheck(L_29);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_30;
		L_30 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 256));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 257));
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 257));
		float L_32 = L_31.___x_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 258));
		bool L_33;
		L_33 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_24, ((float)il2cpp_codegen_add(L_28, L_32)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 258));
		if (!L_33)
		{
			goto IL_00b7;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_34 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 259));
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 259));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 260));
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 260));
		float L_37 = L_36.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_38 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 261));
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 261));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 262));
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 262));
		float L_41 = L_40.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 263));
		bool L_42;
		L_42 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_37, L_41, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 263));
		G_B5_0 = ((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		goto IL_00b8;
	}

IL_00b7:
	{
		G_B5_0 = 1;
	}

IL_00b8:
	{
		V_7 = (bool)G_B5_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 264));
		bool L_43 = V_7;
		if (!L_43)
		{
			goto IL_00ce;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 265));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 266));
		int32_t L_44 = __this->___m_errorCode_1;
		__this->___m_errorCode_1 = ((int32_t)((int32_t)L_44|8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 267));
	}

IL_00ce:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 268));
	}

IL_00cf:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 269));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_45 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 270));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_45, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 270));
		V_8 = L_46;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 271));
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0156;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 272));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 273));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_48 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 274));
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 274));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 275));
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 275));
		float L_51 = L_50.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_52 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 276));
		NullCheck(L_52);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_53;
		L_53 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_52, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 276));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 277));
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_53, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 277));
		float L_55 = L_54.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_56 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 278));
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_56, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 278));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 279));
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 279));
		float L_59 = L_58.___x_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 280));
		bool L_60;
		L_60 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(((float)il2cpp_codegen_add(L_51, L_55)), L_59, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 280));
		if (!L_60)
		{
			goto IL_013e;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_61 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 281));
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_61, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 281));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 282));
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_62, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 282));
		float L_64 = L_63.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_65 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 283));
		NullCheck(L_65);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_65, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 283));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 284));
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 284));
		float L_68 = L_67.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 285));
		bool L_69;
		L_69 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_64, L_68, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 285));
		G_B12_0 = ((((int32_t)L_69) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B12_0 = 1;
	}

IL_013f:
	{
		V_9 = (bool)G_B12_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 286));
		bool L_70 = V_9;
		if (!L_70)
		{
			goto IL_0155;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 287));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 288));
		int32_t L_71 = __this->___m_errorCode_1;
		__this->___m_errorCode_1 = ((int32_t)((int32_t)L_71|8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 289));
	}

IL_0155:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 290));
	}

IL_0156:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 291));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_72 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 292));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_72, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 292));
		V_10 = L_73;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 293));
		bool L_74 = V_10;
		if (!L_74)
		{
			goto IL_01e0;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 294));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 295));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_75 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 296));
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_75, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 296));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 297));
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_76, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 297));
		float L_78 = L_77.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_79 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 298));
		NullCheck(L_79);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_79, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 298));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 299));
		NullCheck(L_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_80, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 299));
		float L_82 = L_81.___x_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 300));
		bool L_83;
		L_83 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_78, L_82, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 300));
		if (!L_83)
		{
			goto IL_01c8;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_84 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 301));
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_84, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 301));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 302));
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_85, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 302));
		float L_87 = L_86.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_88 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 303));
		NullCheck(L_88);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_89;
		L_89 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_88, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 303));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 304));
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_89, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 304));
		float L_91 = L_90.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_92 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 305));
		NullCheck(L_92);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93;
		L_93 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_92, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 305));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 306));
		NullCheck(L_93);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_93, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 306));
		float L_95 = L_94.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 307));
		bool L_96;
		L_96 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(((float)il2cpp_codegen_add(L_87, L_91)), L_95, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 307));
		G_B19_0 = ((((int32_t)L_96) == ((int32_t)0))? 1 : 0);
		goto IL_01c9;
	}

IL_01c8:
	{
		G_B19_0 = 1;
	}

IL_01c9:
	{
		V_11 = (bool)G_B19_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 308));
		bool L_97 = V_11;
		if (!L_97)
		{
			goto IL_01df;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 309));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 310));
		int32_t L_98 = __this->___m_errorCode_1;
		__this->___m_errorCode_1 = ((int32_t)((int32_t)L_98|8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 311));
	}

IL_01df:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 312));
	}

IL_01e0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 313));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_99 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 314));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_100;
		L_100 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_99, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 314));
		V_12 = L_100;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 315));
		bool L_101 = V_12;
		if (!L_101)
		{
			goto IL_026b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 316));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 317));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_102 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 318));
		NullCheck(L_102);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_102, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 318));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 319));
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_103, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 319));
		float L_105 = L_104.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_106 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 320));
		NullCheck(L_106);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107;
		L_107 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_106, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 320));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 321));
		NullCheck(L_107);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_107, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 321));
		float L_109 = L_108.___x_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 322));
		bool L_110;
		L_110 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_105, L_109, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 322));
		if (!L_110)
		{
			goto IL_0253;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_111 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 323));
		NullCheck(L_111);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112;
		L_112 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_111, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 323));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 324));
		NullCheck(L_112);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_112, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 324));
		float L_114 = L_113.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_115 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 325));
		NullCheck(L_115);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
		L_116 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_115, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 325));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 326));
		NullCheck(L_116);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_116, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 326));
		float L_118 = L_117.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_119 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 327));
		NullCheck(L_119);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_120;
		L_120 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_119, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 327));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 328));
		NullCheck(L_120);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_120, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 328));
		float L_122 = L_121.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 329));
		bool L_123;
		L_123 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_114, ((float)il2cpp_codegen_add(L_118, L_122)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 329));
		G_B26_0 = ((((int32_t)L_123) == ((int32_t)0))? 1 : 0);
		goto IL_0254;
	}

IL_0253:
	{
		G_B26_0 = 1;
	}

IL_0254:
	{
		V_13 = (bool)G_B26_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 330));
		bool L_124 = V_13;
		if (!L_124)
		{
			goto IL_026a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 331));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 332));
		int32_t L_125 = __this->___m_errorCode_1;
		__this->___m_errorCode_1 = ((int32_t)((int32_t)L_125|8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 333));
	}

IL_026a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 334));
	}

IL_026b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 335));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 336));
	}

IL_026d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 337));
		return;
	}
}
// UnityEngine.TerrainUtils.TerrainMapStatusCode UnityEngine.TerrainUtils.TerrainMap::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainMap_Validate_mAFBB4A2D0290E25D59902A1BD5DA1EBC2ACD1326 (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mBE9BF06497225D54AC2D2D7AEF6D0F94169B10D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC60AECD5D4FA770371F4B374F2B026F7198CEF03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6430F89661ED2AEDEAD6FD241BBDA21BF02135DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m88A7ECB72C871AEFAD87667D8512A109C33E7080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m7D86741C1BEF055A22281CF69C6235BFD1E7D521_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMapStatusCode_t5F36434C02953C1E58623F2E3A41D7B5FC8ADCA8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_Validate_mAFBB4A2D0290E25D59902A1BD5DA1EBC2ACD1326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainMap_Validate_mAFBB4A2D0290E25D59902A1BD5DA1EBC2ACD1326_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 338));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 339));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 340));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 341));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 342));
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_0 = __this->___m_terrainTiles_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 343));
		NullCheck(L_0);
		KeyCollection_tE33A2EB76F7F1DBF4EF03A4D82E8E0A13B74637E* L_1;
		L_1 = Dictionary_2_get_Keys_mBE9BF06497225D54AC2D2D7AEF6D0F94169B10D4(L_0, Dictionary_2_get_Keys_mBE9BF06497225D54AC2D2D7AEF6D0F94169B10D4_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 343));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 344));
		NullCheck(L_1);
		Enumerator_t608060746142FE814AB6D19ACFCB6AF049D89689 L_2;
		L_2 = KeyCollection_GetEnumerator_m7D86741C1BEF055A22281CF69C6235BFD1E7D521(L_1, KeyCollection_GetEnumerator_m7D86741C1BEF055A22281CF69C6235BFD1E7D521_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 344));
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 354));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 355));
				Enumerator_Dispose_mC60AECD5D4FA770371F4B374F2B026F7198CEF03((&V_0), Enumerator_Dispose_mC60AECD5D4FA770371F4B374F2B026F7198CEF03_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 355));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 345));
				goto IL_0032_1;
			}

IL_0015_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 346));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 347));
				TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_3;
				L_3 = Enumerator_get_Current_m88A7ECB72C871AEFAD87667D8512A109C33E7080_inline((&V_0), Enumerator_get_Current_m88A7ECB72C871AEFAD87667D8512A109C33E7080_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 347));
				V_1 = L_3;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 348));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 349));
				TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_4 = V_1;
				int32_t L_5 = L_4.___tileX_0;
				TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_6 = V_1;
				int32_t L_7 = L_6.___tileZ_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 350));
				TerrainMap_ValidateTerrain_m8D9B035B3851E0ED8BB5877BD11F63BA85029653(__this, L_5, L_7, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 350));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 351));
			}

IL_0032_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 352));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 353));
				bool L_8;
				L_8 = Enumerator_MoveNext_m6430F89661ED2AEDEAD6FD241BBDA21BF02135DC((&V_0), Enumerator_MoveNext_m6430F89661ED2AEDEAD6FD241BBDA21BF02135DC_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 353));
				if (L_8)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 356));
		int32_t L_9 = __this->___m_errorCode_1;
		V_2 = L_9;
		goto IL_0055;
	}

IL_0055:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 357));
		int32_t L_10 = V_2;
		return L_10;
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
// System.Void UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mAFD4AEF760F5CC7CE66BAD750DAD3697397E8945 (U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0__ctor_mAFD4AEF760F5CC7CE66BAD750DAD3697397E8945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass3_0__ctor_mAFD4AEF760F5CC7CE66BAD750DAD3697397E8945_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0::<CreateFromPlacement>b__0(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CCreateFromPlacementU3Eb__0_m703A4D4E3D378C9896199B70A89FCDF1A07C737B (U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CCreateFromPlacementU3Eb__0_m703A4D4E3D378C9896199B70A89FCDF1A07C737B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t5A3BA129A3DFF96B5C0658B95E1ED4A678218CC3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass3_0_U3CCreateFromPlacementU3Eb__0_m703A4D4E3D378C9896199B70A89FCDF1A07C737B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 358));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 359));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 360));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___x0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 361));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 361));
		int32_t L_2 = __this->___groupID_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Boolean UnityEngine.TerrainUtils.TerrainUtility::ValidTerrainsExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainUtility_ValidTerrainsExist_m6AB88A3DD0992C1C41B92F75D941F9AA203F55E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainUtility_ValidTerrainsExist_m6AB88A3DD0992C1C41B92F75D941F9AA203F55E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainUtility_ValidTerrainsExist_m6AB88A3DD0992C1C41B92F75D941F9AA203F55E8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 362));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 363));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 364));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 365));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 366));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_0;
		L_0 = Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 366));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 367));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_1;
		L_1 = Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 367));
		NullCheck(L_1);
		G_B3_0 = ((!(((uint32_t)(((RuntimeArray*)L_1)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 368));
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.TerrainUtils.TerrainUtility::ClearConnectivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainUtility_ClearConnectivity_m1BE6D9A50F4A6A0766F8206E2E08CFD34CACA96A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainUtility_ClearConnectivity_m1BE6D9A50F4A6A0766F8206E2E08CFD34CACA96A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_0 = NULL;
	int32_t V_1 = 0;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_2 = NULL;
	bool V_3 = false;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainUtility_ClearConnectivity_m1BE6D9A50F4A6A0766F8206E2E08CFD34CACA96A_RuntimeMethod_var, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 369));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 370));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 371));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 372));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 373));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 374));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_0;
		L_0 = Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 374));
		V_0 = L_0;
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 375));
		goto IL_002b;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 376));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 377));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 378));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_5 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 379));
		NullCheck(L_5);
		bool L_6;
		L_6 = Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 379));
		V_3 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 380));
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 381));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 382));
		NullCheck(L_8);
		Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E(L_8, (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*)NULL, (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*)NULL, (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*)NULL, (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 382));
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 383));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 384));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 385));
		int32_t L_10 = V_1;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 386));
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap> UnityEngine.TerrainUtils.TerrainUtility::CollectTerrains(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* TerrainUtility_CollectTerrains_mFB908E86B0DB275283771AAF172C9903CB00973F (bool ___onlyAutoConnectedTerrains0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4E7AE6465929CEEA79B5921CFF3D4BD64E249AF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m384365266E590EDD82F8949169A3C502E643AC95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5665AD243B285B8D26138C699D544F4124AC7D78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m001233C3B4F8B3D1A8F044C9D43104F1671688DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainUtility_CollectTerrains_mFB908E86B0DB275283771AAF172C9903CB00973F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_1_U3CCollectTerrainsU3Eb__0_m57E871EB2399E5FB7DF78B3C9EBFBF152116AC2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* V_0 = NULL;
	Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* V_1 = NULL;
	bool V_2 = false;
	Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* V_3 = NULL;
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_4 = NULL;
	int32_t V_5 = 0;
	U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_9 = NULL;
	bool V_10 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___onlyAutoConnectedTerrains0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_6), (&V_9));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainUtility_CollectTerrains_mFB908E86B0DB275283771AAF172C9903CB00973F_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 387));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 388));
	int32_t G_B6_0 = 0;
	Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* G_B18_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 389));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 390));
		U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* L_0 = (U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m4C022C4675BA4CFC7E7AAA5692979CDE6CD8E611(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 390));
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* L_1 = V_0;
		bool L_2 = ___onlyAutoConnectedTerrains0;
		NullCheck(L_1);
		L_1->___onlyAutoConnectedTerrains_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 391));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 392));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 393));
		bool L_3;
		L_3 = TerrainUtility_ValidTerrainsExist_m6AB88A3DD0992C1C41B92F75D941F9AA203F55E8(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 393));
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 394));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 395));
		V_3 = (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*)NULL;
		goto IL_00f5;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 396));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 397));
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_5 = (Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*)il2cpp_codegen_object_new(Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m5665AD243B285B8D26138C699D544F4124AC7D78(L_5, Dictionary_2__ctor_m5665AD243B285B8D26138C699D544F4124AC7D78_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 397));
		V_1 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 398));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 399));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 400));
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_6;
		L_6 = Terrain_get_activeTerrains_m06A2483A6097FC5B0EA0F63B53489EC02DC362EF(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 400));
		V_4 = L_6;
		V_5 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 401));
		goto IL_00db;
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 402));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 403));
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_7 = (U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		U3CU3Ec__DisplayClass2_1__ctor_mA329ED5B221AE8787EAEA1124A2A95675FDD1695(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 403));
		V_6 = L_7;
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_8 = V_6;
		U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* L_9 = V_0;
		NullCheck(L_8);
		L_8->___CSU24U3CU3E8__locals1_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___CSU24U3CU3E8__locals1_1), (void*)L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 404));
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_10 = V_6;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		L_10->___t_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___t_0), (void*)L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 405));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 406));
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_15 = V_6;
		NullCheck(L_15);
		U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* L_16 = L_15->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_16);
		bool L_17 = L_16->___onlyAutoConnectedTerrains_0;
		if (!L_17)
		{
			goto IL_0072;
		}
	}
	{
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_18 = V_6;
		NullCheck(L_18);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_19 = L_18->___t_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 407));
		NullCheck(L_19);
		bool L_20;
		L_20 = Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7(L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 407));
		G_B6_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B6_0 = 0;
	}

IL_0073:
	{
		V_7 = (bool)G_B6_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 408));
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_007b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 409));
		goto IL_00d5;
	}

IL_007b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 410));
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_22 = V_1;
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_23 = V_6;
		NullCheck(L_23);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_24 = L_23->___t_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 411));
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24(L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 411));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 412));
		NullCheck(L_22);
		bool L_26;
		L_26 = Dictionary_2_ContainsKey_m384365266E590EDD82F8949169A3C502E643AC95(L_22, L_25, Dictionary_2_ContainsKey_m384365266E590EDD82F8949169A3C502E643AC95_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 412));
		V_8 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 413));
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_00d4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 414));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 415));
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_28 = V_6;
		NullCheck(L_28);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_29 = L_28->___t_0;
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_30 = V_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 416));
		Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055* L_31 = (Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055*)il2cpp_codegen_object_new(Predicate_1_tF9C1F3093AD3E74A0F6BE3895143021CAFB64055_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Predicate_1__ctor_m80A5EFAAAC439A069D5782C725DF325FDD5D891C(L_31, L_30, (intptr_t)((void*)U3CU3Ec__DisplayClass2_1_U3CCollectTerrainsU3Eb__0_m57E871EB2399E5FB7DF78B3C9EBFBF152116AC2C_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 416));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 417));
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_32;
		L_32 = TerrainMap_CreateFromPlacement_m46B8BF6067F682A5C260B56BBF67E428214F4653(L_29, L_31, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 417));
		V_9 = L_32;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 418));
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_33 = V_9;
		V_10 = (bool)((!(((RuntimeObject*)(TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB*)L_33) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 419));
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00d3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 420));
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_35 = V_1;
		U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* L_36 = V_6;
		NullCheck(L_36);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_37 = L_36->___t_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 421));
		NullCheck(L_37);
		int32_t L_38;
		L_38 = Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24(L_37, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 421));
		TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_39 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 422));
		NullCheck(L_35);
		Dictionary_2_Add_m4E7AE6465929CEEA79B5921CFF3D4BD64E249AF9(L_35, L_38, L_39, Dictionary_2_Add_m4E7AE6465929CEEA79B5921CFF3D4BD64E249AF9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 422));
	}

IL_00d3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 423));
	}

IL_00d4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 424));
	}

IL_00d5:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 425));
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00db:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 426));
		int32_t L_41 = V_5;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_42 = V_4;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 427));
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_43 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 428));
		NullCheck(L_43);
		int32_t L_44;
		L_44 = Dictionary_2_get_Count_m001233C3B4F8B3D1A8F044C9D43104F1671688DC(L_43, Dictionary_2_get_Count_m001233C3B4F8B3D1A8F044C9D43104F1671688DC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 428));
		if (L_44)
		{
			goto IL_00f1;
		}
	}
	{
		G_B18_0 = ((Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*)(NULL));
		goto IL_00f2;
	}

IL_00f1:
	{
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_45 = V_1;
		G_B18_0 = L_45;
	}

IL_00f2:
	{
		V_3 = G_B18_0;
		goto IL_00f5;
	}

IL_00f5:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 429));
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_46 = V_3;
		return L_46;
	}
}
// System.Void UnityEngine.TerrainUtils.TerrainUtility::AutoConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainUtility_AutoConnect_mA85DE7983D0D26892CB6346D695FE66DE2BFF04A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m5461BE3EE48320EA8E593506F16860A2CB4E9056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m09F8467FB404D375259C17136F2213FC8455F2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1CEA4A6A000E5344DB72DFF5E4FF563FF67F3558_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1F085EA2ABB67CCEB29CC4A10D6FBC0F2B963349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m32D4949D8D2F580E35346D41EBB14C7933B93482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainUtility_AutoConnect_mA85DE7983D0D26892CB6346D695FE66DE2BFF04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* V_5 = NULL;
	Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B V_6;
	memset((&V_6), 0, sizeof(V_6));
	KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 V_7;
	memset((&V_7), 0, sizeof(V_7));
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_9 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_10 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_11 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_12 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_13 = NULL;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_4), (&V_5), (&V_7), (&V_8), (&V_9), (&V_10), (&V_11), (&V_12), (&V_13));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainUtility_AutoConnect_mA85DE7983D0D26892CB6346D695FE66DE2BFF04A_RuntimeMethod_var, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 430));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 431));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 432));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 433));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 434));
		bool L_0;
		L_0 = TerrainUtility_ValidTerrainsExist_m6AB88A3DD0992C1C41B92F75D941F9AA203F55E8(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 434));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 435));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 436));
		goto IL_013a;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 437));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 438));
		TerrainUtility_ClearConnectivity_m1BE6D9A50F4A6A0766F8206E2E08CFD34CACA96A(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 438));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 439));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 440));
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_2;
		L_2 = TerrainUtility_CollectTerrains_mFB908E86B0DB275283771AAF172C9903CB00973F((bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 440));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 441));
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_3 = V_0;
		V_2 = (bool)((((RuntimeObject*)(Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 442));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 443));
		goto IL_013a;
	}

IL_002c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 444));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 445));
		Dictionary_2_t2A7962936E35A63A01CBCE08C2732E037C7FCF4C* L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 446));
		NullCheck(L_5);
		Enumerator_tB3EC2B6C57FCD9C7E78B708686BCBF5852E2AA3F L_6;
		L_6 = Dictionary_2_GetEnumerator_m5461BE3EE48320EA8E593506F16860A2CB4E9056(L_5, Dictionary_2_GetEnumerator_m5461BE3EE48320EA8E593506F16860A2CB4E9056_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 446));
		V_3 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012b:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 483));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 484));
				Enumerator_Dispose_m09F8467FB404D375259C17136F2213FC8455F2BF((&V_3), Enumerator_Dispose_m09F8467FB404D375259C17136F2213FC8455F2BF_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 484));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 447));
				goto IL_011d_1;
			}

IL_0039_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 448));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 449));
				KeyValuePair_2_t5106DD80E20DAA18F0718F331B82E30C0F196873 L_7;
				L_7 = Enumerator_get_Current_m1F085EA2ABB67CCEB29CC4A10D6FBC0F2B963349_inline((&V_3), Enumerator_get_Current_m1F085EA2ABB67CCEB29CC4A10D6FBC0F2B963349_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 449));
				V_4 = L_7;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 450));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 451));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 452));
				TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_8;
				L_8 = KeyValuePair_2_get_Value_m32D4949D8D2F580E35346D41EBB14C7933B93482_inline((&V_4), KeyValuePair_2_get_Value_m32D4949D8D2F580E35346D41EBB14C7933B93482_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 452));
				V_5 = L_8;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 453));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 454));
				TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_9 = V_5;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 455));
				NullCheck(L_9);
				Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_10;
				L_10 = TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB_inline(L_9, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 455));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 456));
				NullCheck(L_10);
				Enumerator_t4B54697825D0059AED7437C1585FDF185FF80B5B L_11;
				L_11 = Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473(L_10, Dictionary_2_GetEnumerator_m50800AFD24DEE5F8ACB58E1535F2A472B478E473_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 456));
				V_6 = L_11;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010d_1:
					{// begin finally (depth: 2)
						STORE_TRY_ID(methodExecutionContext, 0);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 478));
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 479));
						Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7((&V_6), Enumerator_Dispose_mDDABE6027BD9E377D6E3FC7F60CE5DDB0ADC47D7_RuntimeMethod_var);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 479));
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					STORE_TRY_ID(methodExecutionContext, 1);
					{
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 457));
						goto IL_00ff_2;
					}

IL_0060_2:
					{
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 458));
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 459));
						KeyValuePair_2_t69A51C36FF679E64375AD7C88BC0B6EC664E71E3 L_12;
						L_12 = Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_inline((&V_6), Enumerator_get_Current_mCD48A37B44C4A6E441AF6806E0821A24A22A51F3_RuntimeMethod_var);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 459));
						V_7 = L_12;
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 460));
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 461));
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 462));
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_13;
						L_13 = KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_inline((&V_7), KeyValuePair_2_get_Key_mFE7731B1C41692F16EB45AC2D63092AC73156A8A_RuntimeMethod_var);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 462));
						V_8 = L_13;
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 463));
						TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_14 = V_5;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_15 = V_8;
						int32_t L_16 = L_15.___tileX_0;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_17 = V_8;
						int32_t L_18 = L_17.___tileZ_1;
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 464));
						NullCheck(L_14);
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_19;
						L_19 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(L_14, L_16, L_18, NULL);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 464));
						V_9 = L_19;
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 465));
						TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_20 = V_5;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_21 = V_8;
						int32_t L_22 = L_21.___tileX_0;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_23 = V_8;
						int32_t L_24 = L_23.___tileZ_1;
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 466));
						NullCheck(L_20);
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_25;
						L_25 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(L_20, ((int32_t)il2cpp_codegen_subtract(L_22, 1)), L_24, NULL);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 466));
						V_10 = L_25;
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 467));
						TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_26 = V_5;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_27 = V_8;
						int32_t L_28 = L_27.___tileX_0;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_29 = V_8;
						int32_t L_30 = L_29.___tileZ_1;
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 468));
						NullCheck(L_26);
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_31;
						L_31 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(L_26, ((int32_t)il2cpp_codegen_add(L_28, 1)), L_30, NULL);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 468));
						V_11 = L_31;
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 469));
						TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_32 = V_5;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_33 = V_8;
						int32_t L_34 = L_33.___tileX_0;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_35 = V_8;
						int32_t L_36 = L_35.___tileZ_1;
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 470));
						NullCheck(L_32);
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_37;
						L_37 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(L_32, L_34, ((int32_t)il2cpp_codegen_add(L_36, 1)), NULL);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 470));
						V_12 = L_37;
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 471));
						TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* L_38 = V_5;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_39 = V_8;
						int32_t L_40 = L_39.___tileX_0;
						TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_41 = V_8;
						int32_t L_42 = L_41.___tileZ_1;
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 472));
						NullCheck(L_38);
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_43;
						L_43 = TerrainMap_GetTerrain_mFF9C935F05859DF70E95994E727565BD67CDD6FC(L_38, L_40, ((int32_t)il2cpp_codegen_subtract(L_42, 1)), NULL);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 472));
						V_13 = L_43;
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 473));
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_44 = V_9;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_45 = V_10;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_46 = V_12;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_47 = V_11;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_48 = V_13;
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 474));
						NullCheck(L_44);
						Terrain_SetNeighbors_m2FFA89D199120125D264EF7EE0BC749A35514C1E(L_44, L_45, L_46, L_47, L_48, NULL);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 474));
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 475));
					}

IL_00ff_2:
					{
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 476));
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 477));
						bool L_49;
						L_49 = Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4((&V_6), Enumerator_MoveNext_m1BA7CBA94F8FC389211722A43E22BB110102ABB4_RuntimeMethod_var);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 477));
						if (L_49)
						{
							goto IL_0060_2;
						}
					}
					{
						goto IL_011c_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_011c_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 480));
			}

IL_011d_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 481));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 482));
				bool L_50;
				L_50 = Enumerator_MoveNext_m1CEA4A6A000E5344DB72DFF5E4FF563FF67F3558((&V_3), Enumerator_MoveNext_m1CEA4A6A000E5344DB72DFF5E4FF563FF67F3558_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 482));
				if (L_50)
				{
					goto IL_0039_1;
				}
			}
			{
				goto IL_013a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 485));
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
// System.Void UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m4C022C4675BA4CFC7E7AAA5692979CDE6CD8E611 (U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0__ctor_m4C022C4675BA4CFC7E7AAA5692979CDE6CD8E611_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass2_0__ctor_m4C022C4675BA4CFC7E7AAA5692979CDE6CD8E611_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
// System.Void UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_1__ctor_mA329ED5B221AE8787EAEA1124A2A95675FDD1695 (U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_1__ctor_mA329ED5B221AE8787EAEA1124A2A95675FDD1695_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass2_1__ctor_mA329ED5B221AE8787EAEA1124A2A95675FDD1695_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.TerrainUtils.TerrainUtility/<>c__DisplayClass2_1::<CollectTerrains>b__0(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_1_U3CCollectTerrainsU3Eb__0_m57E871EB2399E5FB7DF78B3C9EBFBF152116AC2C (U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_1_U3CCollectTerrainsU3Eb__0_m57E871EB2399E5FB7DF78B3C9EBFBF152116AC2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_1_t550F5BA64A779BA6B1FDFAC1457F462892D2A951_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass2_1_U3CCollectTerrainsU3Eb__0_m57E871EB2399E5FB7DF78B3C9EBFBF152116AC2C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 486));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 487));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 488));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___x0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 489));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 489));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2 = __this->___t_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 490));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Terrain_get_groupingID_mE52E78018126A5D00F837081287BE076E7709C24(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 490));
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_002b;
		}
	}
	{
		U3CU3Ec__DisplayClass2_0_t0E9CE80E29A8238529BFBB9FCD0C8D0AAD68A57E* L_4 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_4);
		bool L_5 = L_4->___onlyAutoConnectedTerrains_0;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = ___x0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 491));
		NullCheck(L_6);
		bool L_7;
		L_7 = Terrain_get_allowAutoConnect_m4E9CB87D130BB118517C5504C8FB4A5CC3AA91D7(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 491));
		G_B4_0 = ((int32_t)(L_7));
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 1;
	}

IL_0029:
	{
		G_B6_0 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 0;
	}

IL_002c:
	{
		return (bool)G_B6_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HeightmapChangedCallback_Invoke_m63C1C93709641DBE02DCE9F71B7895C5793AF875_inline (HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (HeightmapChangedCallback_tDF97623B4D5F5E1F3F7F75CC922345B098036EC0* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___heightRegion1, bool ___synched2, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___terrain0, ___heightRegion1, ___synched2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureChangedCallback_Invoke_m1194A44102843272B51A70C302EBDBC8214647DE_inline (TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (TextureChangedCallback_tA2D79601BF5AFEC6C8674AA03DAD28844CE69D2F* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, String_t* ___textureName1, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___texelRegion2, bool ___synched3, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___terrain0, ___textureName1, ___texelRegion2, ___synched3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___y1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2939));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2940));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2941));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2942));
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2943));
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2944));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___f0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2886));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2887));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2888));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2889));
		float L_0 = ___f0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2890));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2890));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2891));
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___lhs0), (&___rhs1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2695));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2696));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2697));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2698));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2699));
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2699));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2700));
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2926));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2927));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2928));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2929));
		float L_0 = ___b1;
		float L_1 = ___a0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2930));
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2930));
		float L_3 = ___a0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2931));
		float L_4;
		L_4 = fabsf(L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2931));
		float L_5 = ___b1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2932));
		float L_6;
		L_6 = fabsf(L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2932));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2933));
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_4, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2933));
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2934));
		float L_9;
		L_9 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2934));
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2935));
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB_inline (TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainMap_t6E07590E3151F47FFC6D5536635AC428ABDA79EB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TerrainMap_get_terrainTiles_m9EAA8FCB972C834E2093DDD49B26DBBA2E74A2AB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 163));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 164));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_TerrainModule + 165));
		Dictionary_2_t5C5FBA59FA0804C53874B619629A7AF7EA74A119* L_0 = __this->___m_terrainTiles_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 Enumerator_get_Current_mC41EF0278150018906F2AB9D7CF81AE865E6AA1C_gshared_inline (Enumerator_tF5348A6D692C0422DAF82BC55E5276A4D29BEF53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC41EF0278150018906F2AB9D7CF81AE865E6AA1C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Enumerator_get_Current_mC41EF0278150018906F2AB9D7CF81AE865E6AA1C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_0 = (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE Enumerator_get_Current_mAB48908F9E456DE35489D40F781F13159CD102CA_gshared_inline (Enumerator_tB06F293668D09F345A54C8C836ABF567B9087FB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAB48908F9E456DE35489D40F781F13159CD102CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Enumerator_get_Current_mAB48908F9E456DE35489D40F781F13159CD102CA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE L_0 = (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_gshared_inline (KeyValuePair_2_t8760984FFCA6E11154C918347EA4C7CFB2D0B8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, KeyValuePair_2_get_Key_mE27FF2218D103DBF58A36186AA62595EC4079388_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_0 = (TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___lhs0), (&___rhs1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2686));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2687));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2688));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2689));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2690));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2691));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2692));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2693));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2694));
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2870));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2871));
	float G_B3_0 = 0.0f;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2872));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2873));
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2874));
		float L_4 = V_0;
		return L_4;
	}
}
