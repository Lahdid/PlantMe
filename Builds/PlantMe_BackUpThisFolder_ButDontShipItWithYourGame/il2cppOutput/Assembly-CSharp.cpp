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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
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
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD;
// System.Collections.Generic.List`1<Plant>
struct List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9;
// Plant[]
struct PlantU5BU5D_t81B9F6F4E910D747F6278073B0A0BAF5E00B6135;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// FertilizationManager
struct FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Marker
struct Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlacementManager
struct PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD;
// Plant
struct Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72;
// PlantDataHandler
struct PlantDataHandler_tE9D76B50A1B7582A4310D9B5D83411E13D977A6B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WaterTrigger
struct WaterTrigger_t2C5CEE5FB3AB474809A94E1321296770F620AB66;
// WateringManager
struct WateringManager_t386D8152CB19B5277D55E515B58879247008FB08;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// FertilizationManager/<AuthorizationTimer>d__18
struct U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlacementManager/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2;
// PlantDataHandler/PlantListWrapper
struct PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// WateringManager/<AuthorizationTimer>d__18
struct U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BF65FCDD62086B68E579363651A90051BFDED03;
IL2CPP_EXTERN_C String_t* _stringLiteral0F8E745998256DA98BCA2676CEC2127A6D188805;
IL2CPP_EXTERN_C String_t* _stringLiteral224D5104407310F017DD6A2D6DE286CB69CF746C;
IL2CPP_EXTERN_C String_t* _stringLiteral30C57D6C566C6A7E410CA51CAFFA567EFBC62FCB;
IL2CPP_EXTERN_C String_t* _stringLiteral3196F6327B2907868F33A631726245D2F00748FF;
IL2CPP_EXTERN_C String_t* _stringLiteral36E708A9EC9B45B9FE182039AD23AF0530A6612D;
IL2CPP_EXTERN_C String_t* _stringLiteral3DD7AC9D1AE395B5ECFCF2A62384BA57E0A86DCB;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2393CCA6D4C0B3BE04A938B9FFBCB5AE037471;
IL2CPP_EXTERN_C String_t* _stringLiteral41D97A03D527838DDCC85B81128FFAB7E4D16942;
IL2CPP_EXTERN_C String_t* _stringLiteral43A61D134AE4233CA9F0CA02724B923697659772;
IL2CPP_EXTERN_C String_t* _stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6;
IL2CPP_EXTERN_C String_t* _stringLiteral48DBE08C911EFBD882A9A76FDBC50E2D6E66297C;
IL2CPP_EXTERN_C String_t* _stringLiteral4AB6BF3A6BC53F858889FB2993BB8BBB90E2C88A;
IL2CPP_EXTERN_C String_t* _stringLiteral4C7112F93180F78AF9D815BBA70F7CEDFEE63202;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B;
IL2CPP_EXTERN_C String_t* _stringLiteral6336760DE1D246B614A2B9274B0DCE474B2A457D;
IL2CPP_EXTERN_C String_t* _stringLiteral7141BC5418DC7B0A1249580D0852A32D6AE693BC;
IL2CPP_EXTERN_C String_t* _stringLiteral7C612DE70CD859D2842EE84A0DB1BB8B5C99271C;
IL2CPP_EXTERN_C String_t* _stringLiteral7EB247CDE2FAF7E707CF3EE4BB5FFCE2B0341933;
IL2CPP_EXTERN_C String_t* _stringLiteral7F54B00DB61F3EE6DEF58161D074B5777975C954;
IL2CPP_EXTERN_C String_t* _stringLiteralA0B98B10F1B58FA01BA5F90B36D067B189E9B25F;
IL2CPP_EXTERN_C String_t* _stringLiteralAADD313A5371A8648BAA24E69FB3A4C6083E5593;
IL2CPP_EXTERN_C String_t* _stringLiteralAC21B6CBC408AF8AB0F21A09380E81067695E8A1;
IL2CPP_EXTERN_C String_t* _stringLiteralACBE462DFB9823A4CA721D486BF624EB91DB2E92;
IL2CPP_EXTERN_C String_t* _stringLiteralBAC3D17E6F80D7040A3FA0C30930E35F0F075486;
IL2CPP_EXTERN_C String_t* _stringLiteralBBD498D1F3E76749ECD52BCA75BA0BA00E248DF1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD7826F6336BE0E24140B2B2EDC068A1F04FAD78;
IL2CPP_EXTERN_C String_t* _stringLiteralC1F4C70A7199251884DC974D87FCDAF871FCA7BF;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D54AE668AEA206FE93AA3C7D2564E751D6039;
IL2CPP_EXTERN_C String_t* _stringLiteralC798AA17D6CEECDDA041D2389B88C0B791F319F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC99B1C191E5F1F0897D7ED648C3AD55D8A67E664;
IL2CPP_EXTERN_C String_t* _stringLiteralCDD7AC32C8C7867FF797F95C4F40C851A42352EC;
IL2CPP_EXTERN_C String_t* _stringLiteralCE70CC1F521AAB81F749E0271CC932FE4E1A9407;
IL2CPP_EXTERN_C String_t* _stringLiteralD00C928D261D0FD5DF1C61F00D230124BF209197;
IL2CPP_EXTERN_C String_t* _stringLiteralD2CC083FB5D1A83E34D6878F4B5A22C751994D16;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BF183F619D39012AF8814AFA3C7B020FA26F1C;
IL2CPP_EXTERN_C String_t* _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B;
IL2CPP_EXTERN_C String_t* _stringLiteralE34DD841A7AA7A59720C93F598513A72B80EB989;
IL2CPP_EXTERN_C String_t* _stringLiteralE90B3FD05322B9BC016B260EB1335370FDAE2F8D;
IL2CPP_EXTERN_C String_t* _stringLiteralEC79C9E4F403ACDF4E511F936DF416F4FA17FE5C;
IL2CPP_EXTERN_C String_t* _stringLiteralEDDDE4A080AB3DA596F60E888D58232474F97E3A;
IL2CPP_EXTERN_C String_t* _stringLiteralEF99D3CD53D3F3F012F352A3E10E514E30666953;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisPlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0_m4BB4F2408FB5EAF5C5023E337C74C43170CB09D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m76710F2F154752EB162C5C5D6E2FAF007A4DA876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m879882BDF7B37E2AF12BC36B61F5A64778D57625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m436DAF6CCB5382C1DCD571EF1711D90A463855B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3723A564E5DDF5C305727AFD5943D437643A9A8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE183471EB287CC1E8177AE5C5B902770589C7619_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mF5F8C0DA6451878F7902E8BC6C1CD4CAF2EF18D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m679574C59C3822BC7B6B36E6DBFA4C7AAF77620A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMarker_tB1A8D8178B44493B159F12E58FF83CFF59477876_mFBE941FF8ABD12154C3B94F378FC98DD457F7330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_mAC48A684B88D3720E4A8568C780DFD974B7A8E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAuthorizationTimerU3Ed__18_System_Collections_IEnumerator_Reset_m7BE712F6B56D2B2E7FC61A2A9F8ABDD184C57AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAuthorizationTimerU3Ed__18_System_Collections_IEnumerator_Reset_mCD2D6DF099B998E413531D26225AB9CD634E4665_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3CDisplayPlantsU3Eb__0_m5D911D54CDFE5D165127EE9B18501E4FAB603200_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

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

// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Plant>
struct List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlantU5BU5D_t81B9F6F4E910D747F6278073B0A0BAF5E00B6135* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlantU5BU5D_t81B9F6F4E910D747F6278073B0A0BAF5E00B6135* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E  : public RuntimeObject
{
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;
};

// Plant
struct Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72  : public RuntimeObject
{
	// UnityEngine.GameObject Plant::<GameObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CGameObjectU3Ek__BackingField_0;
	// System.Int32 Plant::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;
	// System.String Plant::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_2;
	// System.Single Plant::<Water>k__BackingField
	float ___U3CWaterU3Ek__BackingField_3;
	// System.Single Plant::<Sun>k__BackingField
	float ___U3CSunU3Ek__BackingField_4;
	// System.Single Plant::<Fertilizer>k__BackingField
	float ___U3CFertilizerU3Ek__BackingField_5;
	// UnityEngine.GameObject Plant::<Arrow>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CArrowU3Ek__BackingField_6;
	// System.Boolean Plant::<IsSelected>k__BackingField
	bool ___U3CIsSelectedU3Ek__BackingField_7;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// FertilizationManager/<AuthorizationTimer>d__18
struct U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951  : public RuntimeObject
{
	// System.Int32 FertilizationManager/<AuthorizationTimer>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FertilizationManager/<AuthorizationTimer>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FertilizationManager FertilizationManager/<AuthorizationTimer>d__18::<>4__this
	FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* ___U3CU3E4__this_2;
};

// PlacementManager/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2  : public RuntimeObject
{
	// Plant PlacementManager/<>c__DisplayClass31_0::plant
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___plant_0;
	// PlacementManager PlacementManager/<>c__DisplayClass31_0::<>4__this
	PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* ___U3CU3E4__this_1;
};

// PlantDataHandler/PlantListWrapper
struct PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Plant> PlantDataHandler/PlantListWrapper::plantList
	List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* ___plantList_0;
};

// WateringManager/<AuthorizationTimer>d__18
struct U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436  : public RuntimeObject
{
	// System.Int32 WateringManager/<AuthorizationTimer>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WateringManager/<AuthorizationTimer>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// WateringManager WateringManager/<AuthorizationTimer>d__18::<>4__this
	WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<Plant>
struct Enumerator_tFB14A623119D7631666111368A3F34032EB1883A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// UnityEngine.ParticleCollisionEvent
struct ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 
{
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Intersection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Intersection_0;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_2;
	// System.Int32 UnityEngine.ParticleCollisionEvent::m_ColliderInstanceID
	int32_t ___m_ColliderInstanceID_3;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
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

// FertilizationManager
struct FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem FertilizationManager::_Particles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ____Particles_4;
	// PlacementManager FertilizationManager::placementManager
	PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* ___placementManager_5;
	// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent> FertilizationManager::collisionEvents
	List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* ___collisionEvents_6;
	// UnityEngine.ParticleSystem/EmissionModule FertilizationManager::_emission
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ____emission_7;
	// System.Collections.Generic.List`1<Plant> FertilizationManager::placedPlants
	List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* ___placedPlants_8;
	// System.Single FertilizationManager::angleThreshold
	float ___angleThreshold_9;
	// System.Int32 FertilizationManager::newstate
	int32_t ___newstate_10;
	// System.Boolean FertilizationManager::isAuthorized
	bool ___isAuthorized_11;
	// System.Single FertilizationManager::fertilizingStartTime
	float ___fertilizingStartTime_12;
	// System.Boolean FertilizationManager::isFertilizing
	bool ___isFertilizing_13;
};

// Marker
struct Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARRaycastManager Marker::raycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___raycastManager_4;
	// UnityEngine.GameObject Marker::marker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___marker_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> Marker::hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hits_6;
};

// PlacementManager
struct PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera PlacementManager::arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCamera_4;
	// UnityEngine.GameObject PlacementManager::panel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panel_5;
	// UnityEngine.GameObject PlacementManager::arrowPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arrowPrefab_6;
	// Marker PlacementManager::marker
	Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* ___marker_7;
	// UnityEngine.GameObject PlacementManager::cactus
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cactus_8;
	// UnityEngine.GameObject PlacementManager::leafy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leafy_9;
	// UnityEngine.GameObject PlacementManager::bush
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bush_10;
	// UnityEngine.GameObject PlacementManager::succulent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___succulent_11;
	// UnityEngine.GameObject PlacementManager::plantToPlace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plantToPlace_12;
	// UnityEngine.GameObject PlacementManager::previewedPlant
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___previewedPlant_13;
	// UnityEngine.GameObject PlacementManager::placedPlant
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placedPlant_14;
	// System.Collections.Generic.List`1<Plant> PlacementManager::Plants
	List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* ___Plants_15;
	// System.String PlacementManager::plantType
	String_t* ___plantType_16;
	// UnityEngine.Sprite PlacementManager::succulentSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___succulentSprite_17;
	// UnityEngine.Sprite PlacementManager::bushSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___bushSprite_18;
	// UnityEngine.Sprite PlacementManager::cactusSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___cactusSprite_19;
	// UnityEngine.Sprite PlacementManager::defaultSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___defaultSprite_20;
	// UnityEngine.GameObject PlacementManager::plantListItemPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plantListItemPrefab_21;
	// UnityEngine.Transform PlacementManager::plantListParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___plantListParent_22;
};

