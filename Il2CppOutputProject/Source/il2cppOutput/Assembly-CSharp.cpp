#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// StreamerHL2
struct StreamerHL2_t78A52A1818A2CFA9FD59C7500A2B98565A44072B;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.UnicastIPAddressInformation>
struct Collection_1_tD2396D955AE4EC54350F111B7375F4D94F3A138C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IOAsyncCallback
struct IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547;
// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980;
// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE;
// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F;
// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TextReceiver
struct TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// test
struct test_tBCA4AC3C1D45BA0DD176A21EC1F45D70CE6F1246;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1832F88929CE7C558676FB002FC111AB3DC5E01A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral143C5ED9831E9861487094DCB782E11A5122806E;
IL2CPP_EXTERN_C String_t* _stringLiteral6EAD883555C8ECA43EC59072B2CDD6E60B3B9C0E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralFADBAE12CA99B73640B8443B9E35984D43A33407;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t TextReceiver_GetIP_m39E5F1E1FECE774D830B0C1BCDBCEB51F2DCC570_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextReceiver_Start_m06617A2C21484B1CB1EFB9B45CBBACA79D8C7979_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextReceiver_Update_m9A7E6BC112D621AF09EBBC24BF0004BA602FDDA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextReceiver__cctor_m12D855564FD23AABBA832832FB8CCF074D95D6C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t test_GetIP_mD3D1883FE61545F044CFC5BB7B4477DBF3C57938_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t test_Start_m53350D0C9B2B3AA72950FBC77CEC6640573077C5_MetadataUsageId;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980  : public RuntimeObject
{
public:

public:
};


// System.Net.NetworkInformation.IPAddressInformation
struct IPAddressInformation_t19E7A885BA4DB0425B8F01A64C3A000E49894BC2  : public RuntimeObject
{
public:

public:
};


// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD  : public RuntimeObject
{
public:

public:
};


// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3  : public RuntimeObject
{
public:

public:
};


// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423  : public RuntimeObject
{
public:
	// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::addresses
	Collection_1_tD2396D955AE4EC54350F111B7375F4D94F3A138C * ___addresses_0;

public:
	inline static int32_t get_offset_of_addresses_0() { return static_cast<int32_t>(offsetof(UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423, ___addresses_0)); }
	inline Collection_1_tD2396D955AE4EC54350F111B7375F4D94F3A138C * get_addresses_0() const { return ___addresses_0; }
	inline Collection_1_tD2396D955AE4EC54350F111B7375F4D94F3A138C ** get_address_of_addresses_0() { return &___addresses_0; }
	inline void set_addresses_0(Collection_1_tD2396D955AE4EC54350F111B7375F4D94F3A138C * value)
	{
		___addresses_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addresses_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F  : public EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___m_Address_0;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_1;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Address_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_m_Address_0() const { return ___m_Address_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___m_Address_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Port_1)); }
	inline int32_t get_m_Port_1() const { return ___m_Port_1; }
	inline int32_t* get_address_of_m_Port_1() { return &___m_Port_1; }
	inline void set_m_Port_1(int32_t value)
	{
		___m_Port_1 = value;
	}
};

struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___IPv6Any_3;

public:
	inline static int32_t get_offset_of_Any_2() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___Any_2)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_Any_2() const { return ___Any_2; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_Any_2() { return &___Any_2; }
	inline void set_Any_2(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___Any_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_2), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_3() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___IPv6Any_3)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_IPv6Any_3() const { return ___IPv6Any_3; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_IPv6Any_3() { return &___IPv6Any_3; }
	inline void set_IPv6Any_3(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___IPv6Any_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_3), (void*)value);
	}
};