// PlantDataHandler
struct PlantDataHandler_tE9D76B50A1B7582A4310D9B5D83411E13D977A6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WaterTrigger
struct WaterTrigger_t2C5CEE5FB3AB474809A94E1321296770F620AB66  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WateringManager
struct WateringManager_t386D8152CB19B5277D55E515B58879247008FB08  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem WateringManager::_Particles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ____Particles_4;
	// PlacementManager WateringManager::placementManager
	PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* ___placementManager_5;
	// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent> WateringManager::collisionEvents
	List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* ___collisionEvents_6;
	// UnityEngine.ParticleSystem/EmissionModule WateringManager::_emission
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ____emission_7;
	// System.Collections.Generic.List`1<Plant> WateringManager::placedPlants
	List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* ___placedPlants_8;
	// System.Single WateringManager::angleThreshold
	float ___angleThreshold_9;
	// System.Int32 WateringManager::newstate
	int32_t ___newstate_10;
	// System.Boolean WateringManager::isAuthorized
	bool ___isAuthorized_11;
	// System.Single WateringManager::wateringStartTime
	float ___wateringStartTime_12;
	// System.Boolean WateringManager::isWatering
	bool ___isWatering_13;
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

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
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

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
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

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_FromJson_TisIl2CppFullySharedGenericAny_mED91F31ACD5550CDF42A5E2D0089508A4653E654_gshared (String_t* ___json0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<PlacementManager>()
inline PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* Object_FindObjectOfType_TisPlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_mAC48A684B88D3720E4A8568C780DFD974B7A8E87 (const RuntimeMethod* method)
{
	return ((  PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Collections.Generic.List`1<Plant> PlacementManager::GetPlants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* PlacementManager_GetPlants_m9F6E843BFE540F72CE8707EC0DEE4CAA5778AFC9 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::.ctor()
inline void List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1 (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Gyroscope::get_attitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85 (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void FertilizationManager::StartFertilizing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FertilizationManager_StartFertilizing_m18CA5C2C61BDC3B45664364870DA08F22C508CED (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, const RuntimeMethod* method) ;
// System.Void FertilizationManager::StopFertilizing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FertilizationManager_StopFertilizing_m3F55E92F8EF2F9D3362286FE0734235B02302D9C (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticlePhysicsExtensions_GetCollisionEvents_m37C8F4C7FE60BBA0B6FD4B361BEFFE53CF8154F7 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___ps0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* ___collisionEvents2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Plant>::get_Count()
inline int32_t List_1_get_Count_mE183471EB287CC1E8177AE5C5B902770589C7619_inline (List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Plant>::GetEnumerator()
inline Enumerator_tFB14A623119D7631666111368A3F34032EB1883A List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F (List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* __this, const RuntimeMethod* method)
{
	Enumerator_tFB14A623119D7631666111368A3F34032EB1883A il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<Plant>::Dispose()
inline void Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C (Enumerator_tFB14A623119D7631666111368A3F34032EB1883A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Plant>::get_Current()
inline Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_inline (Enumerator_tFB14A623119D7631666111368A3F34032EB1883A* __this, const RuntimeMethod* method)
{
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean Plant::get_IsSelected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Plant_get_IsSelected_m494151718F4AA58168E6C6A9E9575A5FDEB9541C_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::get_Item(System.Int32)
inline ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_intersection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParticleCollisionEvent_get_intersection_m5CD7C517228E7D6148DEA4ED0500533C146DEC97 (ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Plant::get_GameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Plant_get_GameObject_mC89686197500761406F094216C8CC2BC0B1F7537_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single Plant::get_Fertilizer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Plant_get_Fertilizer_m8CC683BE83CE3048F014A54ABF9C5A693418DE5D_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// System.Void Plant::set_Fertilizer(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_Fertilizer_mB0BF51A7FB0ABFB21602C7471D2405C86789F1DB_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, float ___value0, const RuntimeMethod* method) ;
// System.String Plant::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Int32 Plant::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// System.Void Plant::set_State(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_State_mDA648AF407FCFA002B8622D103EF345E1325190F_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject FertilizationManager::GetGrownPlantPrefab(Plant,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* FertilizationManager_GetGrownPlantPrefab_m3DD43908774B55E7A0BEF2BEB49928F89AE6FFD2 (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___placedPlant0, int32_t ___newState1, const RuntimeMethod* method) ;
// System.Void FertilizationManager::GrowPlant(Plant,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FertilizationManager_GrowPlant_m0954DC7939E36BD732D26DC8BAAC1901AB3FE820 (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___plant0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grownPlantPrefab1, int32_t ___newState2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Plant>::MoveNext()
inline bool Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312 (Enumerator_tFB14A623119D7631666111368A3F34032EB1883A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Single Plant::get_Water()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Plant_get_Water_m4EEABAAD7ACBF4038AB57262D8EF74ECF5AD5AF0_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// System.Single Plant::get_Sun()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Plant_get_Sun_m2F8BF7851204E5A77563A5A6F9490336E58731AE_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// System.Void Plant::.ctor(UnityEngine.GameObject,System.Int32,System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant__ctor_mAC07B3CC4C99AD1AB9D2C12959110534160296EB (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, int32_t ___state1, String_t* ___type2, float ___water3, float ___sun4, float ___fertilizer5, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Plant>::IndexOf(T)
inline int32_t List_1_IndexOf_m436DAF6CCB5382C1DCD571EF1711D90A463855B9 (List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Collections.Generic.List`1<Plant>::set_Item(System.Int32,T)
inline void List_1_set_Item_mF5F8C0DA6451878F7902E8BC6C1CD4CAF2EF18D5 (List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* __this, int32_t ___index0, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void PlacementManager::UpdatePlantsList(System.Collections.Generic.List`1<Plant>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_UpdatePlantsList_mFFD3FC170E2B6F557BAA537D5A8412D55208B36A (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* ___newPlants0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FertilizationManager::AuthorizationTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FertilizationManager_AuthorizationTimer_m9054C96B2E4F7F8CAFDFCB003E77EA04909FCCFA (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void FertilizationManager/<AuthorizationTimer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAuthorizationTimerU3Ed__18__ctor_m2AA7A31D0A34ACC3BD516604E79B22F112404BB1 (U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m679574C59C3822BC7B6B36E6DBFA4C7AAF77620A (const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T UnityEngine.Object::FindObjectOfType<Marker>()
inline Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* Object_FindObjectOfType_TisMarker_tB1A8D8178B44493B159F12E58FF83CFF59477876_mFBE941FF8ABD12154C3B94F378FC98DD457F7330 (const RuntimeMethod* method)
{
	return ((  Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Void PlacementManager::setPlantToPlace(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_setPlantToPlace_mFE1C5DE6F6CD7F7A9AAB592E4C3B1545D8CDDB25 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plantPrefab0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Plant>::Add(T)
inline void List_1_Add_m76710F2F154752EB162C5C5D6E2FAF007A4DA876_inline (List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Plant>::Clear()
inline void List_1_Clear_m879882BDF7B37E2AF12BC36B61F5A64778D57625_inline (List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void PlacementManager/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m01DF901CA13DD7DB7A21A9AE6B1445A7AC79C7E3 (U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutRebuilder_ForceRebuildLayoutImmediate_m1DFB9F055F838E4CB32A471460AEA23D85DA8B57 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___layoutRoot0, const RuntimeMethod* method) ;
// UnityEngine.GameObject Plant::get_Arrow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Plant_get_Arrow_m13E3D3846A280CD6D8465C00D0811AE1B20476B2_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Plant::set_Arrow(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_Arrow_m76C23A888F46DBC54E72F7AC123ADB1D54F8A2F3_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void PlacementManager::PointArrowAtPlant(Plant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_PointArrowAtPlant_mA5AA93CC0AD218E5A1512404D9B9A94AA9563485 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___plant0, const RuntimeMethod* method) ;
// System.Void Plant::set_IsSelected(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_IsSelected_mEA3896B8ADFCB80BA94C083C8D9EC9E4C9ED8F59_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void PlacementManager::HidePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_HidePanel_mD9FA965433FF4F1E786CC81627307270A511095F (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Plant>::.ctor()
inline void List_1__ctor_m3723A564E5DDF5C305727AFD5943D437643A9A8F (List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void PlacementManager::OnPlantListItemClick(Plant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_OnPlantListItemClick_m5EC3F5D23A9B0359F0C85ACA930F4E580066352E (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___plant0, const RuntimeMethod* method) ;
// System.Void Plant::set_GameObject(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_GameObject_mD5D1A5BB45857C30EBCE8D52151BADE8DC67793B_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void Plant::set_Water(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_Water_mA0EBF9CCF066CBFC9901C3DF4760D13263783A3D_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Plant::set_Sun(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_Sun_m0790C03396CB42A147DED805F067252B65186391_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void PlantDataHandler/PlantListWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlantListWrapper__ctor_mE5310E97136DC6E8513A5699B56DB0575C025596 (PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB (const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92 (String_t* ___key0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<PlantDataHandler/PlantListWrapper>(System.String)
inline PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0* JsonUtility_FromJson_TisPlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0_m4BB4F2408FB5EAF5C5023E337C74C43170CB09D2 (String_t* ___json0, const RuntimeMethod* method)
{
	PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0* il2cppRetVal;
	((  void (*) (String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))JsonUtility_FromJson_TisIl2CppFullySharedGenericAny_mED91F31ACD5550CDF42A5E2D0089508A4653E654_gshared)(___json0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_mBB63C28A69EA934DC7DF12336F8D5341BF6CA521 (const RuntimeMethod* method) ;
// System.Void WateringManager::StartWatering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringManager_StartWatering_mB2AA617B688BBB6D82F46C41C3C52B1651F04B28 (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, const RuntimeMethod* method) ;
// System.Void WateringManager::StopWatering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringManager_StopWatering_m73127198031C9FFE67896C38A4D2CD73DE106297 (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject WateringManager::GetGrownPlantPrefab(Plant,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WateringManager_GetGrownPlantPrefab_mB6382D0F482F325C116ED91F52632B4BD926029E (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___placedPlant0, int32_t ___newState1, const RuntimeMethod* method) ;
// System.Void WateringManager::GrowPlant(Plant,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringManager_GrowPlant_mCCFD278AF39D0A349A3AD5ABB078CCD45487E21E (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___plant0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grownPlantPrefab1, int32_t ___newState2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WateringManager::AuthorizationTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WateringManager_AuthorizationTimer_mB757E13528285513853E3FA68D6DBAC1AB6B891C (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, const RuntimeMethod* method) ;
// System.Void WateringManager/<AuthorizationTimer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAuthorizationTimerU3Ed__18__ctor_mDA6EB41814D39DC91F4EF6EE8E489E118FA839D8 (U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void FertilizationManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FertilizationManager_Start_mF7003A5F1FFF6B5A41C843E21A6719EE72680168 (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_mAC48A684B88D3720E4A8568C780DFD974B7A8E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _Particles.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->____Particles_4;
		NullCheck(L_0);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_0, NULL);
		// placementManager = FindObjectOfType<PlacementManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* L_1;
		L_1 = Object_FindObjectOfType_TisPlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_mAC48A684B88D3720E4A8568C780DFD974B7A8E87(Object_FindObjectOfType_TisPlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_mAC48A684B88D3720E4A8568C780DFD974B7A8E87_RuntimeMethod_var);
		__this->___placementManager_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placementManager_5), (void*)L_1);
		// placedPlants = placementManager.GetPlants();
		PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* L_2 = __this->___placementManager_5;
		NullCheck(L_2);
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_3;
		L_3 = PlacementManager_GetPlants_m9F6E843BFE540F72CE8707EC0DEE4CAA5778AFC9(L_2, NULL);
		__this->___placedPlants_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedPlants_8), (void*)L_3);
		// collisionEvents = new List<ParticleCollisionEvent>();
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_4 = (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD*)il2cpp_codegen_object_new(List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1(L_4, List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var);
		__this->___collisionEvents_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collisionEvents_6), (void*)L_4);
		// Input.gyro.enabled = true;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_5;
		L_5 = Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC(NULL);
		NullCheck(L_5);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FertilizationManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FertilizationManager_Update_m6C78DF6A67E5AC8803A8A7ACDB6248970760B6A8 (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6336760DE1D246B614A2B9274B0DCE474B2A457D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C612DE70CD859D2842EE84A0DB1BB8B5C99271C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	{
		// if (isAuthorized)
		bool L_0 = __this->___isAuthorized_11;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c0;
		}
	}
	{
		// Quaternion attitude = Input.gyro.attitude;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_2;
		L_2 = Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC(NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85(L_2, NULL);
		V_1 = L_3;
		// Vector3 euler = attitude.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		V_2 = L_4;
		// if (euler.x > 180) euler.x -= 360;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_2;
		float L_6 = L_5.___x_2;
		V_3 = (bool)((((float)L_6) > ((float)(180.0f)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// if (euler.x > 180) euler.x -= 360;
		float* L_8 = (&(&V_2)->___x_2);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		*((float*)L_9) = (float)((float)il2cpp_codegen_subtract(L_10, (360.0f)));
	}

IL_0043:
	{
		// if (euler.y > 180) euler.y -= 360;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		float L_12 = L_11.___y_3;
		V_4 = (bool)((((float)L_12) > ((float)(180.0f)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		// if (euler.y > 180) euler.y -= 360;
		float* L_14 = (&(&V_2)->___y_3);
		float* L_15 = L_14;
		float L_16 = *((float*)L_15);
		*((float*)L_15) = (float)((float)il2cpp_codegen_subtract(L_16, (360.0f)));
	}

IL_0066:
	{
		// if (Mathf.Abs(euler.x) < angleThreshold && Mathf.Abs(euler.y) < angleThreshold)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		float L_18 = L_17.___x_2;
		float L_19;
		L_19 = fabsf(L_18);
		float L_20 = __this->___angleThreshold_9;
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_008e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		float L_22 = L_21.___y_3;
		float L_23;
		L_23 = fabsf(L_22);
		float L_24 = __this->___angleThreshold_9;
		G_B8_0 = ((((float)L_23) < ((float)L_24))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B8_0 = 0;
	}

IL_008f:
	{
		V_5 = (bool)G_B8_0;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00ab;
		}
	}
	{
		// Debug.Log("Start Fertilizing");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral7C612DE70CD859D2842EE84A0DB1BB8B5C99271C, NULL);
		// StartFertilizing();
		FertilizationManager_StartFertilizing_m18CA5C2C61BDC3B45664364870DA08F22C508CED(__this, NULL);
		goto IL_00bf;
	}

IL_00ab:
	{
		// Debug.Log("Stop Fertilizing");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral6336760DE1D246B614A2B9274B0DCE474B2A457D, NULL);
		// StopFertilizing();
		FertilizationManager_StopFertilizing_m3F55E92F8EF2F9D3362286FE0734235B02302D9C(__this, NULL);
	}

IL_00bf:
	{
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void FertilizationManager::OnParticleCollision(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FertilizationManager_OnParticleCollision_m210445A283091DA18996A07C6CC54D8E7D260598 (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE183471EB287CC1E8177AE5C5B902770589C7619_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30C57D6C566C6A7E410CA51CAFFA567EFBC62FCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E2393CCA6D4C0B3BE04A938B9FFBCB5AE037471);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC99B1C191E5F1F0897D7ED648C3AD55D8A67E664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDDE4A080AB3DA596F60E888D58232474F97E3A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Enumerator_tFB14A623119D7631666111368A3F34032EB1883A V_5;
	memset((&V_5), 0, sizeof(V_5));
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_14 = NULL;
	bool V_15 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_16 = NULL;
	bool V_17 = false;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (!isFertilizing) return;
		bool L_0 = __this->___isFertilizing_13;
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!isFertilizing) return;
		goto IL_023a;
	}

IL_0013:
	{
		// float fertilizingDuration = Time.time - fertilizingStartTime;
		float L_2;
		L_2 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_3 = __this->___fertilizingStartTime_12;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// Debug.Log("Fertilizing Duration: " + fertilizingDuration);
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3E2393CCA6D4C0B3BE04A938B9FFBCB5AE037471, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// int fertilizerToAdd = Mathf.FloorToInt(fertilizingDuration * 10);
		float L_6 = V_0;
		int32_t L_7;
		L_7 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(L_6, (10.0f))), NULL);
		V_1 = L_7;
		// Debug.Log("Fertilizer to Add: " + fertilizerToAdd);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralEDDDE4A080AB3DA596F60E888D58232474F97E3A, L_8, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_9, NULL);
		// int numCollisionEvents = _Particles.GetCollisionEvents(other, collisionEvents);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = __this->____Particles_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___other0;
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_12 = __this->___collisionEvents_6;
		int32_t L_13;
		L_13 = ParticlePhysicsExtensions_GetCollisionEvents_m37C8F4C7FE60BBA0B6FD4B361BEFFE53CF8154F7(L_10, L_11, L_12, NULL);
		V_2 = L_13;
		// if (placedPlants.Count > 0)
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_14 = __this->___placedPlants_8;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mE183471EB287CC1E8177AE5C5B902770589C7619_inline(L_14, List_1_get_Count_mE183471EB287CC1E8177AE5C5B902770589C7619_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0222;
		}
	}
	{
		// foreach (Plant placedPlant in placedPlants)
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_17 = __this->___placedPlants_8;
		NullCheck(L_17);
		Enumerator_tFB14A623119D7631666111368A3F34032EB1883A L_18;
		L_18 = List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F(L_17, List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F_RuntimeMethod_var);
		V_5 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0210:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C((&V_5), Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0202_1;
			}

IL_0099_1:
			{
				// foreach (Plant placedPlant in placedPlants)
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_19;
				L_19 = Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_inline((&V_5), Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_RuntimeMethod_var);
				V_6 = L_19;
				// if (!placedPlant.IsSelected) continue;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_20 = V_6;
				NullCheck(L_20);
				bool L_21;
				L_21 = Plant_get_IsSelected_m494151718F4AA58168E6C6A9E9575A5FDEB9541C_inline(L_20, NULL);
				V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
				bool L_22 = V_7;
				if (!L_22)
				{
					goto IL_00b8_1;
				}
			}
			{
				// if (!placedPlant.IsSelected) continue;
				goto IL_0202_1;
			}

IL_00b8_1:
			{
				// for (int i = 0; i < numCollisionEvents; i++)
				V_8 = 0;
				goto IL_01f3_1;
			}

IL_00c0_1:
			{
				// Vector3 collisionPoint = collisionEvents[i].intersection;
				List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_23 = __this->___collisionEvents_6;
				int32_t L_24 = V_8;
				NullCheck(L_23);
				ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 L_25;
				L_25 = List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D(L_23, L_24, List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
				V_11 = L_25;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
				L_26 = ParticleCollisionEvent_get_intersection_m5CD7C517228E7D6148DEA4ED0500533C146DEC97((&V_11), NULL);
				V_9 = L_26;
				// float distance = Vector3.Distance(collisionPoint, placedPlant.GameObject.transform.position);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_9;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_28 = V_6;
				NullCheck(L_28);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
				L_29 = Plant_get_GameObject_mC89686197500761406F094216C8CC2BC0B1F7537_inline(L_28, NULL);
				NullCheck(L_29);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
				L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
				NullCheck(L_30);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
				L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
				float L_32;
				L_32 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_27, L_31, NULL);
				V_10 = L_32;
				// if (distance < 1)
				float L_33 = V_10;
				V_12 = (bool)((((float)L_33) < ((float)(1.0f)))? 1 : 0);
				bool L_34 = V_12;
				if (!L_34)
				{
					goto IL_01ec_1;
				}
			}
			{
				// placedPlant.Fertilizer += 0.0102f;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_35 = V_6;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_36 = L_35;
				NullCheck(L_36);
				float L_37;
				L_37 = Plant_get_Fertilizer_m8CC683BE83CE3048F014A54ABF9C5A693418DE5D_inline(L_36, NULL);
				NullCheck(L_36);
				Plant_set_Fertilizer_mB0BF51A7FB0ABFB21602C7471D2405C86789F1DB_inline(L_36, ((float)il2cpp_codegen_add(L_37, (0.0102000004f))), NULL);
				// Debug.Log($"After Fertilizing - {placedPlant.Type}, New Fertilizer Level: {placedPlant.Fertilizer}");
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_38 = V_6;
				NullCheck(L_38);
				String_t* L_39;
				L_39 = Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline(L_38, NULL);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_40 = V_6;
				NullCheck(L_40);
				float L_41;
				L_41 = Plant_get_Fertilizer_m8CC683BE83CE3048F014A54ABF9C5A693418DE5D_inline(L_40, NULL);
				float L_42 = L_41;
				RuntimeObject* L_43 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_42);
				String_t* L_44;
				L_44 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral30C57D6C566C6A7E410CA51CAFFA567EFBC62FCB, L_39, L_43, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_44, NULL);
				// if (placedPlant.Fertilizer > 30 && placedPlant.Fertilizer < 59 && placedPlant.State == 0 )
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_45 = V_6;
				NullCheck(L_45);
				float L_46;
				L_46 = Plant_get_Fertilizer_m8CC683BE83CE3048F014A54ABF9C5A693418DE5D_inline(L_45, NULL);
				if ((!(((float)L_46) > ((float)(30.0f)))))
				{
					goto IL_0165_1;
				}
			}
			{
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_47 = V_6;
				NullCheck(L_47);
				float L_48;
				L_48 = Plant_get_Fertilizer_m8CC683BE83CE3048F014A54ABF9C5A693418DE5D_inline(L_47, NULL);
				if ((!(((float)L_48) < ((float)(59.0f)))))
				{
					goto IL_0165_1;
				}
			}
			{
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_49 = V_6;
				NullCheck(L_49);
				int32_t L_50;
				L_50 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_49, NULL);
				G_B13_0 = ((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
				goto IL_0166_1;
			}

IL_0165_1:
			{
				G_B13_0 = 0;
			}

IL_0166_1:
			{
				V_13 = (bool)G_B13_0;
				bool L_51 = V_13;
				if (!L_51)
				{
					goto IL_019c_1;
				}
			}
			{
				// placedPlant.State = 1;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_52 = V_6;
				NullCheck(L_52);
				Plant_set_State_mDA648AF407FCFA002B8622D103EF345E1325190F_inline(L_52, 1, NULL);
				// GameObject GrownPlant = GetGrownPlantPrefab(placedPlant, placedPlant.State);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_53 = V_6;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_54 = V_6;
				NullCheck(L_54);
				int32_t L_55;
				L_55 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_54, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
				L_56 = FertilizationManager_GetGrownPlantPrefab_m3DD43908774B55E7A0BEF2BEB49928F89AE6FFD2(__this, L_53, L_55, NULL);
				V_14 = L_56;
				// GrowPlant(placedPlant, GrownPlant, placedPlant.State);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_57 = V_6;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = V_14;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_59 = V_6;
				NullCheck(L_59);
				int32_t L_60;
				L_60 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_59, NULL);
				FertilizationManager_GrowPlant_m0954DC7939E36BD732D26DC8BAAC1901AB3FE820(__this, L_57, L_58, L_60, NULL);
				goto IL_01eb_1;
			}

IL_019c_1:
			{
				// else if (placedPlant.Fertilizer > 60 && placedPlant.State == 1)
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_61 = V_6;
				NullCheck(L_61);
				float L_62;
				L_62 = Plant_get_Fertilizer_m8CC683BE83CE3048F014A54ABF9C5A693418DE5D_inline(L_61, NULL);
				if ((!(((float)L_62) > ((float)(60.0f)))))
				{
					goto IL_01b6_1;
				}
			}
			{
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_63 = V_6;
				NullCheck(L_63);
				int32_t L_64;
				L_64 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_63, NULL);
				G_B18_0 = ((((int32_t)L_64) == ((int32_t)1))? 1 : 0);
				goto IL_01b7_1;
			}

IL_01b6_1:
			{
				G_B18_0 = 0;
			}

IL_01b7_1:
			{
				V_15 = (bool)G_B18_0;
				bool L_65 = V_15;
				if (!L_65)
				{
					goto IL_01eb_1;
				}
			}
			{
				// placedPlant.State = 2;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_66 = V_6;
				NullCheck(L_66);
				Plant_set_State_mDA648AF407FCFA002B8622D103EF345E1325190F_inline(L_66, 2, NULL);
				// GameObject GrownPlant = GetGrownPlantPrefab(placedPlant, placedPlant.State);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_67 = V_6;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_68 = V_6;
				NullCheck(L_68);
				int32_t L_69;
				L_69 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_68, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70;
				L_70 = FertilizationManager_GetGrownPlantPrefab_m3DD43908774B55E7A0BEF2BEB49928F89AE6FFD2(__this, L_67, L_69, NULL);
				V_16 = L_70;
				// GrowPlant(placedPlant, GrownPlant, placedPlant.State);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_71 = V_6;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = V_16;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_73 = V_6;
				NullCheck(L_73);
				int32_t L_74;
				L_74 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_73, NULL);
				FertilizationManager_GrowPlant_m0954DC7939E36BD732D26DC8BAAC1901AB3FE820(__this, L_71, L_72, L_74, NULL);
			}

IL_01eb_1:
			{
			}

IL_01ec_1:
			{
				// for (int i = 0; i < numCollisionEvents; i++)
				int32_t L_75 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_75, 1));
			}

IL_01f3_1:
			{
				// for (int i = 0; i < numCollisionEvents; i++)
				int32_t L_76 = V_8;
				int32_t L_77 = V_2;
				V_17 = (bool)((((int32_t)L_76) < ((int32_t)L_77))? 1 : 0);
				bool L_78 = V_17;
				if (L_78)
				{
					goto IL_00c0_1;
				}
			}
			{
			}

IL_0202_1:
			{
				// foreach (Plant placedPlant in placedPlants)
				bool L_79;
				L_79 = Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312((&V_5), Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312_RuntimeMethod_var);
				if (L_79)
				{
					goto IL_0099_1;
				}
			}
			{
				goto IL_021f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_021f:
	{
		goto IL_022f;
	}

IL_0222:
	{
		// Debug.LogWarning("No plants placed yet");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralC99B1C191E5F1F0897D7ED648C3AD55D8A67E664, NULL);
	}

IL_022f:
	{
		// fertilizingStartTime = Time.time; // Reset the Fertilizing start time for continuous Fertilizing
		float L_80;
		L_80 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___fertilizingStartTime_12 = L_80;
	}

IL_023a:
	{
		// }
		return;
	}
}
// System.Void FertilizationManager::GrowPlant(Plant,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FertilizationManager_GrowPlant_m0954DC7939E36BD732D26DC8BAAC1901AB3FE820 (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___plant0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grownPlantPrefab1, int32_t ___newState2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m436DAF6CCB5382C1DCD571EF1711D90A463855B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mF5F8C0DA6451878F7902E8BC6C1CD4CAF2EF18D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// Vector3 plantPosition = plant.GameObject.transform.position;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_0 = ___plant0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Plant_get_GameObject_mC89686197500761406F094216C8CC2BC0B1F7537_inline(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_0 = L_3;
		// Destroy(plant.GameObject);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_4 = ___plant0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Plant_get_GameObject_mC89686197500761406F094216C8CC2BC0B1F7537_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
		// GameObject newPlacedPlant = Instantiate(grownPlantPrefab, plantPosition, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___grownPlantPrefab1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_6, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_1 = L_9;
		// Plant newPlant = new Plant(newPlacedPlant, newState, plant.Type, plant.Water, plant.Sun, plant.Fertilizer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		int32_t L_11 = ___newState2;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_12 = ___plant0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline(L_12, NULL);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_14 = ___plant0;
		NullCheck(L_14);
		float L_15;
		L_15 = Plant_get_Water_m4EEABAAD7ACBF4038AB57262D8EF74ECF5AD5AF0_inline(L_14, NULL);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_16 = ___plant0;
		NullCheck(L_16);
		float L_17;
		L_17 = Plant_get_Sun_m2F8BF7851204E5A77563A5A6F9490336E58731AE_inline(L_16, NULL);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_18 = ___plant0;
		NullCheck(L_18);
		float L_19;
		L_19 = Plant_get_Fertilizer_m8CC683BE83CE3048F014A54ABF9C5A693418DE5D_inline(L_18, NULL);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_20 = (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72*)il2cpp_codegen_object_new(Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Plant__ctor_mAC07B3CC4C99AD1AB9D2C12959110534160296EB(L_20, L_10, L_11, L_13, L_15, L_17, L_19, NULL);
		V_2 = L_20;
		// int plantIndex = placedPlants.IndexOf(plant);
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_21 = __this->___placedPlants_8;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_22 = ___plant0;
		NullCheck(L_21);
		int32_t L_23;
		L_23 = List_1_IndexOf_m436DAF6CCB5382C1DCD571EF1711D90A463855B9(L_21, L_22, List_1_IndexOf_m436DAF6CCB5382C1DCD571EF1711D90A463855B9_RuntimeMethod_var);
		V_3 = L_23;
		// placedPlants[plantIndex] = newPlant;
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_24 = __this->___placedPlants_8;
		int32_t L_25 = V_3;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_26 = V_2;
		NullCheck(L_24);
		List_1_set_Item_mF5F8C0DA6451878F7902E8BC6C1CD4CAF2EF18D5(L_24, L_25, L_26, List_1_set_Item_mF5F8C0DA6451878F7902E8BC6C1CD4CAF2EF18D5_RuntimeMethod_var);
		// placementManager.UpdatePlantsList(placedPlants);
		PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* L_27 = __this->___placementManager_5;
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_28 = __this->___placedPlants_8;
		NullCheck(L_27);
		PlacementManager_UpdatePlantsList_mFFD3FC170E2B6F557BAA537D5A8412D55208B36A(L_27, L_28, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject FertilizationManager::GetGrownPlantPrefab(Plant,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* FertilizationManager_GetGrownPlantPrefab_m3DD43908774B55E7A0BEF2BEB49928F89AE6FFD2 (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___placedPlant0, int32_t ___newState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36E708A9EC9B45B9FE182039AD23AF0530A6612D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41D97A03D527838DDCC85B81128FFAB7E4D16942);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F54B00DB61F3EE6DEF58161D074B5777975C954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC21B6CBC408AF8AB0F21A09380E81067695E8A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAC3D17E6F80D7040A3FA0C30930E35F0F075486);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBD498D1F3E76749ECD52BCA75BA0BA00E248DF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC37D54AE668AEA206FE93AA3C7D2564E751D6039);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDD7AC32C8C7867FF797F95C4F40C851A42352EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE70CC1F521AAB81F749E0271CC932FE4E1A9407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2CC083FB5D1A83E34D6878F4B5A22C751994D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3BF183F619D39012AF8814AFA3C7B020FA26F1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF99D3CD53D3F3F012F352A3E10E514E30666953);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// string type = placedPlant.Type;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_0 = ___placedPlant0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline(L_0, NULL);
		V_0 = L_1;
		// int state = placedPlant.State;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_2 = ___placedPlant0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_2, NULL);
		V_1 = L_3;
		// switch (type)
		String_t* L_4 = V_0;
		V_3 = L_4;
		String_t* L_5 = V_3;
		V_2 = L_5;
		String_t* L_6 = V_2;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralD3BF183F619D39012AF8814AFA3C7B020FA26F1C, NULL);
		if (L_7)
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_8 = V_2;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteralBBD498D1F3E76749ECD52BCA75BA0BA00E248DF1, NULL);
		if (L_9)
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_10 = V_2;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteralCE70CC1F521AAB81F749E0271CC932FE4E1A9407, NULL);
		if (L_11)
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_12 = V_2;
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, _stringLiteral41D97A03D527838DDCC85B81128FFAB7E4D16942, NULL);
		if (L_13)
		{
			goto IL_0106;
		}
	}
	{
		goto IL_0141;
	}

IL_0052:
	{
		// return state switch
		// {
		//     1 => Resources.Load<GameObject>("Plants/Cactus Medium"),
		//     2 => Resources.Load<GameObject>("Plants/Cactus Large"),
		//     _ => null,
		// };
		if (1)
		{
			goto IL_0056;
		}
	}
	{
	}

IL_0056:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_005c;
	}

IL_005c:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)2)))
		{
			goto IL_0070;
		}
	}
	{
		goto IL_007e;
	}

IL_0062:
	{
		// 1 => Resources.Load<GameObject>("Plants/Cactus Medium"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteralAC21B6CBC408AF8AB0F21A09380E81067695E8A1, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_16;
		goto IL_0083;
	}

IL_0070:
	{
		// 2 => Resources.Load<GameObject>("Plants/Cactus Large"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteralBAC3D17E6F80D7040A3FA0C30930E35F0F075486, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_17;
		goto IL_0083;
	}

IL_007e:
	{
		// _ => null,
		V_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_0083;
	}

IL_0083:
	{
		if (1)
		{
			goto IL_0087;
		}
	}
	{
	}

IL_0087:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_4;
		V_5 = L_18;
		goto IL_0146;
	}

IL_0090:
	{
		// return state switch
		// {
		//     1 => Resources.Load<GameObject>("Plants/Bush Medium"),
		//     2 => Resources.Load<GameObject>("Plants/Bush Large"),
		//     _ => null,
		// };
		if (1)
		{
			goto IL_0094;
		}
	}
	{
	}

IL_0094:
	{
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		goto IL_009a;
	}

IL_009a:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) == ((int32_t)2)))
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_00bc;
	}

IL_00a0:
	{
		// 1 => Resources.Load<GameObject>("Plants/Bush Medium"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteralEF99D3CD53D3F3F012F352A3E10E514E30666953, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_21;
		goto IL_00c1;
	}

IL_00ae:
	{
		// 2 => Resources.Load<GameObject>("Plants/Bush Large"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteralD2CC083FB5D1A83E34D6878F4B5A22C751994D16, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_22;
		goto IL_00c1;
	}

IL_00bc:
	{
		// _ => null,
		V_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_00c1;
	}

IL_00c1:
	{
		if (1)
		{
			goto IL_00c5;
		}
	}
	{
	}

IL_00c5:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_4;
		V_5 = L_23;
		goto IL_0146;
	}

IL_00cb:
	{
		// return state switch
		// {
		//     1 => Resources.Load<GameObject>("Plants/Succulent Medium"),
		//     2 => Resources.Load<GameObject>("Plants/Succulent Large"),
		//     _ => null,
		// };
		if (1)
		{
			goto IL_00cf;
		}
	}
	{
	}

IL_00cf:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)1)))
		{
			goto IL_00db;
		}
	}
	{
		goto IL_00d5;
	}

IL_00d5:
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)2)))
		{
			goto IL_00e9;
		}
	}
	{
		goto IL_00f7;
	}

IL_00db:
	{
		// 1 => Resources.Load<GameObject>("Plants/Succulent Medium"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteral36E708A9EC9B45B9FE182039AD23AF0530A6612D, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_26;
		goto IL_00fc;
	}

IL_00e9:
	{
		// 2 => Resources.Load<GameObject>("Plants/Succulent Large"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteralC37D54AE668AEA206FE93AA3C7D2564E751D6039, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_27;
		goto IL_00fc;
	}

IL_00f7:
	{
		// _ => null,
		V_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_00fc;
	}

IL_00fc:
	{
		if (1)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0100:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_4;
		V_5 = L_28;
		goto IL_0146;
	}

IL_0106:
	{
		// return state switch
		// {
		//     1 => Resources.Load<GameObject>("Plants/Leafy Medium"),
		//     2 => Resources.Load<GameObject>("Plants/Leafy Large"),
		//     _ => null,
		// };
		if (1)
		{
			goto IL_010a;
		}
	}
	{
	}

IL_010a:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)1)))
		{
			goto IL_0116;
		}
	}
	{
		goto IL_0110;
	}

IL_0110:
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)2)))
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0132;
	}

IL_0116:
	{
		// 1 => Resources.Load<GameObject>("Plants/Leafy Medium"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteral7F54B00DB61F3EE6DEF58161D074B5777975C954, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_31;
		goto IL_0137;
	}

IL_0124:
	{
		// 2 => Resources.Load<GameObject>("Plants/Leafy Large"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteralCDD7AC32C8C7867FF797F95C4F40C851A42352EC, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_32;
		goto IL_0137;
	}

IL_0132:
	{
		// _ => null,
		V_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_0137;
	}

IL_0137:
	{
		if (1)
		{
			goto IL_013b;
		}
	}
	{
	}

IL_013b:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_4;
		V_5 = L_33;
		goto IL_0146;
	}

IL_0141:
	{
		// return null;
		V_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_0146;
	}

IL_0146:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_5;
		return L_34;
	}
}
// System.Void FertilizationManager::StartFertilizing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FertilizationManager_StartFertilizing_m18CA5C2C61BDC3B45664364870DA08F22C508CED (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, const RuntimeMethod* method) 
{
	{
		// _emission = _Particles.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->____Particles_4;
		NullCheck(L_0);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_1;
		L_1 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_0, NULL);
		__this->____emission_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____emission_7))->___m_ParticleSystem_0), (void*)NULL);
		// _emission.enabled = true;
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* L_2 = (&__this->____emission_7);
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867(L_2, (bool)1, NULL);
		// _Particles.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->____Particles_4;
		NullCheck(L_3);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_3, NULL);
		// fertilizingStartTime = Time.time; // Record start time
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___fertilizingStartTime_12 = L_4;
		// isFertilizing = true;
		__this->___isFertilizing_13 = (bool)1;
		// }
		return;
	}
}
// System.Void FertilizationManager::StopFertilizing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FertilizationManager_StopFertilizing_m3F55E92F8EF2F9D3362286FE0734235B02302D9C (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, const RuntimeMethod* method) 
{
	{
		// _emission = _Particles.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->____Particles_4;
		NullCheck(L_0);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_1;
		L_1 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_0, NULL);
		__this->____emission_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____emission_7))->___m_ParticleSystem_0), (void*)NULL);
		// _emission.enabled = false;
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* L_2 = (&__this->____emission_7);
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867(L_2, (bool)0, NULL);
		// _Particles.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->____Particles_4;
		NullCheck(L_3);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_3, NULL);
		// isFertilizing = false;
		__this->___isFertilizing_13 = (bool)0;
		// }
		return;
	}
}
// System.Void FertilizationManager::AuthorizeFertilizing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FertilizationManager_AuthorizeFertilizing_m09895548C42D33DBB14ECD1D1B250E4B2B5FDE68 (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AuthorizationTimer());
		RuntimeObject* L_0;
		L_0 = FertilizationManager_AuthorizationTimer_m9054C96B2E4F7F8CAFDFCB003E77EA04909FCCFA(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FertilizationManager::AuthorizationTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FertilizationManager_AuthorizationTimer_m9054C96B2E4F7F8CAFDFCB003E77EA04909FCCFA (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951* L_0 = (U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951*)il2cpp_codegen_object_new(U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAuthorizationTimerU3Ed__18__ctor_m2AA7A31D0A34ACC3BD516604E79B22F112404BB1(L_0, 0, NULL);
		U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void FertilizationManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FertilizationManager__ctor_mFCD8CBFDDE2E8F2C3497FB2457636BBD8720F90E (FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* __this, const RuntimeMethod* method) 
{
	{
		// public float angleThreshold = 80f;
		__this->___angleThreshold_9 = (80.0f);
		// public int newstate = 0;
		__this->___newstate_10 = 0;
		// private bool isAuthorized = false;
		__this->___isAuthorized_11 = (bool)0;
		// private bool isFertilizing = false;
		__this->___isFertilizing_13 = (bool)0;
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
// System.Void FertilizationManager/<AuthorizationTimer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAuthorizationTimerU3Ed__18__ctor_m2AA7A31D0A34ACC3BD516604E79B22F112404BB1 (U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FertilizationManager/<AuthorizationTimer>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAuthorizationTimerU3Ed__18_System_IDisposable_Dispose_m4F50C12ED8362D0E1ADCFE5CA492D515A67284C8 (U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FertilizationManager/<AuthorizationTimer>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAuthorizationTimerU3Ed__18_MoveNext_mAFC127E3FE6ECB01DC4BAABA8157CAD188F7E90A (U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
		goto IL_0045;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isAuthorized = true;
		FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		L_3->___isAuthorized_11 = (bool)1;
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isAuthorized = false;
		FertilizationManager_t07C19A8577D8C6A744C583C951B9986AA7A9F543* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		L_5->___isAuthorized_11 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object FertilizationManager/<AuthorizationTimer>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAuthorizationTimerU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2D47D56023C65EEB13D250D002B02A6C651C369C (U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FertilizationManager/<AuthorizationTimer>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAuthorizationTimerU3Ed__18_System_Collections_IEnumerator_Reset_m7BE712F6B56D2B2E7FC61A2A9F8ABDD184C57AAE (U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAuthorizationTimerU3Ed__18_System_Collections_IEnumerator_Reset_m7BE712F6B56D2B2E7FC61A2A9F8ABDD184C57AAE_RuntimeMethod_var)));
	}
}
// System.Object FertilizationManager/<AuthorizationTimer>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAuthorizationTimerU3Ed__18_System_Collections_IEnumerator_get_Current_m05F95823FD6CF642F6D7B477ACD7B85B5F4A644C (U3CAuthorizationTimerU3Ed__18_tD14BFBB1C654EECA1297FC005208BD3ABE556951* __this, const RuntimeMethod* method) 
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
// System.Void Marker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marker_Start_m96C3FBAEBBAF923156504886D647F86DBE00B034 (Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m679574C59C3822BC7B6B36E6DBFA4C7AAF77620A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// raycastManager = FindObjectOfType<ARRaycastManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m679574C59C3822BC7B6B36E6DBFA4C7AAF77620A(Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m679574C59C3822BC7B6B36E6DBFA4C7AAF77620A_RuntimeMethod_var);
		__this->___raycastManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___raycastManager_4), (void*)L_0);
		// marker = transform.GetChild(0).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 0, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		__this->___marker_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___marker_5), (void*)L_3);
		// marker.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___marker_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Marker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marker_Update_m926A7C0279BB0BCC8D8CD73BC8BBA1573BA571F4 (Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		// var ray = new Vector2(Screen.width /2 ,Screen.height /2 );
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)((int32_t)(L_0/2))), ((float)((int32_t)(L_1/2))), NULL);
		// if (raycastManager.Raycast(ray,hits,TrackableType.Planes)) {
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_2 = __this->___raycastManager_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_4 = __this->___hits_6;
		NullCheck(L_2);
		bool L_5;
		L_5 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_2, L_3, L_4, ((int32_t)15), NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_008e;
		}
	}
	{
		// Pose hitPose = hits[0].pose;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = __this->___hits_6;
		NullCheck(L_7);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_8;
		L_8 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_7, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_3 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_3), NULL);
		V_2 = L_9;
		// transform.position = hitPose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11.___position_0;
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_12, NULL);
		// transform.rotation = hitPose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = L_14.___rotation_1;
		NullCheck(L_13);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_13, L_15, NULL);
		// if(!marker.activeInHierarchy){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___marker_5;
		NullCheck(L_16);
		bool L_17;
		L_17 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_16, NULL);
		V_4 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008d;
		}
	}
	{
		// marker.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___marker_5;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
	}

IL_008d:
	{
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void Marker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marker__ctor_m010D0D9D13AD4AD0B29E2EBDCFB39CEEFFB07648 (Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		__this->___hits_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hits_6), (void*)L_0);
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
// System.Void PlacementManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_Start_mCE29496CE2A2FFB54EF3A038B484084B10810BC4 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMarker_tB1A8D8178B44493B159F12E58FF83CFF59477876_mFBE941FF8ABD12154C3B94F378FC98DD457F7330_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// marker = FindObjectOfType<Marker>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* L_0;
		L_0 = Object_FindObjectOfType_TisMarker_tB1A8D8178B44493B159F12E58FF83CFF59477876_mFBE941FF8ABD12154C3B94F378FC98DD457F7330(Object_FindObjectOfType_TisMarker_tB1A8D8178B44493B159F12E58FF83CFF59477876_mFBE941FF8ABD12154C3B94F378FC98DD457F7330_RuntimeMethod_var);
		__this->___marker_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___marker_7), (void*)L_0);
		// arCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->___arCamera_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arCamera_4), (void*)L_1);
		// }
		return;
	}
}
// Marker PlacementManager::GetMarker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* PlacementManager_GetMarker_mF6AA6071B129750FFD715638C412B7D5781A4E12 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* V_0 = NULL;
	{
		// return marker;
		Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* L_0 = __this->___marker_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.List`1<Plant> PlacementManager::GetPlants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* PlacementManager_GetPlants_m9F6E843BFE540F72CE8707EC0DEE4CAA5778AFC9 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* V_0 = NULL;
	{
		// return Plants;
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_0 = __this->___Plants_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_1 = V_0;
		return L_1;
	}
}
// System.Void PlacementManager::UpdatePlantsList(System.Collections.Generic.List`1<Plant>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_UpdatePlantsList_mFFD3FC170E2B6F557BAA537D5A8412D55208B36A (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* ___newPlants0, const RuntimeMethod* method) 
{
	{
		// Plants = newPlants;
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_0 = ___newPlants0;
		__this->___Plants_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Plants_15), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlacementManager::setPlantToPlace(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_setPlantToPlace_mFE1C5DE6F6CD7F7A9AAB592E4C3B1545D8CDDB25 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plantPrefab0, const RuntimeMethod* method) 
{
	{
		// plantToPlace = plantPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___plantPrefab0;
		__this->___plantToPlace_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___plantToPlace_12), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlacementManager::PlaceCactus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_PlaceCactus_m3AE5BD13BFE6E8A88C004C47E0668D625878CE8C (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3BF183F619D39012AF8814AFA3C7B020FA26F1C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// setPlantToPlace(cactus);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cactus_8;
		PlacementManager_setPlantToPlace_mFE1C5DE6F6CD7F7A9AAB592E4C3B1545D8CDDB25(__this, L_0, NULL);
		// plantType = "Cactus";
		__this->___plantType_16 = _stringLiteralD3BF183F619D39012AF8814AFA3C7B020FA26F1C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___plantType_16), (void*)_stringLiteralD3BF183F619D39012AF8814AFA3C7B020FA26F1C);
		// }
		return;
	}
}
// System.Void PlacementManager::PlaceBush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_PlaceBush_m94F23135581137273188588165761BD15380DBBE (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBD498D1F3E76749ECD52BCA75BA0BA00E248DF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// setPlantToPlace(bush);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___bush_10;
		PlacementManager_setPlantToPlace_mFE1C5DE6F6CD7F7A9AAB592E4C3B1545D8CDDB25(__this, L_0, NULL);
		// plantType = "Bush";
		__this->___plantType_16 = _stringLiteralBBD498D1F3E76749ECD52BCA75BA0BA00E248DF1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___plantType_16), (void*)_stringLiteralBBD498D1F3E76749ECD52BCA75BA0BA00E248DF1);
		// }
		return;
	}
}
// System.Void PlacementManager::PlaceSucculent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_PlaceSucculent_m99C653246ACDB8DCDB6AC5503BDC655642D54023 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE70CC1F521AAB81F749E0271CC932FE4E1A9407);
		s_Il2CppMethodInitialized = true;
	}
	{
		// setPlantToPlace(succulent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___succulent_11;
		PlacementManager_setPlantToPlace_mFE1C5DE6F6CD7F7A9AAB592E4C3B1545D8CDDB25(__this, L_0, NULL);
		// plantType = "Succulent";
		__this->___plantType_16 = _stringLiteralCE70CC1F521AAB81F749E0271CC932FE4E1A9407;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___plantType_16), (void*)_stringLiteralCE70CC1F521AAB81F749E0271CC932FE4E1A9407);
		// }
		return;
	}
}
// System.Void PlacementManager::PlaceLeafy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_PlaceLeafy_mE32F1138CD40BF895664A851C1CE714FB7A91822 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41D97A03D527838DDCC85B81128FFAB7E4D16942);
		s_Il2CppMethodInitialized = true;
	}
	{
		// setPlantToPlace(leafy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___leafy_9;
		PlacementManager_setPlantToPlace_mFE1C5DE6F6CD7F7A9AAB592E4C3B1545D8CDDB25(__this, L_0, NULL);
		// plantType = "Leafy";
		__this->___plantType_16 = _stringLiteral41D97A03D527838DDCC85B81128FFAB7E4D16942;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___plantType_16), (void*)_stringLiteral41D97A03D527838DDCC85B81128FFAB7E4D16942);
		// }
		return;
	}
}
// System.Void PlacementManager::PreviewPlant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_PreviewPlant_m450573EF741495DB09848C4D51EBF14DF1B771EE (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (plantToPlace == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___plantToPlace_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_0063;
	}