// System.Net.NetworkInformation.UnicastIPAddressInformation
struct UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5  : public IPAddressInformation_t19E7A885BA4DB0425B8F01A64C3A000E49894BC2
{
public:

public:
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Net.NetworkInformation.NetworkInterfaceType
struct NetworkInterfaceType_tFF658C883CFC357352A72E6A2217126B61AE63A6 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkInterfaceType_tFF658C883CFC357352A72E6A2217126B61AE63A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.NetworkInformation.OperationalStatus
struct OperationalStatus_t6B97F284C3886FDCBE60FF77FEFE80CF11D0B2EC 
{
public:
	// System.Int32 System.Net.NetworkInformation.OperationalStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperationalStatus_t6B97F284C3886FDCBE60FF77FEFE80CF11D0B2EC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.AddressFamily
struct AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.ProtocolType
struct ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Any_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___None_3)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_None_3() const { return ___None_3; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_10;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_11;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_12;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_13;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_14;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_15;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_16;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * ___m_Handle_17;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___seed_endpoint_18;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___ReadSem_19;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___WriteSem_20;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_21;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_22;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_23;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_24;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_25;

public:
	inline static int32_t get_offset_of_is_closed_10() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_closed_10)); }
	inline bool get_is_closed_10() const { return ___is_closed_10; }
	inline bool* get_address_of_is_closed_10() { return &___is_closed_10; }
	inline void set_is_closed_10(bool value)
	{
		___is_closed_10 = value;
	}

	inline static int32_t get_offset_of_is_listening_11() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_listening_11)); }
	inline bool get_is_listening_11() const { return ___is_listening_11; }
	inline bool* get_address_of_is_listening_11() { return &___is_listening_11; }
	inline void set_is_listening_11(bool value)
	{
		___is_listening_11 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_12() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___useOverlappedIO_12)); }
	inline bool get_useOverlappedIO_12() const { return ___useOverlappedIO_12; }
	inline bool* get_address_of_useOverlappedIO_12() { return &___useOverlappedIO_12; }
	inline void set_useOverlappedIO_12(bool value)
	{
		___useOverlappedIO_12 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_13() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___linger_timeout_13)); }
	inline int32_t get_linger_timeout_13() const { return ___linger_timeout_13; }
	inline int32_t* get_address_of_linger_timeout_13() { return &___linger_timeout_13; }
	inline void set_linger_timeout_13(int32_t value)
	{
		___linger_timeout_13 = value;
	}

	inline static int32_t get_offset_of_addressFamily_14() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___addressFamily_14)); }
	inline int32_t get_addressFamily_14() const { return ___addressFamily_14; }
	inline int32_t* get_address_of_addressFamily_14() { return &___addressFamily_14; }
	inline void set_addressFamily_14(int32_t value)
	{
		___addressFamily_14 = value;
	}

	inline static int32_t get_offset_of_socketType_15() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___socketType_15)); }
	inline int32_t get_socketType_15() const { return ___socketType_15; }
	inline int32_t* get_address_of_socketType_15() { return &___socketType_15; }
	inline void set_socketType_15(int32_t value)
	{
		___socketType_15 = value;
	}

	inline static int32_t get_offset_of_protocolType_16() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___protocolType_16)); }
	inline int32_t get_protocolType_16() const { return ___protocolType_16; }
	inline int32_t* get_address_of_protocolType_16() { return &___protocolType_16; }
	inline void set_protocolType_16(int32_t value)
	{
		___protocolType_16 = value;
	}

	inline static int32_t get_offset_of_m_Handle_17() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_Handle_17)); }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * get_m_Handle_17() const { return ___m_Handle_17; }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A ** get_address_of_m_Handle_17() { return &___m_Handle_17; }
	inline void set_m_Handle_17(SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * value)
	{
		___m_Handle_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_17), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_18() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___seed_endpoint_18)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_seed_endpoint_18() const { return ___seed_endpoint_18; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_seed_endpoint_18() { return &___seed_endpoint_18; }
	inline void set_seed_endpoint_18(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___seed_endpoint_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_18), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_19() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___ReadSem_19)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_ReadSem_19() const { return ___ReadSem_19; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_ReadSem_19() { return &___ReadSem_19; }
	inline void set_ReadSem_19(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___ReadSem_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_19), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_20() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___WriteSem_20)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_WriteSem_20() const { return ___WriteSem_20; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_WriteSem_20() { return &___WriteSem_20; }
	inline void set_WriteSem_20(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___WriteSem_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_20), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_21() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_blocking_21)); }
	inline bool get_is_blocking_21() const { return ___is_blocking_21; }
	inline bool* get_address_of_is_blocking_21() { return &___is_blocking_21; }
	inline void set_is_blocking_21(bool value)
	{
		___is_blocking_21 = value;
	}

	inline static int32_t get_offset_of_is_bound_22() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_bound_22)); }
	inline bool get_is_bound_22() const { return ___is_bound_22; }
	inline bool* get_address_of_is_bound_22() { return &___is_bound_22; }
	inline void set_is_bound_22(bool value)
	{
		___is_bound_22 = value;
	}

	inline static int32_t get_offset_of_is_connected_23() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_connected_23)); }
	inline bool get_is_connected_23() const { return ___is_connected_23; }
	inline bool* get_address_of_is_connected_23() { return &___is_connected_23; }
	inline void set_is_connected_23(bool value)
	{
		___is_connected_23 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_24() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_IntCleanedUp_24)); }
	inline int32_t get_m_IntCleanedUp_24() const { return ___m_IntCleanedUp_24; }
	inline int32_t* get_address_of_m_IntCleanedUp_24() { return &___m_IntCleanedUp_24; }
	inline void set_m_IntCleanedUp_24(int32_t value)
	{
		___m_IntCleanedUp_24 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_25() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___connect_in_progress_25)); }
	inline bool get_connect_in_progress_25() const { return ___connect_in_progress_25; }
	inline bool* get_address_of_connect_in_progress_25() { return &___connect_in_progress_25; }
	inline void set_connect_in_progress_25(bool value)
	{
		___connect_in_progress_25 = value;
	}
};

struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_6;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___AcceptAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptReceiveCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ConnectAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginConnectCallback_30;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___DisconnectAsyncCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginDisconnectCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveFromAsyncCallback_36;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveFromCallback_37;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendAsyncCallback_38;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginSendGenericCallback_39;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendToAsyncCallback_40;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_s_PerfCountersEnabled_6() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_PerfCountersEnabled_6)); }
	inline bool get_s_PerfCountersEnabled_6() const { return ___s_PerfCountersEnabled_6; }
	inline bool* get_address_of_s_PerfCountersEnabled_6() { return &___s_PerfCountersEnabled_6; }
	inline void set_s_PerfCountersEnabled_6(bool value)
	{
		___s_PerfCountersEnabled_6 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___AcceptAsyncCallback_26)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_AcceptAsyncCallback_26() const { return ___AcceptAsyncCallback_26; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_AcceptAsyncCallback_26() { return &___AcceptAsyncCallback_26; }
	inline void set_AcceptAsyncCallback_26(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___AcceptAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_27() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptCallback_27)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptCallback_27() const { return ___BeginAcceptCallback_27; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptCallback_27() { return &___BeginAcceptCallback_27; }
	inline void set_BeginAcceptCallback_27(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_28() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptReceiveCallback_28)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptReceiveCallback_28() const { return ___BeginAcceptReceiveCallback_28; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptReceiveCallback_28() { return &___BeginAcceptReceiveCallback_28; }
	inline void set_BeginAcceptReceiveCallback_28(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptReceiveCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ConnectAsyncCallback_29)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ConnectAsyncCallback_29() const { return ___ConnectAsyncCallback_29; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ConnectAsyncCallback_29() { return &___ConnectAsyncCallback_29; }
	inline void set_ConnectAsyncCallback_29(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ConnectAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_30() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginConnectCallback_30)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginConnectCallback_30() const { return ___BeginConnectCallback_30; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginConnectCallback_30() { return &___BeginConnectCallback_30; }
	inline void set_BeginConnectCallback_30(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginConnectCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_31() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___DisconnectAsyncCallback_31)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_DisconnectAsyncCallback_31() const { return ___DisconnectAsyncCallback_31; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_DisconnectAsyncCallback_31() { return &___DisconnectAsyncCallback_31; }
	inline void set_DisconnectAsyncCallback_31(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___DisconnectAsyncCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_32() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginDisconnectCallback_32)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginDisconnectCallback_32() const { return ___BeginDisconnectCallback_32; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginDisconnectCallback_32() { return &___BeginDisconnectCallback_32; }
	inline void set_BeginDisconnectCallback_32(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginDisconnectCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveAsyncCallback_33)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveAsyncCallback_33() const { return ___ReceiveAsyncCallback_33; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveAsyncCallback_33() { return &___ReceiveAsyncCallback_33; }
	inline void set_ReceiveAsyncCallback_33(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_34() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveCallback_34)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveCallback_34() const { return ___BeginReceiveCallback_34; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveCallback_34() { return &___BeginReceiveCallback_34; }
	inline void set_BeginReceiveCallback_34(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveGenericCallback_35)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveGenericCallback_35() const { return ___BeginReceiveGenericCallback_35; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveGenericCallback_35() { return &___BeginReceiveGenericCallback_35; }
	inline void set_BeginReceiveGenericCallback_35(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveFromAsyncCallback_36)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveFromAsyncCallback_36() const { return ___ReceiveFromAsyncCallback_36; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveFromAsyncCallback_36() { return &___ReceiveFromAsyncCallback_36; }
	inline void set_ReceiveFromAsyncCallback_36(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveFromAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_37() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveFromCallback_37)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveFromCallback_37() const { return ___BeginReceiveFromCallback_37; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveFromCallback_37() { return &___BeginReceiveFromCallback_37; }
	inline void set_BeginReceiveFromCallback_37(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveFromCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_37), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_38() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendAsyncCallback_38)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendAsyncCallback_38() const { return ___SendAsyncCallback_38; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendAsyncCallback_38() { return &___SendAsyncCallback_38; }
	inline void set_SendAsyncCallback_38(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendAsyncCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_39() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginSendGenericCallback_39)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginSendGenericCallback_39() const { return ___BeginSendGenericCallback_39; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginSendGenericCallback_39() { return &___BeginSendGenericCallback_39; }
	inline void set_BeginSendGenericCallback_39(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginSendGenericCallback_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_39), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_40() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendToAsyncCallback_40)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendToAsyncCallback_40() const { return ___SendToAsyncCallback_40; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendToAsyncCallback_40() { return &___SendToAsyncCallback_40; }
	inline void set_SendToAsyncCallback_40(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendToAsyncCallback_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_40), (void*)value);
	}
};


// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// StreamerHL2
struct StreamerHL2_t78A52A1818A2CFA9FD59C7500A2B98565A44072B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// TextReceiver
struct TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text TextReceiver::text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text_4;
	// System.Char TextReceiver::warningState
	Il2CppChar ___warningState_5;
	// UnityEngine.AudioClip TextReceiver::state1
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___state1_6;
	// UnityEngine.AudioClip TextReceiver::state2
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___state2_7;
	// UnityEngine.AudioSource TextReceiver::audioSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSource_8;
	// System.Net.Sockets.Socket TextReceiver::serverSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___serverSocket_10;
	// System.Net.Sockets.Socket TextReceiver::clientSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___clientSocket_11;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C, ___text_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_text_4() const { return ___text_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}

	inline static int32_t get_offset_of_warningState_5() { return static_cast<int32_t>(offsetof(TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C, ___warningState_5)); }
	inline Il2CppChar get_warningState_5() const { return ___warningState_5; }
	inline Il2CppChar* get_address_of_warningState_5() { return &___warningState_5; }
	inline void set_warningState_5(Il2CppChar value)
	{
		___warningState_5 = value;
	}

	inline static int32_t get_offset_of_state1_6() { return static_cast<int32_t>(offsetof(TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C, ___state1_6)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_state1_6() const { return ___state1_6; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_state1_6() { return &___state1_6; }
	inline void set_state1_6(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___state1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state1_6), (void*)value);
	}

	inline static int32_t get_offset_of_state2_7() { return static_cast<int32_t>(offsetof(TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C, ___state2_7)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_state2_7() const { return ___state2_7; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_state2_7() { return &___state2_7; }
	inline void set_state2_7(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___state2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state2_7), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_8() { return static_cast<int32_t>(offsetof(TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C, ___audioSource_8)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_audioSource_8() const { return ___audioSource_8; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_audioSource_8() { return &___audioSource_8; }
	inline void set_audioSource_8(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___audioSource_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_8), (void*)value);
	}

	inline static int32_t get_offset_of_serverSocket_10() { return static_cast<int32_t>(offsetof(TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C, ___serverSocket_10)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_serverSocket_10() const { return ___serverSocket_10; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_serverSocket_10() { return &___serverSocket_10; }
	inline void set_serverSocket_10(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___serverSocket_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serverSocket_10), (void*)value);
	}

	inline static int32_t get_offset_of_clientSocket_11() { return static_cast<int32_t>(offsetof(TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C, ___clientSocket_11)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_clientSocket_11() const { return ___clientSocket_11; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_clientSocket_11() { return &___clientSocket_11; }
	inline void set_clientSocket_11(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___clientSocket_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientSocket_11), (void*)value);
	}
};

struct TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C_StaticFields
{
public:
	// System.Int32 TextReceiver::port
	int32_t ___port_9;

public:
	inline static int32_t get_offset_of_port_9() { return static_cast<int32_t>(offsetof(TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C_StaticFields, ___port_9)); }
	inline int32_t get_port_9() const { return ___port_9; }
	inline int32_t* get_address_of_port_9() { return &___port_9; }
	inline void set_port_9(int32_t value)
	{
		___port_9 = value;
	}
};


// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// test
struct test_tBCA4AC3C1D45BA0DD176A21EC1F45D70CE6F1246  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
};
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * m_Items[1];

public:
	inline NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// System.Void StreamerHL2::InitializeDll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamerHL2_InitializeDll_m4A54415B852B279C84751B786C54341C71BA4F53 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.String TextReceiver::GetIP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextReceiver_GetIP_m39E5F1E1FECE774D830B0C1BCDBCEB51F2DCC570 (TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273 (String_t* ___ipString0, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845 (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Bind_m839E8CD90EEB61CE1AE5274224F9049A7D4C7A30 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___localEP0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Listen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Listen_m2926E72970BEAACEBD9C140E89DE47A523BAB540 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t ___backlog0, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * Socket_Accept_mDF6F7AA1AD7C6E5AB1154C94BF6C7294B7E410A7 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_mD8D9A2358E66B15A2291E7DF76441E9D445C366C (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.NetworkInterface::GetAllNetworkInterfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* NetworkInterface_GetAllNetworkInterfaces_mECF52873ABF0B957ACD25FD76B56DD63FDF6C0A1 (const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.String test::GetIP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* test_GetIP_mD3D1883FE61545F044CFC5BB7B4477DBF3C57938 (test_tBCA4AC3C1D45BA0DD176A21EC1F45D70CE6F1246 * __this, const RuntimeMethod* method);
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
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void STDCALL Initialize();
#endif
// System.Void StreamerHL2::InitializeDll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamerHL2_InitializeDll_m4A54415B852B279C84751B786C54341C71BA4F53 (const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("HL2RmStreamUnityPlugin"), "Initialize", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Initialize)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void StreamerHL2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamerHL2_Start_mAB1A3357EB1DBD2AAB815A63F0D07C3F7DDC8E91 (StreamerHL2_t78A52A1818A2CFA9FD59C7500A2B98565A44072B * __this, const RuntimeMethod* method)
{
	{
		// InitializeDll();//?????
		StreamerHL2_InitializeDll_m4A54415B852B279C84751B786C54341C71BA4F53(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StreamerHL2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamerHL2_Update_m15F9A72A2E7FA8B1CE5E86CBD6DFA9F1430A44DA (StreamerHL2_t78A52A1818A2CFA9FD59C7500A2B98565A44072B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void StreamerHL2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamerHL2__ctor_m4956B77A65FDD494CAE26BA1291EA57FE2B2B631 (StreamerHL2_t78A52A1818A2CFA9FD59C7500A2B98565A44072B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void TextReceiver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReceiver_Start_m06617A2C21484B1CB1EFB9B45CBBACA79D8C7979 (TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextReceiver_Start_m06617A2C21484B1CB1EFB9B45CBBACA79D8C7979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * V_1 = NULL;
	{
		// string ip = GetIP();
		String_t* L_0 = TextReceiver_GetIP_m39E5F1E1FECE774D830B0C1BCDBCEB51F2DCC570(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Debug.Log("??IP???" + ip);
		String_t* L_1 = V_0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralFADBAE12CA99B73640B8443B9E35984D43A33407, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		// text.text = "??socket??";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = __this->get_text_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral143C5ED9831E9861487094DCB782E11A5122806E);
		// warningState = '0';
		__this->set_warningState_5(((int32_t)48));
		// audioSource = GetComponent<AudioSource>();//??AudioSource??
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_4 = Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var);
		__this->set_audioSource_8(L_4);
		// serverSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);//???? Socket ??????????????
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_5 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
		Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_5, 2, 1, 6, /*hidden argument*/NULL);
		__this->set_serverSocket_10(L_5);
		// EndPoint point = new IPEndPoint(IPAddress.Parse(ip), port);// IP ????? IPAddress ??????? IPEndPoint ?? point ???????????
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_7 = IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C_il2cpp_TypeInfo_var);
		int32_t L_8 = ((TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C_StaticFields*)il2cpp_codegen_static_fields_for(TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C_il2cpp_TypeInfo_var))->get_port_9();
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_9 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_9, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// serverSocket.Bind(point);//???? IP ??????
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_10 = __this->get_serverSocket_10();
		EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * L_11 = V_1;
		NullCheck(L_10);
		Socket_Bind_m839E8CD90EEB61CE1AE5274224F9049A7D4C7A30(L_10, L_11, /*hidden argument*/NULL);
		// serverSocket.Listen(100);// ??????????? 100 ???????????????
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_12 = __this->get_serverSocket_10();
		NullCheck(L_12);
		Socket_Listen_m2926E72970BEAACEBD9C140E89DE47A523BAB540(L_12, ((int32_t)100), /*hidden argument*/NULL);
		// clientSocket = serverSocket.Accept();//?????????????????????????????????????? Socket ?? clientSocket???????????????
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_13 = __this->get_serverSocket_10();
		NullCheck(L_13);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_14 = Socket_Accept_mDF6F7AA1AD7C6E5AB1154C94BF6C7294B7E410A7(L_13, /*hidden argument*/NULL);
		__this->set_clientSocket_11(L_14);
		// Debug.Log("?????.....");
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral6EAD883555C8ECA43EC59072B2CDD6E60B3B9C0E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TextReceiver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReceiver_Update_m9A7E6BC112D621AF09EBBC24BF0004BA602FDDA8 (TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextReceiver_Update_m9A7E6BC112D621AF09EBBC24BF0004BA602FDDA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	Il2CppChar V_3 = 0x0;
	{
		// if (clientSocket != null && clientSocket.Connected)//clientSocket ???????????
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_clientSocket_11();
		if (!L_0)
		{
			goto IL_0071;
		}
	}
	{
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = __this->get_clientSocket_11();
		NullCheck(L_1);
		bool L_2 = Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0071;
		}
	}
	{
		// byte[] bytes = new byte[1024];//????? 1024 ??????? 1024 ??????
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_3;
		// int len = clientSocket.Receive(bytes);//?????????????????????? len ???.Receive ?????????????????????
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_4 = __this->get_clientSocket_11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = Socket_Receive_mD8D9A2358E66B15A2291E7DF76441E9D445C366C(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// string msg = Encoding.UTF8.GetString(bytes, 0, len); //???????? bytes ??????? UTF-8 ??????,????? len ???
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_7 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_7);
		String_t* L_10 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, L_9);
		V_2 = L_10;
		// text.text = msg;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_11 = __this->get_text_4();
		String_t* L_12 = V_2;
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_12);
		// Debug.Log(msg);
		String_t* L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_13, /*hidden argument*/NULL);
		// warningState = msg[msg.Length - 1];//?????????????????????
		String_t* L_14 = V_2;
		String_t* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Il2CppChar L_17 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_warningState_5(L_17);
		// Debug.Log(warningState);
		Il2CppChar L_18 = __this->get_warningState_5();
		Il2CppChar L_19 = L_18;
		RuntimeObject * L_20 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_19);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_20, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// if (!audioSource.isPlaying)//???????????
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_21 = __this->get_audioSource_8();
		NullCheck(L_21);
		bool L_22 = AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C(L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00d4;
		}
	}
	{
		// switch (warningState)
		Il2CppChar L_23 = __this->get_warningState_5();
		V_3 = L_23;
		Il2CppChar L_24 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)((int32_t)48))))
		{
			case 0:
			{
				goto IL_00d4;
			}
			case 1:
			{
				goto IL_009b;
			}
			case 2:
			{
				goto IL_00b8;
			}
		}
	}
	{
		return;
	}

IL_009b:
	{
		// audioSource.clip = state1;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_25 = __this->get_audioSource_8();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_26 = __this->get_state1_6();
		NullCheck(L_25);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_25, L_26, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_27 = __this->get_audioSource_8();
		NullCheck(L_27);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_27, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00b8:
	{
		// audioSource.clip = state2;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_28 = __this->get_audioSource_8();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_29 = __this->get_state2_7();
		NullCheck(L_28);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_28, L_29, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_30 = __this->get_audioSource_8();
		NullCheck(L_30);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_30, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void TextReceiver::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReceiver_OnApplicationQuit_m7B8DDDD258BD4505D1813A1DC87D67EA37693262 (TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C * __this, const RuntimeMethod* method)
{
	{
		// if (clientSocket != null)
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_clientSocket_11();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// clientSocket.Close();
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = __this->get_clientSocket_11();
		NullCheck(L_1);
		Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// if (serverSocket != null)
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_2 = __this->get_serverSocket_10();
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// serverSocket.Close();
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_3 = __this->get_serverSocket_10();
		NullCheck(L_3);
		Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.String TextReceiver::GetIP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextReceiver_GetIP_m39E5F1E1FECE774D830B0C1BCDBCEB51F2DCC570 (TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextReceiver_GetIP_m39E5F1E1FECE774D830B0C1BCDBCEB51F2DCC570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* V_2 = NULL;
	int32_t V_3 = 0;
	NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * V_8 = NULL;
	UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// string wirelessIP = "";//??IP??
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string wiredIP = "";//??IP??
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (NetworkInterface item in NetworkInterface.GetAllNetworkInterfaces())
		NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_0 = NetworkInterface_GetAllNetworkInterfaces_mECF52873ABF0B957ACD25FD76B56DD63FDF6C0A1(/*hidden argument*/NULL);
		V_2 = L_0;
		V_3 = 0;
		goto IL_00f9;
	}

IL_0019:
	{
		// foreach (NetworkInterface item in NetworkInterface.GetAllNetworkInterfaces())
		NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// NetworkInterfaceType wirelessType = NetworkInterfaceType.Wireless80211; // ????????
		V_5 = ((int32_t)71);
		// NetworkInterfaceType wiredType = NetworkInterfaceType.Ethernet; // ????????
		V_6 = 6;
		// if (item.NetworkInterfaceType == wirelessType && item.OperationalStatus == OperationalStatus.Up)
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_5 = V_4;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_5);
		int32_t L_7 = V_5;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_008d;
		}
	}
	{
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_8 = V_4;
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_10 = V_4;
		NullCheck(L_10);
		IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_11 = VirtFuncInvoker0< IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * >::Invoke(4 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_10);
		NullCheck(L_11);
		UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * L_12 = VirtFuncInvoker0< UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * >::Invoke(4 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_12);
		V_7 = L_13;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_004f:
		{
			// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
			RuntimeObject* L_14 = V_7;
			NullCheck(L_14);
			UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_15 = InterfaceFuncInvoker0< UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_t1832F88929CE7C558676FB002FC111AB3DC5E01A_il2cpp_TypeInfo_var, L_14);
			V_8 = L_15;
			// if (ip.Address.AddressFamily == AddressFamily.InterNetwork)
			UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_16 = V_8;
			NullCheck(L_16);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_17 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_16);
			NullCheck(L_17);
			int32_t L_18 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_17, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_18) == ((uint32_t)2))))
			{
				goto IL_0076;
			}
		}

IL_0067:
		{
			// wirelessIP = ip.Address.ToString();
			UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_19 = V_8;
			NullCheck(L_19);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_20 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_19);
			NullCheck(L_20);
			String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
			V_0 = L_21;
			// break; // ????IP??????
			IL2CPP_LEAVE(0x8D, FINALLY_0081);
		}

IL_0076:
		{
			// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
			RuntimeObject* L_22 = V_7;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_004f;
			}
		}

IL_007f:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_0081);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0081;
	}

FINALLY_0081:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_7;
			if (!L_24)
			{
				goto IL_008c;
			}
		}

IL_0085:
		{
			RuntimeObject* L_25 = V_7;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_25);
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(129)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(129)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
	}

IL_008d:
	{
		// if (item.NetworkInterfaceType == wiredType && item.OperationalStatus == OperationalStatus.Up)
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_26 = V_4;
		NullCheck(L_26);
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_26);
		int32_t L_28 = V_6;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_00f5;
		}
	}
	{
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_29 = V_4;
		NullCheck(L_29);
		int32_t L_30 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_29);
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00f5;
		}
	}
	{
		// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_31 = V_4;
		NullCheck(L_31);
		IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_32 = VirtFuncInvoker0< IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * >::Invoke(4 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_31);
		NullCheck(L_32);
		UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * L_33 = VirtFuncInvoker0< UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * >::Invoke(4 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_32);
		NullCheck(L_33);
		RuntimeObject* L_34 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_33);
		V_7 = L_34;
	}