IL_0014:
	{
		// if (previewedPlant != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___previewedPlant_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// Destroy(previewedPlant);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___previewedPlant_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
	}

IL_0032:
	{
		// previewedPlant = Instantiate(plantToPlace, marker.transform.position, marker.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___plantToPlace_12;
		Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* L_8 = __this->___marker_7;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* L_11 = __this->___marker_7;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_7, L_10, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___previewedPlant_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previewedPlant_13), (void*)L_14);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void PlacementManager::PlacePlant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_PlacePlant_m6EBED6F50AC5C21E0930DF994B385D2FEC7F6004 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m76710F2F154752EB162C5C5D6E2FAF007A4DA876_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// if (plantToPlace == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___plantToPlace_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		goto IL_00ed;
	}

IL_0017:
	{
		// if (previewedPlant != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___previewedPlant_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0097;
		}
	}
	{
		// placedPlant = previewedPlant;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___previewedPlant_13;
		__this->___placedPlant_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedPlant_14), (void*)L_6);
		// GameObject plant = Instantiate(placedPlant, marker.transform.position, marker.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___placedPlant_14;
		Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* L_8 = __this->___marker_7;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* L_11 = __this->___marker_7;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_7, L_10, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_2 = L_14;
		// Plants.Add(new Plant(plant, 0, plantType,0,0,0));
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_15 = __this->___Plants_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_2;
		String_t* L_17 = __this->___plantType_16;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_18 = (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72*)il2cpp_codegen_object_new(Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Plant__ctor_mAC07B3CC4C99AD1AB9D2C12959110534160296EB(L_18, L_16, 0, L_17, (0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_15);
		List_1_Add_m76710F2F154752EB162C5C5D6E2FAF007A4DA876_inline(L_15, L_18, List_1_Add_m76710F2F154752EB162C5C5D6E2FAF007A4DA876_RuntimeMethod_var);
		// Destroy(previewedPlant);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___previewedPlant_13;
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_19, NULL);
		goto IL_00ed;
	}

IL_0097:
	{
		// GameObject plant = Instantiate(plantToPlace, marker.transform.position, marker.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___plantToPlace_12;
		Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* L_21 = __this->___marker_7;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Marker_tB1A8D8178B44493B159F12E58FF83CFF59477876* L_24 = __this->___marker_7;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		NullCheck(L_25);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_20, L_23, L_26, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_3 = L_27;
		// Plants.Add(new Plant(plant, 0, plantType,0,0,0));
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_28 = __this->___Plants_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_3;
		String_t* L_30 = __this->___plantType_16;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_31 = (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72*)il2cpp_codegen_object_new(Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Plant__ctor_mAC07B3CC4C99AD1AB9D2C12959110534160296EB(L_31, L_29, 0, L_30, (0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_28);
		List_1_Add_m76710F2F154752EB162C5C5D6E2FAF007A4DA876_inline(L_28, L_31, List_1_Add_m76710F2F154752EB162C5C5D6E2FAF007A4DA876_RuntimeMethod_var);
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void PlacementManager::RemovePlants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_RemovePlants_m2EBF76C773047D6D390C2AD4C91541A283E24F04 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m879882BDF7B37E2AF12BC36B61F5A64778D57625_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3196F6327B2907868F33A631726245D2F00748FF);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// GameObject[] plantsInScene = GameObject.FindGameObjectsWithTag("Plant");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral3196F6327B2907868F33A631726245D2F00748FF, NULL);
		V_0 = L_0;
		// foreach (GameObject plantObject in plantsInScene)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0024;
	}

IL_0013:
	{
		// foreach (GameObject plantObject in plantsInScene)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// Destroy(plantObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0024:
	{
		// foreach (GameObject plantObject in plantsInScene)
		int32_t L_8 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// Plants.Clear();
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_10 = __this->___Plants_15;
		NullCheck(L_10);
		List_1_Clear_m879882BDF7B37E2AF12BC36B61F5A64778D57625_inline(L_10, List_1_Clear_m879882BDF7B37E2AF12BC36B61F5A64778D57625_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlacementManager::DisplayPlants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_DisplayPlants_mF55F9193D8ACFB010A86E5E32B1E2E4D1505B977 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE183471EB287CC1E8177AE5C5B902770589C7619_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3CDisplayPlantsU3Eb__0_m5D911D54CDFE5D165127EE9B18501E4FAB603200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F8E745998256DA98BCA2676CEC2127A6D188805);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43A61D134AE4233CA9F0CA02724B923697659772);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48DBE08C911EFBD882A9A76FDBC50E2D6E66297C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C7112F93180F78AF9D815BBA70F7CEDFEE63202);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7141BC5418DC7B0A1249580D0852A32D6AE693BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EB247CDE2FAF7E707CF3EE4BB5FFCE2B0341933);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACBE462DFB9823A4CA721D486BF624EB91DB2E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBD498D1F3E76749ECD52BCA75BA0BA00E248DF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD7826F6336BE0E24140B2B2EDC068A1F04FAD78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1F4C70A7199251884DC974D87FCDAF871FCA7BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC798AA17D6CEECDDA041D2389B88C0B791F319F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE70CC1F521AAB81F749E0271CC932FE4E1A9407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3BF183F619D39012AF8814AFA3C7B020FA26F1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE34DD841A7AA7A59720C93F598513A72B80EB989);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE90B3FD05322B9BC016B260EB1335370FDAE2F8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC79C9E4F403ACDF4E511F936DF416F4FA17FE5C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Enumerator_tFB14A623119D7631666111368A3F34032EB1883A V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* V_5 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_7 = NULL;
	float V_8 = 0.0f;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_12 = NULL;
	bool V_13 = false;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_14 = NULL;
	bool V_15 = false;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_16 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_17 = NULL;
	{
		// Debug.Log("Displaying plants, count: " + Plants.Count);
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_0 = __this->___Plants_15;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mE183471EB287CC1E8177AE5C5B902770589C7619_inline(L_0, List_1_get_Count_mE183471EB287CC1E8177AE5C5B902770589C7619_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral0F8E745998256DA98BCA2676CEC2127A6D188805, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_3, NULL);
		// if (panel != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___panel_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_007b;
		}
	}
	{
		// panel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___panel_5;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// for (int i = plantListParent.childCount - 1; i >= 0; i--)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___plantListParent_22;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_8, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_006f;
	}