IL_00b5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00de;
		}

IL_00b7:
		{
			// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
			RuntimeObject* L_35 = V_7;
			NullCheck(L_35);
			UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_36 = InterfaceFuncInvoker0< UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_t1832F88929CE7C558676FB002FC111AB3DC5E01A_il2cpp_TypeInfo_var, L_35);
			V_9 = L_36;
			// if (ip.Address.AddressFamily == AddressFamily.InterNetwork)
			UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_37 = V_9;
			NullCheck(L_37);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_38 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_37);
			NullCheck(L_38);
			int32_t L_39 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_38, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_39) == ((uint32_t)2))))
			{
				goto IL_00de;
			}
		}

IL_00cf:
		{
			// wiredIP = ip.Address.ToString();
			UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_40 = V_9;
			NullCheck(L_40);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_41 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_40);
			NullCheck(L_41);
			String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_41);
			V_1 = L_42;
			// break; // ????IP??????
			IL2CPP_LEAVE(0xF5, FINALLY_00e9);
		}

IL_00de:
		{
			// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
			RuntimeObject* L_43 = V_7;
			NullCheck(L_43);
			bool L_44 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_43);
			if (L_44)
			{
				goto IL_00b7;
			}
		}

IL_00e7:
		{
			IL2CPP_LEAVE(0xF5, FINALLY_00e9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e9;
	}

FINALLY_00e9:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_45 = V_7;
			if (!L_45)
			{
				goto IL_00f4;
			}
		}