IL_0052:
	{
		// DestroyImmediate(plantListParent.GetChild(i).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___plantListParent_22;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, L_11, NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_13, NULL);
		// for (int i = plantListParent.childCount - 1; i >= 0; i--)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_006f:
	{
		// for (int i = plantListParent.childCount - 1; i >= 0; i--)
		int32_t L_15 = V_2;
		V_3 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0052;
		}
	}
	{
	}

IL_007b:
	{
		// foreach (Plant plant in Plants)
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_17 = __this->___Plants_15;
		NullCheck(L_17);
		Enumerator_tFB14A623119D7631666111368A3F34032EB1883A L_18;
		L_18 = List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F(L_17, List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F_RuntimeMethod_var);
		V_4 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0392:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C((&V_4), Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0384_1;
			}

IL_008e_1:
			{
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_19 = (U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2_il2cpp_TypeInfo_var);
				NullCheck(L_19);
				U3CU3Ec__DisplayClass31_0__ctor_m01DF901CA13DD7DB7A21A9AE6B1445A7AC79C7E3(L_19, NULL);
				V_5 = L_19;
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_20 = V_5;
				NullCheck(L_20);
				L_20->___U3CU3E4__this_1 = __this;
				Il2CppCodeGenWriteBarrier((void**)(&L_20->___U3CU3E4__this_1), (void*)__this);
				// foreach (Plant plant in Plants)
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_21 = V_5;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_22;
				L_22 = Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_inline((&V_4), Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_RuntimeMethod_var);
				NullCheck(L_21);
				L_21->___plant_0 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&L_21->___plant_0), (void*)L_22);
				// Debug.Log("Creating plant item in UI for: " + plant.Type);
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_23 = V_5;
				NullCheck(L_23);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_24 = L_23->___plant_0;
				NullCheck(L_24);
				String_t* L_25;
				L_25 = Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline(L_24, NULL);
				String_t* L_26;
				L_26 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7EB247CDE2FAF7E707CF3EE4BB5FFCE2B0341933, L_25, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_26, NULL);
				// GameObject item = Instantiate(plantListItemPrefab, plantListParent);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___plantListItemPrefab_21;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___plantListParent_22;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
				L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_27, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
				V_6 = L_29;
				// item.transform.Find("Name").GetComponent<TextMeshProUGUI>().text =  "Name : " +  plant.Type;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_6;
				NullCheck(L_30);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
				L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
				NullCheck(L_31);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
				L_32 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_31, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, NULL);
				NullCheck(L_32);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_33;
				L_33 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_32, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_34 = V_5;
				NullCheck(L_34);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_35 = L_34->___plant_0;
				NullCheck(L_35);
				String_t* L_36;
				L_36 = Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline(L_35, NULL);
				String_t* L_37;
				L_37 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7141BC5418DC7B0A1249580D0852A32D6AE693BC, L_36, NULL);
				NullCheck(L_33);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_33, L_37);
				// item.transform.Find("Water").GetComponent<TextMeshProUGUI>().text = "Water : " + plant.Water.ToString() + " %";
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_6;
				NullCheck(L_38);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
				L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
				NullCheck(L_39);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
				L_40 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_39, _stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6, NULL);
				NullCheck(L_40);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_41;
				L_41 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_40, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_42 = V_5;
				NullCheck(L_42);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_43 = L_42->___plant_0;
				NullCheck(L_43);
				float L_44;
				L_44 = Plant_get_Water_m4EEABAAD7ACBF4038AB57262D8EF74ECF5AD5AF0_inline(L_43, NULL);
				V_8 = L_44;
				String_t* L_45;
				L_45 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_8), NULL);
				String_t* L_46;
				L_46 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral48DBE08C911EFBD882A9A76FDBC50E2D6E66297C, L_45, _stringLiteralEC79C9E4F403ACDF4E511F936DF416F4FA17FE5C, NULL);
				NullCheck(L_41);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_41, L_46);
				// item.transform.Find("Food").GetComponent<TextMeshProUGUI>().text =  "Food : " + plant.Fertilizer.ToString() + " %";
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = V_6;
				NullCheck(L_47);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
				L_48 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_47, NULL);
				NullCheck(L_48);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
				L_49 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_48, _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, NULL);
				NullCheck(L_49);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_50;
				L_50 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_49, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_51 = V_5;
				NullCheck(L_51);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_52 = L_51->___plant_0;
				NullCheck(L_52);
				float L_53;
				L_53 = Plant_get_Fertilizer_m8CC683BE83CE3048F014A54ABF9C5A693418DE5D_inline(L_52, NULL);
				V_8 = L_53;
				String_t* L_54;
				L_54 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_8), NULL);
				String_t* L_55;
				L_55 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralBD7826F6336BE0E24140B2B2EDC068A1F04FAD78, L_54, _stringLiteralEC79C9E4F403ACDF4E511F936DF416F4FA17FE5C, NULL);
				NullCheck(L_50);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_50, L_55);
				// item.transform.Find("Sun").GetComponent<TextMeshProUGUI>().text =   "Light : " + plant.Sun.ToString() + " %";
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_6;
				NullCheck(L_56);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
				L_57 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_56, NULL);
				NullCheck(L_57);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
				L_58 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_57, _stringLiteralE90B3FD05322B9BC016B260EB1335370FDAE2F8D, NULL);
				NullCheck(L_58);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_59;
				L_59 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_58, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_60 = V_5;
				NullCheck(L_60);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_61 = L_60->___plant_0;
				NullCheck(L_61);
				float L_62;
				L_62 = Plant_get_Sun_m2F8BF7851204E5A77563A5A6F9490336E58731AE_inline(L_61, NULL);
				V_8 = L_62;
				String_t* L_63;
				L_63 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_8), NULL);
				String_t* L_64;
				L_64 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral4C7112F93180F78AF9D815BBA70F7CEDFEE63202, L_63, _stringLiteralEC79C9E4F403ACDF4E511F936DF416F4FA17FE5C, NULL);
				NullCheck(L_59);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_59, L_64);
				// item.GetComponent<Button>().onClick.AddListener(() => OnPlantListItemClick(plant));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = V_6;
				NullCheck(L_65);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_66;
				L_66 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_65, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
				NullCheck(L_66);
				ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_67;
				L_67 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_66, NULL);
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_68 = V_5;
				UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_69 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
				NullCheck(L_69);
				UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_69, L_68, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3CDisplayPlantsU3Eb__0_m5D911D54CDFE5D165127EE9B18501E4FAB603200_RuntimeMethod_var), NULL);
				NullCheck(L_67);
				UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_67, L_69, NULL);
				// TextMeshProUGUI etatText = item.transform.Find("Etat").GetComponent<TextMeshProUGUI>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = V_6;
				NullCheck(L_70);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
				L_71 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_70, NULL);
				NullCheck(L_71);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
				L_72 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_71, _stringLiteralC1F4C70A7199251884DC974D87FCDAF871FCA7BF, NULL);
				NullCheck(L_72);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_73;
				L_73 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_72, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
				V_7 = L_73;
				// if (plant.State == 0 )
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_74 = V_5;
				NullCheck(L_74);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_75 = L_74->___plant_0;
				NullCheck(L_75);
				int32_t L_76;
				L_76 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_75, NULL);
				V_9 = (bool)((((int32_t)L_76) == ((int32_t)0))? 1 : 0);
				bool L_77 = V_9;
				if (!L_77)
				{
					goto IL_0237_1;
				}
			}
			{
				// etatText.text = "State : Small";
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_78 = V_7;
				NullCheck(L_78);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_78, _stringLiteralACBE462DFB9823A4CA721D486BF624EB91DB2E92);
				// etatText.color = Color.red;
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_79 = V_7;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_80;
				L_80 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
				NullCheck(L_79);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_79, L_80);
				goto IL_0286_1;
			}

IL_0237_1:
			{
				// else if (plant.State == 1)
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_81 = V_5;
				NullCheck(L_81);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_82 = L_81->___plant_0;
				NullCheck(L_82);
				int32_t L_83;
				L_83 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_82, NULL);
				V_10 = (bool)((((int32_t)L_83) == ((int32_t)1))? 1 : 0);
				bool L_84 = V_10;
				if (!L_84)
				{
					goto IL_026a_1;
				}
			}
			{
				// etatText.text = "State : Medium";
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_85 = V_7;
				NullCheck(L_85);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_85, _stringLiteralC798AA17D6CEECDDA041D2389B88C0B791F319F2);
				// etatText.color = Color.yellow;
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_86 = V_7;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87;
				L_87 = Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline(NULL);
				NullCheck(L_86);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_86, L_87);
				goto IL_0286_1;
			}

IL_026a_1:
			{
				// etatText.text = "State : Large";
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_88 = V_7;
				NullCheck(L_88);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_88, _stringLiteralE34DD841A7AA7A59720C93F598513A72B80EB989);
				// etatText.color = Color.green;
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_89 = V_7;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_90;
				L_90 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
				NullCheck(L_89);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_89, L_90);
			}

IL_0286_1:
			{
				// if (plant.Type == "Succulent")
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_91 = V_5;
				NullCheck(L_91);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_92 = L_91->___plant_0;
				NullCheck(L_92);
				String_t* L_93;
				L_93 = Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline(L_92, NULL);
				bool L_94;
				L_94 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_93, _stringLiteralCE70CC1F521AAB81F749E0271CC932FE4E1A9407, NULL);
				V_11 = L_94;
				bool L_95 = V_11;
				if (!L_95)
				{
					goto IL_02cf_1;
				}
			}
			{
				// Image plantImage = item.transform.Find("PlantImg").GetComponent<Image>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = V_6;
				NullCheck(L_96);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
				L_97 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_96, NULL);
				NullCheck(L_97);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
				L_98 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_97, _stringLiteral43A61D134AE4233CA9F0CA02724B923697659772, NULL);
				NullCheck(L_98);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_99;
				L_99 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_98, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
				V_12 = L_99;
				// plantImage.sprite = succulentSprite;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_100 = V_12;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_101 = __this->___succulentSprite_17;
				NullCheck(L_100);
				Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_100, L_101, NULL);
				goto IL_0383_1;
			}

IL_02cf_1:
			{
				// else if (plant.Type == "Bush")
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_102 = V_5;
				NullCheck(L_102);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_103 = L_102->___plant_0;
				NullCheck(L_103);
				String_t* L_104;
				L_104 = Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline(L_103, NULL);
				bool L_105;
				L_105 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_104, _stringLiteralBBD498D1F3E76749ECD52BCA75BA0BA00E248DF1, NULL);
				V_13 = L_105;
				bool L_106 = V_13;
				if (!L_106)
				{
					goto IL_0315_1;
				}
			}
			{
				// Image plantImage = item.transform.Find("PlantImg").GetComponent<Image>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = V_6;
				NullCheck(L_107);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
				L_108 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_107, NULL);
				NullCheck(L_108);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109;
				L_109 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_108, _stringLiteral43A61D134AE4233CA9F0CA02724B923697659772, NULL);
				NullCheck(L_109);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_110;
				L_110 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_109, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
				V_14 = L_110;
				// plantImage.sprite = bushSprite;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_111 = V_14;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_112 = __this->___bushSprite_18;
				NullCheck(L_111);
				Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_111, L_112, NULL);
				goto IL_0383_1;
			}

IL_0315_1:
			{
				// else if (plant.Type == "Cactus")
				U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* L_113 = V_5;
				NullCheck(L_113);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_114 = L_113->___plant_0;
				NullCheck(L_114);
				String_t* L_115;
				L_115 = Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline(L_114, NULL);
				bool L_116;
				L_116 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_115, _stringLiteralD3BF183F619D39012AF8814AFA3C7B020FA26F1C, NULL);
				V_15 = L_116;
				bool L_117 = V_15;
				if (!L_117)
				{
					goto IL_035b_1;
				}
			}
			{
				// Image plantImage = item.transform.Find("PlantImg").GetComponent<Image>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_118 = V_6;
				NullCheck(L_118);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_119;
				L_119 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_118, NULL);
				NullCheck(L_119);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_120;
				L_120 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_119, _stringLiteral43A61D134AE4233CA9F0CA02724B923697659772, NULL);
				NullCheck(L_120);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_121;
				L_121 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_120, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
				V_16 = L_121;
				// plantImage.sprite = cactusSprite;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_122 = V_16;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_123 = __this->___cactusSprite_19;
				NullCheck(L_122);
				Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_122, L_123, NULL);
				goto IL_0383_1;
			}

IL_035b_1:
			{
				// Image plantImage = item.transform.Find("PlantImg").GetComponent<Image>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124 = V_6;
				NullCheck(L_124);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
				L_125 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_124, NULL);
				NullCheck(L_125);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
				L_126 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_125, _stringLiteral43A61D134AE4233CA9F0CA02724B923697659772, NULL);
				NullCheck(L_126);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_127;
				L_127 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_126, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
				V_17 = L_127;
				// plantImage.sprite = defaultSprite;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_128 = V_17;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_129 = __this->___defaultSprite_20;
				NullCheck(L_128);
				Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_128, L_129, NULL);
			}

IL_0383_1:
			{
			}

IL_0384_1:
			{
				// foreach (Plant plant in Plants)
				bool L_130;
				L_130 = Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312((&V_4), Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312_RuntimeMethod_var);
				if (L_130)
				{
					goto IL_008e_1;
				}
			}
			{
				goto IL_03a1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03a1:
	{
		// LayoutRebuilder.ForceRebuildLayoutImmediate(plantListParent.GetComponent<RectTransform>());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_131 = __this->___plantListParent_22;
		NullCheck(L_131);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_132;
		L_132 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_131, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		LayoutRebuilder_ForceRebuildLayoutImmediate_m1DFB9F055F838E4CB32A471460AEA23D85DA8B57(L_132, NULL);
		// }
		return;
	}
}
// System.Void PlacementManager::PointArrowAtPlant(Plant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_PointArrowAtPlant_mA5AA93CC0AD218E5A1512404D9B9A94AA9563485 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___plant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	bool V_3 = false;
	{
		// if (plant.Arrow != null)
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_0 = ___plant0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Plant_get_Arrow_m13E3D3846A280CD6D8465C00D0811AE1B20476B2_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// Destroy(plant.Arrow);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_4 = ___plant0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Plant_get_Arrow_m13E3D3846A280CD6D8465C00D0811AE1B20476B2_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
	}

IL_001f:
	{
		// float heightOffset = 1.2f; // This value determines how high above the plant the arrow will be
		V_0 = (1.20000005f);
		// Vector3 arrowPosition = plant.GameObject.transform.position + Vector3.up * heightOffset;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_6 = ___plant0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Plant_get_GameObject_mC89686197500761406F094216C8CC2BC0B1F7537_inline(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_9, L_12, NULL);
		V_1 = L_13;
		// GameObject arrow = Instantiate(arrowPrefab, arrowPosition, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___arrowPrefab_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_14, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_2 = L_17;
		// arrow.transform.rotation = Quaternion.Euler(0, 0, 90);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_2;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (90.0f), NULL);
		NullCheck(L_19);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_19, L_20, NULL);
		// plant.Arrow = arrow;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_21 = ___plant0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_2;
		NullCheck(L_21);
		Plant_set_Arrow_m76C23A888F46DBC54E72F7AC123ADB1D54F8A2F3_inline(L_21, L_22, NULL);
		// }
		return;
	}
}
// System.Void PlacementManager::OnPlantListItemClick(Plant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_OnPlantListItemClick_m5EC3F5D23A9B0359F0C85ACA930F4E580066352E (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___plant0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFB14A623119D7631666111368A3F34032EB1883A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// PointArrowAtPlant(plant);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_0 = ___plant0;
		PlacementManager_PointArrowAtPlant_mA5AA93CC0AD218E5A1512404D9B9A94AA9563485(__this, L_0, NULL);
		// foreach (var otherPlant in Plants)
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_1 = __this->___Plants_15;
		NullCheck(L_1);
		Enumerator_tFB14A623119D7631666111368A3F34032EB1883A L_2;
		L_2 = List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F(L_1, List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C((&V_0), Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005d_1;
			}

IL_0018_1:
			{
				// foreach (var otherPlant in Plants)
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_3;
				L_3 = Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_inline((&V_0), Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_RuntimeMethod_var);
				V_1 = L_3;
				// if (otherPlant != plant)
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_4 = V_1;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_5 = ___plant0;
				V_2 = (bool)((((int32_t)((((RuntimeObject*)(Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72*)L_4) == ((RuntimeObject*)(Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72*)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_005c_1;
				}
			}
			{
				// if (otherPlant.Arrow != null)
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_7 = V_1;
				NullCheck(L_7);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Plant_get_Arrow_m13E3D3846A280CD6D8465C00D0811AE1B20476B2_inline(L_7, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_0053_1;
				}
			}
			{
				// Destroy(otherPlant.Arrow);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_11 = V_1;
				NullCheck(L_11);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = Plant_get_Arrow_m13E3D3846A280CD6D8465C00D0811AE1B20476B2_inline(L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_12, NULL);
				// otherPlant.Arrow = null;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_13 = V_1;
				NullCheck(L_13);
				Plant_set_Arrow_m76C23A888F46DBC54E72F7AC123ADB1D54F8A2F3_inline(L_13, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
			}

IL_0053_1:
			{
				// otherPlant.IsSelected = false; // Deselect other plants
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_14 = V_1;
				NullCheck(L_14);
				Plant_set_IsSelected_mEA3896B8ADFCB80BA94C083C8D9EC9E4C9ED8F59_inline(L_14, (bool)0, NULL);
			}

IL_005c_1:
			{
			}

IL_005d_1:
			{
				// foreach (var otherPlant in Plants)
				bool L_15;
				L_15 = Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312((&V_0), Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0077;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		// plant.IsSelected = true;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_16 = ___plant0;
		NullCheck(L_16);
		Plant_set_IsSelected_mEA3896B8ADFCB80BA94C083C8D9EC9E4C9ED8F59_inline(L_16, (bool)1, NULL);
		// HidePanel(); // Hide the UI panel after selection
		PlacementManager_HidePanel_mD9FA965433FF4F1E786CC81627307270A511095F(__this, NULL);
		// }
		return;
	}
}
// System.Void PlacementManager::HidePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_HidePanel_mD9FA965433FF4F1E786CC81627307270A511095F (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (panel != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___panel_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// panel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___panel_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void PlacementManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager__ctor_mD9CB28CCE5FC117220871AE96FB05439A48912C1 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3723A564E5DDF5C305727AFD5943D437643A9A8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Plant> Plants = new List<Plant>();
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_0 = (List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5*)il2cpp_codegen_object_new(List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3723A564E5DDF5C305727AFD5943D437643A9A8F(L_0, List_1__ctor_m3723A564E5DDF5C305727AFD5943D437643A9A8F_RuntimeMethod_var);
		__this->___Plants_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Plants_15), (void*)L_0);
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
// System.Void PlacementManager/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m01DF901CA13DD7DB7A21A9AE6B1445A7AC79C7E3 (U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PlacementManager/<>c__DisplayClass31_0::<DisplayPlants>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CDisplayPlantsU3Eb__0_m5D911D54CDFE5D165127EE9B18501E4FAB603200 (U3CU3Ec__DisplayClass31_0_tD5B55857A28A38450EE43909B4DD214DE5246FB2* __this, const RuntimeMethod* method) 
{
	{
		// item.GetComponent<Button>().onClick.AddListener(() => OnPlantListItemClick(plant));
		PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* L_0 = __this->___U3CU3E4__this_1;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_1 = __this->___plant_0;
		NullCheck(L_0);
		PlacementManager_OnPlantListItemClick_m5EC3F5D23A9B0359F0C85ACA930F4E580066352E(L_0, L_1, NULL);
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
// UnityEngine.GameObject Plant::get_GameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Plant_get_GameObject_mC89686197500761406F094216C8CC2BC0B1F7537 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObject { get;set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CGameObjectU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Plant::set_GameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_set_GameObject_mD5D1A5BB45857C30EBCE8D52151BADE8DC67793B (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObject { get;set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CGameObjectU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameObjectU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 Plant::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public int State { get;set; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Plant::set_State(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_set_State_mDA648AF407FCFA002B8622D103EF345E1325190F (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int State { get;set; }
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String Plant::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Single Plant::get_Water()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plant_get_Water_m4EEABAAD7ACBF4038AB57262D8EF74ECF5AD5AF0 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public float Water {get;set;}
		float L_0 = __this->___U3CWaterU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Plant::set_Water(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_set_Water_mA0EBF9CCF066CBFC9901C3DF4760D13263783A3D (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Water {get;set;}
		float L_0 = ___value0;
		__this->___U3CWaterU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Single Plant::get_Sun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plant_get_Sun_m2F8BF7851204E5A77563A5A6F9490336E58731AE (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public float Sun{get;set;}
		float L_0 = __this->___U3CSunU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Plant::set_Sun(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_set_Sun_m0790C03396CB42A147DED805F067252B65186391 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Sun{get;set;}
		float L_0 = ___value0;
		__this->___U3CSunU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Single Plant::get_Fertilizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plant_get_Fertilizer_m8CC683BE83CE3048F014A54ABF9C5A693418DE5D (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public float Fertilizer{get;set;}
		float L_0 = __this->___U3CFertilizerU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Plant::set_Fertilizer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_set_Fertilizer_mB0BF51A7FB0ABFB21602C7471D2405C86789F1DB (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Fertilizer{get;set;}
		float L_0 = ___value0;
		__this->___U3CFertilizerU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.GameObject Plant::get_Arrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Plant_get_Arrow_m13E3D3846A280CD6D8465C00D0811AE1B20476B2 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Arrow { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CArrowU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Plant::set_Arrow(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_set_Arrow_m76C23A888F46DBC54E72F7AC123ADB1D54F8A2F3 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject Arrow { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CArrowU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArrowU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Boolean Plant::get_IsSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plant_get_IsSelected_m494151718F4AA58168E6C6A9E9575A5FDEB9541C (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSelected { get; set; } // To track if the plant is selected
		bool L_0 = __this->___U3CIsSelectedU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Plant::set_IsSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_set_IsSelected_mEA3896B8ADFCB80BA94C083C8D9EC9E4C9ED8F59 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsSelected { get; set; } // To track if the plant is selected
		bool L_0 = ___value0;
		__this->___U3CIsSelectedU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void Plant::.ctor(UnityEngine.GameObject,System.Int32,System.String,System.Single,System.Single,System.Single,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant__ctor_m2F0F7BC07CDF737DEA70C1A8982A6094C672FA18 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, int32_t ___state1, String_t* ___type2, float ___water3, float ___sun4, float ___fertilizer5, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arrow6, const RuntimeMethod* method) 
{
	{
		// public Plant(GameObject gameObject, int state, string type, float water, float sun, float fertilizer, GameObject arrow)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// GameObject = gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		Plant_set_GameObject_mD5D1A5BB45857C30EBCE8D52151BADE8DC67793B_inline(__this, L_0, NULL);
		// State = state;
		int32_t L_1 = ___state1;
		Plant_set_State_mDA648AF407FCFA002B8622D103EF345E1325190F_inline(__this, L_1, NULL);
		// Type = type;
		String_t* L_2 = ___type2;
		__this->___U3CTypeU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_2), (void*)L_2);
		// Water = water;
		float L_3 = ___water3;
		Plant_set_Water_mA0EBF9CCF066CBFC9901C3DF4760D13263783A3D_inline(__this, L_3, NULL);
		// Sun = sun;
		float L_4 = ___sun4;
		Plant_set_Sun_m0790C03396CB42A147DED805F067252B65186391_inline(__this, L_4, NULL);
		// Fertilizer = fertilizer;
		float L_5 = ___fertilizer5;
		Plant_set_Fertilizer_mB0BF51A7FB0ABFB21602C7471D2405C86789F1DB_inline(__this, L_5, NULL);
		// Arrow = arrow;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___arrow6;
		Plant_set_Arrow_m76C23A888F46DBC54E72F7AC123ADB1D54F8A2F3_inline(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void Plant::.ctor(UnityEngine.GameObject,System.Int32,System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant__ctor_mAC07B3CC4C99AD1AB9D2C12959110534160296EB (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, int32_t ___state1, String_t* ___type2, float ___water3, float ___sun4, float ___fertilizer5, const RuntimeMethod* method) 
{
	{
		// public Plant(GameObject gameObject, int state, string type, float water, float sun, float fertilizer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// GameObject = gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		Plant_set_GameObject_mD5D1A5BB45857C30EBCE8D52151BADE8DC67793B_inline(__this, L_0, NULL);
		// State = state;
		int32_t L_1 = ___state1;
		Plant_set_State_mDA648AF407FCFA002B8622D103EF345E1325190F_inline(__this, L_1, NULL);
		// Type = type;
		String_t* L_2 = ___type2;
		__this->___U3CTypeU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_2), (void*)L_2);
		// Water = water;
		float L_3 = ___water3;
		Plant_set_Water_mA0EBF9CCF066CBFC9901C3DF4760D13263783A3D_inline(__this, L_3, NULL);
		// Sun = sun;
		float L_4 = ___sun4;
		Plant_set_Sun_m0790C03396CB42A147DED805F067252B65186391_inline(__this, L_4, NULL);
		// Fertilizer = fertilizer;
		float L_5 = ___fertilizer5;
		Plant_set_Fertilizer_mB0BF51A7FB0ABFB21602C7471D2405C86789F1DB_inline(__this, L_5, NULL);
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
// System.Void PlantDataHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlantDataHandler_Start_m9BADBFF21C41CDC5CC69C2B363F55B12314F3CAF (PlantDataHandler_tE9D76B50A1B7582A4310D9B5D83411E13D977A6B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlantDataHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlantDataHandler_Update_mD04E6AB9187E1B2B39B66B1F8093C36FFE41604A (PlantDataHandler_tE9D76B50A1B7582A4310D9B5D83411E13D977A6B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlantDataHandler::SavePlantList(System.Collections.Generic.List`1<Plant>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlantDataHandler_SavePlantList_m4CF58F6E263904947B207364A953C4ECD8B84BF0 (PlantDataHandler_tE9D76B50A1B7582A4310D9B5D83411E13D977A6B* __this, List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* ___plantList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DD7AC9D1AE395B5ECFCF2A62384BA57E0A86DCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AB6BF3A6BC53F858889FB2993BB8BBB90E2C88A);
		s_Il2CppMethodInitialized = true;
	}
	PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// PlantListWrapper wrapper = new PlantListWrapper { plantList = plantList };
		PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0* L_0 = (PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0*)il2cpp_codegen_object_new(PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlantListWrapper__ctor_mE5310E97136DC6E8513A5699B56DB0575C025596(L_0, NULL);
		PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0* L_1 = L_0;
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_2 = ___plantList0;
		NullCheck(L_1);
		L_1->___plantList_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___plantList_0), (void*)L_2);
		V_0 = L_1;
		// string jsonData = JsonUtility.ToJson(wrapper);
		PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0* L_3 = V_0;
		String_t* L_4;
		L_4 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_3, NULL);
		V_1 = L_4;
		// PlayerPrefs.SetString("PLANTLIST", jsonData);
		String_t* L_5 = V_1;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral4AB6BF3A6BC53F858889FB2993BB8BBB90E2C88A, L_5, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		// Debug.Log("Plant list saved to PlayerPrefs.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral3DD7AC9D1AE395B5ECFCF2A62384BA57E0A86DCB, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Plant> PlantDataHandler::LoadPlantList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* PlantDataHandler_LoadPlantList_mB0C124A8A5795015DF723D73D50EF008141B3B68 (PlantDataHandler_tE9D76B50A1B7582A4310D9B5D83411E13D977A6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0_m4BB4F2408FB5EAF5C5023E337C74C43170CB09D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AB6BF3A6BC53F858889FB2993BB8BBB90E2C88A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0* V_1 = NULL;
	List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* V_2 = NULL;
	{
		// string jsonData = PlayerPrefs.GetString("PLANTLIST");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral4AB6BF3A6BC53F858889FB2993BB8BBB90E2C88A, NULL);
		V_0 = L_0;
		// PlantListWrapper wrapper = JsonUtility.FromJson<PlantListWrapper>(jsonData);
		String_t* L_1 = V_0;
		PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0* L_2;
		L_2 = JsonUtility_FromJson_TisPlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0_m4BB4F2408FB5EAF5C5023E337C74C43170CB09D2(L_1, JsonUtility_FromJson_TisPlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0_m4BB4F2408FB5EAF5C5023E337C74C43170CB09D2_RuntimeMethod_var);
		V_1 = L_2;
		// return wrapper.plantList;
		PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0* L_3 = V_1;
		NullCheck(L_3);
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_4 = L_3->___plantList_0;
		V_2 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_5 = V_2;
		return L_5;
	}
}
// System.Void PlantDataHandler::DeletePlantList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlantDataHandler_DeletePlantList_m0BF7A967AD00B4F9F5279B5E2D5F1D5DB49D7951 (PlantDataHandler_tE9D76B50A1B7582A4310D9B5D83411E13D977A6B* __this, const RuntimeMethod* method) 
{
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mBB63C28A69EA934DC7DF12336F8D5341BF6CA521(NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		// }
		return;
	}
}
// System.Void PlantDataHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlantDataHandler__ctor_m54E8447C65F453AC416ACDA667FCD10074B7184A (PlantDataHandler_tE9D76B50A1B7582A4310D9B5D83411E13D977A6B* __this, const RuntimeMethod* method) 
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
// System.Void PlantDataHandler/PlantListWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlantListWrapper__ctor_mE5310E97136DC6E8513A5699B56DB0575C025596 (PlantListWrapper_t1A07F63B328EEE74A072A430A4821656BE2293A0* __this, const RuntimeMethod* method) 
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
// System.Void WateringManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringManager_Start_mE1E9F83AC4254F4A2B89D85EA1F0566B5787EFCB (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_mAC48A684B88D3720E4A8568C780DFD974B7A8E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _Particles.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->____Particles_4;
		NullCheck(L_0);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_0, NULL);
		// placementManager = FindObjectOfType<PlacementManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* L_1;
		L_1 = Object_FindObjectOfType_TisPlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_mAC48A684B88D3720E4A8568C780DFD974B7A8E87(Object_FindObjectOfType_TisPlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_mAC48A684B88D3720E4A8568C780DFD974B7A8E87_RuntimeMethod_var);
		__this->___placementManager_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placementManager_5), (void*)L_1);
		// placedPlants = placementManager.GetPlants();
		PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* L_2 = __this->___placementManager_5;
		NullCheck(L_2);
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_3;
		L_3 = PlacementManager_GetPlants_m9F6E843BFE540F72CE8707EC0DEE4CAA5778AFC9(L_2, NULL);
		__this->___placedPlants_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedPlants_8), (void*)L_3);
		// collisionEvents = new List<ParticleCollisionEvent>();
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_4 = (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD*)il2cpp_codegen_object_new(List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1(L_4, List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var);
		__this->___collisionEvents_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collisionEvents_6), (void*)L_4);
		// Input.gyro.enabled = true;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_5;
		L_5 = Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC(NULL);
		NullCheck(L_5);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void WateringManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringManager_Update_m6AA146BD124E7864C21CE3DBBDA5C62AEA099487 (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BF65FCDD62086B68E579363651A90051BFDED03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral224D5104407310F017DD6A2D6DE286CB69CF746C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	{
		// if (isAuthorized)
		bool L_0 = __this->___isAuthorized_11;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c0;
		}
	}
	{
		// Quaternion attitude = Input.gyro.attitude;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_2;
		L_2 = Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC(NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85(L_2, NULL);
		V_1 = L_3;
		// Vector3 euler = attitude.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		V_2 = L_4;
		// if (euler.x > 180) euler.x -= 360;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_2;
		float L_6 = L_5.___x_2;
		V_3 = (bool)((((float)L_6) > ((float)(180.0f)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// if (euler.x > 180) euler.x -= 360;
		float* L_8 = (&(&V_2)->___x_2);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		*((float*)L_9) = (float)((float)il2cpp_codegen_subtract(L_10, (360.0f)));
	}

IL_0043:
	{
		// if (euler.y > 180) euler.y -= 360;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		float L_12 = L_11.___y_3;
		V_4 = (bool)((((float)L_12) > ((float)(180.0f)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		// if (euler.y > 180) euler.y -= 360;
		float* L_14 = (&(&V_2)->___y_3);
		float* L_15 = L_14;
		float L_16 = *((float*)L_15);
		*((float*)L_15) = (float)((float)il2cpp_codegen_subtract(L_16, (360.0f)));
	}

IL_0066:
	{
		// if (Mathf.Abs(euler.x) < angleThreshold && Mathf.Abs(euler.y) < angleThreshold)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		float L_18 = L_17.___x_2;
		float L_19;
		L_19 = fabsf(L_18);
		float L_20 = __this->___angleThreshold_9;
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_008e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		float L_22 = L_21.___y_3;
		float L_23;
		L_23 = fabsf(L_22);
		float L_24 = __this->___angleThreshold_9;
		G_B8_0 = ((((float)L_23) < ((float)L_24))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B8_0 = 0;
	}

IL_008f:
	{
		V_5 = (bool)G_B8_0;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00ab;
		}
	}
	{
		// Debug.Log("Start Watering");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral224D5104407310F017DD6A2D6DE286CB69CF746C, NULL);
		// StartWatering();
		WateringManager_StartWatering_mB2AA617B688BBB6D82F46C41C3C52B1651F04B28(__this, NULL);
		goto IL_00bf;
	}

IL_00ab:
	{
		// Debug.Log("Stop Watering");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0BF65FCDD62086B68E579363651A90051BFDED03, NULL);
		// StopWatering();
		WateringManager_StopWatering_m73127198031C9FFE67896C38A4D2CD73DE106297(__this, NULL);
	}

IL_00bf:
	{
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void WateringManager::OnParticleCollision(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringManager_OnParticleCollision_m553AF18D3A05AEFDAEF01B180A35CFD1C92505A0 (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE183471EB287CC1E8177AE5C5B902770589C7619_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0B98B10F1B58FA01BA5F90B36D067B189E9B25F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAADD313A5371A8648BAA24E69FB3A4C6083E5593);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC99B1C191E5F1F0897D7ED648C3AD55D8A67E664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD00C928D261D0FD5DF1C61F00D230124BF209197);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Enumerator_tFB14A623119D7631666111368A3F34032EB1883A V_5;
	memset((&V_5), 0, sizeof(V_5));
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_14 = NULL;
	bool V_15 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_16 = NULL;
	bool V_17 = false;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (!isWatering) return;
		bool L_0 = __this->___isWatering_13;
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!isWatering) return;
		goto IL_023b;
	}

IL_0013:
	{
		// float wateringDuration = Time.time - wateringStartTime;
		float L_2;
		L_2 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_3 = __this->___wateringStartTime_12;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// Debug.Log("Watering Duration: " + wateringDuration);
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralAADD313A5371A8648BAA24E69FB3A4C6083E5593, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// int waterToAdd = Mathf.FloorToInt(wateringDuration * 10);
		float L_6 = V_0;
		int32_t L_7;
		L_7 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(L_6, (10.0f))), NULL);
		V_1 = L_7;
		// Debug.Log("Water to Add: " + waterToAdd);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA0B98B10F1B58FA01BA5F90B36D067B189E9B25F, L_8, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_9, NULL);
		// int numCollisionEvents = _Particles.GetCollisionEvents(other, collisionEvents);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = __this->____Particles_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___other0;
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_12 = __this->___collisionEvents_6;
		int32_t L_13;
		L_13 = ParticlePhysicsExtensions_GetCollisionEvents_m37C8F4C7FE60BBA0B6FD4B361BEFFE53CF8154F7(L_10, L_11, L_12, NULL);
		V_2 = L_13;
		// if (placedPlants.Count > 0)
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_14 = __this->___placedPlants_8;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mE183471EB287CC1E8177AE5C5B902770589C7619_inline(L_14, List_1_get_Count_mE183471EB287CC1E8177AE5C5B902770589C7619_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0223;
		}
	}
	{
		// foreach (Plant placedPlant in placedPlants)
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_17 = __this->___placedPlants_8;
		NullCheck(L_17);
		Enumerator_tFB14A623119D7631666111368A3F34032EB1883A L_18;
		L_18 = List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F(L_17, List_1_GetEnumerator_m8239BF94EBE6AC3CB5965E39E6AE7E158E42AF9F_RuntimeMethod_var);
		V_5 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0211:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C((&V_5), Enumerator_Dispose_mF71912C38E0761E09CC98B5A351C223B1923137C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0203_1;
			}

IL_0099_1:
			{
				// foreach (Plant placedPlant in placedPlants)
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_19;
				L_19 = Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_inline((&V_5), Enumerator_get_Current_m3CB8CF6514E298140AFFC0AAFDC948F96E1EEC0A_RuntimeMethod_var);
				V_6 = L_19;
				// if (!placedPlant.IsSelected) continue;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_20 = V_6;
				NullCheck(L_20);
				bool L_21;
				L_21 = Plant_get_IsSelected_m494151718F4AA58168E6C6A9E9575A5FDEB9541C_inline(L_20, NULL);
				V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
				bool L_22 = V_7;
				if (!L_22)
				{
					goto IL_00b8_1;
				}
			}
			{
				// if (!placedPlant.IsSelected) continue;
				goto IL_0203_1;
			}

IL_00b8_1:
			{
				// for (int i = 0; i < numCollisionEvents; i++)
				V_8 = 0;
				goto IL_01f4_1;
			}

IL_00c0_1:
			{
				// Vector3 collisionPoint = collisionEvents[i].intersection;
				List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_23 = __this->___collisionEvents_6;
				int32_t L_24 = V_8;
				NullCheck(L_23);
				ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 L_25;
				L_25 = List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D(L_23, L_24, List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
				V_11 = L_25;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
				L_26 = ParticleCollisionEvent_get_intersection_m5CD7C517228E7D6148DEA4ED0500533C146DEC97((&V_11), NULL);
				V_9 = L_26;
				// float distance = Vector3.Distance(collisionPoint, placedPlant.GameObject.transform.position);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_9;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_28 = V_6;
				NullCheck(L_28);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
				L_29 = Plant_get_GameObject_mC89686197500761406F094216C8CC2BC0B1F7537_inline(L_28, NULL);
				NullCheck(L_29);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
				L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
				NullCheck(L_30);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
				L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
				float L_32;
				L_32 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_27, L_31, NULL);
				V_10 = L_32;
				// if (distance < 1)
				float L_33 = V_10;
				V_12 = (bool)((((float)L_33) < ((float)(1.0f)))? 1 : 0);
				bool L_34 = V_12;
				if (!L_34)
				{
					goto IL_01ed_1;
				}
			}
			{
				// placedPlant.Water += 0.0102f;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_35 = V_6;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_36 = L_35;
				NullCheck(L_36);
				float L_37;
				L_37 = Plant_get_Water_m4EEABAAD7ACBF4038AB57262D8EF74ECF5AD5AF0_inline(L_36, NULL);
				NullCheck(L_36);
				Plant_set_Water_mA0EBF9CCF066CBFC9901C3DF4760D13263783A3D_inline(L_36, ((float)il2cpp_codegen_add(L_37, (0.0102000004f))), NULL);
				// Debug.Log($"After Watering - {placedPlant.Type}, New Water Level: {placedPlant.Water}");
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_38 = V_6;
				NullCheck(L_38);
				String_t* L_39;
				L_39 = Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline(L_38, NULL);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_40 = V_6;
				NullCheck(L_40);
				float L_41;
				L_41 = Plant_get_Water_m4EEABAAD7ACBF4038AB57262D8EF74ECF5AD5AF0_inline(L_40, NULL);
				float L_42 = L_41;
				RuntimeObject* L_43 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_42);
				String_t* L_44;
				L_44 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralD00C928D261D0FD5DF1C61F00D230124BF209197, L_39, L_43, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_44, NULL);
				// if (placedPlant.Water > 30 && placedPlant.Water < 59 && placedPlant.State == 0)
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_45 = V_6;
				NullCheck(L_45);
				float L_46;
				L_46 = Plant_get_Water_m4EEABAAD7ACBF4038AB57262D8EF74ECF5AD5AF0_inline(L_45, NULL);
				if ((!(((float)L_46) > ((float)(30.0f)))))
				{
					goto IL_0165_1;
				}
			}
			{
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_47 = V_6;
				NullCheck(L_47);
				float L_48;
				L_48 = Plant_get_Water_m4EEABAAD7ACBF4038AB57262D8EF74ECF5AD5AF0_inline(L_47, NULL);
				if ((!(((float)L_48) < ((float)(59.0f)))))
				{
					goto IL_0165_1;
				}
			}
			{
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_49 = V_6;
				NullCheck(L_49);
				int32_t L_50;
				L_50 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_49, NULL);
				G_B13_0 = ((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
				goto IL_0166_1;
			}

IL_0165_1:
			{
				G_B13_0 = 0;
			}

IL_0166_1:
			{
				V_13 = (bool)G_B13_0;
				bool L_51 = V_13;
				if (!L_51)
				{
					goto IL_019c_1;
				}
			}
			{
				// placedPlant.State = 1;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_52 = V_6;
				NullCheck(L_52);
				Plant_set_State_mDA648AF407FCFA002B8622D103EF345E1325190F_inline(L_52, 1, NULL);
				// GameObject GrownPlant = GetGrownPlantPrefab(placedPlant, placedPlant.State);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_53 = V_6;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_54 = V_6;
				NullCheck(L_54);
				int32_t L_55;
				L_55 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_54, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
				L_56 = WateringManager_GetGrownPlantPrefab_mB6382D0F482F325C116ED91F52632B4BD926029E(__this, L_53, L_55, NULL);
				V_14 = L_56;
				// GrowPlant(placedPlant, GrownPlant, placedPlant.State);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_57 = V_6;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = V_14;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_59 = V_6;
				NullCheck(L_59);
				int32_t L_60;
				L_60 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_59, NULL);
				WateringManager_GrowPlant_mCCFD278AF39D0A349A3AD5ABB078CCD45487E21E(__this, L_57, L_58, L_60, NULL);
				goto IL_01ec_1;
			}

IL_019c_1:
			{
				// else if (placedPlant.Water > 60 && placedPlant.State == 1)
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_61 = V_6;
				NullCheck(L_61);
				float L_62;
				L_62 = Plant_get_Water_m4EEABAAD7ACBF4038AB57262D8EF74ECF5AD5AF0_inline(L_61, NULL);
				if ((!(((float)L_62) > ((float)(60.0f)))))
				{
					goto IL_01b6_1;
				}
			}
			{
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_63 = V_6;
				NullCheck(L_63);
				int32_t L_64;
				L_64 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_63, NULL);
				G_B18_0 = ((((int32_t)L_64) == ((int32_t)1))? 1 : 0);
				goto IL_01b7_1;
			}

IL_01b6_1:
			{
				G_B18_0 = 0;
			}

IL_01b7_1:
			{
				V_15 = (bool)G_B18_0;
				bool L_65 = V_15;
				if (!L_65)
				{
					goto IL_01ec_1;
				}
			}
			{
				// placedPlant.State = 2; ;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_66 = V_6;
				NullCheck(L_66);
				Plant_set_State_mDA648AF407FCFA002B8622D103EF345E1325190F_inline(L_66, 2, NULL);
				// GameObject GrownPlant = GetGrownPlantPrefab(placedPlant, placedPlant.State);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_67 = V_6;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_68 = V_6;
				NullCheck(L_68);
				int32_t L_69;
				L_69 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_68, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70;
				L_70 = WateringManager_GetGrownPlantPrefab_mB6382D0F482F325C116ED91F52632B4BD926029E(__this, L_67, L_69, NULL);
				V_16 = L_70;
				// GrowPlant(placedPlant, GrownPlant, placedPlant.State);
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_71 = V_6;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = V_16;
				Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_73 = V_6;
				NullCheck(L_73);
				int32_t L_74;
				L_74 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_73, NULL);
				WateringManager_GrowPlant_mCCFD278AF39D0A349A3AD5ABB078CCD45487E21E(__this, L_71, L_72, L_74, NULL);
			}

IL_01ec_1:
			{
			}

IL_01ed_1:
			{
				// for (int i = 0; i < numCollisionEvents; i++)
				int32_t L_75 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_75, 1));
			}

IL_01f4_1:
			{
				// for (int i = 0; i < numCollisionEvents; i++)
				int32_t L_76 = V_8;
				int32_t L_77 = V_2;
				V_17 = (bool)((((int32_t)L_76) < ((int32_t)L_77))? 1 : 0);
				bool L_78 = V_17;
				if (L_78)
				{
					goto IL_00c0_1;
				}
			}
			{
			}

IL_0203_1:
			{
				// foreach (Plant placedPlant in placedPlants)
				bool L_79;
				L_79 = Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312((&V_5), Enumerator_MoveNext_m7CDE74E647ACE3918C58AC9E704B5EFE681F1312_RuntimeMethod_var);
				if (L_79)
				{
					goto IL_0099_1;
				}
			}
			{
				goto IL_0220;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0220:
	{
		goto IL_0230;
	}

IL_0223:
	{
		// Debug.LogWarning("No plants placed yet");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralC99B1C191E5F1F0897D7ED648C3AD55D8A67E664, NULL);
	}

IL_0230:
	{
		// wateringStartTime = Time.time; // Reset the watering start time for continuous watering
		float L_80;
		L_80 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___wateringStartTime_12 = L_80;
	}

IL_023b:
	{
		// }
		return;
	}
}
// System.Void WateringManager::GrowPlant(Plant,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringManager_GrowPlant_mCCFD278AF39D0A349A3AD5ABB078CCD45487E21E (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___plant0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grownPlantPrefab1, int32_t ___newState2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m436DAF6CCB5382C1DCD571EF1711D90A463855B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mF5F8C0DA6451878F7902E8BC6C1CD4CAF2EF18D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// Vector3 plantPosition = plant.GameObject.transform.position;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_0 = ___plant0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Plant_get_GameObject_mC89686197500761406F094216C8CC2BC0B1F7537_inline(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_0 = L_3;
		// Destroy(plant.GameObject);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_4 = ___plant0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Plant_get_GameObject_mC89686197500761406F094216C8CC2BC0B1F7537_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
		// GameObject newPlacedPlant = Instantiate(grownPlantPrefab, plantPosition, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___grownPlantPrefab1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_6, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_1 = L_9;
		// Plant newPlant = new Plant(newPlacedPlant, newState, plant.Type, plant.Water, plant.Sun, plant.Fertilizer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		int32_t L_11 = ___newState2;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_12 = ___plant0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline(L_12, NULL);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_14 = ___plant0;
		NullCheck(L_14);
		float L_15;
		L_15 = Plant_get_Water_m4EEABAAD7ACBF4038AB57262D8EF74ECF5AD5AF0_inline(L_14, NULL);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_16 = ___plant0;
		NullCheck(L_16);
		float L_17;
		L_17 = Plant_get_Sun_m2F8BF7851204E5A77563A5A6F9490336E58731AE_inline(L_16, NULL);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_18 = ___plant0;
		NullCheck(L_18);
		float L_19;
		L_19 = Plant_get_Fertilizer_m8CC683BE83CE3048F014A54ABF9C5A693418DE5D_inline(L_18, NULL);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_20 = (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72*)il2cpp_codegen_object_new(Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Plant__ctor_mAC07B3CC4C99AD1AB9D2C12959110534160296EB(L_20, L_10, L_11, L_13, L_15, L_17, L_19, NULL);
		V_2 = L_20;
		// int plantIndex = placedPlants.IndexOf(plant);
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_21 = __this->___placedPlants_8;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_22 = ___plant0;
		NullCheck(L_21);
		int32_t L_23;
		L_23 = List_1_IndexOf_m436DAF6CCB5382C1DCD571EF1711D90A463855B9(L_21, L_22, List_1_IndexOf_m436DAF6CCB5382C1DCD571EF1711D90A463855B9_RuntimeMethod_var);
		V_3 = L_23;
		// placedPlants[plantIndex] = newPlant;
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_24 = __this->___placedPlants_8;
		int32_t L_25 = V_3;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_26 = V_2;
		NullCheck(L_24);
		List_1_set_Item_mF5F8C0DA6451878F7902E8BC6C1CD4CAF2EF18D5(L_24, L_25, L_26, List_1_set_Item_mF5F8C0DA6451878F7902E8BC6C1CD4CAF2EF18D5_RuntimeMethod_var);
		// placementManager.UpdatePlantsList(placedPlants);
		PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* L_27 = __this->___placementManager_5;
		List_1_tB87BAED6BF9F89ABB1EC6F783A33D7910CED38D5* L_28 = __this->___placedPlants_8;
		NullCheck(L_27);
		PlacementManager_UpdatePlantsList_mFFD3FC170E2B6F557BAA537D5A8412D55208B36A(L_27, L_28, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject WateringManager::GetGrownPlantPrefab(Plant,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WateringManager_GetGrownPlantPrefab_mB6382D0F482F325C116ED91F52632B4BD926029E (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___placedPlant0, int32_t ___newState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36E708A9EC9B45B9FE182039AD23AF0530A6612D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41D97A03D527838DDCC85B81128FFAB7E4D16942);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F54B00DB61F3EE6DEF58161D074B5777975C954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC21B6CBC408AF8AB0F21A09380E81067695E8A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAC3D17E6F80D7040A3FA0C30930E35F0F075486);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBD498D1F3E76749ECD52BCA75BA0BA00E248DF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC37D54AE668AEA206FE93AA3C7D2564E751D6039);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDD7AC32C8C7867FF797F95C4F40C851A42352EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE70CC1F521AAB81F749E0271CC932FE4E1A9407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2CC083FB5D1A83E34D6878F4B5A22C751994D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3BF183F619D39012AF8814AFA3C7B020FA26F1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF99D3CD53D3F3F012F352A3E10E514E30666953);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// string type = placedPlant.Type;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_0 = ___placedPlant0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline(L_0, NULL);
		V_0 = L_1;
		// int state = placedPlant.State;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_2 = ___placedPlant0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline(L_2, NULL);
		V_1 = L_3;
		// switch (type)
		String_t* L_4 = V_0;
		V_3 = L_4;
		String_t* L_5 = V_3;
		V_2 = L_5;
		String_t* L_6 = V_2;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralD3BF183F619D39012AF8814AFA3C7B020FA26F1C, NULL);
		if (L_7)
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_8 = V_2;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteralBBD498D1F3E76749ECD52BCA75BA0BA00E248DF1, NULL);
		if (L_9)
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_10 = V_2;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteralCE70CC1F521AAB81F749E0271CC932FE4E1A9407, NULL);
		if (L_11)
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_12 = V_2;
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, _stringLiteral41D97A03D527838DDCC85B81128FFAB7E4D16942, NULL);
		if (L_13)
		{
			goto IL_0106;
		}
	}
	{
		goto IL_0141;
	}

IL_0052:
	{
		// return state switch
		// {
		//     1 => Resources.Load<GameObject>("Plants/Cactus Medium"),
		//     2 => Resources.Load<GameObject>("Plants/Cactus Large"),
		//     _ => null,
		// };
		if (1)
		{
			goto IL_0056;
		}
	}
	{
	}

IL_0056:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_005c;
	}

IL_005c:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)2)))
		{
			goto IL_0070;
		}
	}
	{
		goto IL_007e;
	}