IL_00ed:
		{
			RuntimeObject* L_46 = V_7;
			NullCheck(L_46);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_46);
		}

IL_00f4:
		{
			IL2CPP_END_FINALLY(233)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(233)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF5, IL_00f5)
	}

IL_00f5:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00f9:
	{
		// foreach (NetworkInterface item in NetworkInterface.GetAllNetworkInterfaces())
		int32_t L_48 = V_3;
		NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_49 = V_2;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		// if (!string.IsNullOrEmpty(wirelessIP))
		String_t* L_50 = V_0;
		bool L_51 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_010c;
		}
	}
	{
		// return wirelessIP; // ????IP?????????IP
		String_t* L_52 = V_0;
		return L_52;
	}

IL_010c:
	{
		// return wiredIP; // ??????IP
		String_t* L_53 = V_1;
		return L_53;
	}
}
// System.Void TextReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReceiver__ctor_m1F828C3622774F5F63BF97E5887FDF42D3F84E36 (TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextReceiver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReceiver__cctor_m12D855564FD23AABBA832832FB8CCF074D95D6C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextReceiver__cctor_m12D855564FD23AABBA832832FB8CCF074D95D6C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int port = 23942;            // ????????
		((TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C_StaticFields*)il2cpp_codegen_static_fields_for(TextReceiver_t04A82044E747E774F2DFE7B175E8507EF8E8F23C_il2cpp_TypeInfo_var))->set_port_9(((int32_t)23942));
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
// System.Void test::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_Start_m53350D0C9B2B3AA72950FBC77CEC6640573077C5 (test_tBCA4AC3C1D45BA0DD176A21EC1F45D70CE6F1246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (test_Start_m53350D0C9B2B3AA72950FBC77CEC6640573077C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string ipAddress = GetIP();
		String_t* L_0 = test_GetIP_mD3D1883FE61545F044CFC5BB7B4477DBF3C57938(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Debug.Log("??IP???" + ipAddress);
		String_t* L_1 = V_0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralFADBAE12CA99B73640B8443B9E35984D43A33407, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String test::GetIP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* test_GetIP_mD3D1883FE61545F044CFC5BB7B4477DBF3C57938 (test_tBCA4AC3C1D45BA0DD176A21EC1F45D70CE6F1246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (test_GetIP_mD3D1883FE61545F044CFC5BB7B4477DBF3C57938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* V_2 = NULL;
	int32_t V_3 = 0;
	NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * V_8 = NULL;
	UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// string wirelessIP = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string wiredIP = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (NetworkInterface item in NetworkInterface.GetAllNetworkInterfaces())
		NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_0 = NetworkInterface_GetAllNetworkInterfaces_mECF52873ABF0B957ACD25FD76B56DD63FDF6C0A1(/*hidden argument*/NULL);
		V_2 = L_0;
		V_3 = 0;
		goto IL_00f9;
	}

IL_0019:
	{
		// foreach (NetworkInterface item in NetworkInterface.GetAllNetworkInterfaces())
		NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// NetworkInterfaceType wirelessType = NetworkInterfaceType.Wireless80211; // ????????
		V_5 = ((int32_t)71);
		// NetworkInterfaceType wiredType = NetworkInterfaceType.Ethernet; // ????????
		V_6 = 6;
		// if (item.NetworkInterfaceType == wirelessType && item.OperationalStatus == OperationalStatus.Up)
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_5 = V_4;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_5);
		int32_t L_7 = V_5;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_008d;
		}
	}
	{
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_8 = V_4;
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_10 = V_4;
		NullCheck(L_10);
		IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_11 = VirtFuncInvoker0< IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * >::Invoke(4 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_10);
		NullCheck(L_11);
		UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * L_12 = VirtFuncInvoker0< UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * >::Invoke(4 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_12);
		V_7 = L_13;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_004f:
		{
			// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
			RuntimeObject* L_14 = V_7;
			NullCheck(L_14);
			UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_15 = InterfaceFuncInvoker0< UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_t1832F88929CE7C558676FB002FC111AB3DC5E01A_il2cpp_TypeInfo_var, L_14);
			V_8 = L_15;
			// if (ip.Address.AddressFamily == AddressFamily.InterNetwork)
			UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_16 = V_8;
			NullCheck(L_16);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_17 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_16);
			NullCheck(L_17);
			int32_t L_18 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_17, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_18) == ((uint32_t)2))))
			{
				goto IL_0076;
			}
		}

IL_0067:
		{
			// wirelessIP = ip.Address.ToString();
			UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_19 = V_8;
			NullCheck(L_19);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_20 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_19);
			NullCheck(L_20);
			String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
			V_0 = L_21;
			// break; // ????IP??????
			IL2CPP_LEAVE(0x8D, FINALLY_0081);
		}

IL_0076:
		{
			// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
			RuntimeObject* L_22 = V_7;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_004f;
			}
		}

IL_007f:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_0081);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0081;
	}

FINALLY_0081:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_7;
			if (!L_24)
			{
				goto IL_008c;
			}
		}

IL_0085:
		{
			RuntimeObject* L_25 = V_7;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_25);
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(129)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(129)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
	}

IL_008d:
	{
		// if (item.NetworkInterfaceType == wiredType && item.OperationalStatus == OperationalStatus.Up)
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_26 = V_4;
		NullCheck(L_26);
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_26);
		int32_t L_28 = V_6;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_00f5;
		}
	}
	{
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_29 = V_4;
		NullCheck(L_29);
		int32_t L_30 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_29);
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00f5;
		}
	}
	{
		// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_31 = V_4;
		NullCheck(L_31);
		IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_32 = VirtFuncInvoker0< IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * >::Invoke(4 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_31);
		NullCheck(L_32);
		UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * L_33 = VirtFuncInvoker0< UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * >::Invoke(4 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_32);
		NullCheck(L_33);
		RuntimeObject* L_34 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_33);
		V_7 = L_34;
	}