IL_0062:
	{
		// 1 => Resources.Load<GameObject>("Plants/Cactus Medium"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteralAC21B6CBC408AF8AB0F21A09380E81067695E8A1, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_16;
		goto IL_0083;
	}

IL_0070:
	{
		// 2 => Resources.Load<GameObject>("Plants/Cactus Large"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteralBAC3D17E6F80D7040A3FA0C30930E35F0F075486, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_17;
		goto IL_0083;
	}

IL_007e:
	{
		// _ => null,
		V_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_0083;
	}

IL_0083:
	{
		if (1)
		{
			goto IL_0087;
		}
	}
	{
	}

IL_0087:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_4;
		V_5 = L_18;
		goto IL_0146;
	}

IL_0090:
	{
		// return state switch
		// {
		//     1 => Resources.Load<GameObject>("Plants/Bush Medium"),
		//     2 => Resources.Load<GameObject>("Plants/Bush Large"),
		//     _ => null,
		// };
		if (1)
		{
			goto IL_0094;
		}
	}
	{
	}

IL_0094:
	{
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		goto IL_009a;
	}

IL_009a:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) == ((int32_t)2)))
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_00bc;
	}

IL_00a0:
	{
		// 1 => Resources.Load<GameObject>("Plants/Bush Medium"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteralEF99D3CD53D3F3F012F352A3E10E514E30666953, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_21;
		goto IL_00c1;
	}