IL_00b5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00de;
		}

IL_00b7:
		{
			// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
			RuntimeObject* L_35 = V_7;
			NullCheck(L_35);
			UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_36 = InterfaceFuncInvoker0< UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_t1832F88929CE7C558676FB002FC111AB3DC5E01A_il2cpp_TypeInfo_var, L_35);
			V_9 = L_36;
			// if (ip.Address.AddressFamily == AddressFamily.InterNetwork)
			UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_37 = V_9;
			NullCheck(L_37);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_38 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_37);
			NullCheck(L_38);
			int32_t L_39 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_38, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_39) == ((uint32_t)2))))
			{
				goto IL_00de;
			}
		}

IL_00cf:
		{
			// wiredIP = ip.Address.ToString();
			UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_40 = V_9;
			NullCheck(L_40);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_41 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_40);
			NullCheck(L_41);
			String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_41);
			V_1 = L_42;
			// break; // ????IP??????
			IL2CPP_LEAVE(0xF5, FINALLY_00e9);
		}

IL_00de:
		{
			// foreach (UnicastIPAddressInformation ip in item.GetIPProperties().UnicastAddresses)
			RuntimeObject* L_43 = V_7;
			NullCheck(L_43);
			bool L_44 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_43);
			if (L_44)
			{
				goto IL_00b7;
			}
		}