IL_00ae:
	{
		// 2 => Resources.Load<GameObject>("Plants/Bush Large"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteralD2CC083FB5D1A83E34D6878F4B5A22C751994D16, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_22;
		goto IL_00c1;
	}

IL_00bc:
	{
		// _ => null,
		V_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_00c1;
	}

IL_00c1:
	{
		if (1)
		{
			goto IL_00c5;
		}
	}
	{
	}

IL_00c5:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_4;
		V_5 = L_23;
		goto IL_0146;
	}

IL_00cb:
	{
		// return state switch
		// {
		//     1 => Resources.Load<GameObject>("Plants/Succulent Medium"),
		//     2 => Resources.Load<GameObject>("Plants/Succulent Large"),
		//     _ => null,
		// };
		if (1)
		{
			goto IL_00cf;
		}
	}
	{
	}

IL_00cf:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)1)))
		{
			goto IL_00db;
		}
	}
	{
		goto IL_00d5;
	}

IL_00d5:
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)2)))
		{
			goto IL_00e9;
		}
	}
	{
		goto IL_00f7;
	}

IL_00db:
	{
		// 1 => Resources.Load<GameObject>("Plants/Succulent Medium"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteral36E708A9EC9B45B9FE182039AD23AF0530A6612D, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_26;
		goto IL_00fc;
	}

IL_00e9:
	{
		// 2 => Resources.Load<GameObject>("Plants/Succulent Large"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteralC37D54AE668AEA206FE93AA3C7D2564E751D6039, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_27;
		goto IL_00fc;
	}

IL_00f7:
	{
		// _ => null,
		V_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_00fc;
	}

IL_00fc:
	{
		if (1)
		{
			goto IL_0100;
		}
	}
	{
	}

IL_0100:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_4;
		V_5 = L_28;
		goto IL_0146;
	}

IL_0106:
	{
		// return state switch
		// {
		//     1 => Resources.Load<GameObject>("Plants/Leafy Medium"),
		//     2 => Resources.Load<GameObject>("Plants/Leafy Large"),
		//     _ => null,
		// };
		if (1)
		{
			goto IL_010a;
		}
	}
	{
	}

IL_010a:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)1)))
		{
			goto IL_0116;
		}
	}
	{
		goto IL_0110;
	}

IL_0110:
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)2)))
		{
			goto IL_0124;
		}
	}
	{
		goto IL_0132;
	}

IL_0116:
	{
		// 1 => Resources.Load<GameObject>("Plants/Leafy Medium"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteral7F54B00DB61F3EE6DEF58161D074B5777975C954, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_31;
		goto IL_0137;
	}

IL_0124:
	{
		// 2 => Resources.Load<GameObject>("Plants/Leafy Large"),
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteralCDD7AC32C8C7867FF797F95C4F40C851A42352EC, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		V_4 = L_32;
		goto IL_0137;
	}

IL_0132:
	{
		// _ => null,
		V_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_0137;
	}

IL_0137:
	{
		if (1)
		{
			goto IL_013b;
		}
	}
	{
	}

IL_013b:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_4;
		V_5 = L_33;
		goto IL_0146;
	}

IL_0141:
	{
		// return null;
		V_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_0146;
	}

IL_0146:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_5;
		return L_34;
	}
}
// System.Void WateringManager::StartWatering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringManager_StartWatering_mB2AA617B688BBB6D82F46C41C3C52B1651F04B28 (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, const RuntimeMethod* method) 
{
	{
		// _emission = _Particles.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->____Particles_4;
		NullCheck(L_0);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_1;
		L_1 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_0, NULL);
		__this->____emission_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____emission_7))->___m_ParticleSystem_0), (void*)NULL);
		// _emission.enabled = true;
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* L_2 = (&__this->____emission_7);
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867(L_2, (bool)1, NULL);
		// _Particles.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->____Particles_4;
		NullCheck(L_3);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_3, NULL);
		// wateringStartTime = Time.time; // Record start time
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___wateringStartTime_12 = L_4;
		// isWatering = true;
		__this->___isWatering_13 = (bool)1;
		// }
		return;
	}
}
// System.Void WateringManager::StopWatering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringManager_StopWatering_m73127198031C9FFE67896C38A4D2CD73DE106297 (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, const RuntimeMethod* method) 
{
	{
		// _emission = _Particles.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->____Particles_4;
		NullCheck(L_0);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_1;
		L_1 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_0, NULL);
		__this->____emission_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____emission_7))->___m_ParticleSystem_0), (void*)NULL);
		// _emission.enabled = false;
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* L_2 = (&__this->____emission_7);
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867(L_2, (bool)0, NULL);
		// _Particles.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->____Particles_4;
		NullCheck(L_3);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_3, NULL);
		// isWatering = false;
		__this->___isWatering_13 = (bool)0;
		// }
		return;
	}
}
// System.Void WateringManager::AuthorizeWatering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringManager_AuthorizeWatering_m7AE1CE066DF33BDC9E971800057DA45AD2F5CBDB (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AuthorizationTimer());
		RuntimeObject* L_0;
		L_0 = WateringManager_AuthorizationTimer_mB757E13528285513853E3FA68D6DBAC1AB6B891C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator WateringManager::AuthorizationTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WateringManager_AuthorizationTimer_mB757E13528285513853E3FA68D6DBAC1AB6B891C (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436* L_0 = (U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436*)il2cpp_codegen_object_new(U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAuthorizationTimerU3Ed__18__ctor_mDA6EB41814D39DC91F4EF6EE8E489E118FA839D8(L_0, 0, NULL);
		U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void WateringManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringManager__ctor_mFCCA49C127EA145812A8463F65915A1A7087F2DA (WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* __this, const RuntimeMethod* method) 
{
	{
		// public float angleThreshold = 80f;
		__this->___angleThreshold_9 = (80.0f);
		// public int newstate = 0;
		__this->___newstate_10 = 0;
		// private bool isAuthorized = false;
		__this->___isAuthorized_11 = (bool)0;
		// private bool isWatering = false;
		__this->___isWatering_13 = (bool)0;
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
// System.Void WateringManager/<AuthorizationTimer>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAuthorizationTimerU3Ed__18__ctor_mDA6EB41814D39DC91F4EF6EE8E489E118FA839D8 (U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WateringManager/<AuthorizationTimer>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAuthorizationTimerU3Ed__18_System_IDisposable_Dispose_m84FA5D968F55EFACE3DB9465608FDEFA2666B91D (U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WateringManager/<AuthorizationTimer>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAuthorizationTimerU3Ed__18_MoveNext_m2A195718188ECA347C09E9C457DC566AF801CD80 (U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
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
		goto IL_0045;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isAuthorized = true;
		WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		L_3->___isAuthorized_11 = (bool)1;
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isAuthorized = false;
		WateringManager_t386D8152CB19B5277D55E515B58879247008FB08* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		L_5->___isAuthorized_11 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object WateringManager/<AuthorizationTimer>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAuthorizationTimerU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC0DA48677485155F13E050102FD3999203A97846 (U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WateringManager/<AuthorizationTimer>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAuthorizationTimerU3Ed__18_System_Collections_IEnumerator_Reset_mCD2D6DF099B998E413531D26225AB9CD634E4665 (U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAuthorizationTimerU3Ed__18_System_Collections_IEnumerator_Reset_mCD2D6DF099B998E413531D26225AB9CD634E4665_RuntimeMethod_var)));
	}
}
// System.Object WateringManager/<AuthorizationTimer>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAuthorizationTimerU3Ed__18_System_Collections_IEnumerator_get_Current_m166ACC4C8ED25466A3424F6C6566C5EFA1F6D753 (U3CAuthorizationTimerU3Ed__18_tBDE5E3769C1ABCC4BEA0D995AC35FDAC3030E436* __this, const RuntimeMethod* method) 
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
// System.Void WaterTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTrigger__ctor_m0535725B059FBBE8A40008D1CA71E27A70499AAC (WaterTrigger_t2C5CEE5FB3AB474809A94E1321296770F620AB66* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Plant_get_IsSelected_m494151718F4AA58168E6C6A9E9575A5FDEB9541C_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSelected { get; set; } // To track if the plant is selected
		bool L_0 = __this->___U3CIsSelectedU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Plant_get_GameObject_mC89686197500761406F094216C8CC2BC0B1F7537_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObject { get;set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CGameObjectU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Plant_get_Fertilizer_m8CC683BE83CE3048F014A54ABF9C5A693418DE5D_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public float Fertilizer{get;set;}
		float L_0 = __this->___U3CFertilizerU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_Fertilizer_mB0BF51A7FB0ABFB21602C7471D2405C86789F1DB_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Fertilizer{get;set;}
		float L_0 = ___value0;
		__this->___U3CFertilizerU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Plant_get_Type_mFB6CCEA6BBDE9E69860AAED6F2B9F91131233362_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plant_get_State_m68B02CE5236C73BDA0165530371880F7D5F6C19F_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public int State { get;set; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_State_mDA648AF407FCFA002B8622D103EF345E1325190F_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int State { get;set; }
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Plant_get_Water_m4EEABAAD7ACBF4038AB57262D8EF74ECF5AD5AF0_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public float Water {get;set;}
		float L_0 = __this->___U3CWaterU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Plant_get_Sun_m2F8BF7851204E5A77563A5A6F9490336E58731AE_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public float Sun{get;set;}
		float L_0 = __this->___U3CSunU3Ek__BackingField_4;
		return L_0;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Plant_get_Arrow_m13E3D3846A280CD6D8465C00D0811AE1B20476B2_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Arrow { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CArrowU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_Arrow_m76C23A888F46DBC54E72F7AC123ADB1D54F8A2F3_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject Arrow { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CArrowU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArrowU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_IsSelected_mEA3896B8ADFCB80BA94C083C8D9EC9E4C9ED8F59_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsSelected { get; set; } // To track if the plant is selected
		bool L_0 = ___value0;
		__this->___U3CIsSelectedU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_GameObject_mD5D1A5BB45857C30EBCE8D52151BADE8DC67793B_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObject { get;set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CGameObjectU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameObjectU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_Water_mA0EBF9CCF066CBFC9901C3DF4760D13263783A3D_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Water {get;set;}
		float L_0 = ___value0;
		__this->___U3CWaterU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Plant_set_Sun_m0790C03396CB42A147DED805F067252B65186391_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Sun{get;set;}
		float L_0 = ___value0;
		__this->___U3CSunU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
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