IL_00e7:
		{
			IL2CPP_LEAVE(0xF5, FINALLY_00e9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e9;
	}

FINALLY_00e9:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_45 = V_7;
			if (!L_45)
			{
				goto IL_00f4;
			}
		}

IL_00ed:
		{
			RuntimeObject* L_46 = V_7;
			NullCheck(L_46);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_46);
		}

IL_00f4:
		{
			IL2CPP_END_FINALLY(233)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(233)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF5, IL_00f5)
	}

IL_00f5:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00f9:
	{
		// foreach (NetworkInterface item in NetworkInterface.GetAllNetworkInterfaces())
		int32_t L_48 = V_3;
		NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_49 = V_2;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		// if (!string.IsNullOrEmpty(wirelessIP))
		String_t* L_50 = V_0;
		bool L_51 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_010c;
		}
	}
	{
		// return wirelessIP; // ????IP?????????IP
		String_t* L_52 = V_0;
		return L_52;
	}

IL_010c:
	{
		// return wiredIP; // ??????IP
		String_t* L_53 = V_1;
		return L_53;
	}
}
// System.Void test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test__ctor_mABCF8736B1B2838F5F8F1AE6C4D399AF0EB9C769 (test_tBCA4AC3C1D45BA0DD176A21EC1F45D70CE6F1246 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_connected_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Family_10();
		return L_0;
	}
}
