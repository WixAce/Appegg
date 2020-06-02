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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// ICSharpCode.SharpZipLib.Checksum.Crc32
struct Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354;
// ICSharpCode.SharpZipLib.Zip.Compression.Deflater
struct Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine
struct DeflaterEngine_tE8EC12DFB6FEE66CAB4EA974FA43075C2568F2CF;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending
struct DeflaterPending_t1B8ADB5CD3CB574B745968118DF95A9F2095AA78;
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_tAE7A61EFD329845367AD2C6F36A6F407E1BC69D5;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream
struct DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_t477FD8959BCFA6FCA4649967A86D1D1662B69610;
// ICSharpCode.SharpZipLib.Zip.TestStatus
struct TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8;
// ICSharpCode.SharpZipLib.Zip.ZipEntry[]
struct ZipEntryU5BU5D_tFBD213A1D703D5C45FDBEE5A47CC05645B2F018D;
// ICSharpCode.SharpZipLib.Zip.ZipException
struct ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD;
// ICSharpCode.SharpZipLib.Zip.ZipExtraData
struct ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C;
// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_tB7EC5B6D1FBF9F8E603CD3742E4236B7BA5DB6D7;
// ICSharpCode.SharpZipLib.Zip.ZipHelperStream
struct ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0;
// ICSharpCode.SharpZipLib.Zip.ZipInputStream
struct ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA;
// ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler
struct ReadDataHandler_tA7387087BBA5C5FADFE1D182C794E4D02FEF134E;
// ICSharpCode.SharpZipLib.Zip.ZipNameTransform
struct ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8;
// ICSharpCode.SharpZipLib.Zip.ZipOutputStream
struct ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9;
// ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler
struct ZipTestResultHandler_tDF1DA7FF30407B1B36C65CB7772FD9BF3E2031D2;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// SampleTable
struct SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E;
// SampleTable/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13;
// SampleTable/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634;
// SampleTable/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369;
// SampleTable/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D;
// SampleTable/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC;
// SampleTable/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F;
// SampleTable/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F;
// SampleTable/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9;
// SampleTable/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B;
// SampleTable/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1;
// SampleTable/Row
struct Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A;
// SampleTable/Row[]
struct RowU5BU5D_t4ECCD484FB283540255E0C73DD876C09CBAC9486;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Byte[]>
struct Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.Single>
struct Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_tFFB5515FC97391D04D5034ED7F334357FED1FAE6;
// System.Collections.Generic.List`1<ICSharpCode.SharpZipLib.Zip.ZipEntry>
struct List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61;
// System.Collections.Generic.List`1<SampleTable/Row>
struct List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.DirectoryInfo
struct DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.PathTooLongException
struct PathTooLongException_t8DFBC40E5D45388A65B3327CF0D1F677C0F923AA;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<SampleTable/Row>
struct Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t43C29A7F3A8C2DDAC9F3BF9BF739B03E4D5DE9A9;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.String[][]
struct StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// SzActivityTime
struct SzActivityTime_tDB613C667BFB1C3004889B51F6251706AAC48FD5;
// TableCodeGen
struct TableCodeGen_t883A58517A3071069370EC21B37BAD32544EA124;
// UINetworkImage
struct UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7;
// UINetworkImage/<DownSprite>d__5
struct U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C;
// UIProgressBar
struct UIProgressBar_t2FF6D8395FB020C8D2EC33F23235E7BF2FE38B96;
// UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextAsset
struct TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
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
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// UriHelper
struct UriHelper_tB7DB0E6AFBD8133A6AC20D4ED04BFAC35DCC1098;
// WKWebView
struct WKWebView_tB621CFF722AE711E3D509DD012802941708797B3;
// WKWebView/<>c
struct U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9;
// WebRequestCert
struct WebRequestCert_t36368B40295F59CFBD8BEF9D4EE2CF01D7CB67BC;
// WebUtil/<DownloadFile>d__2
struct U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9;
// WebUtil/<GetText>d__1
struct U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989;
// WebViewObject
struct WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D;
// ZipFile
struct ZipFile_t988BEADCE49E4CD6B32CE6B49E828E509E539B02;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PathTooLongException_t8DFBC40E5D45388A65B3327CF0D1F677C0F923AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0566E955CDC0CD4BFFCE284F3522117F82193A58;
IL2CPP_EXTERN_C String_t* _stringLiteral08534F33C201A45017B502E90A800F1B708EBCB3;
IL2CPP_EXTERN_C String_t* _stringLiteral0F852624D371B6B99FD56D2D3AFDC0D52969380F;
IL2CPP_EXTERN_C String_t* _stringLiteral118A9989815489C24B81B160782015890ED2085E;
IL2CPP_EXTERN_C String_t* _stringLiteral2A6D066F43BE099EA29DD9BF9738FF7818D1AF76;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9D013177DA6700FBAEE9F12BB86452C577CAF6;
IL2CPP_EXTERN_C String_t* _stringLiteral2C7C211FA07CF65A1ACED4CC15592F9EB0508F29;
IL2CPP_EXTERN_C String_t* _stringLiteral2CF1A03827BFEF47235A1C7B31E35193F5B4265F;
IL2CPP_EXTERN_C String_t* _stringLiteral31E2F1289B806C44F7E719C9CA9905EDBD2C36ED;
IL2CPP_EXTERN_C String_t* _stringLiteral32F567C63C98B12BDDF9400DF6101DF8090AF2F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3389686E32A2B2C9D23BCF7495D98A1B4CC181F9;
IL2CPP_EXTERN_C String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral42C5E503550C6A319D5A55BE253BF31B4A2862CB;
IL2CPP_EXTERN_C String_t* _stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B;
IL2CPP_EXTERN_C String_t* _stringLiteral50976EF67178628C3B61A887C8DF8DA9EC33C529;
IL2CPP_EXTERN_C String_t* _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651;
IL2CPP_EXTERN_C String_t* _stringLiteral5ACDE0680B4AC23A84F5C7109F51DBAA2FE0BD95;
IL2CPP_EXTERN_C String_t* _stringLiteral5F70657E2FC0ECC61E42ACF23408599EC5042CA4;
IL2CPP_EXTERN_C String_t* _stringLiteral603B002F3D9948771406E30695DFD633CCF0F584;
IL2CPP_EXTERN_C String_t* _stringLiteral61C4128C816142244CD9DE5F843E1D0DB31E567F;
IL2CPP_EXTERN_C String_t* _stringLiteral686CC87A7E15CE7B90C534C22A34D8E616035BED;
IL2CPP_EXTERN_C String_t* _stringLiteral7878EED8A43EFBE82FED259887C19809D3149313;
IL2CPP_EXTERN_C String_t* _stringLiteral8166F5BEE862379C1B9DC4291CF61A2BCE2F00A9;
IL2CPP_EXTERN_C String_t* _stringLiteral8CF170CED3FC0E56C029056591A6714E886F2A07;
IL2CPP_EXTERN_C String_t* _stringLiteral91FD40030193DD67C77C02107C4213CA53FC5092;
IL2CPP_EXTERN_C String_t* _stringLiteral93AED761585AD26CFC0D2B4C77244BEAF45A34D7;
IL2CPP_EXTERN_C String_t* _stringLiteral9DA4BE8C901BAE31174333E46B78B8C03EFC82A8;
IL2CPP_EXTERN_C String_t* _stringLiteralA58B1470289CBC589F8FEB29C9CD13CB3091361D;
IL2CPP_EXTERN_C String_t* _stringLiteralAD365F77EFE331D5BEC32C156018935E75446ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralAE3473C9AE5ABE32020681D6A3D59A2233F52854;
IL2CPP_EXTERN_C String_t* _stringLiteralAE6EADE4DBC024F0DD12C9ECC6732866C6AA75EB;
IL2CPP_EXTERN_C String_t* _stringLiteralB07D9ED92A8817894786071294C9FE8FEDE76863;
IL2CPP_EXTERN_C String_t* _stringLiteralCCACDB5E7C5CC9CEB0FE2752A096145D2F063970;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25;
IL2CPP_EXTERN_C String_t* _stringLiteralEBBFFB7D7EA5362A22BFA1BAB0BFDEB1617CD610;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC4BFE81D45988DA55131B79CBA2B75BE4E8101;
IL2CPP_EXTERN_C String_t* _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556;
IL2CPP_EXTERN_C String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
IL2CPP_EXTERN_C String_t* _stringLiteralFBED4C94F4F4A0C0E3013BED38052A87C954D2B9;
IL2CPP_EXTERN_C String_t* _stringLiteralFF2764F7C1D54DEBC65FD9579D57D20182ECE7E0;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mE14FF42ED04F6447A383F0D4ED7CB7A70FBB3346_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD9D4E02AEE600236E03EBAB2449B68B482FAC69B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m7A4CBED9F6248681E854EEF934AF09D796B4071A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFFAF95BE1158120666355BEDEEA82F8069FEA60F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEA01B431738A0117A71E0EBEFF18AA28E01F881E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7125CA172A5AD645D60CD9B3A04C2E6995E5FEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D_m44CE5F2768BB2EE8B5DB72E9753151DE33424020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4AB2B4A2D33B1995491B11CF7ABC7E06268379A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBDA318FD8FFCE232E156B16743774AC52DF318F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD97E64FC18723DC1E9D8CD0E952DBD408C86CC83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindAll_mD5F6AD75B6054220CAEB130D5C5A10200D6FF45C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m4DC4CCF1D7DB1365CA18AF86D982A1AA093C74BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1066D00079B7F3C4B98349A2B6BAB709F2CBB5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6271CC3DE8ADE6F7315529CD38C69C0B6B71490E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEDE0B066356A5E54A76338C074058243DC41DF87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1FDCB78B65C08525A53025D604B1C6B46CF4B9BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m296605FADD940ECB7C32C051FD6C7BE98D5F582B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m28E3F5D4E6ED522A019896F0A575A8D7B9A2D4DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownSpriteU3Ed__5_System_Collections_IEnumerator_Reset_m07C11D7F4247B0326944344037EA4790F0894C54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadFileU3Ed__2_System_Collections_IEnumerator_Reset_mD8D0760A40B0A52CBCE2BE3D43181CF47F61C876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTextU3Ed__1_System_Collections_IEnumerator_Reset_m183806B56450DF66A8C541E3577F7B0F622F02D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__15_0_m411E5EF4FFB2F04EA187A454054737968342E843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__15_1_m696619A57D939CD7ED56D45B851A73C0841E8243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__15_3_m64C3C4E32D47DD384247DBAB0AA7811947817B14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CFind_MakeU3Eb__0_m7E82A16D38447CB2EDA69C795DB1F981C0FF43D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CFindAll_MakeU3Eb__0_mDE50E862C73B6075CAC113CCC684DCA4030BD021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CFind_ModelU3Eb__0_mF4046ED3FB520AC56DB3AFE435CB4AC6898CCAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CFindAll_ModelU3Eb__0_m30E98835AC1F5D3F720BC9E5F6CBFAB908D22C43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CFind_DescriptionU3Eb__0_mC9CA2861F0024B2BE7DCA1917DD0CA09DC989930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CFindAll_DescriptionU3Eb__0_mE4EA5E1626ED6D3B34D8903C410AB41821E988EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CFind_PriceU3Eb__0_m229EC4F48FC4D0EE459C3843A24B0CC676CA94FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CFindAll_PriceU3Eb__0_m4F1BF2821C7ED1F382C906A9CB099D7A1B6DA250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CFind_YearU3Eb__0_m37F8EB4AA2401366334F9BFDF7844E55E388DFC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CFindAll_YearU3Eb__0_mEC471FADE1C656D08A375A335A838A5D4953FA00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WKWebView_U3CInitU3Eb__15_2_mBE2A98148DECF2C18DEBB6B794BEBE46C3F5B042_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipNameTransform_MakeValidName_mA44F3CB2B417AACA6D5933D28794BC7E19776608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipNameTransform_TransformDirectory_mA545CE0DC648AED201F273F22ABE8FD0600040A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutputStream_CloseEntry_m522D4C18CFBE5829E2E11C0E030DCA425CE274CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutputStream_Finish_m1BA33A60079972D685F0CDE05D3998D3C9808425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutputStream_PutNextEntry_m91957C2B9C0A07446D7456FAAF0F84AA6EF04803_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutputStream_SetComment_m4626AF8705085EBE01E1BB646A2170950348DA94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutputStream_Write_m9B86D0C092E7E7A6E9756CFEF7D16D580343FF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipStrings_set_CodePage_mAC7AB40C4A44231DA3E822D363679ACF8AC1F0DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ReadDataHandler_BeginInvoke_m974DC70593F1F400E4BA27508D3865B752BD6C2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_FindAll_Description_mCB66F564BAB2A067B8E6401CDDA686A449B70C6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_FindAll_Make_mF6BA22F204BB70843E1875DCF0EB47E1041FE861_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_FindAll_Model_mAA24143143C3187D82D98DD1F6732FD45F1F3738_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_FindAll_Price_mE8BDC2C2FD6D3BB5C9362244DF7F2387FA6ECFA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_FindAll_Year_mCE894ECBA9EB98D23EE4E014F4DE8383481CEF7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_Find_Description_m9F6FA032393A1964373C0670FBC79B4477863D39_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_Find_Make_mA3B625F5759B9E77FBD2929194CBD223566DD883_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_Find_Model_m880E46FE9539C6EADB0A903CA23BE816E7549BAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_Find_Price_mB9406F30A00A7B4EB10BB48F80B6033C32952452_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_Find_Year_m1E33F2324891F3C0263B4E08087AB89550917227_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_GetAt_m74D5970C4F35C804E129E8CAFE0C4F8C7EC718EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_Load_m385E2957EAF4EE5C9C8AB06582EDBE98BCAD01AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable_NumRows_m5AFC12150E063D7F145D1AA275C716557312D68E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SampleTable__ctor_m52E396D123B6AC413D483467404A58797717313E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TableCodeGen_Generate_mA428BBF2A0950990A6B2DE7647E6FB6A853C4C77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDownSpriteU3Ed__5_MoveNext_m198CB72AFD973D3C44EC350086D73578CEB27412_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDownSpriteU3Ed__5_System_Collections_IEnumerator_Reset_m07C11D7F4247B0326944344037EA4790F0894C54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDownloadFileU3Ed__2_MoveNext_m62259D215BF11369C088B53955C92192CCD3F065_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDownloadFileU3Ed__2_System_Collections_IEnumerator_Reset_mD8D0760A40B0A52CBCE2BE3D43181CF47F61C876_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetTextU3Ed__1_MoveNext_m42AB2A3ABD46C3641E2323B65F729A1265632AAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetTextU3Ed__1_System_Collections_IEnumerator_Reset_m183806B56450DF66A8C541E3577F7B0F622F02D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CInitU3Eb__15_0_m411E5EF4FFB2F04EA187A454054737968342E843_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CInitU3Eb__15_1_m696619A57D939CD7ED56D45B851A73C0841E8243_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CInitU3Eb__15_3_m64C3C4E32D47DD384247DBAB0AA7811947817B14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mD806471B8C8440F39B5FF651C5FFE4D0D8870D49_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UINetworkImage_DownSprite_mF4C4B3FC9C6E246CEA30C7FDEC29DF3DB7054712_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UINetworkImage_get_Url_mD29EB1C750449E949369EF438E6A7EEEA158544AAssemblyU2DCSharp3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UINetworkImage_get_Url_mD29EB1C750449E949369EF438E6A7EEEA158544A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UINetworkImage_set_Url_m7465949C36FEEE8CEC47AEAC86CA802A4DB7138B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIProgressBar_Update_m47CD47D9FFE60009EF202626B758AA7CB2949A59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UriHelper_GetFileName_mEA76D8EE7B2B4B6789FB580EE27AC9A71615F1FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WKWebView_Init_mC67972E9E9D740E4BD8D9249B5205F774AA004EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WKWebView_get_IsHybrid_mD1DF325C9E8405BF905547D0F1296FC90CC701F2AssemblyU2DCSharp3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WKWebView_get_IsHybrid_mD1DF325C9E8405BF905547D0F1296FC90CC701F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WKWebView_get_Uri_mF4FDCB31E54E6D529B5D01A12A9C7A53E39EA356AssemblyU2DCSharp3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WKWebView_get_Uri_mF4FDCB31E54E6D529B5D01A12A9C7A53E39EA356_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WKWebView_get_Url_m930A2F995A968AC8E5AC3812C8CA616DCCCB90F0AssemblyU2DCSharp3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WKWebView_get_Url_m930A2F995A968AC8E5AC3812C8CA616DCCCB90F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WKWebView_set_IsHybrid_m04EA8F275041805A5D1FD251846BE4314DB03B32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WKWebView_set_Uri_mD7CE60520C02CBE3E51E1078C3985FFA6E033C06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WKWebView_set_Url_m37B3FD6216CAAEF906199437922D47B47D07BBF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebUtil_DownloadFile_m09D176135627CD02088234421BA83DDD0679DC4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebUtil_GetText_m0F983FE2D4CF6348C679349098588AD4DF7F3FCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_AddCustomHeader_m3A842840B26DB4FBBF84F1D5AF36D7FDA8E778B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_CallFromJS_m69D3AF8D146345502BD6DFA3C7054B0434947D18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_CallOnError_m840C1B0031C78E62A564687DF3541807C6E8AA33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_CallOnHttpError_m542FFE97E71177C391B4616905E5E06D08A296AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_CallOnLoaded_mF40AF7A26834221A9A62750056B0AFD875090076_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_CallOnStarted_m7185EBD51EE9939ADF85E53E32B81AB37DB16F13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_CanGoBack_mDF877A4772C791C2AB245B47D6DCE3C34C3E56C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_CanGoForward_m08AB94551C788C881659EFB1B45E14369F5C805C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_ClearCookies_m062EF6FDDD0B2EB162AC87B74294819E9AABF00A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_ClearCustomHeader_m89CD043FA422A390A2A85705E4376D5232E9BBBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_EvaluateJS_mC3017EEFBBDBB3F5C75051562C7DAC85AD436755_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_GetCookies_m367C37F8A218420442F87BF85AA55FEBE895EF22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_GetCustomHeaderValue_m43F6BF116F704493B15CA1FEAB8FAF5519472F67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_GoBack_m7EA19BFC31BF4425D85F67D9A6D0442C2B98A2BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_GoForward_m9CA8CBAF545923CD8886C826520B9A305D3B0B32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_LoadHTML_m7DF6E81D03ADA20D88280C09F22E689B1F0D2E61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_LoadURL_m7EAA1907B006B634F59FADC507D81D6A9A89E661_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_OnDestroy_m3C80CB1B49ED2CA8CD21C036421D5EB98D14C7F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_Progress_m38182A0BDC710C6095DF424419E309CBEA6968EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_RemoveCustomHeader_m742A0D1282D6BD6FD86602C5288DC138CEED9C60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_SetAlertDialogEnabled_m9D94FD7FEA9C86E3F4ADA955C85753441F8521D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_SetMargins_m18BE30A7C6189622AC60AF295C95193E9BA4422F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_SetScrollBounceEnabled_mD5CEAD3A3B7AB2F6A629B280C21AB9F967D15206_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_SetURLPattern_m8E1F0A5113238076B1FD5A5B0AAC218A53289481_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebViewObject_SetVisibility_m1D5FEE21D31AE46F8F4FE68A2AEA08EE8ED1FCDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipFile_UnZip_mD3AB0C3FE4FB05BC4FF9664C00EAD59BC2609B71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipNameTransform_IsValidName_m5BF31F4568121CB8DE7C20047B4C3A22E08DB1DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipNameTransform_IsValidName_mE265F01570290FC498389F4827EA34EE4A78FB88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipNameTransform_MakeValidName_mA44F3CB2B417AACA6D5933D28794BC7E19776608_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipNameTransform_TransformDirectory_mA545CE0DC648AED201F273F22ABE8FD0600040A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipNameTransform_TransformFile_mB7253A47F462A93461A6165E518E78CFB6BB2693_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipNameTransform__cctor_m14C55B36A7C8EB72D435B929F520A5C9E0464148_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipOutputStream_CloseEntry_m522D4C18CFBE5829E2E11C0E030DCA425CE274CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipOutputStream_CopyAndEncrypt_m30B3C052A4B412D5FC3650F8C30B704489D08C90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipOutputStream_Finish_m1BA33A60079972D685F0CDE05D3998D3C9808425_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipOutputStream_PutNextEntry_m91957C2B9C0A07446D7456FAAF0F84AA6EF04803_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipOutputStream_SetComment_m4626AF8705085EBE01E1BB646A2170950348DA94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipOutputStream_WriteEncryptionHeader_mAAA5CE54D0E768D79B118FFF867F3CD379A32CC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipOutputStream_Write_m9B86D0C092E7E7A6E9756CFEF7D16D580343FF73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipOutputStream__ctor_m6FADF27291B0B07FB631DC16A55B944EA72B193D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipOutputStream__ctor_mB650382E051651BC0A0D85376C01B0E27293FE24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_ConvertToArray_m3BE8EC43ECA5CD1BB18D4994A5B9E5F534EEB686_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_ConvertToArray_mCA3E762D116FDEA744914D131559874EBF9D53AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_ConvertToStringExt_mAE2B70106D281A6C393BEA63BBA3F21CE25B3DFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_ConvertToStringExt_mDC7A4C65482F89262185878E8AFABDA18F3B5F40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_ConvertToString_m0254A59771E87589203182B9309184161C27B14A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_ConvertToString_m1546E8F8B50993B840ED5CFF0B048B68F3A42CD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_EncodingFromFlag_m1C71060E3A402B4ABBAB3F02A5246AA21BFC5E50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings__cctor_mAE663DF898D36CF20968D9AC27A5F7163C731B44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_get_CodePage_m8C98CC1D09B639ACCEC88561429D6D36403401A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_get_SystemDefaultCodePage_mFDB66669B80E1C318C5D94F017AF0653D799B219AssemblyU2DCSharp3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_get_SystemDefaultCodePage_mFDB66669B80E1C318C5D94F017AF0653D799B219_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_get_UseUnicode_m8A0196860F19FCCC9182A790DF9BC5ED3EB05689_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_set_CodePage_mAC7AB40C4A44231DA3E822D363679ACF8AC1F0DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZipStrings_set_UseUnicode_m0582064708699779B2988C392D730BE0554E2B43_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// ICSharpCode.SharpZipLib.Checksum.Crc32
struct  Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354  : public RuntimeObject
{
public:
	// System.UInt32 ICSharpCode.SharpZipLib.Checksum.Crc32::checkValue
	uint32_t ___checkValue_3;

public:
	inline static int32_t get_offset_of_checkValue_3() { return static_cast<int32_t>(offsetof(Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354, ___checkValue_3)); }
	inline uint32_t get_checkValue_3() const { return ___checkValue_3; }
	inline uint32_t* get_address_of_checkValue_3() { return &___checkValue_3; }
	inline void set_checkValue_3(uint32_t value)
	{
		___checkValue_3 = value;
	}
};

struct Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354_StaticFields
{
public:
	// System.UInt32 ICSharpCode.SharpZipLib.Checksum.Crc32::crcInit
	uint32_t ___crcInit_0;
	// System.UInt32 ICSharpCode.SharpZipLib.Checksum.Crc32::crcXor
	uint32_t ___crcXor_1;
	// System.UInt32[] ICSharpCode.SharpZipLib.Checksum.Crc32::crcTable
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___crcTable_2;

public:
	inline static int32_t get_offset_of_crcInit_0() { return static_cast<int32_t>(offsetof(Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354_StaticFields, ___crcInit_0)); }
	inline uint32_t get_crcInit_0() const { return ___crcInit_0; }
	inline uint32_t* get_address_of_crcInit_0() { return &___crcInit_0; }
	inline void set_crcInit_0(uint32_t value)
	{
		___crcInit_0 = value;
	}

	inline static int32_t get_offset_of_crcXor_1() { return static_cast<int32_t>(offsetof(Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354_StaticFields, ___crcXor_1)); }
	inline uint32_t get_crcXor_1() const { return ___crcXor_1; }
	inline uint32_t* get_address_of_crcXor_1() { return &___crcXor_1; }
	inline void set_crcXor_1(uint32_t value)
	{
		___crcXor_1 = value;
	}

	inline static int32_t get_offset_of_crcTable_2() { return static_cast<int32_t>(offsetof(Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354_StaticFields, ___crcTable_2)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_crcTable_2() const { return ___crcTable_2; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_crcTable_2() { return &___crcTable_2; }
	inline void set_crcTable_2(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___crcTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crcTable_2), (void*)value);
	}
};


// ICSharpCode.SharpZipLib.Zip.Compression.Deflater
struct  Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C  : public RuntimeObject
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::level
	int32_t ___level_15;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Deflater::noZlibHeaderOrFooter
	bool ___noZlibHeaderOrFooter_16;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::state
	int32_t ___state_17;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::totalOut
	int64_t ___totalOut_18;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending ICSharpCode.SharpZipLib.Zip.Compression.Deflater::pending
	DeflaterPending_t1B8ADB5CD3CB574B745968118DF95A9F2095AA78 * ___pending_19;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine ICSharpCode.SharpZipLib.Zip.Compression.Deflater::engine
	DeflaterEngine_tE8EC12DFB6FEE66CAB4EA974FA43075C2568F2CF * ___engine_20;

public:
	inline static int32_t get_offset_of_level_15() { return static_cast<int32_t>(offsetof(Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C, ___level_15)); }
	inline int32_t get_level_15() const { return ___level_15; }
	inline int32_t* get_address_of_level_15() { return &___level_15; }
	inline void set_level_15(int32_t value)
	{
		___level_15 = value;
	}

	inline static int32_t get_offset_of_noZlibHeaderOrFooter_16() { return static_cast<int32_t>(offsetof(Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C, ___noZlibHeaderOrFooter_16)); }
	inline bool get_noZlibHeaderOrFooter_16() const { return ___noZlibHeaderOrFooter_16; }
	inline bool* get_address_of_noZlibHeaderOrFooter_16() { return &___noZlibHeaderOrFooter_16; }
	inline void set_noZlibHeaderOrFooter_16(bool value)
	{
		___noZlibHeaderOrFooter_16 = value;
	}

	inline static int32_t get_offset_of_state_17() { return static_cast<int32_t>(offsetof(Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C, ___state_17)); }
	inline int32_t get_state_17() const { return ___state_17; }
	inline int32_t* get_address_of_state_17() { return &___state_17; }
	inline void set_state_17(int32_t value)
	{
		___state_17 = value;
	}

	inline static int32_t get_offset_of_totalOut_18() { return static_cast<int32_t>(offsetof(Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C, ___totalOut_18)); }
	inline int64_t get_totalOut_18() const { return ___totalOut_18; }
	inline int64_t* get_address_of_totalOut_18() { return &___totalOut_18; }
	inline void set_totalOut_18(int64_t value)
	{
		___totalOut_18 = value;
	}

	inline static int32_t get_offset_of_pending_19() { return static_cast<int32_t>(offsetof(Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C, ___pending_19)); }
	inline DeflaterPending_t1B8ADB5CD3CB574B745968118DF95A9F2095AA78 * get_pending_19() const { return ___pending_19; }
	inline DeflaterPending_t1B8ADB5CD3CB574B745968118DF95A9F2095AA78 ** get_address_of_pending_19() { return &___pending_19; }
	inline void set_pending_19(DeflaterPending_t1B8ADB5CD3CB574B745968118DF95A9F2095AA78 * value)
	{
		___pending_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_19), (void*)value);
	}

	inline static int32_t get_offset_of_engine_20() { return static_cast<int32_t>(offsetof(Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C, ___engine_20)); }
	inline DeflaterEngine_tE8EC12DFB6FEE66CAB4EA974FA43075C2568F2CF * get_engine_20() const { return ___engine_20; }
	inline DeflaterEngine_tE8EC12DFB6FEE66CAB4EA974FA43075C2568F2CF ** get_address_of_engine_20() { return &___engine_20; }
	inline void set_engine_20(DeflaterEngine_tE8EC12DFB6FEE66CAB4EA974FA43075C2568F2CF * value)
	{
		___engine_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___engine_20), (void*)value);
	}
};


// ICSharpCode.SharpZipLib.Zip.ZipExtraData
struct  ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C  : public RuntimeObject
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::_index
	int32_t ____index_0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::_readValueStart
	int32_t ____readValueStart_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::_readValueLength
	int32_t ____readValueLength_2;
	// System.IO.MemoryStream ICSharpCode.SharpZipLib.Zip.ZipExtraData::_newEntry
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * ____newEntry_3;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipExtraData::_data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____data_4;

public:
	inline static int32_t get_offset_of__index_0() { return static_cast<int32_t>(offsetof(ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C, ____index_0)); }
	inline int32_t get__index_0() const { return ____index_0; }
	inline int32_t* get_address_of__index_0() { return &____index_0; }
	inline void set__index_0(int32_t value)
	{
		____index_0 = value;
	}

	inline static int32_t get_offset_of__readValueStart_1() { return static_cast<int32_t>(offsetof(ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C, ____readValueStart_1)); }
	inline int32_t get__readValueStart_1() const { return ____readValueStart_1; }
	inline int32_t* get_address_of__readValueStart_1() { return &____readValueStart_1; }
	inline void set__readValueStart_1(int32_t value)
	{
		____readValueStart_1 = value;
	}

	inline static int32_t get_offset_of__readValueLength_2() { return static_cast<int32_t>(offsetof(ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C, ____readValueLength_2)); }
	inline int32_t get__readValueLength_2() const { return ____readValueLength_2; }
	inline int32_t* get_address_of__readValueLength_2() { return &____readValueLength_2; }
	inline void set__readValueLength_2(int32_t value)
	{
		____readValueLength_2 = value;
	}

	inline static int32_t get_offset_of__newEntry_3() { return static_cast<int32_t>(offsetof(ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C, ____newEntry_3)); }
	inline MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * get__newEntry_3() const { return ____newEntry_3; }
	inline MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C ** get_address_of__newEntry_3() { return &____newEntry_3; }
	inline void set__newEntry_3(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * value)
	{
		____newEntry_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newEntry_3), (void*)value);
	}

	inline static int32_t get_offset_of__data_4() { return static_cast<int32_t>(offsetof(ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C, ____data_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__data_4() const { return ____data_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__data_4() { return &____data_4; }
	inline void set__data_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_4), (void*)value);
	}
};


// ICSharpCode.SharpZipLib.Zip.ZipNameTransform
struct  ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8  : public RuntimeObject
{
public:
	// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::trimPrefix_
	String_t* ___trimPrefix__0;

public:
	inline static int32_t get_offset_of_trimPrefix__0() { return static_cast<int32_t>(offsetof(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8, ___trimPrefix__0)); }
	inline String_t* get_trimPrefix__0() const { return ___trimPrefix__0; }
	inline String_t** get_address_of_trimPrefix__0() { return &___trimPrefix__0; }
	inline void set_trimPrefix__0(String_t* value)
	{
		___trimPrefix__0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trimPrefix__0), (void*)value);
	}
};

struct ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields
{
public:
	// System.Char[] ICSharpCode.SharpZipLib.Zip.ZipNameTransform::InvalidEntryChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___InvalidEntryChars_1;
	// System.Char[] ICSharpCode.SharpZipLib.Zip.ZipNameTransform::InvalidEntryCharsRelaxed
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___InvalidEntryCharsRelaxed_2;

public:
	inline static int32_t get_offset_of_InvalidEntryChars_1() { return static_cast<int32_t>(offsetof(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields, ___InvalidEntryChars_1)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_InvalidEntryChars_1() const { return ___InvalidEntryChars_1; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_InvalidEntryChars_1() { return &___InvalidEntryChars_1; }
	inline void set_InvalidEntryChars_1(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___InvalidEntryChars_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidEntryChars_1), (void*)value);
	}

	inline static int32_t get_offset_of_InvalidEntryCharsRelaxed_2() { return static_cast<int32_t>(offsetof(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields, ___InvalidEntryCharsRelaxed_2)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_InvalidEntryCharsRelaxed_2() const { return ___InvalidEntryCharsRelaxed_2; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_InvalidEntryCharsRelaxed_2() { return &___InvalidEntryCharsRelaxed_2; }
	inline void set_InvalidEntryCharsRelaxed_2(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___InvalidEntryCharsRelaxed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidEntryCharsRelaxed_2), (void*)value);
	}
};


// ICSharpCode.SharpZipLib.Zip.ZipStrings
struct  ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD  : public RuntimeObject
{
public:

public:
};

struct ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipStrings::codePage
	int32_t ___codePage_0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipStrings::<SystemDefaultCodePage>k__BackingField
	int32_t ___U3CSystemDefaultCodePageU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_U3CSystemDefaultCodePageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields, ___U3CSystemDefaultCodePageU3Ek__BackingField_3)); }
	inline int32_t get_U3CSystemDefaultCodePageU3Ek__BackingField_3() const { return ___U3CSystemDefaultCodePageU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSystemDefaultCodePageU3Ek__BackingField_3() { return &___U3CSystemDefaultCodePageU3Ek__BackingField_3; }
	inline void set_U3CSystemDefaultCodePageU3Ek__BackingField_3(int32_t value)
	{
		___U3CSystemDefaultCodePageU3Ek__BackingField_3 = value;
	}
};


// SampleTable
struct  SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<SampleTable_Row> SampleTable::rowList
	List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * ___rowList_0;
	// System.Boolean SampleTable::isLoaded
	bool ___isLoaded_1;

public:
	inline static int32_t get_offset_of_rowList_0() { return static_cast<int32_t>(offsetof(SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E, ___rowList_0)); }
	inline List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * get_rowList_0() const { return ___rowList_0; }
	inline List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 ** get_address_of_rowList_0() { return &___rowList_0; }
	inline void set_rowList_0(List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * value)
	{
		___rowList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowList_0), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_1() { return static_cast<int32_t>(offsetof(SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E, ___isLoaded_1)); }
	inline bool get_isLoaded_1() const { return ___isLoaded_1; }
	inline bool* get_address_of_isLoaded_1() { return &___isLoaded_1; }
	inline void set_isLoaded_1(bool value)
	{
		___isLoaded_1 = value;
	}
};


// SampleTable_<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13  : public RuntimeObject
{
public:
	// System.String SampleTable_<>c__DisplayClass10_0::find
	String_t* ___find_0;

public:
	inline static int32_t get_offset_of_find_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13, ___find_0)); }
	inline String_t* get_find_0() const { return ___find_0; }
	inline String_t** get_address_of_find_0() { return &___find_0; }
	inline void set_find_0(String_t* value)
	{
		___find_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___find_0), (void*)value);
	}
};


// SampleTable_<>c__DisplayClass11_0
struct  U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634  : public RuntimeObject
{
public:
	// System.String SampleTable_<>c__DisplayClass11_0::find
	String_t* ___find_0;

public:
	inline static int32_t get_offset_of_find_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634, ___find_0)); }
	inline String_t* get_find_0() const { return ___find_0; }
	inline String_t** get_address_of_find_0() { return &___find_0; }
	inline void set_find_0(String_t* value)
	{
		___find_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___find_0), (void*)value);
	}
};


// SampleTable_<>c__DisplayClass12_0
struct  U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369  : public RuntimeObject
{
public:
	// System.String SampleTable_<>c__DisplayClass12_0::find
	String_t* ___find_0;

public:
	inline static int32_t get_offset_of_find_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369, ___find_0)); }
	inline String_t* get_find_0() const { return ___find_0; }
	inline String_t** get_address_of_find_0() { return &___find_0; }
	inline void set_find_0(String_t* value)
	{
		___find_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___find_0), (void*)value);
	}
};


// SampleTable_<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D  : public RuntimeObject
{
public:
	// System.String SampleTable_<>c__DisplayClass13_0::find
	String_t* ___find_0;

public:
	inline static int32_t get_offset_of_find_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D, ___find_0)); }
	inline String_t* get_find_0() const { return ___find_0; }
	inline String_t** get_address_of_find_0() { return &___find_0; }
	inline void set_find_0(String_t* value)
	{
		___find_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___find_0), (void*)value);
	}
};


// SampleTable_<>c__DisplayClass14_0
struct  U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC  : public RuntimeObject
{
public:
	// System.String SampleTable_<>c__DisplayClass14_0::find
	String_t* ___find_0;

public:
	inline static int32_t get_offset_of_find_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC, ___find_0)); }
	inline String_t* get_find_0() const { return ___find_0; }
	inline String_t** get_address_of_find_0() { return &___find_0; }
	inline void set_find_0(String_t* value)
	{
		___find_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___find_0), (void*)value);
	}
};


// SampleTable_<>c__DisplayClass15_0
struct  U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F  : public RuntimeObject
{
public:
	// System.String SampleTable_<>c__DisplayClass15_0::find
	String_t* ___find_0;

public:
	inline static int32_t get_offset_of_find_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F, ___find_0)); }
	inline String_t* get_find_0() const { return ___find_0; }
	inline String_t** get_address_of_find_0() { return &___find_0; }
	inline void set_find_0(String_t* value)
	{
		___find_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___find_0), (void*)value);
	}
};


// SampleTable_<>c__DisplayClass16_0
struct  U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F  : public RuntimeObject
{
public:
	// System.String SampleTable_<>c__DisplayClass16_0::find
	String_t* ___find_0;

public:
	inline static int32_t get_offset_of_find_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F, ___find_0)); }
	inline String_t* get_find_0() const { return ___find_0; }
	inline String_t** get_address_of_find_0() { return &___find_0; }
	inline void set_find_0(String_t* value)
	{
		___find_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___find_0), (void*)value);
	}
};


// SampleTable_<>c__DisplayClass17_0
struct  U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9  : public RuntimeObject
{
public:
	// System.String SampleTable_<>c__DisplayClass17_0::find
	String_t* ___find_0;

public:
	inline static int32_t get_offset_of_find_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9, ___find_0)); }
	inline String_t* get_find_0() const { return ___find_0; }
	inline String_t** get_address_of_find_0() { return &___find_0; }
	inline void set_find_0(String_t* value)
	{
		___find_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___find_0), (void*)value);
	}
};


// SampleTable_<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B  : public RuntimeObject
{
public:
	// System.String SampleTable_<>c__DisplayClass8_0::find
	String_t* ___find_0;

public:
	inline static int32_t get_offset_of_find_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B, ___find_0)); }
	inline String_t* get_find_0() const { return ___find_0; }
	inline String_t** get_address_of_find_0() { return &___find_0; }
	inline void set_find_0(String_t* value)
	{
		___find_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___find_0), (void*)value);
	}
};


// SampleTable_<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1  : public RuntimeObject
{
public:
	// System.String SampleTable_<>c__DisplayClass9_0::find
	String_t* ___find_0;

public:
	inline static int32_t get_offset_of_find_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1, ___find_0)); }
	inline String_t* get_find_0() const { return ___find_0; }
	inline String_t** get_address_of_find_0() { return &___find_0; }
	inline void set_find_0(String_t* value)
	{
		___find_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___find_0), (void*)value);
	}
};


// SampleTable_Row
struct  Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A  : public RuntimeObject
{
public:
	// System.String SampleTable_Row::Year
	String_t* ___Year_0;
	// System.String SampleTable_Row::Make
	String_t* ___Make_1;
	// System.String SampleTable_Row::Model
	String_t* ___Model_2;
	// System.String SampleTable_Row::Description
	String_t* ___Description_3;
	// System.String SampleTable_Row::Price
	String_t* ___Price_4;

public:
	inline static int32_t get_offset_of_Year_0() { return static_cast<int32_t>(offsetof(Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A, ___Year_0)); }
	inline String_t* get_Year_0() const { return ___Year_0; }
	inline String_t** get_address_of_Year_0() { return &___Year_0; }
	inline void set_Year_0(String_t* value)
	{
		___Year_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Year_0), (void*)value);
	}

	inline static int32_t get_offset_of_Make_1() { return static_cast<int32_t>(offsetof(Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A, ___Make_1)); }
	inline String_t* get_Make_1() const { return ___Make_1; }
	inline String_t** get_address_of_Make_1() { return &___Make_1; }
	inline void set_Make_1(String_t* value)
	{
		___Make_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Make_1), (void*)value);
	}

	inline static int32_t get_offset_of_Model_2() { return static_cast<int32_t>(offsetof(Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A, ___Model_2)); }
	inline String_t* get_Model_2() const { return ___Model_2; }
	inline String_t** get_address_of_Model_2() { return &___Model_2; }
	inline void set_Model_2(String_t* value)
	{
		___Model_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Model_2), (void*)value);
	}

	inline static int32_t get_offset_of_Description_3() { return static_cast<int32_t>(offsetof(Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A, ___Description_3)); }
	inline String_t* get_Description_3() const { return ___Description_3; }
	inline String_t** get_address_of_Description_3() { return &___Description_3; }
	inline void set_Description_3(String_t* value)
	{
		___Description_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_3), (void*)value);
	}

	inline static int32_t get_offset_of_Price_4() { return static_cast<int32_t>(offsetof(Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A, ___Price_4)); }
	inline String_t* get_Price_4() const { return ___Price_4; }
	inline String_t** get_address_of_Price_4() { return &___Price_4; }
	inline void set_Price_4(String_t* value)
	{
		___Price_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Price_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<ICSharpCode.SharpZipLib.Zip.ZipEntry>
struct  List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ZipEntryU5BU5D_tFBD213A1D703D5C45FDBEE5A47CC05645B2F018D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61, ____items_1)); }
	inline ZipEntryU5BU5D_tFBD213A1D703D5C45FDBEE5A47CC05645B2F018D* get__items_1() const { return ____items_1; }
	inline ZipEntryU5BU5D_tFBD213A1D703D5C45FDBEE5A47CC05645B2F018D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ZipEntryU5BU5D_tFBD213A1D703D5C45FDBEE5A47CC05645B2F018D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ZipEntryU5BU5D_tFBD213A1D703D5C45FDBEE5A47CC05645B2F018D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61_StaticFields, ____emptyArray_5)); }
	inline ZipEntryU5BU5D_tFBD213A1D703D5C45FDBEE5A47CC05645B2F018D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ZipEntryU5BU5D_tFBD213A1D703D5C45FDBEE5A47CC05645B2F018D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ZipEntryU5BU5D_tFBD213A1D703D5C45FDBEE5A47CC05645B2F018D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SampleTable_Row>
struct  List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RowU5BU5D_t4ECCD484FB283540255E0C73DD876C09CBAC9486* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65, ____items_1)); }
	inline RowU5BU5D_t4ECCD484FB283540255E0C73DD876C09CBAC9486* get__items_1() const { return ____items_1; }
	inline RowU5BU5D_t4ECCD484FB283540255E0C73DD876C09CBAC9486** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RowU5BU5D_t4ECCD484FB283540255E0C73DD876C09CBAC9486* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RowU5BU5D_t4ECCD484FB283540255E0C73DD876C09CBAC9486* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65_StaticFields, ____emptyArray_5)); }
	inline RowU5BU5D_t4ECCD484FB283540255E0C73DD876C09CBAC9486* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RowU5BU5D_t4ECCD484FB283540255E0C73DD876C09CBAC9486** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RowU5BU5D_t4ECCD484FB283540255E0C73DD876C09CBAC9486* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Random
struct  Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___SeedArray_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_56)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_59)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_60)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
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
	RuntimeObject * ___s_InternalSyncObject_61;

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

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
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

// SzActivityTime
struct  SzActivityTime_tDB613C667BFB1C3004889B51F6251706AAC48FD5  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.String> SzActivityTime::shop
	RuntimeObject* ___shop_0;
	// System.Collections.Generic.IList`1<System.String> SzActivityTime::invite
	RuntimeObject* ___invite_1;
	// System.Collections.Generic.IList`1<System.String> SzActivityTime::giftcharge
	RuntimeObject* ___giftcharge_2;
	// System.Collections.Generic.IList`1<System.String> SzActivityTime::wingold
	RuntimeObject* ___wingold_3;

public:
	inline static int32_t get_offset_of_shop_0() { return static_cast<int32_t>(offsetof(SzActivityTime_tDB613C667BFB1C3004889B51F6251706AAC48FD5, ___shop_0)); }
	inline RuntimeObject* get_shop_0() const { return ___shop_0; }
	inline RuntimeObject** get_address_of_shop_0() { return &___shop_0; }
	inline void set_shop_0(RuntimeObject* value)
	{
		___shop_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shop_0), (void*)value);
	}

	inline static int32_t get_offset_of_invite_1() { return static_cast<int32_t>(offsetof(SzActivityTime_tDB613C667BFB1C3004889B51F6251706AAC48FD5, ___invite_1)); }
	inline RuntimeObject* get_invite_1() const { return ___invite_1; }
	inline RuntimeObject** get_address_of_invite_1() { return &___invite_1; }
	inline void set_invite_1(RuntimeObject* value)
	{
		___invite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invite_1), (void*)value);
	}

	inline static int32_t get_offset_of_giftcharge_2() { return static_cast<int32_t>(offsetof(SzActivityTime_tDB613C667BFB1C3004889B51F6251706AAC48FD5, ___giftcharge_2)); }
	inline RuntimeObject* get_giftcharge_2() const { return ___giftcharge_2; }
	inline RuntimeObject** get_address_of_giftcharge_2() { return &___giftcharge_2; }
	inline void set_giftcharge_2(RuntimeObject* value)
	{
		___giftcharge_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___giftcharge_2), (void*)value);
	}

	inline static int32_t get_offset_of_wingold_3() { return static_cast<int32_t>(offsetof(SzActivityTime_tDB613C667BFB1C3004889B51F6251706AAC48FD5, ___wingold_3)); }
	inline RuntimeObject* get_wingold_3() const { return ___wingold_3; }
	inline RuntimeObject** get_address_of_wingold_3() { return &___wingold_3; }
	inline void set_wingold_3(RuntimeObject* value)
	{
		___wingold_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wingold_3), (void*)value);
	}
};


// TableCodeGen
struct  TableCodeGen_t883A58517A3071069370EC21B37BAD32544EA124  : public RuntimeObject
{
public:

public:
};


// UINetworkImage_<DownSprite>d__5
struct  U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C  : public RuntimeObject
{
public:
	// System.Int32 UINetworkImage_<DownSprite>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UINetworkImage_<DownSprite>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UINetworkImage UINetworkImage_<DownSprite>d__5::<>4__this
	UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest UINetworkImage_<DownSprite>d__5::<wr>5__2
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwrU3E5__2_3;
	// UnityEngine.Networking.DownloadHandlerTexture UINetworkImage_<DownSprite>d__5::<texD1>5__3
	DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * ___U3CtexD1U3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C, ___U3CU3E4__this_2)); }
	inline UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwrU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C, ___U3CwrU3E5__2_3)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwrU3E5__2_3() const { return ___U3CwrU3E5__2_3; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwrU3E5__2_3() { return &___U3CwrU3E5__2_3; }
	inline void set_U3CwrU3E5__2_3(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwrU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwrU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtexD1U3E5__3_4() { return static_cast<int32_t>(offsetof(U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C, ___U3CtexD1U3E5__3_4)); }
	inline DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * get_U3CtexD1U3E5__3_4() const { return ___U3CtexD1U3E5__3_4; }
	inline DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 ** get_address_of_U3CtexD1U3E5__3_4() { return &___U3CtexD1U3E5__3_4; }
	inline void set_U3CtexD1U3E5__3_4(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * value)
	{
		___U3CtexD1U3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtexD1U3E5__3_4), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// UriHelper
struct  UriHelper_tB7DB0E6AFBD8133A6AC20D4ED04BFAC35DCC1098  : public RuntimeObject
{
public:

public:
};


// WKWebView_<>c
struct  U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields
{
public:
	// WKWebView_<>c WKWebView_<>c::<>9
	U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 * ___U3CU3E9_0;
	// System.Action`1<System.String> WKWebView_<>c::<>9__15_0
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___U3CU3E9__15_0_1;
	// System.Action`1<System.String> WKWebView_<>c::<>9__15_1
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___U3CU3E9__15_1_2;
	// System.Action`1<System.String> WKWebView_<>c::<>9__15_3
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___U3CU3E9__15_3_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields, ___U3CU3E9__15_0_1)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_U3CU3E9__15_0_1() const { return ___U3CU3E9__15_0_1; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_U3CU3E9__15_0_1() { return &___U3CU3E9__15_0_1; }
	inline void set_U3CU3E9__15_0_1(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___U3CU3E9__15_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields, ___U3CU3E9__15_1_2)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_U3CU3E9__15_1_2() const { return ___U3CU3E9__15_1_2; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_U3CU3E9__15_1_2() { return &___U3CU3E9__15_1_2; }
	inline void set_U3CU3E9__15_1_2(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___U3CU3E9__15_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_3_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields, ___U3CU3E9__15_3_3)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_U3CU3E9__15_3_3() const { return ___U3CU3E9__15_3_3; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_U3CU3E9__15_3_3() { return &___U3CU3E9__15_3_3; }
	inline void set_U3CU3E9__15_3_3(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___U3CU3E9__15_3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_3_3), (void*)value);
	}
};


// WebUtil
struct  WebUtil_t90415DC584A656E33FD568E6428FA363E28A3570  : public RuntimeObject
{
public:

public:
};


// WebUtil_<DownloadFile>d__2
struct  U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9  : public RuntimeObject
{
public:
	// System.Int32 WebUtil_<DownloadFile>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WebUtil_<DownloadFile>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String WebUtil_<DownloadFile>d__2::url
	String_t* ___url_2;
	// System.Action`1<System.Single> WebUtil_<DownloadFile>d__2::progress
	Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * ___progress_3;
	// System.Single WebUtil_<DownloadFile>d__2::delay
	float ___delay_4;
	// System.Action`1<System.Byte[]> WebUtil_<DownloadFile>d__2::onDownloaded
	Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7 * ___onDownloaded_5;
	// UnityEngine.Networking.UnityWebRequest WebUtil_<DownloadFile>d__2::<www>5__2
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwwwU3E5__2_6;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation WebUtil_<DownloadFile>d__2::<operation>5__3
	UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * ___U3CoperationU3E5__3_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_2), (void*)value);
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9, ___progress_3)); }
	inline Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * get_progress_3() const { return ___progress_3; }
	inline Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB ** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_onDownloaded_5() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9, ___onDownloaded_5)); }
	inline Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7 * get_onDownloaded_5() const { return ___onDownloaded_5; }
	inline Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7 ** get_address_of_onDownloaded_5() { return &___onDownloaded_5; }
	inline void set_onDownloaded_5(Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7 * value)
	{
		___onDownloaded_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDownloaded_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9, ___U3CwwwU3E5__2_6)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwwwU3E5__2_6() const { return ___U3CwwwU3E5__2_6; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwwwU3E5__2_6() { return &___U3CwwwU3E5__2_6; }
	inline void set_U3CwwwU3E5__2_6(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwwwU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoperationU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9, ___U3CoperationU3E5__3_7)); }
	inline UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * get_U3CoperationU3E5__3_7() const { return ___U3CoperationU3E5__3_7; }
	inline UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 ** get_address_of_U3CoperationU3E5__3_7() { return &___U3CoperationU3E5__3_7; }
	inline void set_U3CoperationU3E5__3_7(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * value)
	{
		___U3CoperationU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoperationU3E5__3_7), (void*)value);
	}
};


// WebUtil_<GetText>d__1
struct  U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989  : public RuntimeObject
{
public:
	// System.Int32 WebUtil_<GetText>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WebUtil_<GetText>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String WebUtil_<GetText>d__1::url
	String_t* ___url_2;
	// System.Action WebUtil_<GetText>d__1::failure
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___failure_3;
	// System.Action`1<System.String> WebUtil_<GetText>d__1::success
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___success_4;
	// UnityEngine.Networking.UnityWebRequest WebUtil_<GetText>d__1::<www>5__2
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwwwU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_2), (void*)value);
	}

	inline static int32_t get_offset_of_failure_3() { return static_cast<int32_t>(offsetof(U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989, ___failure_3)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_failure_3() const { return ___failure_3; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_failure_3() { return &___failure_3; }
	inline void set_failure_3(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___failure_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failure_3), (void*)value);
	}

	inline static int32_t get_offset_of_success_4() { return static_cast<int32_t>(offsetof(U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989, ___success_4)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_success_4() const { return ___success_4; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_success_4() { return &___success_4; }
	inline void set_success_4(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___success_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___success_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989, ___U3CwwwU3E5__2_5)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwwwU3E5__2_5() const { return ___U3CwwwU3E5__2_5; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwwwU3E5__2_5() { return &___U3CwwwU3E5__2_5; }
	inline void set_U3CwwwU3E5__2_5(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwwwU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_5), (void*)value);
	}
};


// ZipFile
struct  ZipFile_t988BEADCE49E4CD6B32CE6B49E828E509E539B02  : public RuntimeObject
{
public:

public:
};


// System.ArraySegment`1<System.Byte>
struct  ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____array_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
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
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
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


// System.Collections.Generic.List`1_Enumerator<ICSharpCode.SharpZipLib.Zip.ZipEntry>
struct  Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0, ___list_0)); }
	inline List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * get_list_0() const { return ___list_0; }
	inline List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0, ___current_3)); }
	inline ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * get_current_3() const { return ___current_3; }
	inline ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream
struct  DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::<IsStreamOwner>k__BackingField
	bool ___U3CIsStreamOwnerU3Ek__BackingField_5;
	// System.String ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::password
	String_t* ___password_6;
	// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::cryptoTransform_
	RuntimeObject* ___cryptoTransform__7;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::AESAuthCode
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___AESAuthCode_8;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::buffer_
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer__9;
	// ICSharpCode.SharpZipLib.Zip.Compression.Deflater ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::deflater_
	Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * ___deflater__10;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::baseOutputStream_
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___baseOutputStream__11;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::isClosed_
	bool ___isClosed__12;

public:
	inline static int32_t get_offset_of_U3CIsStreamOwnerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E, ___U3CIsStreamOwnerU3Ek__BackingField_5)); }
	inline bool get_U3CIsStreamOwnerU3Ek__BackingField_5() const { return ___U3CIsStreamOwnerU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsStreamOwnerU3Ek__BackingField_5() { return &___U3CIsStreamOwnerU3Ek__BackingField_5; }
	inline void set_U3CIsStreamOwnerU3Ek__BackingField_5(bool value)
	{
		___U3CIsStreamOwnerU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_password_6() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E, ___password_6)); }
	inline String_t* get_password_6() const { return ___password_6; }
	inline String_t** get_address_of_password_6() { return &___password_6; }
	inline void set_password_6(String_t* value)
	{
		___password_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_6), (void*)value);
	}

	inline static int32_t get_offset_of_cryptoTransform__7() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E, ___cryptoTransform__7)); }
	inline RuntimeObject* get_cryptoTransform__7() const { return ___cryptoTransform__7; }
	inline RuntimeObject** get_address_of_cryptoTransform__7() { return &___cryptoTransform__7; }
	inline void set_cryptoTransform__7(RuntimeObject* value)
	{
		___cryptoTransform__7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cryptoTransform__7), (void*)value);
	}

	inline static int32_t get_offset_of_AESAuthCode_8() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E, ___AESAuthCode_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_AESAuthCode_8() const { return ___AESAuthCode_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_AESAuthCode_8() { return &___AESAuthCode_8; }
	inline void set_AESAuthCode_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___AESAuthCode_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AESAuthCode_8), (void*)value);
	}

	inline static int32_t get_offset_of_buffer__9() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E, ___buffer__9)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer__9() const { return ___buffer__9; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer__9() { return &___buffer__9; }
	inline void set_buffer__9(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer__9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer__9), (void*)value);
	}

	inline static int32_t get_offset_of_deflater__10() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E, ___deflater__10)); }
	inline Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * get_deflater__10() const { return ___deflater__10; }
	inline Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C ** get_address_of_deflater__10() { return &___deflater__10; }
	inline void set_deflater__10(Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * value)
	{
		___deflater__10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deflater__10), (void*)value);
	}

	inline static int32_t get_offset_of_baseOutputStream__11() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E, ___baseOutputStream__11)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_baseOutputStream__11() const { return ___baseOutputStream__11; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_baseOutputStream__11() { return &___baseOutputStream__11; }
	inline void set_baseOutputStream__11(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___baseOutputStream__11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseOutputStream__11), (void*)value);
	}

	inline static int32_t get_offset_of_isClosed__12() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E, ___isClosed__12)); }
	inline bool get_isClosed__12() const { return ___isClosed__12; }
	inline bool* get_address_of_isClosed__12() { return &___isClosed__12; }
	inline void set_isClosed__12(bool value)
	{
		___isClosed__12 = value;
	}
};

struct DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::_aesRnd
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____aesRnd_13;

public:
	inline static int32_t get_offset_of__aesRnd_13() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E_StaticFields, ____aesRnd_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__aesRnd_13() const { return ____aesRnd_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__aesRnd_13() { return &____aesRnd_13; }
	inline void set__aesRnd_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____aesRnd_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____aesRnd_13), (void*)value);
	}
};


// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct  InflaterInputStream_tD9D7B5A5CF9FA6CDE96001829962528825E91A07  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::<IsStreamOwner>k__BackingField
	bool ___U3CIsStreamOwnerU3Ek__BackingField_5;
	// ICSharpCode.SharpZipLib.Zip.Compression.Inflater ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inf
	Inflater_tAE7A61EFD329845367AD2C6F36A6F407E1BC69D5 * ___inf_6;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inputBuffer
	InflaterInputBuffer_t477FD8959BCFA6FCA4649967A86D1D1662B69610 * ___inputBuffer_7;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::baseInputStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___baseInputStream_8;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::csize
	int64_t ___csize_9;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::isClosed
	bool ___isClosed_10;

public:
	inline static int32_t get_offset_of_U3CIsStreamOwnerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InflaterInputStream_tD9D7B5A5CF9FA6CDE96001829962528825E91A07, ___U3CIsStreamOwnerU3Ek__BackingField_5)); }
	inline bool get_U3CIsStreamOwnerU3Ek__BackingField_5() const { return ___U3CIsStreamOwnerU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsStreamOwnerU3Ek__BackingField_5() { return &___U3CIsStreamOwnerU3Ek__BackingField_5; }
	inline void set_U3CIsStreamOwnerU3Ek__BackingField_5(bool value)
	{
		___U3CIsStreamOwnerU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_inf_6() { return static_cast<int32_t>(offsetof(InflaterInputStream_tD9D7B5A5CF9FA6CDE96001829962528825E91A07, ___inf_6)); }
	inline Inflater_tAE7A61EFD329845367AD2C6F36A6F407E1BC69D5 * get_inf_6() const { return ___inf_6; }
	inline Inflater_tAE7A61EFD329845367AD2C6F36A6F407E1BC69D5 ** get_address_of_inf_6() { return &___inf_6; }
	inline void set_inf_6(Inflater_tAE7A61EFD329845367AD2C6F36A6F407E1BC69D5 * value)
	{
		___inf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inf_6), (void*)value);
	}

	inline static int32_t get_offset_of_inputBuffer_7() { return static_cast<int32_t>(offsetof(InflaterInputStream_tD9D7B5A5CF9FA6CDE96001829962528825E91A07, ___inputBuffer_7)); }
	inline InflaterInputBuffer_t477FD8959BCFA6FCA4649967A86D1D1662B69610 * get_inputBuffer_7() const { return ___inputBuffer_7; }
	inline InflaterInputBuffer_t477FD8959BCFA6FCA4649967A86D1D1662B69610 ** get_address_of_inputBuffer_7() { return &___inputBuffer_7; }
	inline void set_inputBuffer_7(InflaterInputBuffer_t477FD8959BCFA6FCA4649967A86D1D1662B69610 * value)
	{
		___inputBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of_baseInputStream_8() { return static_cast<int32_t>(offsetof(InflaterInputStream_tD9D7B5A5CF9FA6CDE96001829962528825E91A07, ___baseInputStream_8)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_baseInputStream_8() const { return ___baseInputStream_8; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_baseInputStream_8() { return &___baseInputStream_8; }
	inline void set_baseInputStream_8(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___baseInputStream_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseInputStream_8), (void*)value);
	}

	inline static int32_t get_offset_of_csize_9() { return static_cast<int32_t>(offsetof(InflaterInputStream_tD9D7B5A5CF9FA6CDE96001829962528825E91A07, ___csize_9)); }
	inline int64_t get_csize_9() const { return ___csize_9; }
	inline int64_t* get_address_of_csize_9() { return &___csize_9; }
	inline void set_csize_9(int64_t value)
	{
		___csize_9 = value;
	}

	inline static int32_t get_offset_of_isClosed_10() { return static_cast<int32_t>(offsetof(InflaterInputStream_tD9D7B5A5CF9FA6CDE96001829962528825E91A07, ___isClosed_10)); }
	inline bool get_isClosed_10() const { return ___isClosed_10; }
	inline bool* get_address_of_isClosed_10() { return &___isClosed_10; }
	inline void set_isClosed_10(bool value)
	{
		___isClosed_10 = value;
	}
};


// ICSharpCode.SharpZipLib.Zip.CompressionMethod
struct  CompressionMethod_t15EC40F1929682818BD3C1BED196DFBD8DD88C1D 
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.CompressionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMethod_t15EC40F1929682818BD3C1BED196DFBD8DD88C1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ICSharpCode.SharpZipLib.Zip.TestOperation
struct  TestOperation_t0727FE73EE8FEED09CBA1BE1A3400C2904F65D1F 
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.TestOperation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TestOperation_t0727FE73EE8FEED09CBA1BE1A3400C2904F65D1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ICSharpCode.SharpZipLib.Zip.UseZip64
struct  UseZip64_t6F362E37B80946E64CBD45AEEB37D948CD8BEDD9 
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.UseZip64::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UseZip64_t6F362E37B80946E64CBD45AEEB37D948CD8BEDD9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ICSharpCode.SharpZipLib.Zip.ZipEntry_Known
struct  Known_t63339B5C11E74E2349983A1B4DE5086B0E152977 
{
public:
	// System.Byte ICSharpCode.SharpZipLib.Zip.ZipEntry_Known::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Known_t63339B5C11E74E2349983A1B4DE5086B0E152977, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ICSharpCode.SharpZipLib.Zip.ZipHelperStream
struct  ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::isOwner_
	bool ___isOwner__5;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipHelperStream::stream_
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream__6;

public:
	inline static int32_t get_offset_of_isOwner__5() { return static_cast<int32_t>(offsetof(ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0, ___isOwner__5)); }
	inline bool get_isOwner__5() const { return ___isOwner__5; }
	inline bool* get_address_of_isOwner__5() { return &___isOwner__5; }
	inline void set_isOwner__5(bool value)
	{
		___isOwner__5 = value;
	}

	inline static int32_t get_offset_of_stream__6() { return static_cast<int32_t>(offsetof(ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0, ___stream__6)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream__6() const { return ___stream__6; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream__6() { return &___stream__6; }
	inline void set_stream__6(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream__6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream__6), (void*)value);
	}
};


// SavePath
struct  SavePath_tA83074C1445EB0255812082BE6FFC8E9C264953D 
{
public:
	// System.Int32 SavePath::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SavePath_tA83074C1445EB0255812082BE6FFC8E9C264953D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct  FileAttributes_t224B42F6F82954C94B51791913857C005C559876 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t224B42F6F82954C94B51791913857C005C559876, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_14)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// System.IO.SeekOrigin
struct  SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct  StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri_Flags
struct  Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
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

// UnityEngine.UI.Image_FillMethod
struct  FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_Type
struct  Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ICSharpCode.SharpZipLib.SharpZipBaseException
struct  SharpZipBaseException_t1FEF62B04E8A4CD8E66313C69CF4208450118D39  : public Exception_t
{
public:

public:
};


// ICSharpCode.SharpZipLib.Zip.TestStatus
struct  TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926  : public RuntimeObject
{
public:
	// ICSharpCode.SharpZipLib.Zip.ZipFile ICSharpCode.SharpZipLib.Zip.TestStatus::file_
	ZipFile_tB7EC5B6D1FBF9F8E603CD3742E4236B7BA5DB6D7 * ___file__0;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.TestStatus::entry_
	ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * ___entry__1;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.TestStatus::entryValid_
	bool ___entryValid__2;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.TestStatus::errorCount_
	int32_t ___errorCount__3;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.TestStatus::bytesTested_
	int64_t ___bytesTested__4;
	// ICSharpCode.SharpZipLib.Zip.TestOperation ICSharpCode.SharpZipLib.Zip.TestStatus::operation_
	int32_t ___operation__5;

public:
	inline static int32_t get_offset_of_file__0() { return static_cast<int32_t>(offsetof(TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926, ___file__0)); }
	inline ZipFile_tB7EC5B6D1FBF9F8E603CD3742E4236B7BA5DB6D7 * get_file__0() const { return ___file__0; }
	inline ZipFile_tB7EC5B6D1FBF9F8E603CD3742E4236B7BA5DB6D7 ** get_address_of_file__0() { return &___file__0; }
	inline void set_file__0(ZipFile_tB7EC5B6D1FBF9F8E603CD3742E4236B7BA5DB6D7 * value)
	{
		___file__0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___file__0), (void*)value);
	}

	inline static int32_t get_offset_of_entry__1() { return static_cast<int32_t>(offsetof(TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926, ___entry__1)); }
	inline ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * get_entry__1() const { return ___entry__1; }
	inline ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 ** get_address_of_entry__1() { return &___entry__1; }
	inline void set_entry__1(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * value)
	{
		___entry__1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entry__1), (void*)value);
	}

	inline static int32_t get_offset_of_entryValid__2() { return static_cast<int32_t>(offsetof(TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926, ___entryValid__2)); }
	inline bool get_entryValid__2() const { return ___entryValid__2; }
	inline bool* get_address_of_entryValid__2() { return &___entryValid__2; }
	inline void set_entryValid__2(bool value)
	{
		___entryValid__2 = value;
	}

	inline static int32_t get_offset_of_errorCount__3() { return static_cast<int32_t>(offsetof(TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926, ___errorCount__3)); }
	inline int32_t get_errorCount__3() const { return ___errorCount__3; }
	inline int32_t* get_address_of_errorCount__3() { return &___errorCount__3; }
	inline void set_errorCount__3(int32_t value)
	{
		___errorCount__3 = value;
	}

	inline static int32_t get_offset_of_bytesTested__4() { return static_cast<int32_t>(offsetof(TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926, ___bytesTested__4)); }
	inline int64_t get_bytesTested__4() const { return ___bytesTested__4; }
	inline int64_t* get_address_of_bytesTested__4() { return &___bytesTested__4; }
	inline void set_bytesTested__4(int64_t value)
	{
		___bytesTested__4 = value;
	}

	inline static int32_t get_offset_of_operation__5() { return static_cast<int32_t>(offsetof(TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926, ___operation__5)); }
	inline int32_t get_operation__5() const { return ___operation__5; }
	inline int32_t* get_address_of_operation__5() { return &___operation__5; }
	inline void set_operation__5(int32_t value)
	{
		___operation__5 = value;
	}
};


// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct  ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8  : public RuntimeObject
{
public:
	// ICSharpCode.SharpZipLib.Zip.ZipEntry_Known ICSharpCode.SharpZipLib.Zip.ZipEntry::known
	uint8_t ___known_0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::externalFileAttributes
	int32_t ___externalFileAttributes_1;
	// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipEntry::versionMadeBy
	uint16_t ___versionMadeBy_2;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::name
	String_t* ___name_3;
	// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipEntry::size
	uint64_t ___size_4;
	// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipEntry::compressedSize
	uint64_t ___compressedSize_5;
	// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipEntry::versionToExtract
	uint16_t ___versionToExtract_6;
	// System.UInt32 ICSharpCode.SharpZipLib.Zip.ZipEntry::crc
	uint32_t ___crc_7;
	// System.UInt32 ICSharpCode.SharpZipLib.Zip.ZipEntry::dosTime
	uint32_t ___dosTime_8;
	// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipEntry::method
	int32_t ___method_9;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipEntry::extra
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___extra_10;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::comment
	String_t* ___comment_11;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::flags
	int32_t ___flags_12;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::zipFileIndex
	int64_t ___zipFileIndex_13;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::offset
	int64_t ___offset_14;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::forceZip64_
	bool ___forceZip64__15;
	// System.Byte ICSharpCode.SharpZipLib.Zip.ZipEntry::cryptoCheckValue_
	uint8_t ___cryptoCheckValue__16;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::_aesVer
	int32_t ____aesVer_17;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::_aesEncryptionStrength
	int32_t ____aesEncryptionStrength_18;

public:
	inline static int32_t get_offset_of_known_0() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___known_0)); }
	inline uint8_t get_known_0() const { return ___known_0; }
	inline uint8_t* get_address_of_known_0() { return &___known_0; }
	inline void set_known_0(uint8_t value)
	{
		___known_0 = value;
	}

	inline static int32_t get_offset_of_externalFileAttributes_1() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___externalFileAttributes_1)); }
	inline int32_t get_externalFileAttributes_1() const { return ___externalFileAttributes_1; }
	inline int32_t* get_address_of_externalFileAttributes_1() { return &___externalFileAttributes_1; }
	inline void set_externalFileAttributes_1(int32_t value)
	{
		___externalFileAttributes_1 = value;
	}

	inline static int32_t get_offset_of_versionMadeBy_2() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___versionMadeBy_2)); }
	inline uint16_t get_versionMadeBy_2() const { return ___versionMadeBy_2; }
	inline uint16_t* get_address_of_versionMadeBy_2() { return &___versionMadeBy_2; }
	inline void set_versionMadeBy_2(uint16_t value)
	{
		___versionMadeBy_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___size_4)); }
	inline uint64_t get_size_4() const { return ___size_4; }
	inline uint64_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(uint64_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_compressedSize_5() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___compressedSize_5)); }
	inline uint64_t get_compressedSize_5() const { return ___compressedSize_5; }
	inline uint64_t* get_address_of_compressedSize_5() { return &___compressedSize_5; }
	inline void set_compressedSize_5(uint64_t value)
	{
		___compressedSize_5 = value;
	}

	inline static int32_t get_offset_of_versionToExtract_6() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___versionToExtract_6)); }
	inline uint16_t get_versionToExtract_6() const { return ___versionToExtract_6; }
	inline uint16_t* get_address_of_versionToExtract_6() { return &___versionToExtract_6; }
	inline void set_versionToExtract_6(uint16_t value)
	{
		___versionToExtract_6 = value;
	}

	inline static int32_t get_offset_of_crc_7() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___crc_7)); }
	inline uint32_t get_crc_7() const { return ___crc_7; }
	inline uint32_t* get_address_of_crc_7() { return &___crc_7; }
	inline void set_crc_7(uint32_t value)
	{
		___crc_7 = value;
	}

	inline static int32_t get_offset_of_dosTime_8() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___dosTime_8)); }
	inline uint32_t get_dosTime_8() const { return ___dosTime_8; }
	inline uint32_t* get_address_of_dosTime_8() { return &___dosTime_8; }
	inline void set_dosTime_8(uint32_t value)
	{
		___dosTime_8 = value;
	}

	inline static int32_t get_offset_of_method_9() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___method_9)); }
	inline int32_t get_method_9() const { return ___method_9; }
	inline int32_t* get_address_of_method_9() { return &___method_9; }
	inline void set_method_9(int32_t value)
	{
		___method_9 = value;
	}

	inline static int32_t get_offset_of_extra_10() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___extra_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_extra_10() const { return ___extra_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_extra_10() { return &___extra_10; }
	inline void set_extra_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___extra_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_10), (void*)value);
	}

	inline static int32_t get_offset_of_comment_11() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___comment_11)); }
	inline String_t* get_comment_11() const { return ___comment_11; }
	inline String_t** get_address_of_comment_11() { return &___comment_11; }
	inline void set_comment_11(String_t* value)
	{
		___comment_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comment_11), (void*)value);
	}

	inline static int32_t get_offset_of_flags_12() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___flags_12)); }
	inline int32_t get_flags_12() const { return ___flags_12; }
	inline int32_t* get_address_of_flags_12() { return &___flags_12; }
	inline void set_flags_12(int32_t value)
	{
		___flags_12 = value;
	}

	inline static int32_t get_offset_of_zipFileIndex_13() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___zipFileIndex_13)); }
	inline int64_t get_zipFileIndex_13() const { return ___zipFileIndex_13; }
	inline int64_t* get_address_of_zipFileIndex_13() { return &___zipFileIndex_13; }
	inline void set_zipFileIndex_13(int64_t value)
	{
		___zipFileIndex_13 = value;
	}

	inline static int32_t get_offset_of_offset_14() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___offset_14)); }
	inline int64_t get_offset_14() const { return ___offset_14; }
	inline int64_t* get_address_of_offset_14() { return &___offset_14; }
	inline void set_offset_14(int64_t value)
	{
		___offset_14 = value;
	}

	inline static int32_t get_offset_of_forceZip64__15() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___forceZip64__15)); }
	inline bool get_forceZip64__15() const { return ___forceZip64__15; }
	inline bool* get_address_of_forceZip64__15() { return &___forceZip64__15; }
	inline void set_forceZip64__15(bool value)
	{
		___forceZip64__15 = value;
	}

	inline static int32_t get_offset_of_cryptoCheckValue__16() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ___cryptoCheckValue__16)); }
	inline uint8_t get_cryptoCheckValue__16() const { return ___cryptoCheckValue__16; }
	inline uint8_t* get_address_of_cryptoCheckValue__16() { return &___cryptoCheckValue__16; }
	inline void set_cryptoCheckValue__16(uint8_t value)
	{
		___cryptoCheckValue__16 = value;
	}

	inline static int32_t get_offset_of__aesVer_17() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ____aesVer_17)); }
	inline int32_t get__aesVer_17() const { return ____aesVer_17; }
	inline int32_t* get_address_of__aesVer_17() { return &____aesVer_17; }
	inline void set__aesVer_17(int32_t value)
	{
		____aesVer_17 = value;
	}

	inline static int32_t get_offset_of__aesEncryptionStrength_18() { return static_cast<int32_t>(offsetof(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8, ____aesEncryptionStrength_18)); }
	inline int32_t get__aesEncryptionStrength_18() const { return ____aesEncryptionStrength_18; }
	inline int32_t* get_address_of__aesEncryptionStrength_18() { return &____aesEncryptionStrength_18; }
	inline void set__aesEncryptionStrength_18(int32_t value)
	{
		____aesEncryptionStrength_18 = value;
	}
};


// ICSharpCode.SharpZipLib.Zip.ZipInputStream
struct  ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA  : public InflaterInputStream_tD9D7B5A5CF9FA6CDE96001829962528825E91A07
{
public:
	// ICSharpCode.SharpZipLib.Zip.ZipInputStream_ReadDataHandler ICSharpCode.SharpZipLib.Zip.ZipInputStream::internalReader
	ReadDataHandler_tA7387087BBA5C5FADFE1D182C794E4D02FEF134E * ___internalReader_11;
	// ICSharpCode.SharpZipLib.Checksum.Crc32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::crc
	Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * ___crc_12;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipInputStream::entry
	ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * ___entry_13;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipInputStream::size
	int64_t ___size_14;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::method
	int32_t ___method_15;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::flags
	int32_t ___flags_16;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipInputStream::password
	String_t* ___password_17;

public:
	inline static int32_t get_offset_of_internalReader_11() { return static_cast<int32_t>(offsetof(ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA, ___internalReader_11)); }
	inline ReadDataHandler_tA7387087BBA5C5FADFE1D182C794E4D02FEF134E * get_internalReader_11() const { return ___internalReader_11; }
	inline ReadDataHandler_tA7387087BBA5C5FADFE1D182C794E4D02FEF134E ** get_address_of_internalReader_11() { return &___internalReader_11; }
	inline void set_internalReader_11(ReadDataHandler_tA7387087BBA5C5FADFE1D182C794E4D02FEF134E * value)
	{
		___internalReader_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalReader_11), (void*)value);
	}

	inline static int32_t get_offset_of_crc_12() { return static_cast<int32_t>(offsetof(ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA, ___crc_12)); }
	inline Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * get_crc_12() const { return ___crc_12; }
	inline Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 ** get_address_of_crc_12() { return &___crc_12; }
	inline void set_crc_12(Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * value)
	{
		___crc_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crc_12), (void*)value);
	}

	inline static int32_t get_offset_of_entry_13() { return static_cast<int32_t>(offsetof(ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA, ___entry_13)); }
	inline ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * get_entry_13() const { return ___entry_13; }
	inline ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 ** get_address_of_entry_13() { return &___entry_13; }
	inline void set_entry_13(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * value)
	{
		___entry_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entry_13), (void*)value);
	}

	inline static int32_t get_offset_of_size_14() { return static_cast<int32_t>(offsetof(ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA, ___size_14)); }
	inline int64_t get_size_14() const { return ___size_14; }
	inline int64_t* get_address_of_size_14() { return &___size_14; }
	inline void set_size_14(int64_t value)
	{
		___size_14 = value;
	}

	inline static int32_t get_offset_of_method_15() { return static_cast<int32_t>(offsetof(ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA, ___method_15)); }
	inline int32_t get_method_15() const { return ___method_15; }
	inline int32_t* get_address_of_method_15() { return &___method_15; }
	inline void set_method_15(int32_t value)
	{
		___method_15 = value;
	}

	inline static int32_t get_offset_of_flags_16() { return static_cast<int32_t>(offsetof(ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA, ___flags_16)); }
	inline int32_t get_flags_16() const { return ___flags_16; }
	inline int32_t* get_address_of_flags_16() { return &___flags_16; }
	inline void set_flags_16(int32_t value)
	{
		___flags_16 = value;
	}

	inline static int32_t get_offset_of_password_17() { return static_cast<int32_t>(offsetof(ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA, ___password_17)); }
	inline String_t* get_password_17() const { return ___password_17; }
	inline String_t** get_address_of_password_17() { return &___password_17; }
	inline void set_password_17(String_t* value)
	{
		___password_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_17), (void*)value);
	}
};


// ICSharpCode.SharpZipLib.Zip.ZipOutputStream
struct  ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9  : public DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E
{
public:
	// System.Collections.Generic.List`1<ICSharpCode.SharpZipLib.Zip.ZipEntry> ICSharpCode.SharpZipLib.Zip.ZipOutputStream::entries
	List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * ___entries_14;
	// ICSharpCode.SharpZipLib.Checksum.Crc32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::crc
	Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * ___crc_15;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipOutputStream::curEntry
	ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * ___curEntry_16;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::defaultCompressionLevel
	int32_t ___defaultCompressionLevel_17;
	// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipOutputStream::curMethod
	int32_t ___curMethod_18;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::size
	int64_t ___size_19;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::offset
	int64_t ___offset_20;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipOutputStream::zipComment
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___zipComment_21;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipOutputStream::patchEntryHeader
	bool ___patchEntryHeader_22;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::crcPatchPos
	int64_t ___crcPatchPos_23;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::sizePatchPos
	int64_t ___sizePatchPos_24;
	// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::useZip64_
	int32_t ___useZip64__25;

public:
	inline static int32_t get_offset_of_entries_14() { return static_cast<int32_t>(offsetof(ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9, ___entries_14)); }
	inline List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * get_entries_14() const { return ___entries_14; }
	inline List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 ** get_address_of_entries_14() { return &___entries_14; }
	inline void set_entries_14(List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * value)
	{
		___entries_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_14), (void*)value);
	}

	inline static int32_t get_offset_of_crc_15() { return static_cast<int32_t>(offsetof(ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9, ___crc_15)); }
	inline Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * get_crc_15() const { return ___crc_15; }
	inline Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 ** get_address_of_crc_15() { return &___crc_15; }
	inline void set_crc_15(Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * value)
	{
		___crc_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crc_15), (void*)value);
	}

	inline static int32_t get_offset_of_curEntry_16() { return static_cast<int32_t>(offsetof(ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9, ___curEntry_16)); }
	inline ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * get_curEntry_16() const { return ___curEntry_16; }
	inline ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 ** get_address_of_curEntry_16() { return &___curEntry_16; }
	inline void set_curEntry_16(ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * value)
	{
		___curEntry_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curEntry_16), (void*)value);
	}

	inline static int32_t get_offset_of_defaultCompressionLevel_17() { return static_cast<int32_t>(offsetof(ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9, ___defaultCompressionLevel_17)); }
	inline int32_t get_defaultCompressionLevel_17() const { return ___defaultCompressionLevel_17; }
	inline int32_t* get_address_of_defaultCompressionLevel_17() { return &___defaultCompressionLevel_17; }
	inline void set_defaultCompressionLevel_17(int32_t value)
	{
		___defaultCompressionLevel_17 = value;
	}

	inline static int32_t get_offset_of_curMethod_18() { return static_cast<int32_t>(offsetof(ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9, ___curMethod_18)); }
	inline int32_t get_curMethod_18() const { return ___curMethod_18; }
	inline int32_t* get_address_of_curMethod_18() { return &___curMethod_18; }
	inline void set_curMethod_18(int32_t value)
	{
		___curMethod_18 = value;
	}

	inline static int32_t get_offset_of_size_19() { return static_cast<int32_t>(offsetof(ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9, ___size_19)); }
	inline int64_t get_size_19() const { return ___size_19; }
	inline int64_t* get_address_of_size_19() { return &___size_19; }
	inline void set_size_19(int64_t value)
	{
		___size_19 = value;
	}

	inline static int32_t get_offset_of_offset_20() { return static_cast<int32_t>(offsetof(ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9, ___offset_20)); }
	inline int64_t get_offset_20() const { return ___offset_20; }
	inline int64_t* get_address_of_offset_20() { return &___offset_20; }
	inline void set_offset_20(int64_t value)
	{
		___offset_20 = value;
	}

	inline static int32_t get_offset_of_zipComment_21() { return static_cast<int32_t>(offsetof(ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9, ___zipComment_21)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_zipComment_21() const { return ___zipComment_21; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_zipComment_21() { return &___zipComment_21; }
	inline void set_zipComment_21(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___zipComment_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zipComment_21), (void*)value);
	}

	inline static int32_t get_offset_of_patchEntryHeader_22() { return static_cast<int32_t>(offsetof(ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9, ___patchEntryHeader_22)); }
	inline bool get_patchEntryHeader_22() const { return ___patchEntryHeader_22; }
	inline bool* get_address_of_patchEntryHeader_22() { return &___patchEntryHeader_22; }
	inline void set_patchEntryHeader_22(bool value)
	{
		___patchEntryHeader_22 = value;
	}

	inline static int32_t get_offset_of_crcPatchPos_23() { return static_cast<int32_t>(offsetof(ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9, ___crcPatchPos_23)); }
	inline int64_t get_crcPatchPos_23() const { return ___crcPatchPos_23; }
	inline int64_t* get_address_of_crcPatchPos_23() { return &___crcPatchPos_23; }
	inline void set_crcPatchPos_23(int64_t value)
	{
		___crcPatchPos_23 = value;
	}

	inline static int32_t get_offset_of_sizePatchPos_24() { return static_cast<int32_t>(offsetof(ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9, ___sizePatchPos_24)); }
	inline int64_t get_sizePatchPos_24() const { return ___sizePatchPos_24; }
	inline int64_t* get_address_of_sizePatchPos_24() { return &___sizePatchPos_24; }
	inline void set_sizePatchPos_24(int64_t value)
	{
		___sizePatchPos_24 = value;
	}

	inline static int32_t get_offset_of_useZip64__25() { return static_cast<int32_t>(offsetof(ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9, ___useZip64__25)); }
	inline int32_t get_useZip64__25() const { return ___useZip64__25; }
	inline int32_t* get_address_of_useZip64__25() { return &___useZip64__25; }
	inline void set_useZip64__25(int32_t value)
	{
		___useZip64__25 = value;
	}
};


// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;

public:
	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_7), (void*)value);
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_8), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_9)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_9() const { return ___safeHandle_9; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_9() { return &___safeHandle_9; }
	inline void set_safeHandle_9(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_9), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_10)); }
	inline bool get_isExposed_10() const { return ___isExposed_10; }
	inline bool* get_address_of_isExposed_10() { return &___isExposed_10; }
	inline void set_isExposed_10(bool value)
	{
		___isExposed_10 = value;
	}

	inline static int32_t get_offset_of_append_startpos_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_11)); }
	inline int64_t get_append_startpos_11() const { return ___append_startpos_11; }
	inline int64_t* get_address_of_append_startpos_11() { return &___append_startpos_11; }
	inline void set_append_startpos_11(int64_t value)
	{
		___append_startpos_11 = value;
	}

	inline static int32_t get_offset_of_access_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_12)); }
	inline int32_t get_access_12() const { return ___access_12; }
	inline int32_t* get_address_of_access_12() { return &___access_12; }
	inline void set_access_12(int32_t value)
	{
		___access_12 = value;
	}

	inline static int32_t get_offset_of_owner_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_13)); }
	inline bool get_owner_13() const { return ___owner_13; }
	inline bool* get_address_of_owner_13() { return &___owner_13; }
	inline void set_owner_13(bool value)
	{
		___owner_13 = value;
	}

	inline static int32_t get_offset_of_async_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_14)); }
	inline bool get_async_14() const { return ___async_14; }
	inline bool* get_address_of_async_14() { return &___async_14; }
	inline void set_async_14(bool value)
	{
		___async_14 = value;
	}

	inline static int32_t get_offset_of_canseek_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_15)); }
	inline bool get_canseek_15() const { return ___canseek_15; }
	inline bool* get_address_of_canseek_15() { return &___canseek_15; }
	inline void set_canseek_15(bool value)
	{
		___canseek_15 = value;
	}

	inline static int32_t get_offset_of_anonymous_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_16)); }
	inline bool get_anonymous_16() const { return ___anonymous_16; }
	inline bool* get_address_of_anonymous_16() { return &___anonymous_16; }
	inline void set_anonymous_16(bool value)
	{
		___anonymous_16 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_17)); }
	inline bool get_buf_dirty_17() const { return ___buf_dirty_17; }
	inline bool* get_address_of_buf_dirty_17() { return &___buf_dirty_17; }
	inline void set_buf_dirty_17(bool value)
	{
		___buf_dirty_17 = value;
	}

	inline static int32_t get_offset_of_buf_size_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_18)); }
	inline int32_t get_buf_size_18() const { return ___buf_size_18; }
	inline int32_t* get_address_of_buf_size_18() { return &___buf_size_18; }
	inline void set_buf_size_18(int32_t value)
	{
		___buf_size_18 = value;
	}

	inline static int32_t get_offset_of_buf_length_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_19)); }
	inline int32_t get_buf_length_19() const { return ___buf_length_19; }
	inline int32_t* get_address_of_buf_length_19() { return &___buf_length_19; }
	inline void set_buf_length_19(int32_t value)
	{
		___buf_length_19 = value;
	}

	inline static int32_t get_offset_of_buf_offset_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_20)); }
	inline int32_t get_buf_offset_20() const { return ___buf_offset_20; }
	inline int32_t* get_address_of_buf_offset_20() { return &___buf_offset_20; }
	inline void set_buf_offset_20(int32_t value)
	{
		___buf_offset_20 = value;
	}

	inline static int32_t get_offset_of_buf_start_21() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_21)); }
	inline int64_t get_buf_start_21() const { return ___buf_start_21; }
	inline int64_t* get_address_of_buf_start_21() { return &___buf_start_21; }
	inline void set_buf_start_21(int64_t value)
	{
		___buf_start_21 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_6;

public:
	inline static int32_t get_offset_of_buf_recycle_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_5() const { return ___buf_recycle_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_5() { return &___buf_recycle_5; }
	inline void set_buf_recycle_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_5), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_6)); }
	inline RuntimeObject * get_buf_recycle_lock_6() const { return ___buf_recycle_lock_6; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_6() { return &___buf_recycle_lock_6; }
	inline void set_buf_recycle_lock_6(RuntimeObject * value)
	{
		___buf_recycle_lock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_6), (void*)value);
	}
};


// System.IO.MonoIOStat
struct  MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Uri
struct  Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_15)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_18)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Networking.DownloadHandlerTexture
struct  DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4  : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9
{
public:
	// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::mTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mTexture_1;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mHasTexture
	bool ___mHasTexture_2;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mNonReadable
	bool ___mNonReadable_3;

public:
	inline static int32_t get_offset_of_mTexture_1() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4, ___mTexture_1)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_mTexture_1() const { return ___mTexture_1; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_mTexture_1() { return &___mTexture_1; }
	inline void set_mTexture_1(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___mTexture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTexture_1), (void*)value);
	}

	inline static int32_t get_offset_of_mHasTexture_2() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4, ___mHasTexture_2)); }
	inline bool get_mHasTexture_2() const { return ___mHasTexture_2; }
	inline bool* get_address_of_mHasTexture_2() { return &___mHasTexture_2; }
	inline void set_mHasTexture_2(bool value)
	{
		___mHasTexture_2 = value;
	}

	inline static int32_t get_offset_of_mNonReadable_3() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4, ___mNonReadable_3)); }
	inline bool get_mNonReadable_3() const { return ___mNonReadable_3; }
	inline bool* get_address_of_mNonReadable_3() { return &___mNonReadable_3; }
	inline void set_mNonReadable_3(bool value)
	{
		___mNonReadable_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshaled_pinvoke : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_marshaled_com : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Sprite
struct  Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.TextAsset
struct  TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// WebRequestCert
struct  WebRequestCert_t36368B40295F59CFBD8BEF9D4EE2CF01D7CB67BC  : public CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0
{
public:

public:
};


// ICSharpCode.SharpZipLib.Zip.ZipException
struct  ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD  : public SharpZipBaseException_t1FEF62B04E8A4CD8E66313C69CF4208450118D39
{
public:

public:
};


// ICSharpCode.SharpZipLib.Zip.ZipInputStream_ReadDataHandler
struct  ReadDataHandler_tA7387087BBA5C5FADFE1D182C794E4D02FEF134E  : public MulticastDelegate_t
{
public:

public:
};


// ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler
struct  ZipTestResultHandler_tDF1DA7FF30407B1B36C65CB7772FD9BF3E2031D2  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Byte[]>
struct  Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Single>
struct  Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____data_1)); }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Predicate`1<SampleTable_Row>
struct  Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.IO.DirectoryInfo
struct  DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F  : public FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// System.IO.PathTooLongException
struct  PathTooLongException_t8DFBC40E5D45388A65B3327CF0D1F677C0F923AA  : public IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UINetworkImage
struct  UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7_StaticFields
{
public:
	// System.String UINetworkImage::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7_StaticFields, ___U3CUrlU3Ek__BackingField_4)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_4() const { return ___U3CUrlU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_4() { return &___U3CUrlU3Ek__BackingField_4; }
	inline void set_U3CUrlU3Ek__BackingField_4(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlU3Ek__BackingField_4), (void*)value);
	}
};


// UIProgressBar
struct  UIProgressBar_t2FF6D8395FB020C8D2EC33F23235E7BF2FE38B96  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text UIProgressBar::_progressText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ____progressText_4;
	// UnityEngine.UI.Image UIProgressBar::_progressBar
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ____progressBar_5;
	// System.Single UIProgressBar::Speed
	float ___Speed_6;
	// System.Single UIProgressBar::_target
	float ____target_7;

public:
	inline static int32_t get_offset_of__progressText_4() { return static_cast<int32_t>(offsetof(UIProgressBar_t2FF6D8395FB020C8D2EC33F23235E7BF2FE38B96, ____progressText_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get__progressText_4() const { return ____progressText_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of__progressText_4() { return &____progressText_4; }
	inline void set__progressText_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		____progressText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____progressText_4), (void*)value);
	}

	inline static int32_t get_offset_of__progressBar_5() { return static_cast<int32_t>(offsetof(UIProgressBar_t2FF6D8395FB020C8D2EC33F23235E7BF2FE38B96, ____progressBar_5)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get__progressBar_5() const { return ____progressBar_5; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of__progressBar_5() { return &____progressBar_5; }
	inline void set__progressBar_5(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		____progressBar_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____progressBar_5), (void*)value);
	}

	inline static int32_t get_offset_of_Speed_6() { return static_cast<int32_t>(offsetof(UIProgressBar_t2FF6D8395FB020C8D2EC33F23235E7BF2FE38B96, ___Speed_6)); }
	inline float get_Speed_6() const { return ___Speed_6; }
	inline float* get_address_of_Speed_6() { return &___Speed_6; }
	inline void set_Speed_6(float value)
	{
		___Speed_6 = value;
	}

	inline static int32_t get_offset_of__target_7() { return static_cast<int32_t>(offsetof(UIProgressBar_t2FF6D8395FB020C8D2EC33F23235E7BF2FE38B96, ____target_7)); }
	inline float get__target_7() const { return ____target_7; }
	inline float* get_address_of__target_7() { return &____target_7; }
	inline void set__target_7(float value)
	{
		____target_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// WKWebView
struct  WKWebView_tB621CFF722AE711E3D509DD012802941708797B3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// WebViewObject WKWebView::_webViewObject
	WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * ____webViewObject_4;
	// System.String WKWebView::forceUrl
	String_t* ___forceUrl_5;

public:
	inline static int32_t get_offset_of__webViewObject_4() { return static_cast<int32_t>(offsetof(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3, ____webViewObject_4)); }
	inline WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * get__webViewObject_4() const { return ____webViewObject_4; }
	inline WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D ** get_address_of__webViewObject_4() { return &____webViewObject_4; }
	inline void set__webViewObject_4(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * value)
	{
		____webViewObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____webViewObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_forceUrl_5() { return static_cast<int32_t>(offsetof(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3, ___forceUrl_5)); }
	inline String_t* get_forceUrl_5() const { return ___forceUrl_5; }
	inline String_t** get_address_of_forceUrl_5() { return &___forceUrl_5; }
	inline void set_forceUrl_5(String_t* value)
	{
		___forceUrl_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forceUrl_5), (void*)value);
	}
};

struct WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields
{
public:
	// System.String WKWebView::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_6;
	// System.String WKWebView::<Uri>k__BackingField
	String_t* ___U3CUriU3Ek__BackingField_7;
	// System.Boolean WKWebView::<IsHybrid>k__BackingField
	bool ___U3CIsHybridU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields, ___U3CUrlU3Ek__BackingField_6)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_6() const { return ___U3CUrlU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_6() { return &___U3CUrlU3Ek__BackingField_6; }
	inline void set_U3CUrlU3Ek__BackingField_6(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUriU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields, ___U3CUriU3Ek__BackingField_7)); }
	inline String_t* get_U3CUriU3Ek__BackingField_7() const { return ___U3CUriU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CUriU3Ek__BackingField_7() { return &___U3CUriU3Ek__BackingField_7; }
	inline void set_U3CUriU3Ek__BackingField_7(String_t* value)
	{
		___U3CUriU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUriU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsHybridU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields, ___U3CIsHybridU3Ek__BackingField_8)); }
	inline bool get_U3CIsHybridU3Ek__BackingField_8() const { return ___U3CIsHybridU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsHybridU3Ek__BackingField_8() { return &___U3CIsHybridU3Ek__BackingField_8; }
	inline void set_U3CIsHybridU3Ek__BackingField_8(bool value)
	{
		___U3CIsHybridU3Ek__BackingField_8 = value;
	}
};


// WebViewObject
struct  WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action`1<System.String> WebViewObject::onJS
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___onJS_4;
	// System.Action`1<System.String> WebViewObject::onError
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___onError_5;
	// System.Action`1<System.String> WebViewObject::onHttpError
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___onHttpError_6;
	// System.Action`1<System.String> WebViewObject::onStarted
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___onStarted_7;
	// System.Action`1<System.String> WebViewObject::onLoaded
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___onLoaded_8;
	// System.Boolean WebViewObject::visibility
	bool ___visibility_9;
	// System.Boolean WebViewObject::alertDialogEnabled
	bool ___alertDialogEnabled_10;
	// System.Boolean WebViewObject::scrollBounceEnabled
	bool ___scrollBounceEnabled_11;
	// System.Int32 WebViewObject::mMarginLeft
	int32_t ___mMarginLeft_12;
	// System.Int32 WebViewObject::mMarginTop
	int32_t ___mMarginTop_13;
	// System.Int32 WebViewObject::mMarginRight
	int32_t ___mMarginRight_14;
	// System.Int32 WebViewObject::mMarginBottom
	int32_t ___mMarginBottom_15;
	// System.IntPtr WebViewObject::webView
	intptr_t ___webView_16;

public:
	inline static int32_t get_offset_of_onJS_4() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___onJS_4)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_onJS_4() const { return ___onJS_4; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_onJS_4() { return &___onJS_4; }
	inline void set_onJS_4(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___onJS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onJS_4), (void*)value);
	}

	inline static int32_t get_offset_of_onError_5() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___onError_5)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_onError_5() const { return ___onError_5; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_onError_5() { return &___onError_5; }
	inline void set_onError_5(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___onError_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onError_5), (void*)value);
	}

	inline static int32_t get_offset_of_onHttpError_6() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___onHttpError_6)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_onHttpError_6() const { return ___onHttpError_6; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_onHttpError_6() { return &___onHttpError_6; }
	inline void set_onHttpError_6(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___onHttpError_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHttpError_6), (void*)value);
	}

	inline static int32_t get_offset_of_onStarted_7() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___onStarted_7)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_onStarted_7() const { return ___onStarted_7; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_onStarted_7() { return &___onStarted_7; }
	inline void set_onStarted_7(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___onStarted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStarted_7), (void*)value);
	}

	inline static int32_t get_offset_of_onLoaded_8() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___onLoaded_8)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_onLoaded_8() const { return ___onLoaded_8; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_onLoaded_8() { return &___onLoaded_8; }
	inline void set_onLoaded_8(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___onLoaded_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onLoaded_8), (void*)value);
	}

	inline static int32_t get_offset_of_visibility_9() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___visibility_9)); }
	inline bool get_visibility_9() const { return ___visibility_9; }
	inline bool* get_address_of_visibility_9() { return &___visibility_9; }
	inline void set_visibility_9(bool value)
	{
		___visibility_9 = value;
	}

	inline static int32_t get_offset_of_alertDialogEnabled_10() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___alertDialogEnabled_10)); }
	inline bool get_alertDialogEnabled_10() const { return ___alertDialogEnabled_10; }
	inline bool* get_address_of_alertDialogEnabled_10() { return &___alertDialogEnabled_10; }
	inline void set_alertDialogEnabled_10(bool value)
	{
		___alertDialogEnabled_10 = value;
	}

	inline static int32_t get_offset_of_scrollBounceEnabled_11() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___scrollBounceEnabled_11)); }
	inline bool get_scrollBounceEnabled_11() const { return ___scrollBounceEnabled_11; }
	inline bool* get_address_of_scrollBounceEnabled_11() { return &___scrollBounceEnabled_11; }
	inline void set_scrollBounceEnabled_11(bool value)
	{
		___scrollBounceEnabled_11 = value;
	}

	inline static int32_t get_offset_of_mMarginLeft_12() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___mMarginLeft_12)); }
	inline int32_t get_mMarginLeft_12() const { return ___mMarginLeft_12; }
	inline int32_t* get_address_of_mMarginLeft_12() { return &___mMarginLeft_12; }
	inline void set_mMarginLeft_12(int32_t value)
	{
		___mMarginLeft_12 = value;
	}

	inline static int32_t get_offset_of_mMarginTop_13() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___mMarginTop_13)); }
	inline int32_t get_mMarginTop_13() const { return ___mMarginTop_13; }
	inline int32_t* get_address_of_mMarginTop_13() { return &___mMarginTop_13; }
	inline void set_mMarginTop_13(int32_t value)
	{
		___mMarginTop_13 = value;
	}

	inline static int32_t get_offset_of_mMarginRight_14() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___mMarginRight_14)); }
	inline int32_t get_mMarginRight_14() const { return ___mMarginRight_14; }
	inline int32_t* get_address_of_mMarginRight_14() { return &___mMarginRight_14; }
	inline void set_mMarginRight_14(int32_t value)
	{
		___mMarginRight_14 = value;
	}

	inline static int32_t get_offset_of_mMarginBottom_15() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___mMarginBottom_15)); }
	inline int32_t get_mMarginBottom_15() const { return ___mMarginBottom_15; }
	inline int32_t* get_address_of_mMarginBottom_15() { return &___mMarginBottom_15; }
	inline void set_mMarginBottom_15(int32_t value)
	{
		___mMarginBottom_15 = value;
	}

	inline static int32_t get_offset_of_webView_16() { return static_cast<int32_t>(offsetof(WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D, ___webView_16)); }
	inline intptr_t get_webView_16() const { return ___webView_16; }
	inline intptr_t* get_address_of_webView_16() { return &___webView_16; }
	inline void set_webView_16(intptr_t value)
	{
		___webView_16 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
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
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
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
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

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

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_35;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_36;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_37;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_38;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_39;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_40;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_41;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_42;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_43;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_44;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_45;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_46;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_47;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_48;

public:
	inline static int32_t get_offset_of_m_Sprite_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_35)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_35() const { return ___m_Sprite_35; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_35() { return &___m_Sprite_35; }
	inline void set_m_Sprite_35(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_36)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_36() const { return ___m_OverrideSprite_36; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_36() { return &___m_OverrideSprite_36; }
	inline void set_m_OverrideSprite_36(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_37)); }
	inline int32_t get_m_Type_37() const { return ___m_Type_37; }
	inline int32_t* get_address_of_m_Type_37() { return &___m_Type_37; }
	inline void set_m_Type_37(int32_t value)
	{
		___m_Type_37 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_38)); }
	inline bool get_m_PreserveAspect_38() const { return ___m_PreserveAspect_38; }
	inline bool* get_address_of_m_PreserveAspect_38() { return &___m_PreserveAspect_38; }
	inline void set_m_PreserveAspect_38(bool value)
	{
		___m_PreserveAspect_38 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_39)); }
	inline bool get_m_FillCenter_39() const { return ___m_FillCenter_39; }
	inline bool* get_address_of_m_FillCenter_39() { return &___m_FillCenter_39; }
	inline void set_m_FillCenter_39(bool value)
	{
		___m_FillCenter_39 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_40)); }
	inline int32_t get_m_FillMethod_40() const { return ___m_FillMethod_40; }
	inline int32_t* get_address_of_m_FillMethod_40() { return &___m_FillMethod_40; }
	inline void set_m_FillMethod_40(int32_t value)
	{
		___m_FillMethod_40 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_41)); }
	inline float get_m_FillAmount_41() const { return ___m_FillAmount_41; }
	inline float* get_address_of_m_FillAmount_41() { return &___m_FillAmount_41; }
	inline void set_m_FillAmount_41(float value)
	{
		___m_FillAmount_41 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_42)); }
	inline bool get_m_FillClockwise_42() const { return ___m_FillClockwise_42; }
	inline bool* get_address_of_m_FillClockwise_42() { return &___m_FillClockwise_42; }
	inline void set_m_FillClockwise_42(bool value)
	{
		___m_FillClockwise_42 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_43)); }
	inline int32_t get_m_FillOrigin_43() const { return ___m_FillOrigin_43; }
	inline int32_t* get_address_of_m_FillOrigin_43() { return &___m_FillOrigin_43; }
	inline void set_m_FillOrigin_43(int32_t value)
	{
		___m_FillOrigin_43 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_44)); }
	inline float get_m_AlphaHitTestMinimumThreshold_44() const { return ___m_AlphaHitTestMinimumThreshold_44; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_44() { return &___m_AlphaHitTestMinimumThreshold_44; }
	inline void set_m_AlphaHitTestMinimumThreshold_44(float value)
	{
		___m_AlphaHitTestMinimumThreshold_44 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_45)); }
	inline bool get_m_Tracked_45() const { return ___m_Tracked_45; }
	inline bool* get_address_of_m_Tracked_45() { return &___m_Tracked_45; }
	inline void set_m_Tracked_45(bool value)
	{
		___m_Tracked_45 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_46)); }
	inline bool get_m_UseSpriteMesh_46() const { return ___m_UseSpriteMesh_46; }
	inline bool* get_address_of_m_UseSpriteMesh_46() { return &___m_UseSpriteMesh_46; }
	inline void set_m_UseSpriteMesh_46(bool value)
	{
		___m_UseSpriteMesh_46 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PixelsPerUnitMultiplier_47)); }
	inline float get_m_PixelsPerUnitMultiplier_47() const { return ___m_PixelsPerUnitMultiplier_47; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_47() { return &___m_PixelsPerUnitMultiplier_47; }
	inline void set_m_PixelsPerUnitMultiplier_47(float value)
	{
		___m_PixelsPerUnitMultiplier_47 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_CachedReferencePixelsPerUnit_48)); }
	inline float get_m_CachedReferencePixelsPerUnit_48() const { return ___m_CachedReferencePixelsPerUnit_48; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_48() { return &___m_CachedReferencePixelsPerUnit_48; }
	inline void set_m_CachedReferencePixelsPerUnit_48(float value)
	{
		___m_CachedReferencePixelsPerUnit_48 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_34;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_49;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_50;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_51;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_52;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * ___m_TrackedTexturelessImages_53;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_54;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_34() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_34() const { return ___s_ETC1DefaultUI_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_34() { return &___s_ETC1DefaultUI_34; }
	inline void set_s_ETC1DefaultUI_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_49)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_49() const { return ___s_VertScratch_49; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_49() { return &___s_VertScratch_49; }
	inline void set_s_VertScratch_49(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_49), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_50() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_50)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_50() const { return ___s_UVScratch_50; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_50() { return &___s_UVScratch_50; }
	inline void set_s_UVScratch_50(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_51() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_51)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_51() const { return ___s_Xy_51; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_51() { return &___s_Xy_51; }
	inline void set_s_Xy_51(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_52() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_52)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_52() const { return ___s_Uv_52; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_52() { return &___s_Uv_52; }
	inline void set_s_Uv_52(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_53() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_53)); }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * get_m_TrackedTexturelessImages_53() const { return ___m_TrackedTexturelessImages_53; }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA ** get_address_of_m_TrackedTexturelessImages_53() { return &___m_TrackedTexturelessImages_53; }
	inline void set_m_TrackedTexturelessImages_53(List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * value)
	{
		___m_TrackedTexturelessImages_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_54() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_54)); }
	inline bool get_s_Initialized_54() const { return ___s_Initialized_54; }
	inline bool* get_address_of_s_Initialized_54() { return &___s_Initialized_54; }
	inline void set_s_Initialized_54(bool value)
	{
		___s_Initialized_54 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.String[][]
struct StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* m_Items[1];

public:
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m7A4CBED9F6248681E854EEF934AF09D796B4071A_gshared (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_mBC07C59B061E1B719FFE2B6E5541E9011D906C3C_gshared (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * List_1_Find_mE8369D83F30EA40E093D333C773A071A705A9C94_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<System.Object>::FindAll(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * List_1_FindAll_m0223F4E0B2D8005C2945EE249BAA96AB7C16A57E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55_gshared (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * __this, float ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::set_TrimPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipNameTransform_set_TrimPrefix_mA120009F3CDAAFE71DB801691623C04033D70563 (ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Char[] System.IO.Path::GetInvalidPathChars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* Path_GetInvalidPathChars_m0C84DE22306A8BB60AC6FF5486B9270DA99C6B76 (const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::TransformFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipNameTransform_TransformFile_mB7253A47F462A93461A6165E518E78CFB6BB2693 (ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m80B198568050D692B70AD8949AC6EDC3044ED811 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipException__ctor_mF3FB1738B0CE0D8D76A22D72A97B52725723DD46 (ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mF9EA8429E9D1B7475D5A297E67435CF34E965F28 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.String ICSharpCode.SharpZipLib.Core.WindowsPathUtils::DropPathRoot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsPathUtils_DropPathRoot_m07037655FBEC3344D824070A17AEA44C5C38D6D5 (String_t* ___path0, const RuntimeMethod* method);
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m54FD37F2B9CA7DBFE440B0CB8503640A2CFF00FF (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::MakeValidName(System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipNameTransform_MakeValidName_mA44F3CB2B417AACA6D5933D28794BC7E19776608 (String_t* ___name0, Il2CppChar ___replacement1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOfAny(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m1AD95EBF79BB7FBFC7FC30DA9B1B8015BC3ABA6D (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___anyOf0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m53E278FB62B3EAEFAF82890C97219B9B5E2A56C3 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Chars_m71B2B761D6D287A666302FD85E320E1E60F388EA (StringBuilder_t * __this, int32_t ___index0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m30470EE6951771AE5E897773C8FC233DADBAE301 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___anyOf0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Void System.IO.PathTooLongException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathTooLongException__ctor_m43D8612C5F39D3F8EB07946DADD9B43DB585995F (PathTooLongException_t8DFBC40E5D45388A65B3327CF0D1F677C0F923AA * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ICSharpCode.SharpZipLib.Zip.ZipEntry>::.ctor()
inline void List_1__ctor_mEDE0B066356A5E54A76338C074058243DC41DF87 (List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32__ctor_mE99739368AB917DE801490C75D8A74E24FA5ADB2 (Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflater__ctor_m237AAECC7CEC7005598CF5D415E6B1CFC64308AF (Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * __this, int32_t ___level0, bool ___noZlibHeaderOrFooter1, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Deflater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream__ctor_m8EBC2C981EB3237971120A8C941B52FD37F1031F (DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___baseOutputStream0, Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * ___deflater1, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Deflater,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream__ctor_m398C37BA29CC2A69890E56DE9387BCC7657576B5 (DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___baseOutputStream0, Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * ___deflater1, int32_t ___bufferSize2, const RuntimeMethod* method);
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipStrings::ConvertToArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ZipStrings_ConvertToArray_m3BE8EC43ECA5CD1BB18D4994A5B9E5F534EEB686 (String_t* ___str0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::SetLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflater_SetLevel_m15C1ADD6B1F78FA1BF4CC9A1767444419480E5E7 (Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::GetLevel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Deflater_GetLevel_m3245924047B376EC0F6739CDAA734F0335AEB528_inline (Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteLeShort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteLeInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::CloseEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_CloseEntry_m522D4C18CFBE5829E2E11C0E030DCA425CE274CC (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<ICSharpCode.SharpZipLib.Zip.ZipEntry>::get_Count()
inline int32_t List_1_get_Count_m1FDCB78B65C08525A53025D604B1C6B46CF4B9BA_inline (List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CompressionMethod()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ZipEntry_get_CompressionMethod_mD418E4CEC2781A7AAE2EC18FFEDCD5C55F41DB7B_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Flags()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ZipEntry_get_Flags_m537DB42E6230C4C6721DE9B73D6F20B35D725889_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Flags(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ZipEntry_set_Flags_mD1B0067510F90FB109B380E492DEE545124EE204_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_CompressedSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_set_CompressedSize_m7AF11B1C526D27F940EC273D153694AF241657A2 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Crc(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_set_Crc_m7376EBCAE6AC2FAF1DBA09EF16365745E4B0C0F8 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_HasCrc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipEntry_get_HasCrc_mCAA057EFE82780535811E2F77770A03135C8BE54 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CompressedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_CanPatchEntries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterOutputStream_get_CanPatchEntries_m06BC7840F8D3922266366815EF58AF59E82B3712 (DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E * __this, const RuntimeMethod* method);
// System.String ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::get_Password()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DeflaterOutputStream_get_Password_m1DE04D58F28BEAD551AC6125A0866E5C33EC3A58_inline (DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_IsCrypted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_set_IsCrypted_m80816628C3AB1EF42C07DE191E803B1F18C82497 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Crc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipEntry_get_Crc_mE6028CC22F3978D17A53C6D2FDCEFD1CBCAC07E2 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Offset(System.Int64)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ZipEntry_set_Offset_m6C1BB08DB26D396B3C0306E4CA35511E9851C5B2_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_CompressionMethod(ICSharpCode.SharpZipLib.Zip.CompressionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_set_CompressionMethod_m1B2FC3101B67EDF59A6A3EC7B1E39D4B08AEECAA (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::ForceZip64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_ForceZip64_m225157FD843AFE1F0DAC397355B28A655468FCD4 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipEntry_get_Version_m53282E6D1A9B3EC722AD57BD43C9E2106B787DC6 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CompressionMethodForHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipEntry_get_CompressionMethodForHeader_m81BC895960DF50DAD6029E42E8146EC26F838165 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_DosTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipEntry_get_DosTime_mE5A3A577F1B8F81B9471E60B58A79D6660F3C3BB (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_LocalHeaderRequiresZip64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipEntry_get_LocalHeaderRequiresZip64_m91B7307C9AF1C66E20179EF75C1CC373991EE4F0 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsCrypted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipEntry_get_IsCrypted_m0FE385FC2247087004A27E58B634B23C8B739C50 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ZipEntry_get_Name_m7C82F27E52E95B2527A17776F2F9ADD266012DA3_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipStrings::ConvertToArray(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ZipStrings_ConvertToArray_mCA3E762D116FDEA744914D131559874EBF9D53AF (int32_t ___flags0, String_t* ___str1, const RuntimeMethod* method);
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipEntry::get_ExtraData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ZipEntry_get_ExtraData_m8D90211E2A1617E7C971F2E5964E1E6C9ED3BACE_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipExtraData__ctor_m226DC2287A50CDCF4F53825517484C29A306A810 (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::StartNewEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipExtraData_StartNewEntry_mFBE389D63CF1ADF1DE39F4793C084EED30AE206B (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::AddLeLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipExtraData_AddLeLong_mE27B8962532F5BA24FB3CF56A947A7B196EE13BA (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * __this, int64_t ___toAdd0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::AddNewEntry(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipExtraData_AddNewEntry_m7F041E00E0939BD69BA428513EC3B28A3A8A1890 (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * __this, int32_t ___headerID0, const RuntimeMethod* method);
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipExtraData::Find(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipExtraData_Find_mF40F56DA23CBB45CECF2F71447DAEDE0BE09BD16 (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * __this, int32_t ___headerID0, const RuntimeMethod* method);
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::get_CurrentReadIndex()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ZipExtraData_get_CurrentReadIndex_m54640708202733F4FBB8F380F682A5925254FCA2_inline (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * __this, const RuntimeMethod* method);
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipExtraData::Delete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipExtraData_Delete_mC33275D978CBE1A1ADE26FB4C5BCDB7CDA564EBA (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * __this, int32_t ___headerID0, const RuntimeMethod* method);
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_AESKeySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipEntry_get_AESKeySize_m3E24CE59AC0DDF68DE021FBA63DCB97E3A1C5A3D (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::AddExtraDataAES(ICSharpCode.SharpZipLib.Zip.ZipEntry,ICSharpCode.SharpZipLib.Zip.ZipExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_AddExtraDataAES_m975268D8FABF687DE5CD9D134D44325AA7DFD0FF (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * ___entry0, ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * ___extraData1, const RuntimeMethod* method);
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipExtraData::GetEntryData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ZipExtraData_GetEntryData_m89A3117AF2C586CBE0EFD7F9CDDA58173F54E630 (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * __this, const RuntimeMethod* method);
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_AESOverheadSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipEntry_get_AESOverheadSize_mA4520A31639190BAD364392132B6148DF2F38120 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Reset_m873AD6C72C0E168D0F0CB99551D0E9C1ABF8E6B7 (Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Deflater::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflater_Reset_m93AD16664FFD4516FD6B0AADDEC73B3215FE692C (Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteAESHeader(ICSharpCode.SharpZipLib.Zip.ZipEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_WriteAESHeader_mBA5902608A839F098C720A3613C4B1D8297E7746 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * ___entry0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteEncryptionHeader(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_WriteEncryptionHeader_mAAA5CE54D0E768D79B118FFF867F3CD379A32CC5 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, int64_t ___crcValue0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_Finish_mBC1697F1B9556CBCE89B8C9A514EC9135D49713C (DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E * __this, const RuntimeMethod* method);
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::get_TotalOut()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t Deflater_get_TotalOut_mE0783C4225087EC96E17E4ED66332EC98A0C7D10_inline (Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::GetAuthCodeIfAES()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_GetAuthCodeIfAES_mDC41047368B2D6595B9835DFB536F5B1D117D729 (DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Size(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_set_Size_m08855E1E785309EACB83237B74EA1903CD4931EE (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Int64 ICSharpCode.SharpZipLib.Checksum.Crc32::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Crc32_get_Value_m187DEE1F4F72EF3FB0604F9A3D224803BBCE8C65 (Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteLeLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_WriteLeLong_mC84317008404C99B42BAD52169F73F13CDC0A316 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ICSharpCode.SharpZipLib.Zip.ZipEntry>::Add(!0)
inline void List_1_Add_m4AB2B4A2D33B1995491B11CF7ABC7E06268379A8 (List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * __this, ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 *, ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::InitializePassword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_InitializePassword_m3BA2C19D09F8DE97F5D46104769E9CFF4E358751 (DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E * __this, String_t* ___password0, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2 (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::EncryptBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_EncryptBlock_mA8BA9971F0E1284F77C46F54F0DFA850490945BB (DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::AddLeShort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipExtraData_AddLeShort_m5B421024F495CDED8318ACB9A895EA8E1A64E1CA (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * __this, int32_t ___toAdd0, const RuntimeMethod* method);
// System.Byte ICSharpCode.SharpZipLib.Zip.ZipEntry::get_AESEncryptionStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ZipEntry_get_AESEncryptionStrength_mF5BF857CBF787E5FE8B85DB8928163F8243F404C (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::AddData(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipExtraData_AddData_m3E9F2B0753823DB5556BB31FCB0D86534562168A (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * __this, uint8_t ___data0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::InitializeAESPassword(ICSharpCode.SharpZipLib.Zip.ZipEntry,System.String,System.Byte[]&,System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_InitializeAESPassword_m0A0C79944F26D32D66FF4911AED4238B9E747F69 (DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E * __this, ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * ___entry0, String_t* ___rawPassword1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___salt2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___pwdVerifier3, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m7A4CBED9F6248681E854EEF934AF09D796B4071A (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m7A4CBED9F6248681E854EEF934AF09D796B4071A_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Void ICSharpCode.SharpZipLib.Checksum.Crc32::Update(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Update_m799A38870156F07B8D86AE30DB187A2E78D6C4F9 (Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * __this, ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___segment0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterOutputStream_Write_m525EFD06A97B96B1FA47167EDC937D955AAE0833 (DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::CopyAndEncrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_CopyAndEncrypt_m30B3C052A4B412D5FC3650F8C30B704489D08C90 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<ICSharpCode.SharpZipLib.Zip.ZipEntry>::GetEnumerator()
inline Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0  List_1_GetEnumerator_m1066D00079B7F3C4B98349A2B6BAB709F2CBB5D4 (List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0  (*) (List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<ICSharpCode.SharpZipLib.Zip.ZipEntry>::get_Current()
inline ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * Enumerator_get_Current_m7125CA172A5AD645D60CD9B3A04C2E6995E5FEE8_inline (Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0 * __this, const RuntimeMethod* method)
{
	return ((  ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * (*) (Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_HostSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipEntry_get_HostSystem_m1525D8A6375574186ADD10B99E603B63DACA2D54 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_VersionMadeBy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipEntry_get_VersionMadeBy_m7230E218E5D3D8A05B1D84B3CB938B88424AA585 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::IsZip64Forced()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ZipEntry_IsZip64Forced_m56C1F47E01DE5B670EBDF0170E75A181813FA2FE_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CentralHeaderRequiresZip64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipEntry_get_CentralHeaderRequiresZip64_mE0ECB9213C02BA39A347CDE6E1A1878ABE1F5DB5 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Offset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t ZipEntry_get_Offset_m5A61D9B4FE83674722B7FDD3109221EEF21B987C_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Comment()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ZipEntry_get_Comment_m00D142AF36AABD5E17AD9AF0C109588CEBAE6AB0_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_ExternalFileAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipEntry_get_ExternalFileAttributes_m6B55D19696564DF61C1DBA00B33EBD74FE11C7CC (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipEntry_get_IsDirectory_m9D46E510EDD228DFCDE0B80E72ACBF77B891E6E0 (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<ICSharpCode.SharpZipLib.Zip.ZipEntry>::MoveNext()
inline bool Enumerator_MoveNext_mEA01B431738A0117A71E0EBEFF18AA28E01F881E (Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ICSharpCode.SharpZipLib.Zip.ZipEntry>::Dispose()
inline void Enumerator_Dispose_mFFAF95BE1158120666355BEDEEA82F8069FEA60F (Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipHelperStream__ctor_m9260FBBB657A2302F4138C45D805B93E02F1478B (ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteEndOfCentralDirectory(System.Int64,System.Int64,System.Int64,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipHelperStream_WriteEndOfCentralDirectory_m4232D5728851DF3179AF759869DF2C45B765E88C (ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0 * __this, int64_t ___noOfEntries0, int64_t ___sizeEntries1, int64_t ___startOfCentralDirectory2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___comment3, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_GetEncoding_m0F51F30DFDD74D989E27C58C53FC82718CC51F68 (int32_t ___codepage0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipStrings::get_SystemDefaultCodePage()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ZipStrings_get_SystemDefaultCodePage_mFDB66669B80E1C318C5D94F017AF0653D799B219_inline (const RuntimeMethod* method);
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipStrings::get_CodePage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipStrings_get_CodePage_m8C98CC1D09B639ACCEC88561429D6D36403401A3 (const RuntimeMethod* method);
// System.String ICSharpCode.SharpZipLib.Zip.ZipStrings::ConvertToString(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipStrings_ConvertToString_m0254A59771E87589203182B9309184161C27B14A (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___count1, const RuntimeMethod* method);
// System.Text.Encoding ICSharpCode.SharpZipLib.Zip.ZipStrings::EncodingFromFlag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ZipStrings_EncodingFromFlag_m1C71060E3A402B4ABBAB3F02A5246AA21BFC5E50 (int32_t ___flags0, const RuntimeMethod* method);
// System.String ICSharpCode.SharpZipLib.Zip.ZipStrings::ConvertToStringExt(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipStrings_ConvertToStringExt_mDC7A4C65482F89262185878E8AFABDA18F3B5F40 (int32_t ___flags0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, int32_t ___count2, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SampleTable/Row>::Clear()
inline void List_1_Clear_mD97E64FC18723DC1E9D8CD0E952DBD408C86CC83 (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_mD3FBCD974CF552C7F7C7CD9A07BACAE51A2C5D42 (TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E * __this, const RuntimeMethod* method);
// System.String[][] CsvParser2::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* CsvParser2_Parse_m505DFFF17F7E12EDC1612BB22AC5C920E872CC8E (String_t* ___input0, const RuntimeMethod* method);
// System.Void SampleTable/Row::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Row__ctor_mCF4ADBC106A8193744479F149920FC88D51FE49B (Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SampleTable/Row>::Add(!0)
inline void List_1_Add_mBDA318FD8FFCE232E156B16743774AC52DF318F2 (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * __this, Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 *, Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<SampleTable/Row>::get_Count()
inline int32_t List_1_get_Count_m296605FADD940ECB7C32C051FD6C7BE98D5F582B_inline (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<SampleTable/Row>::get_Item(System.Int32)
inline Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * List_1_get_Item_m28E3F5D4E6ED522A019896F0A575A8D7B9A2D4DE_inline (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * (*) (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void SampleTable/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mB9CAE4AB8639129BFB0E27B4BE06EB8989F9F193 (U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<SampleTable/Row>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600 (Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_mBC07C59B061E1B719FFE2B6E5541E9011D906C3C_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Collections.Generic.List`1<SampleTable/Row>::Find(System.Predicate`1<!0>)
inline Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * List_1_Find_m4DC4CCF1D7DB1365CA18AF86D982A1AA093C74BF (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * __this, Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * ___match0, const RuntimeMethod* method)
{
	return ((  Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * (*) (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 *, Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *, const RuntimeMethod*))List_1_Find_mE8369D83F30EA40E093D333C773A071A705A9C94_gshared)(__this, ___match0, method);
}
// System.Void SampleTable/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mEE81E744FDE0C4A80FAE028538F99EEF84F4D524 (U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<SampleTable/Row>::FindAll(System.Predicate`1<!0>)
inline List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * List_1_FindAll_mD5F6AD75B6054220CAEB130D5C5A10200D6FF45C (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * __this, Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * ___match0, const RuntimeMethod* method)
{
	return ((  List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * (*) (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 *, Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *, const RuntimeMethod*))List_1_FindAll_m0223F4E0B2D8005C2945EE249BAA96AB7C16A57E_gshared)(__this, ___match0, method);
}
// System.Void SampleTable/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mDAAE53EAF38C0742BD4806F239C157416201F262 (U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13 * __this, const RuntimeMethod* method);
// System.Void SampleTable/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m970FD1D38C9355F42A48D6AADD99BEAF690B5238 (U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634 * __this, const RuntimeMethod* method);
// System.Void SampleTable/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m855CE13CC63065800400A74E11F5208F45342202 (U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369 * __this, const RuntimeMethod* method);
// System.Void SampleTable/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mF659046A41E0FC2AE6959439798307AF85281D93 (U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D * __this, const RuntimeMethod* method);
// System.Void SampleTable/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mB22992F228ACC42F9315BDE45AA80989D33ECBFC (U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC * __this, const RuntimeMethod* method);
// System.Void SampleTable/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m5F44EDC8E2629FC292D877A81366B3E8C1F0297B (U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F * __this, const RuntimeMethod* method);
// System.Void SampleTable/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m83F2E269AE4010AA11D5A6966AFB0CF79CE6E146 (U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F * __this, const RuntimeMethod* method);
// System.Void SampleTable/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mA34A6894B9C3EFFFEA06C172974485237AF1C331 (U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SampleTable/Row>::.ctor()
inline void List_1__ctor_m6271CC3DE8ADE6F7315529CD38C69C0B6B71490E (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Collections.IEnumerator UINetworkImage::DownSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UINetworkImage_DownSprite_mF4C4B3FC9C6E246CEA30C7FDEC29DF3DB7054712 (UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UINetworkImage/<DownSprite>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownSpriteU3Ed__5__ctor_mC9E9C3927FCE949CAB2A08ACEFB1E30465F92A7E (U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_mA5469BB7BBB59B8A94BB86590B051E0DFACC12DD (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.String UINetworkImage::get_Url()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* UINetworkImage_get_Url_mD29EB1C750449E949369EF438E6A7EEEA158544A_inline (const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m8D62097CE983222DC563B0F47C9FC2C9B7A5F41F (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerTexture::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerTexture__ctor_mCD6A98C8B262A0D16BBD90F242C68AFA1C71504D (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, bool ___readable0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_mB481C2EE30F84B62396C1A837F46046F12B8FA7E (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DownloadHandlerTexture_get_texture_m07CC27F45F3628A969584963AC9D5B08016D685D (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * Sprite_Create_m9ED36DA8DA0637F93BA2753A16405EB0F7B17A3C (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pivot2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646 (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m613B7AC920F2EA886AF0D931005C6CD13F89A160 (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Image_get_fillAmount_m5FF6EE8DB33C4A219B3677FB24F50A6E5CCF44F0_inline (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041 (float ___f0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.String System.Uri::get_AbsolutePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_mA9A825E2BBD0A43AD76EB9A9765E29E45FE32F31 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m2307E8E0B250632002840D9EC27DBABE9C4EB85E (String_t* ___path0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___separator0, const RuntimeMethod* method);
// System.Void WKWebView::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WKWebView_Init_mC67972E9E9D740E4BD8D9249B5205F774AA004EA (WKWebView_tB621CFF722AE711E3D509DD012802941708797B3 * __this, const RuntimeMethod* method);
// System.Void WebViewObject::LoadURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_LoadURL_m7EAA1907B006B634F59FADC507D81D6A9A89E661 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Boolean WKWebView::get_IsHybrid()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WKWebView_get_IsHybrid_mD1DF325C9E8405BF905547D0F1296FC90CC701F2_inline (const RuntimeMethod* method);
// System.String WKWebView::get_Url()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WKWebView_get_Url_m930A2F995A968AC8E5AC3812C8CA616DCCCB90F0_inline (const RuntimeMethod* method);
// System.String WKWebView::get_Uri()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WKWebView_get_Uri_mF4FDCB31E54E6D529B5D01A12A9C7A53E39EA356_inline (const RuntimeMethod* method);
// System.Void WebViewObject::SetVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_SetVisibility_m1D5FEE21D31AE46F8F4FE68A2AEA08EE8ED1FCDF (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, bool ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<WebViewObject>()
inline WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * GameObject_AddComponent_TisWebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D_m44CE5F2768BB2EE8B5DB72E9753151DE33424020 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD9D4E02AEE600236E03EBAB2449B68B482FAC69B (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebViewObject::Init(System.Action`1<System.String>,System.Boolean,System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Action`1<System.String>,System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_Init_mADBC52DF92AEC8D58B2EB5C5CFE3FC0C12822EE4 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___cb0, bool ___transparent1, String_t* ___ua2, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___err3, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___httpErr4, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___ld5, bool ___enableWKWebView6, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___started7, const RuntimeMethod* method);
// System.Void WKWebView/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA6BC08612EB38FD6C5CD5F5092447412F0D912C3 (U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.CertificateHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler__ctor_m59D87E57FBE1BBCAB56324059DF93A8629415A15 (CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * __this, const RuntimeMethod* method);
// System.Void WebUtil/<GetText>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextU3Ed__1__ctor_mE28D278DD71DB5540FAB753D4CB83DE790F1A2DC (U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void WebUtil/<DownloadFile>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadFileU3Ed__2__ctor_m054598DC86AC21C7A8B1E7DD9DF3644EADCCF059 (U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18 (String_t* ___uri0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.UnityWebRequest::get_downloadProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWebRequest_get_downloadProgress_mE09FED8FB4ED03B0BBC23A3A243B283D4E148DC5 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::Invoke(!0)
inline void Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55 (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB *, float, const RuntimeMethod*))Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m2A08EE3D38FD9FE81F2D619FA66255B6F61DAB54 (AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m8F636B70C239EC848FACC83189DE0C22CADEC1C3 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DownloadHandler_get_data_m4AE4E3764FBE186ABA89B5F3A7F91048EE5E38FB (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Byte[]>::Invoke(!0)
inline void Action_1_Invoke_mE14FF42ED04F6447A383F0D4ED7CB7A70FBB3346 (Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7 *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m6AFA87DA329282058723E5ACE016B0B08CFE806D (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Networking.UnityWebRequest::Send()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * UnityWebRequest_Send_mE2BC0213F05A8E6E8384AB4BB8BA75883BDD801F (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_visible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchScreenKeyboard_get_visible_mBE829EE6CC670F1E9A7BA83A5B98EB84B81A4A44 (const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.IntPtr WebViewObject::_CWebViewPlugin_Init(System.String,System.Boolean,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WebViewObject__CWebViewPlugin_Init_m196E9DEFAEA5741144576427ADC7BC98F9E78AF0 (String_t* ___gameObject0, bool ___transparent1, String_t* ___ua2, bool ___enableWKWebView3, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Int32 WebViewObject::_CWebViewPlugin_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewObject__CWebViewPlugin_Destroy_m1C6393C3F2C1B147086379765E64C5BDEA59DEF5 (intptr_t ___instance0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void WebViewObject::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_SetMargins_m18BE30A7C6189622AC60AF295C95193E9BA4422F (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, bool ___relative4, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_SetMargins(System.IntPtr,System.Single,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_SetMargins_mFBF6F377A073383BD5AADDA69F9FE593264A1B71 (intptr_t ___instance0, float ___left1, float ___top2, float ___right3, float ___bottom4, bool ___relative5, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_SetVisibility(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_SetVisibility_m807571EE3D8F13BBA08180F834C789193902CE7E (intptr_t ___instance0, bool ___visibility1, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_SetAlertDialogEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_SetAlertDialogEnabled_m39E2755ACB2EBC7D1BA1C005448DCC31B11259D8 (intptr_t ___instance0, bool ___enabled1, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_SetScrollBounceEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_SetScrollBounceEnabled_m81957F4D7D2343B1CEC9682D8CF0057CE6EAEAA6 (intptr_t ___instance0, bool ___enabled1, const RuntimeMethod* method);
// System.Boolean WebViewObject::_CWebViewPlugin_SetURLPattern(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject__CWebViewPlugin_SetURLPattern_m89C65508E2639D92785577A9D55C810756A635B6 (intptr_t ___instance0, String_t* ___allowPattern1, String_t* ___denyPattern2, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_LoadURL(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_LoadURL_mE6781876A5604D8B0B9DB96FCC085F2E21A7A015 (intptr_t ___instance0, String_t* ___url1, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_LoadHTML(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_LoadHTML_m74319CF45EE20C18F4753B94E9519F04B73B9B0F (intptr_t ___instance0, String_t* ___html1, String_t* ___baseUrl2, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_EvaluateJS(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_EvaluateJS_m7D691017E95F137BAB7BCA40882A38E723E3FDF5 (intptr_t ___instance0, String_t* ___url1, const RuntimeMethod* method);
// System.Int32 WebViewObject::_CWebViewPlugin_Progress(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewObject__CWebViewPlugin_Progress_mED980DE358E72F53F3E485B2FC294E0D488ABF86 (intptr_t ___instance0, const RuntimeMethod* method);
// System.Boolean WebViewObject::_CWebViewPlugin_CanGoBack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject__CWebViewPlugin_CanGoBack_m84F8124944D7E70CAAC78CF1814D59BDD2819402 (intptr_t ___instance0, const RuntimeMethod* method);
// System.Boolean WebViewObject::_CWebViewPlugin_CanGoForward(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject__CWebViewPlugin_CanGoForward_mE168159F00B481D1DB56309DAAC57FD210CC16D4 (intptr_t ___instance0, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_GoBack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_GoBack_m8673D89ADF712323D216CCC4DF5006BC758FF5A8 (intptr_t ___instance0, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_GoForward(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_GoForward_m94699E27F1B8A0F0A5BE22EA546B8A480EC31588 (intptr_t ___instance0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::UnEscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_UnEscapeURL_m1224F23674AC91179573482A2993CB9E4EC98980 (String_t* ___s0, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_AddCustomHeader(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_AddCustomHeader_m5EE3CE4E4C4D07EBE95ECA440672A717BB2BD0B5 (intptr_t ___instance0, String_t* ___headerKey1, String_t* ___headerValue2, const RuntimeMethod* method);
// System.String WebViewObject::_CWebViewPlugin_GetCustomHeaderValue(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebViewObject__CWebViewPlugin_GetCustomHeaderValue_m9CFF505B3A33C795533610E8BB19FCA557217136 (intptr_t ___instance0, String_t* ___headerKey1, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_RemoveCustomHeader(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_RemoveCustomHeader_mD368685F96A50A66DF6B733F1F8E1203760C4BB9 (intptr_t ___instance0, String_t* ___headerKey1, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_ClearCustomHeader(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_ClearCustomHeader_mC8D5FD8FAAE36503C017EFF060669FDDAB8C7544 (intptr_t ___instance0, const RuntimeMethod* method);
// System.Void WebViewObject::_CWebViewPlugin_ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_ClearCookies_mDC33EF5DBA0593882B37444B126C90B6E33B86A9 (const RuntimeMethod* method);
// System.String WebViewObject::_CWebViewPlugin_GetCookies(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebViewObject__CWebViewPlugin_GetCookies_m8A771CDD3E0FA898F3BE5836285D31CF5CC5F456 (String_t* ___url0, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method);
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipInputStream__ctor_m1CB03F176DC10404D2826B5431C9516D2C88E995 (ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___baseInputStream0, const RuntimeMethod* method);
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m61922AA6D7B48EACBA36FF41A1B28F506CFB8A97 (String_t* ___path0, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41 (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * File_Create_mE6AF90C7A82E96EC1315821EB061327CF3EB55DD (String_t* ___path0, const RuntimeMethod* method);
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipInputStream::GetNextEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * ZipInputStream_GetNextEntry_m0DC0D8C513EDF625EAA4D3FB8C1BB9A3A926B212 (ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ReadDataHandler_tA7387087BBA5C5FADFE1D182C794E4D02FEF134E (ReadDataHandler_tA7387087BBA5C5FADFE1D182C794E4D02FEF134E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___b0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___b0' to native representation
	uint8_t* ____b0_marshaled = NULL;
	if (___b0 != NULL)
	{
		____b0_marshaled = reinterpret_cast<uint8_t*>((___b0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____b0_marshaled, ___offset1, ___length2);

	return returnValue;
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream_ReadDataHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadDataHandler__ctor_mD86A9B1E2532DB40C5369DB2B8319B4AA58B12A6 (ReadDataHandler_tA7387087BBA5C5FADFE1D182C794E4D02FEF134E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream_ReadDataHandler::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadDataHandler_Invoke_mD65A2851D4B621F799F2757E761A7DEB195444A0 (ReadDataHandler_tA7387087BBA5C5FADFE1D182C794E4D02FEF134E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___b0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___b0, ___offset1, ___length2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___b0, ___offset1, ___length2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(targetMethod, ___b0, ___offset1, ___length2);
					else
						result = GenericVirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(targetMethod, ___b0, ___offset1, ___length2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___b0, ___offset1, ___length2);
					else
						result = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___b0, ___offset1, ___length2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___b0, ___offset1, ___length2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___b0, ___offset1, ___length2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___b0, ___offset1, ___length2);
					else
						result = GenericVirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___b0, ___offset1, ___length2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___b0, ___offset1, ___length2);
					else
						result = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___b0, ___offset1, ___length2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___b0, ___offset1, ___length2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.ZipInputStream_ReadDataHandler::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadDataHandler_BeginInvoke_m974DC70593F1F400E4BA27508D3865B752BD6C2C (ReadDataHandler_tA7387087BBA5C5FADFE1D182C794E4D02FEF134E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___b0, int32_t ___offset1, int32_t ___length2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadDataHandler_BeginInvoke_m974DC70593F1F400E4BA27508D3865B752BD6C2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___b0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___length2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream_ReadDataHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadDataHandler_EndInvoke_m65DE53C690367B5DA681D4E8439526844B6B54AE (ReadDataHandler_tA7387087BBA5C5FADFE1D182C794E4D02FEF134E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipNameTransform__ctor_m00D44D6F707886D7EDFF9E6BBDE4455D6194C487 (ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8 * __this, const RuntimeMethod* method)
{
	{
		// public ZipNameTransform()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipNameTransform__ctor_m7362E014F489A322C82F6A5D3F35C184A51F1C70 (ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8 * __this, String_t* ___trimPrefix0, const RuntimeMethod* method)
{
	{
		// public ZipNameTransform(string trimPrefix)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// TrimPrefix = trimPrefix;
		String_t* L_0 = ___trimPrefix0;
		ZipNameTransform_set_TrimPrefix_mA120009F3CDAAFE71DB801691623C04033D70563(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipNameTransform__cctor_m14C55B36A7C8EB72D435B929F520A5C9E0464148 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipNameTransform__cctor_m14C55B36A7C8EB72D435B929F520A5C9E0464148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// invalidPathChars = Path.GetInvalidPathChars();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = Path_GetInvalidPathChars_m0C84DE22306A8BB60AC6FF5486B9270DA99C6B76(/*hidden argument*/NULL);
		V_0 = L_0;
		// int howMany = invalidPathChars.Length + 2;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = V_0;
		NullCheck(L_1);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), (int32_t)2));
		// InvalidEntryCharsRelaxed = new char[howMany];
		int32_t L_2 = V_1;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)L_2);
		((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->set_InvalidEntryCharsRelaxed_2(L_3);
		// Array.Copy(invalidPathChars, 0, InvalidEntryCharsRelaxed, 0, invalidPathChars.Length);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_4 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryCharsRelaxed_2();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_6 = V_0;
		NullCheck(L_6);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_4, 0, (RuntimeArray *)(RuntimeArray *)L_5, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), /*hidden argument*/NULL);
		// InvalidEntryCharsRelaxed[howMany - 1] = '*';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_7 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryCharsRelaxed_2();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1))), (Il2CppChar)((int32_t)42));
		// InvalidEntryCharsRelaxed[howMany - 2] = '?';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_9 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryCharsRelaxed_2();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)2))), (Il2CppChar)((int32_t)63));
		// howMany = invalidPathChars.Length + 4;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_11 = V_0;
		NullCheck(L_11);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))), (int32_t)4));
		// InvalidEntryChars = new char[howMany];
		int32_t L_12 = V_1;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_13 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)L_12);
		((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->set_InvalidEntryChars_1(L_13);
		// Array.Copy(invalidPathChars, 0, InvalidEntryChars, 0, invalidPathChars.Length);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_14 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_15 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryChars_1();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_16 = V_0;
		NullCheck(L_16);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_14, 0, (RuntimeArray *)(RuntimeArray *)L_15, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))), /*hidden argument*/NULL);
		// InvalidEntryChars[howMany - 1] = ':';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_17 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryChars_1();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1))), (Il2CppChar)((int32_t)58));
		// InvalidEntryChars[howMany - 2] = '\\';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_19 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryChars_1();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)2))), (Il2CppChar)((int32_t)92));
		// InvalidEntryChars[howMany - 3] = '*';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_21 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryChars_1();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)3))), (Il2CppChar)((int32_t)42));
		// InvalidEntryChars[howMany - 4] = '?';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_23 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryChars_1();
		int32_t L_24 = V_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)4))), (Il2CppChar)((int32_t)63));
		// }
		return;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::TransformDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipNameTransform_TransformDirectory_mA545CE0DC648AED201F273F22ABE8FD0600040A2 (ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipNameTransform_TransformDirectory_mA545CE0DC648AED201F273F22ABE8FD0600040A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// name = TransformFile(name);
		String_t* L_0 = ___name0;
		String_t* L_1 = ZipNameTransform_TransformFile_mB7253A47F462A93461A6165E518E78CFB6BB2693(__this, L_0, /*hidden argument*/NULL);
		___name0 = L_1;
		// if (name.Length > 0)
		String_t* L_2 = ___name0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// if (!name.EndsWith("/", StringComparison.Ordinal))
		String_t* L_4 = ___name0;
		NullCheck(L_4);
		bool L_5 = String_EndsWith_m80B198568050D692B70AD8949AC6EDC3044ED811(L_4, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, 4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		// name += "/";
		String_t* L_6 = ___name0;
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_6, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, /*hidden argument*/NULL);
		___name0 = L_7;
		// }
		goto IL_003a;
	}

IL_002f:
	{
		// throw new ZipException("Cannot have an empty directory name");
		ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD * L_8 = (ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD *)il2cpp_codegen_object_new(ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD_il2cpp_TypeInfo_var);
		ZipException__ctor_mF3FB1738B0CE0D8D76A22D72A97B52725723DD46(L_8, _stringLiteralB07D9ED92A8817894786071294C9FE8FEDE76863, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ZipNameTransform_TransformDirectory_mA545CE0DC648AED201F273F22ABE8FD0600040A2_RuntimeMethod_var);
	}

IL_003a:
	{
		// return name;
		String_t* L_9 = ___name0;
		return L_9;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::TransformFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipNameTransform_TransformFile_mB7253A47F462A93461A6165E518E78CFB6BB2693 (ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipNameTransform_TransformFile_mB7253A47F462A93461A6165E518E78CFB6BB2693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (name != null)
		String_t* L_0 = ___name0;
		if (!L_0)
		{
			goto IL_00d5;
		}
	}
	{
		// string lowerName = name.ToLower();
		String_t* L_1 = ___name0;
		NullCheck(L_1);
		String_t* L_2 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if ((trimPrefix_ != null) && (lowerName.IndexOf(trimPrefix_, StringComparison.Ordinal) == 0))
		String_t* L_3 = __this->get_trimPrefix__0();
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_4 = V_0;
		String_t* L_5 = __this->get_trimPrefix__0();
		NullCheck(L_4);
		int32_t L_6 = String_IndexOf_mF9EA8429E9D1B7475D5A297E67435CF34E965F28(L_4, L_5, 4, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		// name = name.Substring(trimPrefix_.Length);
		String_t* L_7 = ___name0;
		String_t* L_8 = __this->get_trimPrefix__0();
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_10 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_7, L_9, /*hidden argument*/NULL);
		___name0 = L_10;
	}

IL_0037:
	{
		// name = name.Replace(@"\", "/");
		String_t* L_11 = ___name0;
		NullCheck(L_11);
		String_t* L_12 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_11, _stringLiteral08534F33C201A45017B502E90A800F1B708EBCB3, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, /*hidden argument*/NULL);
		___name0 = L_12;
		// name = WindowsPathUtils.DropPathRoot(name);
		String_t* L_13 = ___name0;
		String_t* L_14 = WindowsPathUtils_DropPathRoot_m07037655FBEC3344D824070A17AEA44C5C38D6D5(L_13, /*hidden argument*/NULL);
		___name0 = L_14;
		goto IL_005d;
	}

IL_0053:
	{
		// name = name.Remove(0, 1);
		String_t* L_15 = ___name0;
		NullCheck(L_15);
		String_t* L_16 = String_Remove_m54FD37F2B9CA7DBFE440B0CB8503640A2CFF00FF(L_15, 0, 1, /*hidden argument*/NULL);
		___name0 = L_16;
	}

IL_005d:
	{
		// while ((name.Length > 0) && (name[0] == '/'))
		String_t* L_17 = ___name0;
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		String_t* L_19 = ___name0;
		NullCheck(L_19);
		Il2CppChar L_20 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_19, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)((int32_t)47))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0084;
	}

IL_0073:
	{
		// name = name.Remove(name.Length - 1, 1);
		String_t* L_21 = ___name0;
		String_t* L_22 = ___name0;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_24 = String_Remove_m54FD37F2B9CA7DBFE440B0CB8503640A2CFF00FF(L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), 1, /*hidden argument*/NULL);
		___name0 = L_24;
	}

IL_0084:
	{
		// while ((name.Length > 0) && (name[name.Length - 1] == '/'))
		String_t* L_25 = ___name0;
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_009f;
		}
	}
	{
		String_t* L_27 = ___name0;
		String_t* L_28 = ___name0;
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Il2CppChar L_30 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_27, ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_30) == ((int32_t)((int32_t)47))))
		{
			goto IL_0073;
		}
	}

IL_009f:
	{
		// int index = name.IndexOf("//", StringComparison.Ordinal);
		String_t* L_31 = ___name0;
		NullCheck(L_31);
		int32_t L_32 = String_IndexOf_mF9EA8429E9D1B7475D5A297E67435CF34E965F28(L_31, _stringLiteralEBBFFB7D7EA5362A22BFA1BAB0BFDEB1617CD610, 4, /*hidden argument*/NULL);
		V_1 = L_32;
		goto IL_00c5;
	}

IL_00ae:
	{
		// name = name.Remove(index, 1);
		String_t* L_33 = ___name0;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		String_t* L_35 = String_Remove_m54FD37F2B9CA7DBFE440B0CB8503640A2CFF00FF(L_33, L_34, 1, /*hidden argument*/NULL);
		___name0 = L_35;
		// index = name.IndexOf("//", StringComparison.Ordinal);
		String_t* L_36 = ___name0;
		NullCheck(L_36);
		int32_t L_37 = String_IndexOf_mF9EA8429E9D1B7475D5A297E67435CF34E965F28(L_36, _stringLiteralEBBFFB7D7EA5362A22BFA1BAB0BFDEB1617CD610, 4, /*hidden argument*/NULL);
		V_1 = L_37;
	}

IL_00c5:
	{
		// while (index >= 0)
		int32_t L_38 = V_1;
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		// name = MakeValidName(name, '_');
		String_t* L_39 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var);
		String_t* L_40 = ZipNameTransform_MakeValidName_mA44F3CB2B417AACA6D5933D28794BC7E19776608(L_39, ((int32_t)95), /*hidden argument*/NULL);
		___name0 = L_40;
		// }
		goto IL_00dc;
	}

IL_00d5:
	{
		// name = string.Empty;
		String_t* L_41 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		___name0 = L_41;
	}

IL_00dc:
	{
		// return name;
		String_t* L_42 = ___name0;
		return L_42;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::get_TrimPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipNameTransform_get_TrimPrefix_m7F690A3071042AE76C17D44CF6B9537C7BBF3330 (ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8 * __this, const RuntimeMethod* method)
{
	{
		// get { return trimPrefix_; }
		String_t* L_0 = __this->get_trimPrefix__0();
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::set_TrimPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipNameTransform_set_TrimPrefix_mA120009F3CDAAFE71DB801691623C04033D70563 (ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// trimPrefix_ = value;
		String_t* L_0 = ___value0;
		__this->set_trimPrefix__0(L_0);
		// if (trimPrefix_ != null)
		String_t* L_1 = __this->get_trimPrefix__0();
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// trimPrefix_ = trimPrefix_.ToLower();
		String_t* L_2 = __this->get_trimPrefix__0();
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_2, /*hidden argument*/NULL);
		__this->set_trimPrefix__0(L_3);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::MakeValidName(System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipNameTransform_MakeValidName_mA44F3CB2B417AACA6D5933D28794BC7E19776608 (String_t* ___name0, Il2CppChar ___replacement1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipNameTransform_MakeValidName_mA44F3CB2B417AACA6D5933D28794BC7E19776608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t * V_1 = NULL;
	{
		// int index = name.IndexOfAny(InvalidEntryChars);
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryChars_1();
		NullCheck(L_0);
		int32_t L_2 = String_IndexOfAny_m1AD95EBF79BB7FBFC7FC30DA9B1B8015BC3ABA6D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (index >= 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		// var builder = new StringBuilder(name);
		String_t* L_4 = ___name0;
		StringBuilder_t * L_5 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m53E278FB62B3EAEFAF82890C97219B9B5E2A56C3(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_003d;
	}

IL_0019:
	{
		// builder[index] = replacement;
		StringBuilder_t * L_6 = V_1;
		int32_t L_7 = V_0;
		Il2CppChar L_8 = ___replacement1;
		NullCheck(L_6);
		StringBuilder_set_Chars_m71B2B761D6D287A666302FD85E320E1E60F388EA(L_6, L_7, L_8, /*hidden argument*/NULL);
		// if (index >= name.Length)
		int32_t L_9 = V_0;
		String_t* L_10 = ___name0;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_002e;
		}
	}
	{
		// index = -1;
		V_0 = (-1);
		// }
		goto IL_003d;
	}

IL_002e:
	{
		// index = name.IndexOfAny(InvalidEntryChars, index + 1);
		String_t* L_12 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_13 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryChars_1();
		int32_t L_14 = V_0;
		NullCheck(L_12);
		int32_t L_15 = String_IndexOfAny_m30470EE6951771AE5E897773C8FC233DADBAE301(L_12, L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_003d:
	{
		// while (index >= 0)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// name = builder.ToString();
		StringBuilder_t * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		___name0 = L_18;
	}

IL_0049:
	{
		// if (name.Length > 0xffff)
		String_t* L_19 = ___name0;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_005c;
		}
	}
	{
		// throw new PathTooLongException();
		PathTooLongException_t8DFBC40E5D45388A65B3327CF0D1F677C0F923AA * L_21 = (PathTooLongException_t8DFBC40E5D45388A65B3327CF0D1F677C0F923AA *)il2cpp_codegen_object_new(PathTooLongException_t8DFBC40E5D45388A65B3327CF0D1F677C0F923AA_il2cpp_TypeInfo_var);
		PathTooLongException__ctor_m43D8612C5F39D3F8EB07946DADD9B43DB585995F(L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ZipNameTransform_MakeValidName_mA44F3CB2B417AACA6D5933D28794BC7E19776608_RuntimeMethod_var);
	}

IL_005c:
	{
		// return name;
		String_t* L_22 = ___name0;
		return L_22;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipNameTransform::IsValidName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipNameTransform_IsValidName_mE265F01570290FC498389F4827EA34EE4A78FB88 (String_t* ___name0, bool ___relaxed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipNameTransform_IsValidName_mE265F01570290FC498389F4827EA34EE4A78FB88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	{
		// bool result = (name != null);
		String_t* L_0 = ___name0;
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		// if (result)
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// if (relaxed)
		bool L_2 = ___relaxed1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// result = name.IndexOfAny(InvalidEntryCharsRelaxed) < 0;
		String_t* L_3 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_4 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryCharsRelaxed_2();
		NullCheck(L_3);
		int32_t L_5 = String_IndexOfAny_m1AD95EBF79BB7FBFC7FC30DA9B1B8015BC3ABA6D(L_3, L_4, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		// }
		goto IL_0039;
	}

IL_001c:
	{
		// result =
		//     (name.IndexOfAny(InvalidEntryChars) < 0) &&
		//     (name.IndexOf('/') != 0);
		String_t* L_6 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_7 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryChars_1();
		NullCheck(L_6);
		int32_t L_8 = String_IndexOfAny_m1AD95EBF79BB7FBFC7FC30DA9B1B8015BC3ABA6D(L_6, L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_9 = ___name0;
		NullCheck(L_9);
		int32_t L_10 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_9, ((int32_t)47), /*hidden argument*/NULL);
		G_B6_0 = ((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = 0;
	}

IL_0038:
	{
		V_0 = (bool)G_B6_0;
	}

IL_0039:
	{
		// return result;
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipNameTransform::IsValidName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipNameTransform_IsValidName_m5BF31F4568121CB8DE7C20047B4C3A22E08DB1DE (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipNameTransform_IsValidName_m5BF31F4568121CB8DE7C20047B4C3A22E08DB1DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool result =
		//     (name != null) &&
		//     (name.IndexOfAny(InvalidEntryChars) < 0) &&
		//     (name.IndexOf('/') != 0)
		//     ;
		String_t* L_0 = ___name0;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = ((ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_StaticFields*)il2cpp_codegen_static_fields_for(ZipNameTransform_tCB5A4E8C1EAEA487FE32B0214573466C72438AE8_il2cpp_TypeInfo_var))->get_InvalidEntryChars_1();
		NullCheck(L_1);
		int32_t L_3 = String_IndexOfAny_m1AD95EBF79BB7FBFC7FC30DA9B1B8015BC3ABA6D(L_1, L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_4 = ___name0;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_4, ((int32_t)47), /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
	}

IL_001d:
	{
		// return result;
		return (bool)0;
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
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream__ctor_m6FADF27291B0B07FB631DC16A55B944EA72B193D (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___baseOutputStream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipOutputStream__ctor_m6FADF27291B0B07FB631DC16A55B944EA72B193D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ZipEntry> entries = new List<ZipEntry>();
		List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * L_0 = (List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 *)il2cpp_codegen_object_new(List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61_il2cpp_TypeInfo_var);
		List_1__ctor_mEDE0B066356A5E54A76338C074058243DC41DF87(L_0, /*hidden argument*/List_1__ctor_mEDE0B066356A5E54A76338C074058243DC41DF87_RuntimeMethod_var);
		__this->set_entries_14(L_0);
		// private Crc32 crc = new Crc32();
		Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * L_1 = (Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 *)il2cpp_codegen_object_new(Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354_il2cpp_TypeInfo_var);
		Crc32__ctor_mE99739368AB917DE801490C75D8A74E24FA5ADB2(L_1, /*hidden argument*/NULL);
		__this->set_crc_15(L_1);
		// private int defaultCompressionLevel = Deflater.DEFAULT_COMPRESSION;
		__this->set_defaultCompressionLevel_17((-1));
		// private CompressionMethod curMethod = CompressionMethod.Deflated;
		__this->set_curMethod_18(8);
		// private byte[] zipComment = new byte[0];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_zipComment_21(L_2);
		// private long crcPatchPos = -1;
		__this->set_crcPatchPos_23((((int64_t)((int64_t)(-1)))));
		// private long sizePatchPos = -1;
		__this->set_sizePatchPos_24((((int64_t)((int64_t)(-1)))));
		// private UseZip64 useZip64_ = UseZip64.Dynamic;
		__this->set_useZip64__25(2);
		// : base(baseOutputStream, new Deflater(Deflater.DEFAULT_COMPRESSION, true))
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = ___baseOutputStream0;
		Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * L_4 = (Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C *)il2cpp_codegen_object_new(Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C_il2cpp_TypeInfo_var);
		Deflater__ctor_m237AAECC7CEC7005598CF5D415E6B1CFC64308AF(L_4, (-1), (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E_il2cpp_TypeInfo_var);
		DeflaterOutputStream__ctor_m8EBC2C981EB3237971120A8C941B52FD37F1031F(__this, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream__ctor_mB650382E051651BC0A0D85376C01B0E27293FE24 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___baseOutputStream0, int32_t ___bufferSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipOutputStream__ctor_mB650382E051651BC0A0D85376C01B0E27293FE24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ZipEntry> entries = new List<ZipEntry>();
		List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * L_0 = (List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 *)il2cpp_codegen_object_new(List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61_il2cpp_TypeInfo_var);
		List_1__ctor_mEDE0B066356A5E54A76338C074058243DC41DF87(L_0, /*hidden argument*/List_1__ctor_mEDE0B066356A5E54A76338C074058243DC41DF87_RuntimeMethod_var);
		__this->set_entries_14(L_0);
		// private Crc32 crc = new Crc32();
		Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * L_1 = (Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 *)il2cpp_codegen_object_new(Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354_il2cpp_TypeInfo_var);
		Crc32__ctor_mE99739368AB917DE801490C75D8A74E24FA5ADB2(L_1, /*hidden argument*/NULL);
		__this->set_crc_15(L_1);
		// private int defaultCompressionLevel = Deflater.DEFAULT_COMPRESSION;
		__this->set_defaultCompressionLevel_17((-1));
		// private CompressionMethod curMethod = CompressionMethod.Deflated;
		__this->set_curMethod_18(8);
		// private byte[] zipComment = new byte[0];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_zipComment_21(L_2);
		// private long crcPatchPos = -1;
		__this->set_crcPatchPos_23((((int64_t)((int64_t)(-1)))));
		// private long sizePatchPos = -1;
		__this->set_sizePatchPos_24((((int64_t)((int64_t)(-1)))));
		// private UseZip64 useZip64_ = UseZip64.Dynamic;
		__this->set_useZip64__25(2);
		// : base(baseOutputStream, new Deflater(Deflater.DEFAULT_COMPRESSION, true), bufferSize)
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = ___baseOutputStream0;
		Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * L_4 = (Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C *)il2cpp_codegen_object_new(Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C_il2cpp_TypeInfo_var);
		Deflater__ctor_m237AAECC7CEC7005598CF5D415E6B1CFC64308AF(L_4, (-1), (bool)1, /*hidden argument*/NULL);
		int32_t L_5 = ___bufferSize1;
		IL2CPP_RUNTIME_CLASS_INIT(DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E_il2cpp_TypeInfo_var);
		DeflaterOutputStream__ctor_m398C37BA29CC2A69890E56DE9387BCC7657576B5(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipOutputStream::get_IsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipOutputStream_get_IsFinished_mBF845BD4DCBB632AB7C014CFE6921C5D58CE1E3A (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, const RuntimeMethod* method)
{
	{
		// return entries == null;
		List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * L_0 = __this->get_entries_14();
		return (bool)((((RuntimeObject*)(List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::SetComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_SetComment_m4626AF8705085EBE01E1BB646A2170950348DA94 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, String_t* ___comment0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipOutputStream_SetComment_m4626AF8705085EBE01E1BB646A2170950348DA94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// byte[] commentBytes = ZipStrings.ConvertToArray(comment);
		String_t* L_0 = ___comment0;
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ZipStrings_ConvertToArray_m3BE8EC43ECA5CD1BB18D4994A5B9E5F534EEB686(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (commentBytes.Length > 0xffff)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_001c;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(comment));
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteral118A9989815489C24B81B160782015890ED2085E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ZipOutputStream_SetComment_m4626AF8705085EBE01E1BB646A2170950348DA94_RuntimeMethod_var);
	}

IL_001c:
	{
		// zipComment = commentBytes;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		__this->set_zipComment_21(L_4);
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::SetLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_SetLevel_mEA1855C18319742D474D5A298CB5671A04DE5526 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		// deflater_.SetLevel(level);
		Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * L_0 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_deflater__10();
		int32_t L_1 = ___level0;
		NullCheck(L_0);
		Deflater_SetLevel_m15C1ADD6B1F78FA1BF4CC9A1767444419480E5E7(L_0, L_1, /*hidden argument*/NULL);
		// defaultCompressionLevel = level;
		int32_t L_2 = ___level0;
		__this->set_defaultCompressionLevel_17(L_2);
		// }
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::GetLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipOutputStream_GetLevel_m7EA634622F5EE84798CE56DEBF3C2430D2CA894A (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, const RuntimeMethod* method)
{
	{
		// return deflater_.GetLevel();
		Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * L_0 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_deflater__10();
		NullCheck(L_0);
		int32_t L_1 = Deflater_GetLevel_m3245924047B376EC0F6739CDAA734F0335AEB528_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::get_UseZip64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_UseZip64_m5BA0DFBEDBED04DCB2AE98B16EF8D0E74581787B (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, const RuntimeMethod* method)
{
	{
		// get { return useZip64_; }
		int32_t L_0 = __this->get_useZip64__25();
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::set_UseZip64(ICSharpCode.SharpZipLib.Zip.UseZip64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_set_UseZip64_m4A14BC15F131F20B990F6A9C72B42DF7466E5C17 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { useZip64_ = value; }
		int32_t L_0 = ___value0;
		__this->set_useZip64__25(L_0);
		// set { useZip64_ = value; }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteLeShort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// baseOutputStream_.WriteByte((byte)(value & 0xff));
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(26 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))));
		// baseOutputStream_.WriteByte((byte)((value >> 8) & 0xff));
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(26 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteLeInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// WriteLeShort(value);
		int32_t L_0 = ___value0;
		ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, L_0, /*hidden argument*/NULL);
		// WriteLeShort(value >> 16);
		int32_t L_1 = ___value0;
		ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, ((int32_t)((int32_t)L_1>>(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteLeLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_WriteLeLong_mC84317008404C99B42BAD52169F73F13CDC0A316 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// WriteLeInt((int)value);
		int64_t L_0 = ___value0;
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_0))), /*hidden argument*/NULL);
		// WriteLeInt((int)(value >> 32));
		int64_t L_1 = ___value0;
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)((int64_t)((int64_t)L_1>>(int32_t)((int32_t)32)))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::PutNextEntry(ICSharpCode.SharpZipLib.Zip.ZipEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_PutNextEntry_m91957C2B9C0A07446D7456FAAF0F84AA6EF04803 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * ___entry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipOutputStream_PutNextEntry_m91957C2B9C0A07446D7456FAAF0F84AA6EF04803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * V_4 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	int32_t G_B14_0 = 0;
	ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * G_B35_0 = NULL;
	ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * G_B34_0 = NULL;
	int32_t G_B36_0 = 0;
	ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * G_B36_1 = NULL;
	{
		// if (entry == null)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_0 = ___entry0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(entry));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral61C4128C816142244CD9DE5F843E1D0DB31E567F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZipOutputStream_PutNextEntry_m91957C2B9C0A07446D7456FAAF0F84AA6EF04803_RuntimeMethod_var);
	}

IL_000e:
	{
		// if (entries == null)
		List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * L_2 = __this->get_entries_14();
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// throw new InvalidOperationException("ZipOutputStream was finished");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteral31E2F1289B806C44F7E719C9CA9905EDBD2C36ED, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ZipOutputStream_PutNextEntry_m91957C2B9C0A07446D7456FAAF0F84AA6EF04803_RuntimeMethod_var);
	}

IL_0021:
	{
		// if (curEntry != null)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_4 = __this->get_curEntry_16();
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// CloseEntry();
		ZipOutputStream_CloseEntry_m522D4C18CFBE5829E2E11C0E030DCA425CE274CC(__this, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// if (entries.Count == int.MaxValue)
		List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * L_5 = __this->get_entries_14();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m1FDCB78B65C08525A53025D604B1C6B46CF4B9BA_inline(L_5, /*hidden argument*/List_1_get_Count_m1FDCB78B65C08525A53025D604B1C6B46CF4B9BA_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_004c;
		}
	}
	{
		// throw new ZipException("Too many entries for Zip file");
		ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD * L_7 = (ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD *)il2cpp_codegen_object_new(ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD_il2cpp_TypeInfo_var);
		ZipException__ctor_mF3FB1738B0CE0D8D76A22D72A97B52725723DD46(L_7, _stringLiteral2CF1A03827BFEF47235A1C7B31E35193F5B4265F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ZipOutputStream_PutNextEntry_m91957C2B9C0A07446D7456FAAF0F84AA6EF04803_RuntimeMethod_var);
	}

IL_004c:
	{
		// CompressionMethod method = entry.CompressionMethod;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_8 = ___entry0;
		NullCheck(L_8);
		int32_t L_9 = ZipEntry_get_CompressionMethod_mD418E4CEC2781A7AAE2EC18FFEDCD5C55F41DB7B_inline(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// int compressionLevel = defaultCompressionLevel;
		int32_t L_10 = __this->get_defaultCompressionLevel_17();
		V_1 = L_10;
		// entry.Flags &= (int)GeneralBitFlags.UnicodeText;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_11 = ___entry0;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = ZipEntry_get_Flags_m537DB42E6230C4C6721DE9B73D6F20B35D725889_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_12);
		ZipEntry_set_Flags_mD1B0067510F90FB109B380E492DEE545124EE204_inline(L_12, ((int32_t)((int32_t)L_13&(int32_t)((int32_t)2048))), /*hidden argument*/NULL);
		// patchEntryHeader = false;
		__this->set_patchEntryHeader_22((bool)0);
		// if (entry.Size == 0)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_14 = ___entry0;
		NullCheck(L_14);
		int64_t L_15 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0095;
		}
	}
	{
		// entry.CompressedSize = entry.Size;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_16 = ___entry0;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_17 = ___entry0;
		NullCheck(L_17);
		int64_t L_18 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		ZipEntry_set_CompressedSize_m7AF11B1C526D27F940EC273D153694AF241657A2(L_16, L_18, /*hidden argument*/NULL);
		// entry.Crc = 0;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_19 = ___entry0;
		NullCheck(L_19);
		ZipEntry_set_Crc_m7376EBCAE6AC2FAF1DBA09EF16365745E4B0C0F8(L_19, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		// method = CompressionMethod.Stored;
		V_0 = 0;
		// headerInfoAvailable = true;
		V_2 = (bool)1;
		// }
		goto IL_00df;
	}

IL_0095:
	{
		// headerInfoAvailable = (entry.Size >= 0) && entry.HasCrc && entry.CompressedSize >= 0;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_20 = ___entry0;
		NullCheck(L_20);
		int64_t L_21 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_20, /*hidden argument*/NULL);
		if ((((int64_t)L_21) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_00b6;
		}
	}
	{
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_22 = ___entry0;
		NullCheck(L_22);
		bool L_23 = ZipEntry_get_HasCrc_mCAA057EFE82780535811E2F77770A03135C8BE54(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b6;
		}
	}
	{
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_24 = ___entry0;
		NullCheck(L_24);
		int64_t L_25 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_24, /*hidden argument*/NULL);
		G_B14_0 = ((((int32_t)((((int64_t)L_25) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B14_0 = 0;
	}

IL_00b7:
	{
		V_2 = (bool)G_B14_0;
		// if (method == CompressionMethod.Stored)
		int32_t L_26 = V_0;
		if (L_26)
		{
			goto IL_00df;
		}
	}
	{
		// if (!headerInfoAvailable)
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_00cc;
		}
	}
	{
		// if (!CanPatchEntries)
		bool L_28 = DeflaterOutputStream_get_CanPatchEntries_m06BC7840F8D3922266366815EF58AF59E82B3712(__this, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00df;
		}
	}
	{
		// method = CompressionMethod.Deflated;
		V_0 = 8;
		// compressionLevel = 0;
		V_1 = 0;
		// }
		goto IL_00df;
	}

IL_00cc:
	{
		// entry.CompressedSize = entry.Size;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_29 = ___entry0;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_30 = ___entry0;
		NullCheck(L_30);
		int64_t L_31 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		ZipEntry_set_CompressedSize_m7AF11B1C526D27F940EC273D153694AF241657A2(L_29, L_31, /*hidden argument*/NULL);
		// headerInfoAvailable = entry.HasCrc;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_32 = ___entry0;
		NullCheck(L_32);
		bool L_33 = ZipEntry_get_HasCrc_mCAA057EFE82780535811E2F77770A03135C8BE54(L_32, /*hidden argument*/NULL);
		V_2 = L_33;
	}

IL_00df:
	{
		// if (headerInfoAvailable == false)
		bool L_34 = V_2;
		if (L_34)
		{
			goto IL_0101;
		}
	}
	{
		// if (CanPatchEntries == false)
		bool L_35 = DeflaterOutputStream_get_CanPatchEntries_m06BC7840F8D3922266366815EF58AF59E82B3712(__this, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_00fa;
		}
	}
	{
		// entry.Flags |= 8;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_36 = ___entry0;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_37 = L_36;
		NullCheck(L_37);
		int32_t L_38 = ZipEntry_get_Flags_m537DB42E6230C4C6721DE9B73D6F20B35D725889_inline(L_37, /*hidden argument*/NULL);
		NullCheck(L_37);
		ZipEntry_set_Flags_mD1B0067510F90FB109B380E492DEE545124EE204_inline(L_37, ((int32_t)((int32_t)L_38|(int32_t)8)), /*hidden argument*/NULL);
		// }
		goto IL_0101;
	}

IL_00fa:
	{
		// patchEntryHeader = true;
		__this->set_patchEntryHeader_22((bool)1);
	}

IL_0101:
	{
		// if (Password != null)
		String_t* L_39 = DeflaterOutputStream_get_Password_m1DE04D58F28BEAD551AC6125A0866E5C33EC3A58_inline(__this, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0128;
		}
	}
	{
		// entry.IsCrypted = true;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_40 = ___entry0;
		NullCheck(L_40);
		ZipEntry_set_IsCrypted_m80816628C3AB1EF42C07DE191E803B1F18C82497(L_40, (bool)1, /*hidden argument*/NULL);
		// if (entry.Crc < 0)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_41 = ___entry0;
		NullCheck(L_41);
		int64_t L_42 = ZipEntry_get_Crc_mE6028CC22F3978D17A53C6D2FDCEFD1CBCAC07E2(L_41, /*hidden argument*/NULL);
		if ((((int64_t)L_42) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0128;
		}
	}
	{
		// entry.Flags |= 8;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_43 = ___entry0;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = ZipEntry_get_Flags_m537DB42E6230C4C6721DE9B73D6F20B35D725889_inline(L_44, /*hidden argument*/NULL);
		NullCheck(L_44);
		ZipEntry_set_Flags_mD1B0067510F90FB109B380E492DEE545124EE204_inline(L_44, ((int32_t)((int32_t)L_45|(int32_t)8)), /*hidden argument*/NULL);
	}

IL_0128:
	{
		// entry.Offset = offset;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_46 = ___entry0;
		int64_t L_47 = __this->get_offset_20();
		NullCheck(L_46);
		ZipEntry_set_Offset_m6C1BB08DB26D396B3C0306E4CA35511E9851C5B2_inline(L_46, L_47, /*hidden argument*/NULL);
		// entry.CompressionMethod = (CompressionMethod)method;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_48 = ___entry0;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		ZipEntry_set_CompressionMethod_m1B2FC3101B67EDF59A6A3EC7B1E39D4B08AEECAA(L_48, L_49, /*hidden argument*/NULL);
		// curMethod = method;
		int32_t L_50 = V_0;
		__this->set_curMethod_18(L_50);
		// sizePatchPos = -1;
		__this->set_sizePatchPos_24((((int64_t)((int64_t)(-1)))));
		// if ((useZip64_ == UseZip64.On) || ((entry.Size < 0) && (useZip64_ == UseZip64.Dynamic)))
		int32_t L_51 = __this->get_useZip64__25();
		if ((((int32_t)L_51) == ((int32_t)1)))
		{
			goto IL_0166;
		}
	}
	{
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_52 = ___entry0;
		NullCheck(L_52);
		int64_t L_53 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_52, /*hidden argument*/NULL);
		if ((((int64_t)L_53) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_54 = __this->get_useZip64__25();
		if ((!(((uint32_t)L_54) == ((uint32_t)2))))
		{
			goto IL_016c;
		}
	}

IL_0166:
	{
		// entry.ForceZip64();
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_55 = ___entry0;
		NullCheck(L_55);
		ZipEntry_ForceZip64_m225157FD843AFE1F0DAC397355B28A655468FCD4(L_55, /*hidden argument*/NULL);
	}

IL_016c:
	{
		// WriteLeInt(ZipConstants.LocalHeaderSignature);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, ((int32_t)67324752), /*hidden argument*/NULL);
		// WriteLeShort(entry.Version);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_56 = ___entry0;
		NullCheck(L_56);
		int32_t L_57 = ZipEntry_get_Version_m53282E6D1A9B3EC722AD57BD43C9E2106B787DC6(L_56, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, L_57, /*hidden argument*/NULL);
		// WriteLeShort(entry.Flags);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_58 = ___entry0;
		NullCheck(L_58);
		int32_t L_59 = ZipEntry_get_Flags_m537DB42E6230C4C6721DE9B73D6F20B35D725889_inline(L_58, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, L_59, /*hidden argument*/NULL);
		// WriteLeShort((byte)entry.CompressionMethodForHeader);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_60 = ___entry0;
		NullCheck(L_60);
		int32_t L_61 = ZipEntry_get_CompressionMethodForHeader_m81BC895960DF50DAD6029E42E8146EC26F838165(L_60, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, (((int32_t)((uint8_t)L_61))), /*hidden argument*/NULL);
		// WriteLeInt((int)entry.DosTime);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_62 = ___entry0;
		NullCheck(L_62);
		int64_t L_63 = ZipEntry_get_DosTime_mE5A3A577F1B8F81B9471E60B58A79D6660F3C3BB(L_62, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_63))), /*hidden argument*/NULL);
		// if (headerInfoAvailable)
		bool L_64 = V_2;
		if (!L_64)
		{
			goto IL_0204;
		}
	}
	{
		// WriteLeInt((int)entry.Crc);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_65 = ___entry0;
		NullCheck(L_65);
		int64_t L_66 = ZipEntry_get_Crc_mE6028CC22F3978D17A53C6D2FDCEFD1CBCAC07E2(L_65, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_66))), /*hidden argument*/NULL);
		// if (entry.LocalHeaderRequiresZip64)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_67 = ___entry0;
		NullCheck(L_67);
		bool L_68 = ZipEntry_get_LocalHeaderRequiresZip64_m91B7307C9AF1C66E20179EF75C1CC373991EE4F0(L_67, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01d4;
		}
	}
	{
		// WriteLeInt(-1);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (-1), /*hidden argument*/NULL);
		// WriteLeInt(-1);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (-1), /*hidden argument*/NULL);
		// }
		goto IL_026b;
	}

IL_01d4:
	{
		// WriteLeInt(entry.IsCrypted ? (int)entry.CompressedSize + ZipConstants.CryptoHeaderSize : (int)entry.CompressedSize);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_69 = ___entry0;
		NullCheck(L_69);
		bool L_70 = ZipEntry_get_IsCrypted_m0FE385FC2247087004A27E58B634B23C8B739C50(L_69, /*hidden argument*/NULL);
		G_B34_0 = __this;
		if (L_70)
		{
			G_B35_0 = __this;
			goto IL_01e6;
		}
	}
	{
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_71 = ___entry0;
		NullCheck(L_71);
		int64_t L_72 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_71, /*hidden argument*/NULL);
		G_B36_0 = (((int32_t)((int32_t)L_72)));
		G_B36_1 = G_B34_0;
		goto IL_01f0;
	}

IL_01e6:
	{
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_73 = ___entry0;
		NullCheck(L_73);
		int64_t L_74 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_73, /*hidden argument*/NULL);
		G_B36_0 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)L_74))), (int32_t)((int32_t)12)));
		G_B36_1 = G_B35_0;
	}

IL_01f0:
	{
		NullCheck(G_B36_1);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(G_B36_1, G_B36_0, /*hidden argument*/NULL);
		// WriteLeInt((int)entry.Size);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_75 = ___entry0;
		NullCheck(L_75);
		int64_t L_76 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_75, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_76))), /*hidden argument*/NULL);
		// }
		goto IL_026b;
	}

IL_0204:
	{
		// if (patchEntryHeader)
		bool L_77 = __this->get_patchEntryHeader_22();
		if (!L_77)
		{
			goto IL_021d;
		}
	}
	{
		// crcPatchPos = baseOutputStream_.Position;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_78 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		NullCheck(L_78);
		int64_t L_79 = VirtFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_78);
		__this->set_crcPatchPos_23(L_79);
	}

IL_021d:
	{
		// WriteLeInt(0);  // Crc
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, 0, /*hidden argument*/NULL);
		// if (patchEntryHeader)
		bool L_80 = __this->get_patchEntryHeader_22();
		if (!L_80)
		{
			goto IL_023d;
		}
	}
	{
		// sizePatchPos = baseOutputStream_.Position;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_81 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		NullCheck(L_81);
		int64_t L_82 = VirtFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_81);
		__this->set_sizePatchPos_24(L_82);
	}

IL_023d:
	{
		// if (entry.LocalHeaderRequiresZip64 || patchEntryHeader)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_83 = ___entry0;
		NullCheck(L_83);
		bool L_84 = ZipEntry_get_LocalHeaderRequiresZip64_m91B7307C9AF1C66E20179EF75C1CC373991EE4F0(L_83, /*hidden argument*/NULL);
		if (L_84)
		{
			goto IL_024d;
		}
	}
	{
		bool L_85 = __this->get_patchEntryHeader_22();
		if (!L_85)
		{
			goto IL_025d;
		}
	}

IL_024d:
	{
		// WriteLeInt(-1);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (-1), /*hidden argument*/NULL);
		// WriteLeInt(-1);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (-1), /*hidden argument*/NULL);
		// }
		goto IL_026b;
	}

IL_025d:
	{
		// WriteLeInt(0);  // Compressed size
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, 0, /*hidden argument*/NULL);
		// WriteLeInt(0);  // Uncompressed size
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, 0, /*hidden argument*/NULL);
	}

IL_026b:
	{
		// byte[] name = ZipStrings.ConvertToArray(entry.Flags, entry.Name);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_86 = ___entry0;
		NullCheck(L_86);
		int32_t L_87 = ZipEntry_get_Flags_m537DB42E6230C4C6721DE9B73D6F20B35D725889_inline(L_86, /*hidden argument*/NULL);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_88 = ___entry0;
		NullCheck(L_88);
		String_t* L_89 = ZipEntry_get_Name_m7C82F27E52E95B2527A17776F2F9ADD266012DA3_inline(L_88, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_90 = ZipStrings_ConvertToArray_mCA3E762D116FDEA744914D131559874EBF9D53AF(L_87, L_89, /*hidden argument*/NULL);
		V_3 = L_90;
		// if (name.Length > 0xFFFF)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_91 = V_3;
		NullCheck(L_91);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length))))) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0292;
		}
	}
	{
		// throw new ZipException("Entry name too long.");
		ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD * L_92 = (ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD *)il2cpp_codegen_object_new(ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD_il2cpp_TypeInfo_var);
		ZipException__ctor_mF3FB1738B0CE0D8D76A22D72A97B52725723DD46(L_92, _stringLiteralAE6EADE4DBC024F0DD12C9ECC6732866C6AA75EB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_92, ZipOutputStream_PutNextEntry_m91957C2B9C0A07446D7456FAAF0F84AA6EF04803_RuntimeMethod_var);
	}

IL_0292:
	{
		// var ed = new ZipExtraData(entry.ExtraData);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_93 = ___entry0;
		NullCheck(L_93);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_94 = ZipEntry_get_ExtraData_m8D90211E2A1617E7C971F2E5964E1E6C9ED3BACE_inline(L_93, /*hidden argument*/NULL);
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_95 = (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C *)il2cpp_codegen_object_new(ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C_il2cpp_TypeInfo_var);
		ZipExtraData__ctor_m226DC2287A50CDCF4F53825517484C29A306A810(L_95, L_94, /*hidden argument*/NULL);
		V_4 = L_95;
		// if (entry.LocalHeaderRequiresZip64)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_96 = ___entry0;
		NullCheck(L_96);
		bool L_97 = ZipEntry_get_LocalHeaderRequiresZip64_m91B7307C9AF1C66E20179EF75C1CC373991EE4F0(L_96, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_0314;
		}
	}
	{
		// ed.StartNewEntry();
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_98 = V_4;
		NullCheck(L_98);
		ZipExtraData_StartNewEntry_mFBE389D63CF1ADF1DE39F4793C084EED30AE206B(L_98, /*hidden argument*/NULL);
		// if (headerInfoAvailable)
		bool L_99 = V_2;
		if (!L_99)
		{
			goto IL_02cd;
		}
	}
	{
		// ed.AddLeLong(entry.Size);
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_100 = V_4;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_101 = ___entry0;
		NullCheck(L_101);
		int64_t L_102 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_101, /*hidden argument*/NULL);
		NullCheck(L_100);
		ZipExtraData_AddLeLong_mE27B8962532F5BA24FB3CF56A947A7B196EE13BA(L_100, L_102, /*hidden argument*/NULL);
		// ed.AddLeLong(entry.CompressedSize);
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_103 = V_4;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_104 = ___entry0;
		NullCheck(L_104);
		int64_t L_105 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_104, /*hidden argument*/NULL);
		NullCheck(L_103);
		ZipExtraData_AddLeLong_mE27B8962532F5BA24FB3CF56A947A7B196EE13BA(L_103, L_105, /*hidden argument*/NULL);
		// }
		goto IL_02df;
	}

IL_02cd:
	{
		// ed.AddLeLong(-1);
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_106 = V_4;
		NullCheck(L_106);
		ZipExtraData_AddLeLong_mE27B8962532F5BA24FB3CF56A947A7B196EE13BA(L_106, (((int64_t)((int64_t)(-1)))), /*hidden argument*/NULL);
		// ed.AddLeLong(-1);
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_107 = V_4;
		NullCheck(L_107);
		ZipExtraData_AddLeLong_mE27B8962532F5BA24FB3CF56A947A7B196EE13BA(L_107, (((int64_t)((int64_t)(-1)))), /*hidden argument*/NULL);
	}

IL_02df:
	{
		// ed.AddNewEntry(1);
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_108 = V_4;
		NullCheck(L_108);
		ZipExtraData_AddNewEntry_m7F041E00E0939BD69BA428513EC3B28A3A8A1890(L_108, 1, /*hidden argument*/NULL);
		// if (!ed.Find(1))
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_109 = V_4;
		NullCheck(L_109);
		bool L_110 = ZipExtraData_Find_mF40F56DA23CBB45CECF2F71447DAEDE0BE09BD16(L_109, 1, /*hidden argument*/NULL);
		if (L_110)
		{
			goto IL_02fc;
		}
	}
	{
		// throw new ZipException("Internal error cant find extra data");
		ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD * L_111 = (ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD *)il2cpp_codegen_object_new(ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD_il2cpp_TypeInfo_var);
		ZipException__ctor_mF3FB1738B0CE0D8D76A22D72A97B52725723DD46(L_111, _stringLiteral5ACDE0680B4AC23A84F5C7109F51DBAA2FE0BD95, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, ZipOutputStream_PutNextEntry_m91957C2B9C0A07446D7456FAAF0F84AA6EF04803_RuntimeMethod_var);
	}

IL_02fc:
	{
		// if (patchEntryHeader)
		bool L_112 = __this->get_patchEntryHeader_22();
		if (!L_112)
		{
			goto IL_031d;
		}
	}
	{
		// sizePatchPos = ed.CurrentReadIndex;
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_113 = V_4;
		NullCheck(L_113);
		int32_t L_114 = ZipExtraData_get_CurrentReadIndex_m54640708202733F4FBB8F380F682A5925254FCA2_inline(L_113, /*hidden argument*/NULL);
		__this->set_sizePatchPos_24((((int64_t)((int64_t)L_114))));
		// }
		goto IL_031d;
	}

IL_0314:
	{
		// ed.Delete(1);
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_115 = V_4;
		NullCheck(L_115);
		ZipExtraData_Delete_mC33275D978CBE1A1ADE26FB4C5BCDB7CDA564EBA(L_115, 1, /*hidden argument*/NULL);
	}

IL_031d:
	{
		// if (entry.AESKeySize > 0)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_116 = ___entry0;
		NullCheck(L_116);
		int32_t L_117 = ZipEntry_get_AESKeySize_m3E24CE59AC0DDF68DE021FBA63DCB97E3A1C5A3D(L_116, /*hidden argument*/NULL);
		if ((((int32_t)L_117) <= ((int32_t)0)))
		{
			goto IL_032e;
		}
	}
	{
		// AddExtraDataAES(entry, ed);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_118 = ___entry0;
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_119 = V_4;
		ZipOutputStream_AddExtraDataAES_m975268D8FABF687DE5CD9D134D44325AA7DFD0FF(L_118, L_119, /*hidden argument*/NULL);
	}

IL_032e:
	{
		// byte[] extra = ed.GetEntryData();
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_120 = V_4;
		NullCheck(L_120);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_121 = ZipExtraData_GetEntryData_m89A3117AF2C586CBE0EFD7F9CDDA58173F54E630(L_120, /*hidden argument*/NULL);
		V_5 = L_121;
		// WriteLeShort(name.Length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_122 = V_3;
		NullCheck(L_122);
		ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, (((int32_t)((int32_t)(((RuntimeArray*)L_122)->max_length)))), /*hidden argument*/NULL);
		// WriteLeShort(extra.Length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_123 = V_5;
		NullCheck(L_123);
		ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, (((int32_t)((int32_t)(((RuntimeArray*)L_123)->max_length)))), /*hidden argument*/NULL);
		// if (name.Length > 0)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_124 = V_3;
		NullCheck(L_124);
		if (!(((RuntimeArray*)L_124)->max_length))
		{
			goto IL_035e;
		}
	}
	{
		// baseOutputStream_.Write(name, 0, name.Length);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_125 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_126 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_127 = V_3;
		NullCheck(L_127);
		NullCheck(L_125);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_125, L_126, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_127)->max_length)))));
	}

IL_035e:
	{
		// if (entry.LocalHeaderRequiresZip64 && patchEntryHeader)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_128 = ___entry0;
		NullCheck(L_128);
		bool L_129 = ZipEntry_get_LocalHeaderRequiresZip64_m91B7307C9AF1C66E20179EF75C1CC373991EE4F0(L_128, /*hidden argument*/NULL);
		if (!L_129)
		{
			goto IL_0386;
		}
	}
	{
		bool L_130 = __this->get_patchEntryHeader_22();
		if (!L_130)
		{
			goto IL_0386;
		}
	}
	{
		// sizePatchPos += baseOutputStream_.Position;
		int64_t L_131 = __this->get_sizePatchPos_24();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_132 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		NullCheck(L_132);
		int64_t L_133 = VirtFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_132);
		__this->set_sizePatchPos_24(((int64_t)il2cpp_codegen_add((int64_t)L_131, (int64_t)L_133)));
	}

IL_0386:
	{
		// if (extra.Length > 0)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_134 = V_5;
		NullCheck(L_134);
		if (!(((RuntimeArray*)L_134)->max_length))
		{
			goto IL_039d;
		}
	}
	{
		// baseOutputStream_.Write(extra, 0, extra.Length);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_135 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_136 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_137 = V_5;
		NullCheck(L_137);
		NullCheck(L_135);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_135, L_136, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_137)->max_length)))));
	}

IL_039d:
	{
		// offset += ZipConstants.LocalHeaderBaseSize + name.Length + extra.Length;
		int64_t L_138 = __this->get_offset_20();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_139 = V_3;
		NullCheck(L_139);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_140 = V_5;
		NullCheck(L_140);
		__this->set_offset_20(((int64_t)il2cpp_codegen_add((int64_t)L_138, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)30), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_139)->max_length)))))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_140)->max_length))))))))))));
		// if (entry.AESKeySize > 0)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_141 = ___entry0;
		NullCheck(L_141);
		int32_t L_142 = ZipEntry_get_AESKeySize_m3E24CE59AC0DDF68DE021FBA63DCB97E3A1C5A3D(L_141, /*hidden argument*/NULL);
		if ((((int32_t)L_142) <= ((int32_t)0)))
		{
			goto IL_03d3;
		}
	}
	{
		// offset += entry.AESOverheadSize;
		int64_t L_143 = __this->get_offset_20();
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_144 = ___entry0;
		NullCheck(L_144);
		int32_t L_145 = ZipEntry_get_AESOverheadSize_mA4520A31639190BAD364392132B6148DF2F38120(L_144, /*hidden argument*/NULL);
		__this->set_offset_20(((int64_t)il2cpp_codegen_add((int64_t)L_143, (int64_t)(((int64_t)((int64_t)L_145))))));
	}

IL_03d3:
	{
		// curEntry = entry;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_146 = ___entry0;
		__this->set_curEntry_16(L_146);
		// crc.Reset();
		Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * L_147 = __this->get_crc_15();
		NullCheck(L_147);
		Crc32_Reset_m873AD6C72C0E168D0F0CB99551D0E9C1ABF8E6B7(L_147, /*hidden argument*/NULL);
		// if (method == CompressionMethod.Deflated)
		int32_t L_148 = V_0;
		if ((!(((uint32_t)L_148) == ((uint32_t)8))))
		{
			goto IL_0400;
		}
	}
	{
		// deflater_.Reset();
		Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * L_149 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_deflater__10();
		NullCheck(L_149);
		Deflater_Reset_m93AD16664FFD4516FD6B0AADDEC73B3215FE692C(L_149, /*hidden argument*/NULL);
		// deflater_.SetLevel(compressionLevel);
		Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * L_150 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_deflater__10();
		int32_t L_151 = V_1;
		NullCheck(L_150);
		Deflater_SetLevel_m15C1ADD6B1F78FA1BF4CC9A1767444419480E5E7(L_150, L_151, /*hidden argument*/NULL);
	}

IL_0400:
	{
		// size = 0;
		__this->set_size_19((((int64_t)((int64_t)0))));
		// if (entry.IsCrypted)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_152 = ___entry0;
		NullCheck(L_152);
		bool L_153 = ZipEntry_get_IsCrypted_m0FE385FC2247087004A27E58B634B23C8B739C50(L_152, /*hidden argument*/NULL);
		if (!L_153)
		{
			goto IL_0447;
		}
	}
	{
		// if (entry.AESKeySize > 0)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_154 = ___entry0;
		NullCheck(L_154);
		int32_t L_155 = ZipEntry_get_AESKeySize_m3E24CE59AC0DDF68DE021FBA63DCB97E3A1C5A3D(L_154, /*hidden argument*/NULL);
		if ((((int32_t)L_155) <= ((int32_t)0)))
		{
			goto IL_0421;
		}
	}
	{
		// WriteAESHeader(entry);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_156 = ___entry0;
		ZipOutputStream_WriteAESHeader_mBA5902608A839F098C720A3613C4B1D8297E7746(__this, L_156, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0421:
	{
		// if (entry.Crc < 0)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_157 = ___entry0;
		NullCheck(L_157);
		int64_t L_158 = ZipEntry_get_Crc_mE6028CC22F3978D17A53C6D2FDCEFD1CBCAC07E2(L_157, /*hidden argument*/NULL);
		if ((((int64_t)L_158) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_043b;
		}
	}
	{
		// WriteEncryptionHeader(entry.DosTime << 16);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_159 = ___entry0;
		NullCheck(L_159);
		int64_t L_160 = ZipEntry_get_DosTime_mE5A3A577F1B8F81B9471E60B58A79D6660F3C3BB(L_159, /*hidden argument*/NULL);
		ZipOutputStream_WriteEncryptionHeader_mAAA5CE54D0E768D79B118FFF867F3CD379A32CC5(__this, ((int64_t)((int64_t)L_160<<(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		// }
		return;
	}

IL_043b:
	{
		// WriteEncryptionHeader(entry.Crc);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_161 = ___entry0;
		NullCheck(L_161);
		int64_t L_162 = ZipEntry_get_Crc_mE6028CC22F3978D17A53C6D2FDCEFD1CBCAC07E2(L_161, /*hidden argument*/NULL);
		ZipOutputStream_WriteEncryptionHeader_mAAA5CE54D0E768D79B118FFF867F3CD379A32CC5(__this, L_162, /*hidden argument*/NULL);
	}

IL_0447:
	{
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::CloseEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_CloseEntry_m522D4C18CFBE5829E2E11C0E030DCA425CE274CC (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipOutputStream_CloseEntry_m522D4C18CFBE5829E2E11C0E030DCA425CE274CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		// if (curEntry == null)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_0 = __this->get_curEntry_16();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("No open entry");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteral3389686E32A2B2C9D23BCF7495D98A1B4CC181F9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZipOutputStream_CloseEntry_m522D4C18CFBE5829E2E11C0E030DCA425CE274CC_RuntimeMethod_var);
	}

IL_0013:
	{
		// long csize = size;
		int64_t L_2 = __this->get_size_19();
		V_0 = L_2;
		// if (curMethod == CompressionMethod.Deflated)
		int32_t L_3 = __this->get_curMethod_18();
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_004e;
		}
	}
	{
		// if (size >= 0)
		int64_t L_4 = __this->get_size_19();
		if ((((int64_t)L_4) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0041;
		}
	}
	{
		// base.Finish();
		DeflaterOutputStream_Finish_mBC1697F1B9556CBCE89B8C9A514EC9135D49713C(__this, /*hidden argument*/NULL);
		// csize = deflater_.TotalOut;
		Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * L_5 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_deflater__10();
		NullCheck(L_5);
		int64_t L_6 = Deflater_get_TotalOut_mE0783C4225087EC96E17E4ED66332EC98A0C7D10_inline(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// }
		goto IL_005c;
	}

IL_0041:
	{
		// deflater_.Reset();
		Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * L_7 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_deflater__10();
		NullCheck(L_7);
		Deflater_Reset_m93AD16664FFD4516FD6B0AADDEC73B3215FE692C(L_7, /*hidden argument*/NULL);
		// }
		goto IL_005c;
	}

IL_004e:
	{
		// else if (curMethod == CompressionMethod.Stored)
		int32_t L_8 = __this->get_curMethod_18();
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		// base.GetAuthCodeIfAES();
		DeflaterOutputStream_GetAuthCodeIfAES_mDC41047368B2D6595B9835DFB536F5B1D117D729(__this, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// if (curEntry.AESKeySize > 0)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_9 = __this->get_curEntry_16();
		NullCheck(L_9);
		int32_t L_10 = ZipEntry_get_AESKeySize_m3E24CE59AC0DDF68DE021FBA63DCB97E3A1C5A3D(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		// baseOutputStream_.Write(AESAuthCode, 0, 10);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_11 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_AESAuthCode_8();
		NullCheck(L_11);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, ((int32_t)10));
	}

IL_007e:
	{
		// if (curEntry.Size < 0)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_13 = __this->get_curEntry_16();
		NullCheck(L_13);
		int64_t L_14 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_13, /*hidden argument*/NULL);
		if ((((int64_t)L_14) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_00a0;
		}
	}
	{
		// curEntry.Size = size;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_15 = __this->get_curEntry_16();
		int64_t L_16 = __this->get_size_19();
		NullCheck(L_15);
		ZipEntry_set_Size_m08855E1E785309EACB83237B74EA1903CD4931EE(L_15, L_16, /*hidden argument*/NULL);
		// }
		goto IL_00f5;
	}

IL_00a0:
	{
		// else if (curEntry.Size != size)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_17 = __this->get_curEntry_16();
		NullCheck(L_17);
		int64_t L_18 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_17, /*hidden argument*/NULL);
		int64_t L_19 = __this->get_size_19();
		if ((((int64_t)L_18) == ((int64_t)L_19)))
		{
			goto IL_00f5;
		}
	}
	{
		// throw new ZipException("size was " + size + ", but I expected " + curEntry.Size);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralFF2764F7C1D54DEBC65FD9579D57D20182ECE7E0);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralFF2764F7C1D54DEBC65FD9579D57D20182ECE7E0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_21;
		int64_t L_23 = __this->get_size_19();
		int64_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = L_22;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral2C7C211FA07CF65A1ACED4CC15592F9EB0508F29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2C7C211FA07CF65A1ACED4CC15592F9EB0508F29);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_26;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_28 = __this->get_curEntry_16();
		NullCheck(L_28);
		int64_t L_29 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_28, /*hidden argument*/NULL);
		int64_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_31);
		String_t* L_32 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_27, /*hidden argument*/NULL);
		ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD * L_33 = (ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD *)il2cpp_codegen_object_new(ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD_il2cpp_TypeInfo_var);
		ZipException__ctor_mF3FB1738B0CE0D8D76A22D72A97B52725723DD46(L_33, L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ZipOutputStream_CloseEntry_m522D4C18CFBE5829E2E11C0E030DCA425CE274CC_RuntimeMethod_var);
	}

IL_00f5:
	{
		// if (curEntry.CompressedSize < 0)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_34 = __this->get_curEntry_16();
		NullCheck(L_34);
		int64_t L_35 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_34, /*hidden argument*/NULL);
		if ((((int64_t)L_35) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0112;
		}
	}
	{
		// curEntry.CompressedSize = csize;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_36 = __this->get_curEntry_16();
		int64_t L_37 = V_0;
		NullCheck(L_36);
		ZipEntry_set_CompressedSize_m7AF11B1C526D27F940EC273D153694AF241657A2(L_36, L_37, /*hidden argument*/NULL);
		// }
		goto IL_015d;
	}

IL_0112:
	{
		// else if (curEntry.CompressedSize != csize)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_38 = __this->get_curEntry_16();
		NullCheck(L_38);
		int64_t L_39 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_38, /*hidden argument*/NULL);
		int64_t L_40 = V_0;
		if ((((int64_t)L_39) == ((int64_t)L_40)))
		{
			goto IL_015d;
		}
	}
	{
		// throw new ZipException("compressed size was " + csize + ", but I expected " + curEntry.CompressedSize);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralAD365F77EFE331D5BEC32C156018935E75446ADD);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralAD365F77EFE331D5BEC32C156018935E75446ADD);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_43 = L_42;
		int64_t L_44 = V_0;
		int64_t L_45 = L_44;
		RuntimeObject * L_46 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_46);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_47 = L_43;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteral2C7C211FA07CF65A1ACED4CC15592F9EB0508F29);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2C7C211FA07CF65A1ACED4CC15592F9EB0508F29);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_48 = L_47;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_49 = __this->get_curEntry_16();
		NullCheck(L_49);
		int64_t L_50 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_49, /*hidden argument*/NULL);
		int64_t L_51 = L_50;
		RuntimeObject * L_52 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_52);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_52);
		String_t* L_53 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_48, /*hidden argument*/NULL);
		ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD * L_54 = (ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD *)il2cpp_codegen_object_new(ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD_il2cpp_TypeInfo_var);
		ZipException__ctor_mF3FB1738B0CE0D8D76A22D72A97B52725723DD46(L_54, L_53, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ZipOutputStream_CloseEntry_m522D4C18CFBE5829E2E11C0E030DCA425CE274CC_RuntimeMethod_var);
	}

IL_015d:
	{
		// if (curEntry.Crc < 0)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_55 = __this->get_curEntry_16();
		NullCheck(L_55);
		int64_t L_56 = ZipEntry_get_Crc_mE6028CC22F3978D17A53C6D2FDCEFD1CBCAC07E2(L_55, /*hidden argument*/NULL);
		if ((((int64_t)L_56) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0184;
		}
	}
	{
		// curEntry.Crc = crc.Value;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_57 = __this->get_curEntry_16();
		Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * L_58 = __this->get_crc_15();
		NullCheck(L_58);
		int64_t L_59 = Crc32_get_Value_m187DEE1F4F72EF3FB0604F9A3D224803BBCE8C65(L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		ZipEntry_set_Crc_m7376EBCAE6AC2FAF1DBA09EF16365745E4B0C0F8(L_57, L_59, /*hidden argument*/NULL);
		// }
		goto IL_01e3;
	}

IL_0184:
	{
		// else if (curEntry.Crc != crc.Value)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_60 = __this->get_curEntry_16();
		NullCheck(L_60);
		int64_t L_61 = ZipEntry_get_Crc_mE6028CC22F3978D17A53C6D2FDCEFD1CBCAC07E2(L_60, /*hidden argument*/NULL);
		Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * L_62 = __this->get_crc_15();
		NullCheck(L_62);
		int64_t L_63 = Crc32_get_Value_m187DEE1F4F72EF3FB0604F9A3D224803BBCE8C65(L_62, /*hidden argument*/NULL);
		if ((((int64_t)L_61) == ((int64_t)L_63)))
		{
			goto IL_01e3;
		}
	}
	{
		// throw new ZipException("crc was " + crc.Value + ", but I expected " + curEntry.Crc);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_64 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_65 = L_64;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, _stringLiteral93AED761585AD26CFC0D2B4C77244BEAF45A34D7);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral93AED761585AD26CFC0D2B4C77244BEAF45A34D7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_66 = L_65;
		Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * L_67 = __this->get_crc_15();
		NullCheck(L_67);
		int64_t L_68 = Crc32_get_Value_m187DEE1F4F72EF3FB0604F9A3D224803BBCE8C65(L_67, /*hidden argument*/NULL);
		int64_t L_69 = L_68;
		RuntimeObject * L_70 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_69);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_70);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_70);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_71 = L_66;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteral2C7C211FA07CF65A1ACED4CC15592F9EB0508F29);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2C7C211FA07CF65A1ACED4CC15592F9EB0508F29);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_72 = L_71;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_73 = __this->get_curEntry_16();
		NullCheck(L_73);
		int64_t L_74 = ZipEntry_get_Crc_mE6028CC22F3978D17A53C6D2FDCEFD1CBCAC07E2(L_73, /*hidden argument*/NULL);
		int64_t L_75 = L_74;
		RuntimeObject * L_76 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_76);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_76);
		String_t* L_77 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_72, /*hidden argument*/NULL);
		ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD * L_78 = (ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD *)il2cpp_codegen_object_new(ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD_il2cpp_TypeInfo_var);
		ZipException__ctor_mF3FB1738B0CE0D8D76A22D72A97B52725723DD46(L_78, L_77, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, ZipOutputStream_CloseEntry_m522D4C18CFBE5829E2E11C0E030DCA425CE274CC_RuntimeMethod_var);
	}

IL_01e3:
	{
		// offset += csize;
		int64_t L_79 = __this->get_offset_20();
		int64_t L_80 = V_0;
		__this->set_offset_20(((int64_t)il2cpp_codegen_add((int64_t)L_79, (int64_t)L_80)));
		// if (curEntry.IsCrypted)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_81 = __this->get_curEntry_16();
		NullCheck(L_81);
		bool L_82 = ZipEntry_get_IsCrypted_m0FE385FC2247087004A27E58B634B23C8B739C50(L_81, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_0241;
		}
	}
	{
		// if (curEntry.AESKeySize > 0)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_83 = __this->get_curEntry_16();
		NullCheck(L_83);
		int32_t L_84 = ZipEntry_get_AESKeySize_m3E24CE59AC0DDF68DE021FBA63DCB97E3A1C5A3D(L_83, /*hidden argument*/NULL);
		if ((((int32_t)L_84) <= ((int32_t)0)))
		{
			goto IL_022c;
		}
	}
	{
		// curEntry.CompressedSize += curEntry.AESOverheadSize;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_85 = __this->get_curEntry_16();
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_86 = L_85;
		NullCheck(L_86);
		int64_t L_87 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_86, /*hidden argument*/NULL);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_88 = __this->get_curEntry_16();
		NullCheck(L_88);
		int32_t L_89 = ZipEntry_get_AESOverheadSize_mA4520A31639190BAD364392132B6148DF2F38120(L_88, /*hidden argument*/NULL);
		NullCheck(L_86);
		ZipEntry_set_CompressedSize_m7AF11B1C526D27F940EC273D153694AF241657A2(L_86, ((int64_t)il2cpp_codegen_add((int64_t)L_87, (int64_t)(((int64_t)((int64_t)L_89))))), /*hidden argument*/NULL);
		// }
		goto IL_0241;
	}

IL_022c:
	{
		// curEntry.CompressedSize += ZipConstants.CryptoHeaderSize;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_90 = __this->get_curEntry_16();
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_91 = L_90;
		NullCheck(L_91);
		int64_t L_92 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_91, /*hidden argument*/NULL);
		NullCheck(L_91);
		ZipEntry_set_CompressedSize_m7AF11B1C526D27F940EC273D153694AF241657A2(L_91, ((int64_t)il2cpp_codegen_add((int64_t)L_92, (int64_t)(((int64_t)((int64_t)((int32_t)12)))))), /*hidden argument*/NULL);
	}

IL_0241:
	{
		// if (patchEntryHeader)
		bool L_93 = __this->get_patchEntryHeader_22();
		if (!L_93)
		{
			goto IL_030f;
		}
	}
	{
		// patchEntryHeader = false;
		__this->set_patchEntryHeader_22((bool)0);
		// long curPos = baseOutputStream_.Position;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_94 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		NullCheck(L_94);
		int64_t L_95 = VirtFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_94);
		V_1 = L_95;
		// baseOutputStream_.Seek(crcPatchPos, SeekOrigin.Begin);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_96 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		int64_t L_97 = __this->get_crcPatchPos_23();
		NullCheck(L_96);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(21 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_96, L_97, 0);
		// WriteLeInt((int)curEntry.Crc);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_98 = __this->get_curEntry_16();
		NullCheck(L_98);
		int64_t L_99 = ZipEntry_get_Crc_mE6028CC22F3978D17A53C6D2FDCEFD1CBCAC07E2(L_98, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_99))), /*hidden argument*/NULL);
		// if (curEntry.LocalHeaderRequiresZip64)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_100 = __this->get_curEntry_16();
		NullCheck(L_100);
		bool L_101 = ZipEntry_get_LocalHeaderRequiresZip64_m91B7307C9AF1C66E20179EF75C1CC373991EE4F0(L_100, /*hidden argument*/NULL);
		if (!L_101)
		{
			goto IL_02dd;
		}
	}
	{
		// if (sizePatchPos == -1)
		int64_t L_102 = __this->get_sizePatchPos_24();
		if ((!(((uint64_t)L_102) == ((uint64_t)(((int64_t)((int64_t)(-1))))))))
		{
			goto IL_02a6;
		}
	}
	{
		// throw new ZipException("Entry requires zip64 but this has been turned off");
		ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD * L_103 = (ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD *)il2cpp_codegen_object_new(ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD_il2cpp_TypeInfo_var);
		ZipException__ctor_mF3FB1738B0CE0D8D76A22D72A97B52725723DD46(L_103, _stringLiteral2A6D066F43BE099EA29DD9BF9738FF7818D1AF76, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_103, ZipOutputStream_CloseEntry_m522D4C18CFBE5829E2E11C0E030DCA425CE274CC_RuntimeMethod_var);
	}

IL_02a6:
	{
		// baseOutputStream_.Seek(sizePatchPos, SeekOrigin.Begin);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_104 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		int64_t L_105 = __this->get_sizePatchPos_24();
		NullCheck(L_104);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(21 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_104, L_105, 0);
		// WriteLeLong(curEntry.Size);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_106 = __this->get_curEntry_16();
		NullCheck(L_106);
		int64_t L_107 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_106, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeLong_mC84317008404C99B42BAD52169F73F13CDC0A316(__this, L_107, /*hidden argument*/NULL);
		// WriteLeLong(curEntry.CompressedSize);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_108 = __this->get_curEntry_16();
		NullCheck(L_108);
		int64_t L_109 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_108, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeLong_mC84317008404C99B42BAD52169F73F13CDC0A316(__this, L_109, /*hidden argument*/NULL);
		// }
		goto IL_0301;
	}

IL_02dd:
	{
		// WriteLeInt((int)curEntry.CompressedSize);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_110 = __this->get_curEntry_16();
		NullCheck(L_110);
		int64_t L_111 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_110, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_111))), /*hidden argument*/NULL);
		// WriteLeInt((int)curEntry.Size);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_112 = __this->get_curEntry_16();
		NullCheck(L_112);
		int64_t L_113 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_112, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_113))), /*hidden argument*/NULL);
	}

IL_0301:
	{
		// baseOutputStream_.Seek(curPos, SeekOrigin.Begin);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_114 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		int64_t L_115 = V_1;
		NullCheck(L_114);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(21 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_114, L_115, 0);
	}

IL_030f:
	{
		// if ((curEntry.Flags & 8) != 0)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_116 = __this->get_curEntry_16();
		NullCheck(L_116);
		int32_t L_117 = ZipEntry_get_Flags_m537DB42E6230C4C6721DE9B73D6F20B35D725889_inline(L_116, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_117&(int32_t)8)))
		{
			goto IL_03b3;
		}
	}
	{
		// WriteLeInt(ZipConstants.DataDescriptorSignature);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, ((int32_t)134695760), /*hidden argument*/NULL);
		// WriteLeInt(unchecked((int)curEntry.Crc));
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_118 = __this->get_curEntry_16();
		NullCheck(L_118);
		int64_t L_119 = ZipEntry_get_Crc_mE6028CC22F3978D17A53C6D2FDCEFD1CBCAC07E2(L_118, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_119))), /*hidden argument*/NULL);
		// if (curEntry.LocalHeaderRequiresZip64)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_120 = __this->get_curEntry_16();
		NullCheck(L_120);
		bool L_121 = ZipEntry_get_LocalHeaderRequiresZip64_m91B7307C9AF1C66E20179EF75C1CC373991EE4F0(L_120, /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_037f;
		}
	}
	{
		// WriteLeLong(curEntry.CompressedSize);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_122 = __this->get_curEntry_16();
		NullCheck(L_122);
		int64_t L_123 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_122, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeLong_mC84317008404C99B42BAD52169F73F13CDC0A316(__this, L_123, /*hidden argument*/NULL);
		// WriteLeLong(curEntry.Size);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_124 = __this->get_curEntry_16();
		NullCheck(L_124);
		int64_t L_125 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_124, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeLong_mC84317008404C99B42BAD52169F73F13CDC0A316(__this, L_125, /*hidden argument*/NULL);
		// offset += ZipConstants.Zip64DataDescriptorSize;
		int64_t L_126 = __this->get_offset_20();
		__this->set_offset_20(((int64_t)il2cpp_codegen_add((int64_t)L_126, (int64_t)(((int64_t)((int64_t)((int32_t)24)))))));
		// }
		goto IL_03b3;
	}

IL_037f:
	{
		// WriteLeInt((int)curEntry.CompressedSize);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_127 = __this->get_curEntry_16();
		NullCheck(L_127);
		int64_t L_128 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_127, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_128))), /*hidden argument*/NULL);
		// WriteLeInt((int)curEntry.Size);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_129 = __this->get_curEntry_16();
		NullCheck(L_129);
		int64_t L_130 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_129, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_130))), /*hidden argument*/NULL);
		// offset += ZipConstants.DataDescriptorSize;
		int64_t L_131 = __this->get_offset_20();
		__this->set_offset_20(((int64_t)il2cpp_codegen_add((int64_t)L_131, (int64_t)(((int64_t)((int64_t)((int32_t)16)))))));
	}

IL_03b3:
	{
		// entries.Add(curEntry);
		List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * L_132 = __this->get_entries_14();
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_133 = __this->get_curEntry_16();
		NullCheck(L_132);
		List_1_Add_m4AB2B4A2D33B1995491B11CF7ABC7E06268379A8(L_132, L_133, /*hidden argument*/List_1_Add_m4AB2B4A2D33B1995491B11CF7ABC7E06268379A8_RuntimeMethod_var);
		// curEntry = null;
		__this->set_curEntry_16((ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 *)NULL);
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteEncryptionHeader(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_WriteEncryptionHeader_mAAA5CE54D0E768D79B118FFF867F3CD379A32CC5 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, int64_t ___crcValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipOutputStream_WriteEncryptionHeader_mAAA5CE54D0E768D79B118FFF867F3CD379A32CC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// offset += ZipConstants.CryptoHeaderSize;
		int64_t L_0 = __this->get_offset_20();
		__this->set_offset_20(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)(((int64_t)((int64_t)((int32_t)12)))))));
		// InitializePassword(Password);
		String_t* L_1 = DeflaterOutputStream_get_Password_m1DE04D58F28BEAD551AC6125A0866E5C33EC3A58_inline(__this, /*hidden argument*/NULL);
		DeflaterOutputStream_InitializePassword_m3BA2C19D09F8DE97F5D46104769E9CFF4E358751(__this, L_1, /*hidden argument*/NULL);
		// byte[] cryptBuffer = new byte[ZipConstants.CryptoHeaderSize];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		V_0 = L_2;
		// var rnd = new Random();
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_3 = (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F *)il2cpp_codegen_object_new(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var);
		Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2(L_3, /*hidden argument*/NULL);
		// rnd.NextBytes(cryptBuffer);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(7 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_3, L_4);
		// cryptBuffer[11] = (byte)(crcValue >> 24);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		int64_t L_6 = ___crcValue0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_6>>(int32_t)((int32_t)24)))))));
		// EncryptBlock(cryptBuffer, 0, cryptBuffer.Length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_0;
		NullCheck(L_8);
		DeflaterOutputStream_EncryptBlock_mA8BA9971F0E1284F77C46F54F0DFA850490945BB(__this, L_7, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))), /*hidden argument*/NULL);
		// baseOutputStream_.Write(cryptBuffer, 0, cryptBuffer.Length);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_9 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_0;
		NullCheck(L_11);
		NullCheck(L_9);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))));
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::AddExtraDataAES(ICSharpCode.SharpZipLib.Zip.ZipEntry,ICSharpCode.SharpZipLib.Zip.ZipExtraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_AddExtraDataAES_m975268D8FABF687DE5CD9D134D44325AA7DFD0FF (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * ___entry0, ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * ___extraData1, const RuntimeMethod* method)
{
	{
		// extraData.StartNewEntry();
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_0 = ___extraData1;
		NullCheck(L_0);
		ZipExtraData_StartNewEntry_mFBE389D63CF1ADF1DE39F4793C084EED30AE206B(L_0, /*hidden argument*/NULL);
		// extraData.AddLeShort(VENDOR_VERSION);               // 2 = AE-2
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_1 = ___extraData1;
		NullCheck(L_1);
		ZipExtraData_AddLeShort_m5B421024F495CDED8318ACB9A895EA8E1A64E1CA(L_1, 2, /*hidden argument*/NULL);
		// extraData.AddLeShort(VENDOR_ID);                    // "AE"
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_2 = ___extraData1;
		NullCheck(L_2);
		ZipExtraData_AddLeShort_m5B421024F495CDED8318ACB9A895EA8E1A64E1CA(L_2, ((int32_t)17729), /*hidden argument*/NULL);
		// extraData.AddData(entry.AESEncryptionStrength);     //  1 = 128, 2 = 192, 3 = 256
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_3 = ___extraData1;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_4 = ___entry0;
		NullCheck(L_4);
		uint8_t L_5 = ZipEntry_get_AESEncryptionStrength_mF5BF857CBF787E5FE8B85DB8928163F8243F404C(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ZipExtraData_AddData_m3E9F2B0753823DB5556BB31FCB0D86534562168A(L_3, L_5, /*hidden argument*/NULL);
		// extraData.AddLeShort((int)entry.CompressionMethod); // The actual compression method used to compress the file
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_6 = ___extraData1;
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_7 = ___entry0;
		NullCheck(L_7);
		int32_t L_8 = ZipEntry_get_CompressionMethod_mD418E4CEC2781A7AAE2EC18FFEDCD5C55F41DB7B_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ZipExtraData_AddLeShort_m5B421024F495CDED8318ACB9A895EA8E1A64E1CA(L_6, L_8, /*hidden argument*/NULL);
		// extraData.AddNewEntry(0x9901);
		ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_9 = ___extraData1;
		NullCheck(L_9);
		ZipExtraData_AddNewEntry_m7F041E00E0939BD69BA428513EC3B28A3A8A1890(L_9, ((int32_t)39169), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteAESHeader(ICSharpCode.SharpZipLib.Zip.ZipEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_WriteAESHeader_mBA5902608A839F098C720A3613C4B1D8297E7746 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * ___entry0, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		// InitializeAESPassword(entry, Password, out salt, out pwdVerifier);
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_0 = ___entry0;
		String_t* L_1 = DeflaterOutputStream_get_Password_m1DE04D58F28BEAD551AC6125A0866E5C33EC3A58_inline(__this, /*hidden argument*/NULL);
		DeflaterOutputStream_InitializeAESPassword_m0A0C79944F26D32D66FF4911AED4238B9E747F69(__this, L_0, L_1, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_0), (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_1), /*hidden argument*/NULL);
		// baseOutputStream_.Write(salt, 0, salt.Length);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		NullCheck(L_4);
		NullCheck(L_2);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		// baseOutputStream_.Write(pwdVerifier, 0, pwdVerifier.Length);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_1;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))));
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_Write_m9B86D0C092E7E7A6E9756CFEF7D16D580343FF73 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipOutputStream_Write_m9B86D0C092E7E7A6E9756CFEF7D16D580343FF73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (curEntry == null)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_0 = __this->get_curEntry_16();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("No open entry.");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteralEDC4BFE81D45988DA55131B79CBA2B75BE4E8101, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ZipOutputStream_Write_m9B86D0C092E7E7A6E9756CFEF7D16D580343FF73_RuntimeMethod_var);
	}

IL_0013:
	{
		// if (buffer == null)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___buffer0;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// throw new ArgumentNullException(nameof(buffer));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteralE53C2EA1FE4BD2B78BF4723C7C155A578E020A25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ZipOutputStream_Write_m9B86D0C092E7E7A6E9756CFEF7D16D580343FF73_RuntimeMethod_var);
	}

IL_0021:
	{
		// if (offset < 0)
		int32_t L_4 = ___offset1;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(offset), "Cannot be negative");
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_5, _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651, _stringLiteral8CF170CED3FC0E56C029056591A6714E886F2A07, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ZipOutputStream_Write_m9B86D0C092E7E7A6E9756CFEF7D16D580343FF73_RuntimeMethod_var);
	}

IL_0035:
	{
		// if (count < 0)
		int32_t L_6 = ___count2;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(count), "Cannot be negative");
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_7 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_7, _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556, _stringLiteral8CF170CED3FC0E56C029056591A6714E886F2A07, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ZipOutputStream_Write_m9B86D0C092E7E7A6E9756CFEF7D16D580343FF73_RuntimeMethod_var);
	}

IL_0049:
	{
		// if ((buffer.Length - offset) < count)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___buffer0;
		NullCheck(L_8);
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))), (int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_005c;
		}
	}
	{
		// throw new ArgumentException("Invalid offset/count combination");
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_11, _stringLiteralA58B1470289CBC589F8FEB29C9CD13CB3091361D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ZipOutputStream_Write_m9B86D0C092E7E7A6E9756CFEF7D16D580343FF73_RuntimeMethod_var);
	}

IL_005c:
	{
		// crc.Update(new ArraySegment<byte>(buffer, offset, count));
		Crc32_tF07875D1C19AA0BA963ACDB85C03ED75D4923354 * L_12 = __this->get_crc_15();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = ___buffer0;
		int32_t L_14 = ___offset1;
		int32_t L_15 = ___count2;
		ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_m7A4CBED9F6248681E854EEF934AF09D796B4071A((&L_16), L_13, L_14, L_15, /*hidden argument*/ArraySegment_1__ctor_m7A4CBED9F6248681E854EEF934AF09D796B4071A_RuntimeMethod_var);
		NullCheck(L_12);
		Crc32_Update_m799A38870156F07B8D86AE30DB187A2E78D6C4F9(L_12, L_16, /*hidden argument*/NULL);
		// size += count;
		int64_t L_17 = __this->get_size_19();
		int32_t L_18 = ___count2;
		__this->set_size_19(((int64_t)il2cpp_codegen_add((int64_t)L_17, (int64_t)(((int64_t)((int64_t)L_18))))));
		// switch (curMethod)
		int32_t L_19 = __this->get_curMethod_18();
		V_0 = L_19;
		int32_t L_20 = V_0;
		if (!L_20)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)8))))
		{
			goto IL_00b6;
		}
	}
	{
		// base.Write(buffer, offset, count);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = ___buffer0;
		int32_t L_23 = ___offset1;
		int32_t L_24 = ___count2;
		DeflaterOutputStream_Write_m525EFD06A97B96B1FA47167EDC937D955AAE0833(__this, L_22, L_23, L_24, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0096:
	{
		// if (Password != null)
		String_t* L_25 = DeflaterOutputStream_get_Password_m1DE04D58F28BEAD551AC6125A0866E5C33EC3A58_inline(__this, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		// CopyAndEncrypt(buffer, offset, count);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = ___buffer0;
		int32_t L_27 = ___offset1;
		int32_t L_28 = ___count2;
		ZipOutputStream_CopyAndEncrypt_m30B3C052A4B412D5FC3650F8C30B704489D08C90(__this, L_26, L_27, L_28, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a8:
	{
		// baseOutputStream_.Write(buffer, offset, count);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_29 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = ___buffer0;
		int32_t L_31 = ___offset1;
		int32_t L_32 = ___count2;
		NullCheck(L_29);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_29, L_30, L_31, L_32);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::CopyAndEncrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_CopyAndEncrypt_m30B3C052A4B412D5FC3650F8C30B704489D08C90 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipOutputStream_CopyAndEncrypt_m30B3C052A4B412D5FC3650F8C30B704489D08C90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		// byte[] localBuffer = new byte[CopyBufferSize];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		V_0 = L_0;
		goto IL_0049;
	}

IL_000d:
	{
		// int bufferCount = (count < CopyBufferSize) ? count : CopyBufferSize;
		int32_t L_1 = ___count2;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)4096))))
		{
			goto IL_001c;
		}
	}
	{
		G_B4_0 = ((int32_t)4096);
		goto IL_001d;
	}

IL_001c:
	{
		int32_t L_2 = ___count2;
		G_B4_0 = L_2;
	}

IL_001d:
	{
		V_1 = G_B4_0;
		// Array.Copy(buffer, offset, localBuffer, 0, bufferCount);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		int32_t L_6 = V_1;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_3, L_4, (RuntimeArray *)(RuntimeArray *)L_5, 0, L_6, /*hidden argument*/NULL);
		// EncryptBlock(localBuffer, 0, bufferCount);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
		int32_t L_8 = V_1;
		DeflaterOutputStream_EncryptBlock_mA8BA9971F0E1284F77C46F54F0DFA850490945BB(__this, L_7, 0, L_8, /*hidden argument*/NULL);
		// baseOutputStream_.Write(localBuffer, 0, bufferCount);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_9 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, L_11);
		// count -= bufferCount;
		int32_t L_12 = ___count2;
		int32_t L_13 = V_1;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13));
		// offset += bufferCount;
		int32_t L_14 = ___offset1;
		int32_t L_15 = V_1;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15));
	}

IL_0049:
	{
		// while (count > 0)
		int32_t L_16 = ___count2;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_Finish_m1BA33A60079972D685F0CDE05D3998D3C9808425 (ZipOutputStream_tB344E976E7671A4E8E855C0C91E24A8313D1B8C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipOutputStream_Finish_m1BA33A60079972D685F0CDE05D3998D3C9808425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * V_3 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * V_5 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_6 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_7 = NULL;
	ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0 * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B32_0 = NULL;
	{
		// if (entries == null)
		List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * L_0 = __this->get_entries_14();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (curEntry != null)
		ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_1 = __this->get_curEntry_16();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// CloseEntry();
		ZipOutputStream_CloseEntry_m522D4C18CFBE5829E2E11C0E030DCA425CE274CC(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// long numEntries = entries.Count;
		List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * L_2 = __this->get_entries_14();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m1FDCB78B65C08525A53025D604B1C6B46CF4B9BA_inline(L_2, /*hidden argument*/List_1_get_Count_m1FDCB78B65C08525A53025D604B1C6B46CF4B9BA_RuntimeMethod_var);
		V_0 = (((int64_t)((int64_t)L_3)));
		// long sizeEntries = 0;
		V_1 = (((int64_t)((int64_t)0)));
		// foreach (ZipEntry entry in entries)
		List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 * L_4 = __this->get_entries_14();
		NullCheck(L_4);
		Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0  L_5 = List_1_GetEnumerator_m1066D00079B7F3C4B98349A2B6BAB709F2CBB5D4(L_4, /*hidden argument*/List_1_GetEnumerator_m1066D00079B7F3C4B98349A2B6BAB709F2CBB5D4_RuntimeMethod_var);
		V_2 = L_5;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02c5;
		}

IL_0038:
		{
			// foreach (ZipEntry entry in entries)
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_6 = Enumerator_get_Current_m7125CA172A5AD645D60CD9B3A04C2E6995E5FEE8_inline((Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m7125CA172A5AD645D60CD9B3A04C2E6995E5FEE8_RuntimeMethod_var);
			V_3 = L_6;
			// WriteLeInt(ZipConstants.CentralHeaderSignature);
			ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, ((int32_t)33639248), /*hidden argument*/NULL);
			// WriteLeShort((entry.HostSystem << 8) | entry.VersionMadeBy);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_7 = V_3;
			NullCheck(L_7);
			int32_t L_8 = ZipEntry_get_HostSystem_m1525D8A6375574186ADD10B99E603B63DACA2D54(L_7, /*hidden argument*/NULL);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_9 = V_3;
			NullCheck(L_9);
			int32_t L_10 = ZipEntry_get_VersionMadeBy_m7230E218E5D3D8A05B1D84B3CB938B88424AA585(L_9, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_8<<(int32_t)8))|(int32_t)L_10)), /*hidden argument*/NULL);
			// WriteLeShort(entry.Version);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_11 = V_3;
			NullCheck(L_11);
			int32_t L_12 = ZipEntry_get_Version_m53282E6D1A9B3EC722AD57BD43C9E2106B787DC6(L_11, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, L_12, /*hidden argument*/NULL);
			// WriteLeShort(entry.Flags);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_13 = V_3;
			NullCheck(L_13);
			int32_t L_14 = ZipEntry_get_Flags_m537DB42E6230C4C6721DE9B73D6F20B35D725889_inline(L_13, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, L_14, /*hidden argument*/NULL);
			// WriteLeShort((short)entry.CompressionMethodForHeader);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_15 = V_3;
			NullCheck(L_15);
			int32_t L_16 = ZipEntry_get_CompressionMethodForHeader_m81BC895960DF50DAD6029E42E8146EC26F838165(L_15, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, (((int16_t)((int16_t)L_16))), /*hidden argument*/NULL);
			// WriteLeInt((int)entry.DosTime);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_17 = V_3;
			NullCheck(L_17);
			int64_t L_18 = ZipEntry_get_DosTime_mE5A3A577F1B8F81B9471E60B58A79D6660F3C3BB(L_17, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_18))), /*hidden argument*/NULL);
			// WriteLeInt((int)entry.Crc);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_19 = V_3;
			NullCheck(L_19);
			int64_t L_20 = ZipEntry_get_Crc_mE6028CC22F3978D17A53C6D2FDCEFD1CBCAC07E2(L_19, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_20))), /*hidden argument*/NULL);
			// if (entry.IsZip64Forced() ||
			//     (entry.CompressedSize >= uint.MaxValue))
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_21 = V_3;
			NullCheck(L_21);
			bool L_22 = ZipEntry_IsZip64Forced_m56C1F47E01DE5B670EBDF0170E75A181813FA2FE_inline(L_21, /*hidden argument*/NULL);
			if (L_22)
			{
				goto IL_00b1;
			}
		}

IL_00a7:
		{
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_23 = V_3;
			NullCheck(L_23);
			int64_t L_24 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_23, /*hidden argument*/NULL);
			if ((((int64_t)L_24) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
			{
				goto IL_00ba;
			}
		}

IL_00b1:
		{
			// WriteLeInt(-1);
			ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (-1), /*hidden argument*/NULL);
			// }
			goto IL_00c7;
		}

IL_00ba:
		{
			// WriteLeInt((int)entry.CompressedSize);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_25 = V_3;
			NullCheck(L_25);
			int64_t L_26 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_25, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_26))), /*hidden argument*/NULL);
		}

IL_00c7:
		{
			// if (entry.IsZip64Forced() ||
			//     (entry.Size >= uint.MaxValue))
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_27 = V_3;
			NullCheck(L_27);
			bool L_28 = ZipEntry_IsZip64Forced_m56C1F47E01DE5B670EBDF0170E75A181813FA2FE_inline(L_27, /*hidden argument*/NULL);
			if (L_28)
			{
				goto IL_00d9;
			}
		}

IL_00cf:
		{
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_29 = V_3;
			NullCheck(L_29);
			int64_t L_30 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_29, /*hidden argument*/NULL);
			if ((((int64_t)L_30) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
			{
				goto IL_00e2;
			}
		}

IL_00d9:
		{
			// WriteLeInt(-1);
			ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (-1), /*hidden argument*/NULL);
			// }
			goto IL_00ef;
		}

IL_00e2:
		{
			// WriteLeInt((int)entry.Size);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_31 = V_3;
			NullCheck(L_31);
			int64_t L_32 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_31, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_32))), /*hidden argument*/NULL);
		}

IL_00ef:
		{
			// byte[] name = ZipStrings.ConvertToArray(entry.Flags, entry.Name);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_33 = V_3;
			NullCheck(L_33);
			int32_t L_34 = ZipEntry_get_Flags_m537DB42E6230C4C6721DE9B73D6F20B35D725889_inline(L_33, /*hidden argument*/NULL);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_35 = V_3;
			NullCheck(L_35);
			String_t* L_36 = ZipEntry_get_Name_m7C82F27E52E95B2527A17776F2F9ADD266012DA3_inline(L_35, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_37 = ZipStrings_ConvertToArray_mCA3E762D116FDEA744914D131559874EBF9D53AF(L_34, L_36, /*hidden argument*/NULL);
			V_4 = L_37;
			// if (name.Length > 0xffff)
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = V_4;
			NullCheck(L_38);
			if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))) <= ((int32_t)((int32_t)65535))))
			{
				goto IL_0118;
			}
		}

IL_010d:
		{
			// throw new ZipException("Name too long.");
			ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD * L_39 = (ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD *)il2cpp_codegen_object_new(ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD_il2cpp_TypeInfo_var);
			ZipException__ctor_mF3FB1738B0CE0D8D76A22D72A97B52725723DD46(L_39, _stringLiteral0F852624D371B6B99FD56D2D3AFDC0D52969380F, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ZipOutputStream_Finish_m1BA33A60079972D685F0CDE05D3998D3C9808425_RuntimeMethod_var);
		}

IL_0118:
		{
			// var ed = new ZipExtraData(entry.ExtraData);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_40 = V_3;
			NullCheck(L_40);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_41 = ZipEntry_get_ExtraData_m8D90211E2A1617E7C971F2E5964E1E6C9ED3BACE_inline(L_40, /*hidden argument*/NULL);
			ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_42 = (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C *)il2cpp_codegen_object_new(ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C_il2cpp_TypeInfo_var);
			ZipExtraData__ctor_m226DC2287A50CDCF4F53825517484C29A306A810(L_42, L_41, /*hidden argument*/NULL);
			V_5 = L_42;
			// if (entry.CentralHeaderRequiresZip64)
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_43 = V_3;
			NullCheck(L_43);
			bool L_44 = ZipEntry_get_CentralHeaderRequiresZip64_mE0ECB9213C02BA39A347CDE6E1A1878ABE1F5DB5(L_43, /*hidden argument*/NULL);
			if (!L_44)
			{
				goto IL_0193;
			}
		}

IL_012d:
		{
			// ed.StartNewEntry();
			ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_45 = V_5;
			NullCheck(L_45);
			ZipExtraData_StartNewEntry_mFBE389D63CF1ADF1DE39F4793C084EED30AE206B(L_45, /*hidden argument*/NULL);
			// if (entry.IsZip64Forced() ||
			//     (entry.Size >= 0xffffffff))
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_46 = V_3;
			NullCheck(L_46);
			bool L_47 = ZipEntry_IsZip64Forced_m56C1F47E01DE5B670EBDF0170E75A181813FA2FE_inline(L_46, /*hidden argument*/NULL);
			if (L_47)
			{
				goto IL_0146;
			}
		}

IL_013c:
		{
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_48 = V_3;
			NullCheck(L_48);
			int64_t L_49 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_48, /*hidden argument*/NULL);
			if ((((int64_t)L_49) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
			{
				goto IL_0153;
			}
		}

IL_0146:
		{
			// ed.AddLeLong(entry.Size);
			ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_50 = V_5;
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_51 = V_3;
			NullCheck(L_51);
			int64_t L_52 = ZipEntry_get_Size_mE37878D77D999B48D0D75DA240AD6C3C839EB79F(L_51, /*hidden argument*/NULL);
			NullCheck(L_50);
			ZipExtraData_AddLeLong_mE27B8962532F5BA24FB3CF56A947A7B196EE13BA(L_50, L_52, /*hidden argument*/NULL);
		}

IL_0153:
		{
			// if (entry.IsZip64Forced() ||
			//     (entry.CompressedSize >= 0xffffffff))
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_53 = V_3;
			NullCheck(L_53);
			bool L_54 = ZipEntry_IsZip64Forced_m56C1F47E01DE5B670EBDF0170E75A181813FA2FE_inline(L_53, /*hidden argument*/NULL);
			if (L_54)
			{
				goto IL_0165;
			}
		}

IL_015b:
		{
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_55 = V_3;
			NullCheck(L_55);
			int64_t L_56 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_55, /*hidden argument*/NULL);
			if ((((int64_t)L_56) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
			{
				goto IL_0172;
			}
		}

IL_0165:
		{
			// ed.AddLeLong(entry.CompressedSize);
			ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_57 = V_5;
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_58 = V_3;
			NullCheck(L_58);
			int64_t L_59 = ZipEntry_get_CompressedSize_m5878FF130C0C143FB1585963EDF7FE9B36B9B3E7(L_58, /*hidden argument*/NULL);
			NullCheck(L_57);
			ZipExtraData_AddLeLong_mE27B8962532F5BA24FB3CF56A947A7B196EE13BA(L_57, L_59, /*hidden argument*/NULL);
		}

IL_0172:
		{
			// if (entry.Offset >= 0xffffffff)
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_60 = V_3;
			NullCheck(L_60);
			int64_t L_61 = ZipEntry_get_Offset_m5A61D9B4FE83674722B7FDD3109221EEF21B987C_inline(L_60, /*hidden argument*/NULL);
			if ((((int64_t)L_61) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
			{
				goto IL_0189;
			}
		}

IL_017c:
		{
			// ed.AddLeLong(entry.Offset);
			ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_62 = V_5;
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_63 = V_3;
			NullCheck(L_63);
			int64_t L_64 = ZipEntry_get_Offset_m5A61D9B4FE83674722B7FDD3109221EEF21B987C_inline(L_63, /*hidden argument*/NULL);
			NullCheck(L_62);
			ZipExtraData_AddLeLong_mE27B8962532F5BA24FB3CF56A947A7B196EE13BA(L_62, L_64, /*hidden argument*/NULL);
		}

IL_0189:
		{
			// ed.AddNewEntry(1);
			ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_65 = V_5;
			NullCheck(L_65);
			ZipExtraData_AddNewEntry_m7F041E00E0939BD69BA428513EC3B28A3A8A1890(L_65, 1, /*hidden argument*/NULL);
			// }
			goto IL_019c;
		}

IL_0193:
		{
			// ed.Delete(1);
			ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_66 = V_5;
			NullCheck(L_66);
			ZipExtraData_Delete_mC33275D978CBE1A1ADE26FB4C5BCDB7CDA564EBA(L_66, 1, /*hidden argument*/NULL);
		}

IL_019c:
		{
			// if (entry.AESKeySize > 0)
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_67 = V_3;
			NullCheck(L_67);
			int32_t L_68 = ZipEntry_get_AESKeySize_m3E24CE59AC0DDF68DE021FBA63DCB97E3A1C5A3D(L_67, /*hidden argument*/NULL);
			if ((((int32_t)L_68) <= ((int32_t)0)))
			{
				goto IL_01ad;
			}
		}

IL_01a5:
		{
			// AddExtraDataAES(entry, ed);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_69 = V_3;
			ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_70 = V_5;
			ZipOutputStream_AddExtraDataAES_m975268D8FABF687DE5CD9D134D44325AA7DFD0FF(L_69, L_70, /*hidden argument*/NULL);
		}

IL_01ad:
		{
			// byte[] extra = ed.GetEntryData();
			ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * L_71 = V_5;
			NullCheck(L_71);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_72 = ZipExtraData_GetEntryData_m89A3117AF2C586CBE0EFD7F9CDDA58173F54E630(L_71, /*hidden argument*/NULL);
			V_6 = L_72;
			// byte[] entryComment =
			//     (entry.Comment != null) ?
			//     ZipStrings.ConvertToArray(entry.Flags, entry.Comment) :
			//     new byte[0];
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_73 = V_3;
			NullCheck(L_73);
			String_t* L_74 = ZipEntry_get_Comment_m00D142AF36AABD5E17AD9AF0C109588CEBAE6AB0_inline(L_73, /*hidden argument*/NULL);
			if (L_74)
			{
				goto IL_01c6;
			}
		}

IL_01be:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_75 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)0);
			G_B32_0 = L_75;
			goto IL_01d7;
		}

IL_01c6:
		{
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_76 = V_3;
			NullCheck(L_76);
			int32_t L_77 = ZipEntry_get_Flags_m537DB42E6230C4C6721DE9B73D6F20B35D725889_inline(L_76, /*hidden argument*/NULL);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_78 = V_3;
			NullCheck(L_78);
			String_t* L_79 = ZipEntry_get_Comment_m00D142AF36AABD5E17AD9AF0C109588CEBAE6AB0_inline(L_78, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_80 = ZipStrings_ConvertToArray_mCA3E762D116FDEA744914D131559874EBF9D53AF(L_77, L_79, /*hidden argument*/NULL);
			G_B32_0 = L_80;
		}

IL_01d7:
		{
			V_7 = G_B32_0;
			// if (entryComment.Length > 0xffff)
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_81 = V_7;
			NullCheck(L_81);
			if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length))))) <= ((int32_t)((int32_t)65535))))
			{
				goto IL_01ef;
			}
		}

IL_01e4:
		{
			// throw new ZipException("Comment too long.");
			ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD * L_82 = (ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD *)il2cpp_codegen_object_new(ZipException_tE7BC9918827E0112314A0C9CE05CA3E6E2CB72CD_il2cpp_TypeInfo_var);
			ZipException__ctor_mF3FB1738B0CE0D8D76A22D72A97B52725723DD46(L_82, _stringLiteralCCACDB5E7C5CC9CEB0FE2752A096145D2F063970, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_82, ZipOutputStream_Finish_m1BA33A60079972D685F0CDE05D3998D3C9808425_RuntimeMethod_var);
		}

IL_01ef:
		{
			// WriteLeShort(name.Length);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_83 = V_4;
			NullCheck(L_83);
			ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, (((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length)))), /*hidden argument*/NULL);
			// WriteLeShort(extra.Length);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_84 = V_6;
			NullCheck(L_84);
			ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, (((int32_t)((int32_t)(((RuntimeArray*)L_84)->max_length)))), /*hidden argument*/NULL);
			// WriteLeShort(entryComment.Length);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_85 = V_7;
			NullCheck(L_85);
			ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, (((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))), /*hidden argument*/NULL);
			// WriteLeShort(0);    // disk number
			ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, 0, /*hidden argument*/NULL);
			// WriteLeShort(0);    // internal file attributes
			ZipOutputStream_WriteLeShort_m87C6B65C9AE3EFFC4628946E926C3CA94473B0B6(__this, 0, /*hidden argument*/NULL);
			// if (entry.ExternalFileAttributes != -1)
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_86 = V_3;
			NullCheck(L_86);
			int32_t L_87 = ZipEntry_get_ExternalFileAttributes_m6B55D19696564DF61C1DBA00B33EBD74FE11C7CC(L_86, /*hidden argument*/NULL);
			if ((((int32_t)L_87) == ((int32_t)(-1))))
			{
				goto IL_0232;
			}
		}

IL_0224:
		{
			// WriteLeInt(entry.ExternalFileAttributes);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_88 = V_3;
			NullCheck(L_88);
			int32_t L_89 = ZipEntry_get_ExternalFileAttributes_m6B55D19696564DF61C1DBA00B33EBD74FE11C7CC(L_88, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, L_89, /*hidden argument*/NULL);
			// }
			goto IL_024b;
		}

IL_0232:
		{
			// if (entry.IsDirectory)
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_90 = V_3;
			NullCheck(L_90);
			bool L_91 = ZipEntry_get_IsDirectory_m9D46E510EDD228DFCDE0B80E72ACBF77B891E6E0(L_90, /*hidden argument*/NULL);
			if (!L_91)
			{
				goto IL_0244;
			}
		}

IL_023a:
		{
			// WriteLeInt(16);
			ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, ((int32_t)16), /*hidden argument*/NULL);
			// }
			goto IL_024b;
		}

IL_0244:
		{
			// WriteLeInt(0);
			ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, 0, /*hidden argument*/NULL);
		}

IL_024b:
		{
			// if (entry.Offset >= uint.MaxValue)
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_92 = V_3;
			NullCheck(L_92);
			int64_t L_93 = ZipEntry_get_Offset_m5A61D9B4FE83674722B7FDD3109221EEF21B987C_inline(L_92, /*hidden argument*/NULL);
			if ((((int64_t)L_93) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
			{
				goto IL_025e;
			}
		}

IL_0255:
		{
			// WriteLeInt(-1);
			ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (-1), /*hidden argument*/NULL);
			// }
			goto IL_026b;
		}

IL_025e:
		{
			// WriteLeInt((int)entry.Offset);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_94 = V_3;
			NullCheck(L_94);
			int64_t L_95 = ZipEntry_get_Offset_m5A61D9B4FE83674722B7FDD3109221EEF21B987C_inline(L_94, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeInt_mAC610A779DB84FC10F5C1ABD7F6AE950653E291F(__this, (((int32_t)((int32_t)L_95))), /*hidden argument*/NULL);
		}

IL_026b:
		{
			// if (name.Length > 0)
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_96 = V_4;
			NullCheck(L_96);
			if (!(((RuntimeArray*)L_96)->max_length))
			{
				goto IL_0282;
			}
		}

IL_0270:
		{
			// baseOutputStream_.Write(name, 0, name.Length);
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_97 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_98 = V_4;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_99 = V_4;
			NullCheck(L_99);
			NullCheck(L_97);
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_97, L_98, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length)))));
		}

IL_0282:
		{
			// if (extra.Length > 0)
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_100 = V_6;
			NullCheck(L_100);
			if (!(((RuntimeArray*)L_100)->max_length))
			{
				goto IL_0299;
			}
		}

IL_0287:
		{
			// baseOutputStream_.Write(extra, 0, extra.Length);
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_101 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_102 = V_6;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_103 = V_6;
			NullCheck(L_103);
			NullCheck(L_101);
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_101, L_102, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_103)->max_length)))));
		}

IL_0299:
		{
			// if (entryComment.Length > 0)
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_104 = V_7;
			NullCheck(L_104);
			if (!(((RuntimeArray*)L_104)->max_length))
			{
				goto IL_02b0;
			}
		}

IL_029e:
		{
			// baseOutputStream_.Write(entryComment, 0, entryComment.Length);
			Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_105 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_106 = V_7;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_107 = V_7;
			NullCheck(L_107);
			NullCheck(L_105);
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_105, L_106, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_107)->max_length)))));
		}

IL_02b0:
		{
			// sizeEntries += ZipConstants.CentralHeaderBaseSize + name.Length + extra.Length + entryComment.Length;
			int64_t L_108 = V_1;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_109 = V_4;
			NullCheck(L_109);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_110 = V_6;
			NullCheck(L_110);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_111 = V_7;
			NullCheck(L_111);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_108, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)46), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_109)->max_length)))))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_110)->max_length)))))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_111)->max_length)))))))))));
		}

IL_02c5:
		{
			// foreach (ZipEntry entry in entries)
			bool L_112 = Enumerator_MoveNext_mEA01B431738A0117A71E0EBEFF18AA28E01F881E((Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mEA01B431738A0117A71E0EBEFF18AA28E01F881E_RuntimeMethod_var);
			if (L_112)
			{
				goto IL_0038;
			}
		}

IL_02d1:
		{
			IL2CPP_LEAVE(0x2E1, FINALLY_02d3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02d3;
	}

FINALLY_02d3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFFAF95BE1158120666355BEDEEA82F8069FEA60F((Enumerator_t376CFB618D731CE4BD2ABD31119821505E08B6E0 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mFFAF95BE1158120666355BEDEEA82F8069FEA60F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(723)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(723)
	{
		IL2CPP_JUMP_TBL(0x2E1, IL_02e1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02e1:
	{
		// using (ZipHelperStream zhs = new ZipHelperStream(baseOutputStream_))
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_113 = ((DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E *)__this)->get_baseOutputStream__11();
		ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0 * L_114 = (ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0 *)il2cpp_codegen_object_new(ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0_il2cpp_TypeInfo_var);
		ZipHelperStream__ctor_m9260FBBB657A2302F4138C45D805B93E02F1478B(L_114, L_113, /*hidden argument*/NULL);
		V_8 = L_114;
	}

IL_02ee:
	try
	{ // begin try (depth: 1)
		// zhs.WriteEndOfCentralDirectory(numEntries, sizeEntries, offset, zipComment);
		ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0 * L_115 = V_8;
		int64_t L_116 = V_0;
		int64_t L_117 = V_1;
		int64_t L_118 = __this->get_offset_20();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_119 = __this->get_zipComment_21();
		NullCheck(L_115);
		ZipHelperStream_WriteEndOfCentralDirectory_m4232D5728851DF3179AF759869DF2C45B765E88C(L_115, L_116, L_117, L_118, L_119, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x311, FINALLY_0305);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0305;
	}

FINALLY_0305:
	{ // begin finally (depth: 1)
		{
			ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0 * L_120 = V_8;
			if (!L_120)
			{
				goto IL_0310;
			}
		}

IL_0309:
		{
			ZipHelperStream_tB57A6D4AEE7ED47306DD8DCD44B8A2CE34E740F0 * L_121 = V_8;
			NullCheck(L_121);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_121);
		}

IL_0310:
		{
			IL2CPP_END_FINALLY(773)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(773)
	{
		IL2CPP_JUMP_TBL(0x311, IL_0311)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0311:
	{
		// entries = null;
		__this->set_entries_14((List_1_t1735EAD08A63DB592DE64B0652B2EA547D8CCE61 *)NULL);
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
// System.Void ICSharpCode.SharpZipLib.Zip.ZipStrings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipStrings__cctor_mAE663DF898D36CF20968D9AC27A5F7163C731B44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings__cctor_mAE663DF898D36CF20968D9AC27A5F7163C731B44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B7_0 = 0;
	{
		// private static int codePage = AutomaticCodePage;
		((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->set_codePage_0((-1));
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			// var platformCodepage = Encoding.GetEncoding(0).CodePage;
			Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_GetEncoding_m0F51F30DFDD74D989E27C58C53FC82718CC51F68(0, /*hidden argument*/NULL);
			NullCheck(L_0);
			int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Text.Encoding::get_CodePage() */, L_0);
			V_0 = L_1;
			// SystemDefaultCodePage = (platformCodepage == 1 || platformCodepage == 2 || platformCodepage == 3 || platformCodepage == 42) ? FallbackCodePage : platformCodepage;
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0026;
			}
		}

IL_0016:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)2)))
			{
				goto IL_0026;
			}
		}

IL_001a:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)3)))
			{
				goto IL_0026;
			}
		}

IL_001e:
		{
			int32_t L_5 = V_0;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)42))))
			{
				goto IL_0026;
			}
		}

IL_0023:
		{
			int32_t L_6 = V_0;
			G_B7_0 = L_6;
			goto IL_002b;
		}

IL_0026:
		{
			G_B7_0 = ((int32_t)437);
		}

IL_002b:
		{
			((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->set_U3CSystemDefaultCodePageU3Ek__BackingField_3(G_B7_0);
			// }
			goto IL_003f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Object)
		// catch
		// SystemDefaultCodePage = FallbackCodePage;
		((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->set_U3CSystemDefaultCodePageU3Ek__BackingField_3(((int32_t)437));
		// }
		goto IL_003f;
	} // end catch (depth: 1)

IL_003f:
	{
		// }
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipStrings::get_CodePage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipStrings_get_CodePage_m8C98CC1D09B639ACCEC88561429D6D36403401A3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_get_CodePage_m8C98CC1D09B639ACCEC88561429D6D36403401A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return codePage == AutomaticCodePage? Encoding.UTF8.CodePage:codePage;
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->get_codePage_0();
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->get_codePage_0();
		return L_1;
	}

IL_000e:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_2 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Text.Encoding::get_CodePage() */, L_2);
		return L_3;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipStrings::set_CodePage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipStrings_set_CodePage_mAC7AB40C4A44231DA3E822D363679ACF8AC1F0DC (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_set_CodePage_mAC7AB40C4A44231DA3E822D363679ACF8AC1F0DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((value < 0) || (value > 65535) ||
		//     (value == 1) || (value == 2) || (value == 3) || (value == 42))
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = ___value0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)65535))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___value0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___value0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_4 = ___value0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_5 = ___value0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0028;
		}
	}

IL_001d:
	{
		// throw new ArgumentOutOfRangeException(nameof(value));
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_6 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_6, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ZipStrings_set_CodePage_mAC7AB40C4A44231DA3E822D363679ACF8AC1F0DC_RuntimeMethod_var);
	}

IL_0028:
	{
		// codePage = value;
		int32_t L_7 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->set_codePage_0(L_7);
		// }
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipStrings::get_SystemDefaultCodePage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipStrings_get_SystemDefaultCodePage_mFDB66669B80E1C318C5D94F017AF0653D799B219 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_get_SystemDefaultCodePage_mFDB66669B80E1C318C5D94F017AF0653D799B219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int SystemDefaultCodePage { get; }
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->get_U3CSystemDefaultCodePageU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipStrings::get_UseUnicode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipStrings_get_UseUnicode_m8A0196860F19FCCC9182A790DF9BC5ED3EB05689 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_get_UseUnicode_m8A0196860F19FCCC9182A790DF9BC5ED3EB05689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return codePage == Encoding.UTF8.CodePage;
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->get_codePage_0();
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_1 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Text.Encoding::get_CodePage() */, L_1);
		return (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipStrings::set_UseUnicode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipStrings_set_UseUnicode_m0582064708699779B2988C392D730BE0554E2B43 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_set_UseUnicode_m0582064708699779B2988C392D730BE0554E2B43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// codePage = Encoding.UTF8.CodePage;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_1 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Text.Encoding::get_CodePage() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->set_codePage_0(L_2);
		// }
		return;
	}

IL_0013:
	{
		// codePage = SystemDefaultCodePage;
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		int32_t L_3 = ZipStrings_get_SystemDefaultCodePage_mFDB66669B80E1C318C5D94F017AF0653D799B219_inline(/*hidden argument*/NULL);
		((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->set_codePage_0(L_3);
		// }
		return;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipStrings::ConvertToString(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipStrings_ConvertToString_m0254A59771E87589203182B9309184161C27B14A (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_ConvertToString_m0254A59771E87589203182B9309184161C27B14A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => data == null
		// ? string.Empty
		// : Encoding.GetEncoding(CodePage).GetString(data, 0, count);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		int32_t L_1 = ZipStrings_get_CodePage_m8C98CC1D09B639ACCEC88561429D6D36403401A3(/*hidden argument*/NULL);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_2 = Encoding_GetEncoding_m0F51F30DFDD74D989E27C58C53FC82718CC51F68(L_1, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___data0;
		int32_t L_4 = ___count1;
		NullCheck(L_2);
		String_t* L_5 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, L_4);
		return L_5;
	}

IL_0016:
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_6;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipStrings::ConvertToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipStrings_ConvertToString_m1546E8F8B50993B840ED5CFF0B048B68F3A42CD8 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_ConvertToString_m1546E8F8B50993B840ED5CFF0B048B68F3A42CD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => ConvertToString(data, data.Length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___data0;
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		String_t* L_2 = ZipStrings_ConvertToString_m0254A59771E87589203182B9309184161C27B14A(L_0, (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Text.Encoding ICSharpCode.SharpZipLib.Zip.ZipStrings::EncodingFromFlag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ZipStrings_EncodingFromFlag_m1C71060E3A402B4ABBAB3F02A5246AA21BFC5E50 (int32_t ___flags0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_EncodingFromFlag_m1C71060E3A402B4ABBAB3F02A5246AA21BFC5E50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		// => ((flags & (int)GeneralBitFlags.UnicodeText) != 0)
		//     ? Encoding.UTF8
		//     : Encoding.GetEncoding(
		//         // if CodePage wasn't set manually and no utf flag present
		//         // then we must use SystemDefault (old behavior)
		//         // otherwise, CodePage should be preferred over SystemDefault
		//         // see https://github.com/icsharpcode/SharpZipLib/issues/274
		//         codePage == AutomaticCodePage?
		//             SystemDefaultCodePage:
		//             codePage);
		int32_t L_0 = ___flags0;
		if (((int32_t)((int32_t)L_0&(int32_t)((int32_t)2048))))
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->get_codePage_0();
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		int32_t L_2 = ((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->get_codePage_0();
		G_B4_0 = L_2;
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		int32_t L_3 = ZipStrings_get_SystemDefaultCodePage_mFDB66669B80E1C318C5D94F017AF0653D799B219_inline(/*hidden argument*/NULL);
		G_B4_0 = L_3;
	}

IL_001d:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_4 = Encoding_GetEncoding_m0F51F30DFDD74D989E27C58C53FC82718CC51F68(G_B4_0, /*hidden argument*/NULL);
		return L_4;
	}

IL_0023:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_5 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		return L_5;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipStrings::ConvertToStringExt(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipStrings_ConvertToStringExt_mDC7A4C65482F89262185878E8AFABDA18F3B5F40 (int32_t ___flags0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_ConvertToStringExt_mDC7A4C65482F89262185878E8AFABDA18F3B5F40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => (data == null)
		//     ? string.Empty
		//     : EncodingFromFlag(flags).GetString(data, 0, count);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___data1;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___flags0;
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_2 = ZipStrings_EncodingFromFlag_m1C71060E3A402B4ABBAB3F02A5246AA21BFC5E50(L_1, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___data1;
		int32_t L_4 = ___count2;
		NullCheck(L_2);
		String_t* L_5 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, L_4);
		return L_5;
	}

IL_0012:
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_6;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipStrings::ConvertToStringExt(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipStrings_ConvertToStringExt_mAE2B70106D281A6C393BEA63BBA3F21CE25B3DFE (int32_t ___flags0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_ConvertToStringExt_mAE2B70106D281A6C393BEA63BBA3F21CE25B3DFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => ConvertToStringExt(flags, data, data.Length);
		int32_t L_0 = ___flags0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___data1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data1;
		NullCheck(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		String_t* L_3 = ZipStrings_ConvertToStringExt_mDC7A4C65482F89262185878E8AFABDA18F3B5F40(L_0, L_1, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipStrings::ConvertToArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ZipStrings_ConvertToArray_m3BE8EC43ECA5CD1BB18D4994A5B9E5F534EEB686 (String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_ConvertToArray_m3BE8EC43ECA5CD1BB18D4994A5B9E5F534EEB686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => str == null
		// ? new byte[0]
		// : Encoding.GetEncoding(CodePage).GetBytes(str);
		String_t* L_0 = ___str0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		int32_t L_1 = ZipStrings_get_CodePage_m8C98CC1D09B639ACCEC88561429D6D36403401A3(/*hidden argument*/NULL);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_2 = Encoding_GetEncoding_m0F51F30DFDD74D989E27C58C53FC82718CC51F68(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___str0;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		return L_4;
	}

IL_0014:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_5;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipStrings::ConvertToArray(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ZipStrings_ConvertToArray_mCA3E762D116FDEA744914D131559874EBF9D53AF (int32_t ___flags0, String_t* ___str1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_ConvertToArray_mCA3E762D116FDEA744914D131559874EBF9D53AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => (string.IsNullOrEmpty(str))
		//     ? new byte[0]
		//     : EncodingFromFlag(flags).GetBytes(str);
		String_t* L_0 = ___str1;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___flags0;
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_3 = ZipStrings_EncodingFromFlag_m1C71060E3A402B4ABBAB3F02A5246AA21BFC5E50(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___str1;
		NullCheck(L_3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
		return L_5;
	}

IL_0015:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_6;
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
// System.Void ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipTestResultHandler__ctor_m966367956CA62D3624D23DF56007F408DC25C4C9 (ZipTestResultHandler_tDF1DA7FF30407B1B36C65CB7772FD9BF3E2031D2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler::Invoke(ICSharpCode.SharpZipLib.Zip.TestStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipTestResultHandler_Invoke_m3C1AC5BC7927D207B1FD81B7FEF68741C5891723 (ZipTestResultHandler_tDF1DA7FF30407B1B36C65CB7772FD9BF3E2031D2 * __this, TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926 * ___status0, String_t* ___message1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___message1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___status0, ___message1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___status0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___status0, ___message1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___status0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926 *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___status0, ___message1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926 *, String_t* >::Invoke(targetMethod, targetThis, ___status0, ___message1);
					else
						GenericVirtActionInvoker2< TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926 *, String_t* >::Invoke(targetMethod, targetThis, ___status0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0, ___message1);
					else
						VirtActionInvoker2< TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler::BeginInvoke(ICSharpCode.SharpZipLib.Zip.TestStatus,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipTestResultHandler_BeginInvoke_m7AFF1D5F1B6484F50E20B7A888116DCC6F5A462C (ZipTestResultHandler_tDF1DA7FF30407B1B36C65CB7772FD9BF3E2031D2 * __this, TestStatus_t334DE3C9C3EE354F315EB480CF28101DCAA02926 * ___status0, String_t* ___message1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___status0;
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipTestResultHandler_EndInvoke_m422E5AF6B9BBB89DD5351EFEFC0A7457CD7D5DFA (ZipTestResultHandler_tDF1DA7FF30407B1B36C65CB7772FD9BF3E2031D2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean SampleTable::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SampleTable_IsLoaded_m39E6B3C3E4EBEA196A2DE980431EB077013D8151 (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, const RuntimeMethod* method)
{
	{
		// return isLoaded;
		bool L_0 = __this->get_isLoaded_1();
		return L_0;
	}
}
// System.Collections.Generic.List`1<SampleTable_Row> SampleTable::GetRowList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * SampleTable_GetRowList_mFB10CB0331D73A105DAE9744A7D3EF6E050F2DA5 (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, const RuntimeMethod* method)
{
	{
		// return rowList;
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_0 = __this->get_rowList_0();
		return L_0;
	}
}
// System.Void SampleTable::Load(UnityEngine.TextAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleTable_Load_m385E2957EAF4EE5C9C8AB06582EDBE98BCAD01AB (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E * ___csv0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_Load_m385E2957EAF4EE5C9C8AB06582EDBE98BCAD01AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* V_0 = NULL;
	int32_t V_1 = 0;
	Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * V_2 = NULL;
	{
		// rowList.Clear();
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_0 = __this->get_rowList_0();
		NullCheck(L_0);
		List_1_Clear_mD97E64FC18723DC1E9D8CD0E952DBD408C86CC83(L_0, /*hidden argument*/List_1_Clear_mD97E64FC18723DC1E9D8CD0E952DBD408C86CC83_RuntimeMethod_var);
		// string[][] grid = CsvParser2.Parse(csv.text);
		TextAsset_tEE9F5A28C3B564D6BA849C45C13192B9E0EF8D4E * L_1 = ___csv0;
		NullCheck(L_1);
		String_t* L_2 = TextAsset_get_text_mD3FBCD974CF552C7F7C7CD9A07BACAE51A2C5D42(L_1, /*hidden argument*/NULL);
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_3 = CsvParser2_Parse_m505DFFF17F7E12EDC1612BB22AC5C920E872CC8E(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// for(int i = 1 ; i < grid.Length ; i++)
		V_1 = 1;
		goto IL_0068;
	}

IL_001b:
	{
		// Row row = new Row();
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_4 = (Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A *)il2cpp_codegen_object_new(Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A_il2cpp_TypeInfo_var);
		Row__ctor_mCF4ADBC106A8193744479F149920FC88D51FE49B(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		// row.Year = grid[i][0];
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_5 = V_2;
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_5);
		L_5->set_Year_0(L_11);
		// row.Make = grid[i][1];
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_12 = V_2;
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = 1;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		L_12->set_Make_1(L_18);
		// row.Model = grid[i][2];
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_19 = V_2;
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		int32_t L_24 = 2;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_19);
		L_19->set_Model_2(L_25);
		// row.Description = grid[i][3];
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_26 = V_2;
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_27 = V_0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		int32_t L_31 = 3;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		L_26->set_Description_3(L_32);
		// row.Price = grid[i][4];
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_33 = V_2;
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_34 = V_0;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_37 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		int32_t L_38 = 4;
		String_t* L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		L_33->set_Price_4(L_39);
		// rowList.Add(row);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_40 = __this->get_rowList_0();
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_41 = V_2;
		NullCheck(L_40);
		List_1_Add_mBDA318FD8FFCE232E156B16743774AC52DF318F2(L_40, L_41, /*hidden argument*/List_1_Add_mBDA318FD8FFCE232E156B16743774AC52DF318F2_RuntimeMethod_var);
		// for(int i = 1 ; i < grid.Length ; i++)
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_0068:
	{
		// for(int i = 1 ; i < grid.Length ; i++)
		int32_t L_43 = V_1;
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_44 = V_0;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		// isLoaded = true;
		__this->set_isLoaded_1((bool)1);
		// }
		return;
	}
}
// System.Int32 SampleTable::NumRows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SampleTable_NumRows_m5AFC12150E063D7F145D1AA275C716557312D68E (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_NumRows_m5AFC12150E063D7F145D1AA275C716557312D68E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return rowList.Count;
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_0 = __this->get_rowList_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m296605FADD940ECB7C32C051FD6C7BE98D5F582B_inline(L_0, /*hidden argument*/List_1_get_Count_m296605FADD940ECB7C32C051FD6C7BE98D5F582B_RuntimeMethod_var);
		return L_1;
	}
}
// SampleTable_Row SampleTable::GetAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * SampleTable_GetAt_m74D5970C4F35C804E129E8CAFE0C4F8C7EC718EF (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_GetAt_m74D5970C4F35C804E129E8CAFE0C4F8C7EC718EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(rowList.Count <= i)
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_0 = __this->get_rowList_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m296605FADD940ECB7C32C051FD6C7BE98D5F582B_inline(L_0, /*hidden argument*/List_1_get_Count_m296605FADD940ECB7C32C051FD6C7BE98D5F582B_RuntimeMethod_var);
		int32_t L_2 = ___i0;
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		return (Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A *)NULL;
	}

IL_0010:
	{
		// return rowList[i];
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_3 = __this->get_rowList_0();
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_5 = List_1_get_Item_m28E3F5D4E6ED522A019896F0A575A8D7B9A2D4DE_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m28E3F5D4E6ED522A019896F0A575A8D7B9A2D4DE_RuntimeMethod_var);
		return L_5;
	}
}
// SampleTable_Row SampleTable::Find_Year(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * SampleTable_Find_Year_m1E33F2324891F3C0263B4E08087AB89550917227 (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, String_t* ___find0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_Find_Year_m1E33F2324891F3C0263B4E08087AB89550917227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B * L_0 = (U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_mB9CAE4AB8639129BFB0E27B4BE06EB8989F9F193(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B * L_1 = V_0;
		String_t* L_2 = ___find0;
		NullCheck(L_1);
		L_1->set_find_0(L_2);
		// return rowList.Find(x => x.Year == find);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_3 = __this->get_rowList_0();
		U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B * L_4 = V_0;
		Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * L_5 = (Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *)il2cpp_codegen_object_new(Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CFind_YearU3Eb__0_m37F8EB4AA2401366334F9BFDF7844E55E388DFC5_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600_RuntimeMethod_var);
		NullCheck(L_3);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_6 = List_1_Find_m4DC4CCF1D7DB1365CA18AF86D982A1AA093C74BF(L_3, L_5, /*hidden argument*/List_1_Find_m4DC4CCF1D7DB1365CA18AF86D982A1AA093C74BF_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.List`1<SampleTable_Row> SampleTable::FindAll_Year(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * SampleTable_FindAll_Year_mCE894ECBA9EB98D23EE4E014F4DE8383481CEF7F (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, String_t* ___find0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_FindAll_Year_mCE894ECBA9EB98D23EE4E014F4DE8383481CEF7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1 * L_0 = (U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_mEE81E744FDE0C4A80FAE028538F99EEF84F4D524(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1 * L_1 = V_0;
		String_t* L_2 = ___find0;
		NullCheck(L_1);
		L_1->set_find_0(L_2);
		// return rowList.FindAll(x => x.Year == find);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_3 = __this->get_rowList_0();
		U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1 * L_4 = V_0;
		Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * L_5 = (Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *)il2cpp_codegen_object_new(Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CFindAll_YearU3Eb__0_mEC471FADE1C656D08A375A335A838A5D4953FA00_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_6 = List_1_FindAll_mD5F6AD75B6054220CAEB130D5C5A10200D6FF45C(L_3, L_5, /*hidden argument*/List_1_FindAll_mD5F6AD75B6054220CAEB130D5C5A10200D6FF45C_RuntimeMethod_var);
		return L_6;
	}
}
// SampleTable_Row SampleTable::Find_Make(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * SampleTable_Find_Make_mA3B625F5759B9E77FBD2929194CBD223566DD883 (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, String_t* ___find0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_Find_Make_mA3B625F5759B9E77FBD2929194CBD223566DD883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13 * L_0 = (U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10_0__ctor_mDAAE53EAF38C0742BD4806F239C157416201F262(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13 * L_1 = V_0;
		String_t* L_2 = ___find0;
		NullCheck(L_1);
		L_1->set_find_0(L_2);
		// return rowList.Find(x => x.Make == find);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_3 = __this->get_rowList_0();
		U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13 * L_4 = V_0;
		Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * L_5 = (Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *)il2cpp_codegen_object_new(Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass10_0_U3CFind_MakeU3Eb__0_m7E82A16D38447CB2EDA69C795DB1F981C0FF43D6_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600_RuntimeMethod_var);
		NullCheck(L_3);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_6 = List_1_Find_m4DC4CCF1D7DB1365CA18AF86D982A1AA093C74BF(L_3, L_5, /*hidden argument*/List_1_Find_m4DC4CCF1D7DB1365CA18AF86D982A1AA093C74BF_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.List`1<SampleTable_Row> SampleTable::FindAll_Make(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * SampleTable_FindAll_Make_mF6BA22F204BB70843E1875DCF0EB47E1041FE861 (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, String_t* ___find0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_FindAll_Make_mF6BA22F204BB70843E1875DCF0EB47E1041FE861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634 * L_0 = (U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_0__ctor_m970FD1D38C9355F42A48D6AADD99BEAF690B5238(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634 * L_1 = V_0;
		String_t* L_2 = ___find0;
		NullCheck(L_1);
		L_1->set_find_0(L_2);
		// return rowList.FindAll(x => x.Make == find);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_3 = __this->get_rowList_0();
		U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634 * L_4 = V_0;
		Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * L_5 = (Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *)il2cpp_codegen_object_new(Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass11_0_U3CFindAll_MakeU3Eb__0_mDE50E862C73B6075CAC113CCC684DCA4030BD021_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_6 = List_1_FindAll_mD5F6AD75B6054220CAEB130D5C5A10200D6FF45C(L_3, L_5, /*hidden argument*/List_1_FindAll_mD5F6AD75B6054220CAEB130D5C5A10200D6FF45C_RuntimeMethod_var);
		return L_6;
	}
}
// SampleTable_Row SampleTable::Find_Model(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * SampleTable_Find_Model_m880E46FE9539C6EADB0A903CA23BE816E7549BAD (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, String_t* ___find0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_Find_Model_m880E46FE9539C6EADB0A903CA23BE816E7549BAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369 * L_0 = (U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass12_0__ctor_m855CE13CC63065800400A74E11F5208F45342202(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369 * L_1 = V_0;
		String_t* L_2 = ___find0;
		NullCheck(L_1);
		L_1->set_find_0(L_2);
		// return rowList.Find(x => x.Model == find);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_3 = __this->get_rowList_0();
		U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369 * L_4 = V_0;
		Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * L_5 = (Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *)il2cpp_codegen_object_new(Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CFind_ModelU3Eb__0_mF4046ED3FB520AC56DB3AFE435CB4AC6898CCAAA_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600_RuntimeMethod_var);
		NullCheck(L_3);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_6 = List_1_Find_m4DC4CCF1D7DB1365CA18AF86D982A1AA093C74BF(L_3, L_5, /*hidden argument*/List_1_Find_m4DC4CCF1D7DB1365CA18AF86D982A1AA093C74BF_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.List`1<SampleTable_Row> SampleTable::FindAll_Model(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * SampleTable_FindAll_Model_mAA24143143C3187D82D98DD1F6732FD45F1F3738 (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, String_t* ___find0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_FindAll_Model_mAA24143143C3187D82D98DD1F6732FD45F1F3738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D * L_0 = (U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_mF659046A41E0FC2AE6959439798307AF85281D93(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D * L_1 = V_0;
		String_t* L_2 = ___find0;
		NullCheck(L_1);
		L_1->set_find_0(L_2);
		// return rowList.FindAll(x => x.Model == find);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_3 = __this->get_rowList_0();
		U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D * L_4 = V_0;
		Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * L_5 = (Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *)il2cpp_codegen_object_new(Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CFindAll_ModelU3Eb__0_m30E98835AC1F5D3F720BC9E5F6CBFAB908D22C43_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_6 = List_1_FindAll_mD5F6AD75B6054220CAEB130D5C5A10200D6FF45C(L_3, L_5, /*hidden argument*/List_1_FindAll_mD5F6AD75B6054220CAEB130D5C5A10200D6FF45C_RuntimeMethod_var);
		return L_6;
	}
}
// SampleTable_Row SampleTable::Find_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * SampleTable_Find_Description_m9F6FA032393A1964373C0670FBC79B4477863D39 (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, String_t* ___find0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_Find_Description_m9F6FA032393A1964373C0670FBC79B4477863D39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC * L_0 = (U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass14_0__ctor_mB22992F228ACC42F9315BDE45AA80989D33ECBFC(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC * L_1 = V_0;
		String_t* L_2 = ___find0;
		NullCheck(L_1);
		L_1->set_find_0(L_2);
		// return rowList.Find(x => x.Description == find);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_3 = __this->get_rowList_0();
		U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC * L_4 = V_0;
		Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * L_5 = (Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *)il2cpp_codegen_object_new(Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass14_0_U3CFind_DescriptionU3Eb__0_mC9CA2861F0024B2BE7DCA1917DD0CA09DC989930_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600_RuntimeMethod_var);
		NullCheck(L_3);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_6 = List_1_Find_m4DC4CCF1D7DB1365CA18AF86D982A1AA093C74BF(L_3, L_5, /*hidden argument*/List_1_Find_m4DC4CCF1D7DB1365CA18AF86D982A1AA093C74BF_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.List`1<SampleTable_Row> SampleTable::FindAll_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * SampleTable_FindAll_Description_mCB66F564BAB2A067B8E6401CDDA686A449B70C6F (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, String_t* ___find0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_FindAll_Description_mCB66F564BAB2A067B8E6401CDDA686A449B70C6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F * L_0 = (U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass15_0__ctor_m5F44EDC8E2629FC292D877A81366B3E8C1F0297B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F * L_1 = V_0;
		String_t* L_2 = ___find0;
		NullCheck(L_1);
		L_1->set_find_0(L_2);
		// return rowList.FindAll(x => x.Description == find);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_3 = __this->get_rowList_0();
		U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F * L_4 = V_0;
		Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * L_5 = (Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *)il2cpp_codegen_object_new(Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass15_0_U3CFindAll_DescriptionU3Eb__0_mE4EA5E1626ED6D3B34D8903C410AB41821E988EB_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_6 = List_1_FindAll_mD5F6AD75B6054220CAEB130D5C5A10200D6FF45C(L_3, L_5, /*hidden argument*/List_1_FindAll_mD5F6AD75B6054220CAEB130D5C5A10200D6FF45C_RuntimeMethod_var);
		return L_6;
	}
}
// SampleTable_Row SampleTable::Find_Price(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * SampleTable_Find_Price_mB9406F30A00A7B4EB10BB48F80B6033C32952452 (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, String_t* ___find0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_Find_Price_mB9406F30A00A7B4EB10BB48F80B6033C32952452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F * L_0 = (U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass16_0__ctor_m83F2E269AE4010AA11D5A6966AFB0CF79CE6E146(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F * L_1 = V_0;
		String_t* L_2 = ___find0;
		NullCheck(L_1);
		L_1->set_find_0(L_2);
		// return rowList.Find(x => x.Price == find);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_3 = __this->get_rowList_0();
		U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F * L_4 = V_0;
		Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * L_5 = (Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *)il2cpp_codegen_object_new(Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_0_U3CFind_PriceU3Eb__0_m229EC4F48FC4D0EE459C3843A24B0CC676CA94FD_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600_RuntimeMethod_var);
		NullCheck(L_3);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_6 = List_1_Find_m4DC4CCF1D7DB1365CA18AF86D982A1AA093C74BF(L_3, L_5, /*hidden argument*/List_1_Find_m4DC4CCF1D7DB1365CA18AF86D982A1AA093C74BF_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.List`1<SampleTable_Row> SampleTable::FindAll_Price(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * SampleTable_FindAll_Price_mE8BDC2C2FD6D3BB5C9362244DF7F2387FA6ECFA1 (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, String_t* ___find0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable_FindAll_Price_mE8BDC2C2FD6D3BB5C9362244DF7F2387FA6ECFA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9 * L_0 = (U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass17_0__ctor_mA34A6894B9C3EFFFEA06C172974485237AF1C331(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9 * L_1 = V_0;
		String_t* L_2 = ___find0;
		NullCheck(L_1);
		L_1->set_find_0(L_2);
		// return rowList.FindAll(x => x.Price == find);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_3 = __this->get_rowList_0();
		U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9 * L_4 = V_0;
		Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E * L_5 = (Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E *)il2cpp_codegen_object_new(Predicate_1_t9B995AF3F378C68F381A86A94981253D566B468E_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass17_0_U3CFindAll_PriceU3Eb__0_m4F1BF2821C7ED1F382C906A9CB099D7A1B6DA250_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m4BD1D3294DD56C2D5AF29F90E1F71068F60DC600_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_6 = List_1_FindAll_mD5F6AD75B6054220CAEB130D5C5A10200D6FF45C(L_3, L_5, /*hidden argument*/List_1_FindAll_mD5F6AD75B6054220CAEB130D5C5A10200D6FF45C_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void SampleTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleTable__ctor_m52E396D123B6AC413D483467404A58797717313E (SampleTable_tBF6810AB11364B4CE97617CD09A1EEC86FEF285E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleTable__ctor_m52E396D123B6AC413D483467404A58797717313E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Row> rowList = new List<Row>();
		List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 * L_0 = (List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65 *)il2cpp_codegen_object_new(List_1_t29BCDF3CC55925BE4B043C79791341EB4232AD65_il2cpp_TypeInfo_var);
		List_1__ctor_m6271CC3DE8ADE6F7315529CD38C69C0B6B71490E(L_0, /*hidden argument*/List_1__ctor_m6271CC3DE8ADE6F7315529CD38C69C0B6B71490E_RuntimeMethod_var);
		__this->set_rowList_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void SampleTable_<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mDAAE53EAF38C0742BD4806F239C157416201F262 (U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SampleTable_<>c__DisplayClass10_0::<Find_Make>b__0(SampleTable_Row)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CFind_MakeU3Eb__0_m7E82A16D38447CB2EDA69C795DB1F981C0FF43D6 (U3CU3Ec__DisplayClass10_0_tF64F7B335381785B3553AA314C8B751D26BBDA13 * __this, Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * ___x0, const RuntimeMethod* method)
{
	{
		// return rowList.Find(x => x.Make == find);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Make_1();
		String_t* L_2 = __this->get_find_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void SampleTable_<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m970FD1D38C9355F42A48D6AADD99BEAF690B5238 (U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SampleTable_<>c__DisplayClass11_0::<FindAll_Make>b__0(SampleTable_Row)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass11_0_U3CFindAll_MakeU3Eb__0_mDE50E862C73B6075CAC113CCC684DCA4030BD021 (U3CU3Ec__DisplayClass11_0_t47EC22EB0D5D66CBE5315828E206DCF7DAFA9634 * __this, Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * ___x0, const RuntimeMethod* method)
{
	{
		// return rowList.FindAll(x => x.Make == find);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Make_1();
		String_t* L_2 = __this->get_find_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void SampleTable_<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m855CE13CC63065800400A74E11F5208F45342202 (U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SampleTable_<>c__DisplayClass12_0::<Find_Model>b__0(SampleTable_Row)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CFind_ModelU3Eb__0_mF4046ED3FB520AC56DB3AFE435CB4AC6898CCAAA (U3CU3Ec__DisplayClass12_0_tBA77266330CB10253EBF1373309A043F87ED5369 * __this, Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * ___x0, const RuntimeMethod* method)
{
	{
		// return rowList.Find(x => x.Model == find);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Model_2();
		String_t* L_2 = __this->get_find_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void SampleTable_<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mF659046A41E0FC2AE6959439798307AF85281D93 (U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SampleTable_<>c__DisplayClass13_0::<FindAll_Model>b__0(SampleTable_Row)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CFindAll_ModelU3Eb__0_m30E98835AC1F5D3F720BC9E5F6CBFAB908D22C43 (U3CU3Ec__DisplayClass13_0_t79EE433E97F8D676D5603B252B0269F3D814881D * __this, Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * ___x0, const RuntimeMethod* method)
{
	{
		// return rowList.FindAll(x => x.Model == find);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Model_2();
		String_t* L_2 = __this->get_find_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void SampleTable_<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mB22992F228ACC42F9315BDE45AA80989D33ECBFC (U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SampleTable_<>c__DisplayClass14_0::<Find_Description>b__0(SampleTable_Row)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CFind_DescriptionU3Eb__0_mC9CA2861F0024B2BE7DCA1917DD0CA09DC989930 (U3CU3Ec__DisplayClass14_0_tD2F03284D3FC847C27C4221DB34CFDFEAA5E25BC * __this, Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * ___x0, const RuntimeMethod* method)
{
	{
		// return rowList.Find(x => x.Description == find);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Description_3();
		String_t* L_2 = __this->get_find_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void SampleTable_<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m5F44EDC8E2629FC292D877A81366B3E8C1F0297B (U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SampleTable_<>c__DisplayClass15_0::<FindAll_Description>b__0(SampleTable_Row)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CFindAll_DescriptionU3Eb__0_mE4EA5E1626ED6D3B34D8903C410AB41821E988EB (U3CU3Ec__DisplayClass15_0_t954AC39209A2837C88513B32F73DB4035502E75F * __this, Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * ___x0, const RuntimeMethod* method)
{
	{
		// return rowList.FindAll(x => x.Description == find);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Description_3();
		String_t* L_2 = __this->get_find_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void SampleTable_<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m83F2E269AE4010AA11D5A6966AFB0CF79CE6E146 (U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SampleTable_<>c__DisplayClass16_0::<Find_Price>b__0(SampleTable_Row)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass16_0_U3CFind_PriceU3Eb__0_m229EC4F48FC4D0EE459C3843A24B0CC676CA94FD (U3CU3Ec__DisplayClass16_0_tF424D3BCE6336156C49D03BBFD4B7E270755A69F * __this, Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * ___x0, const RuntimeMethod* method)
{
	{
		// return rowList.Find(x => x.Price == find);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Price_4();
		String_t* L_2 = __this->get_find_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void SampleTable_<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mA34A6894B9C3EFFFEA06C172974485237AF1C331 (U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SampleTable_<>c__DisplayClass17_0::<FindAll_Price>b__0(SampleTable_Row)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass17_0_U3CFindAll_PriceU3Eb__0_m4F1BF2821C7ED1F382C906A9CB099D7A1B6DA250 (U3CU3Ec__DisplayClass17_0_t5D088B19D9C2A40F2EA19C0EF07CD922170811F9 * __this, Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * ___x0, const RuntimeMethod* method)
{
	{
		// return rowList.FindAll(x => x.Price == find);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Price_4();
		String_t* L_2 = __this->get_find_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void SampleTable_<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mB9CAE4AB8639129BFB0E27B4BE06EB8989F9F193 (U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SampleTable_<>c__DisplayClass8_0::<Find_Year>b__0(SampleTable_Row)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CFind_YearU3Eb__0_m37F8EB4AA2401366334F9BFDF7844E55E388DFC5 (U3CU3Ec__DisplayClass8_0_t74BC7653046EAADE63FD2C7B0BB7443F70833F3B * __this, Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * ___x0, const RuntimeMethod* method)
{
	{
		// return rowList.Find(x => x.Year == find);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Year_0();
		String_t* L_2 = __this->get_find_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void SampleTable_<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mEE81E744FDE0C4A80FAE028538F99EEF84F4D524 (U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SampleTable_<>c__DisplayClass9_0::<FindAll_Year>b__0(SampleTable_Row)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CFindAll_YearU3Eb__0_mEC471FADE1C656D08A375A335A838A5D4953FA00 (U3CU3Ec__DisplayClass9_0_t156C1AE5EA37A59CD86503700F19F87E24BC86B1 * __this, Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * ___x0, const RuntimeMethod* method)
{
	{
		// return rowList.FindAll(x => x.Year == find);
		Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Year_0();
		String_t* L_2 = __this->get_find_0();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void SampleTable_Row::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Row__ctor_mCF4ADBC106A8193744479F149920FC88D51FE49B (Row_t79FEB1FB21477544C882DCEB3B9F8A375CC8B48A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void SzActivityTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SzActivityTime__ctor_m4D7342B0FFE0FE2EA69F4465D3A3EC82C8048C06 (SzActivityTime_tDB613C667BFB1C3004889B51F6251706AAC48FD5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.String TableCodeGen::Generate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TableCodeGen_Generate_mA428BBF2A0950990A6B2DE7647E6FB6A853C4C77 (String_t* ___csvText0, String_t* ___className1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TableCodeGen_Generate_mA428BBF2A0950990A6B2DE7647E6FB6A853C4C77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// if(string.IsNullOrEmpty(csvText))
		String_t* L_0 = ___csvText0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_000a:
	{
		// string[][] grid = CsvParser2.Parse(csvText);
		String_t* L_2 = ___csvText0;
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_3 = CsvParser2_Parse_m505DFFF17F7E12EDC1612BB22AC5C920E872CC8E(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if(grid.Length < 1)
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))) >= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0019:
	{
		// string rowMemberCode = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string rowReadCode = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string findCode = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for(int i = 0 ; i < grid[0].Length ; i++)
		V_4 = 0;
		goto IL_0087;
	}

IL_0030:
	{
		// rowMemberCode += string.Format("\t\tpublic string {0};\n", grid[0][i]);
		String_t* L_5 = V_1;
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		String_t* L_12 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral686CC87A7E15CE7B90C534C22A34D8E616035BED, L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_5, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// rowReadCode += string.Format("\t\t\trow.{0} = grid[i][{1}];\n", grid[0][i], i);
		String_t* L_14 = V_2;
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		String_t* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral50976EF67178628C3B61A887C8DF8DA9EC33C529, L_20, L_23, /*hidden argument*/NULL);
		String_t* L_25 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_14, L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		// findCode += findCodeTemplate.Replace("$COLUMN", grid[0][i]);
		String_t* L_26 = V_3;
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		String_t* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(_stringLiteral9DA4BE8C901BAE31174333E46B78B8C03EFC82A8);
		String_t* L_33 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(_stringLiteral9DA4BE8C901BAE31174333E46B78B8C03EFC82A8, _stringLiteral42C5E503550C6A319D5A55BE253BF31B4A2862CB, L_32, /*hidden argument*/NULL);
		String_t* L_34 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_26, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		// for(int i = 0 ; i < grid[0].Length ; i++)
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_0087:
	{
		// for(int i = 0 ; i < grid[0].Length ; i++)
		int32_t L_36 = V_4;
		StringU5BU5DU5BU5D_t0AAE55DE47BFC496856F28B72DD97B34F45EAFAD* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = 0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_39 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))))
		{
			goto IL_0030;
		}
	}
	{
		// string code = codeTemplate;
		// code = code.Replace("$CLASS", className);
		String_t* L_40 = ___className1;
		NullCheck(_stringLiteral5F70657E2FC0ECC61E42ACF23408599EC5042CA4);
		String_t* L_41 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(_stringLiteral5F70657E2FC0ECC61E42ACF23408599EC5042CA4, _stringLiteral7878EED8A43EFBE82FED259887C19809D3149313, L_40, /*hidden argument*/NULL);
		// code = code.Replace("$ROW_MEMBER_CODE", rowMemberCode);
		String_t* L_42 = V_1;
		NullCheck(L_41);
		String_t* L_43 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_41, _stringLiteral32F567C63C98B12BDDF9400DF6101DF8090AF2F6, L_42, /*hidden argument*/NULL);
		// code = code.Replace("$ROW_READ_CODE", rowReadCode);
		String_t* L_44 = V_2;
		NullCheck(L_43);
		String_t* L_45 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_43, _stringLiteralFBED4C94F4F4A0C0E3013BED38052A87C954D2B9, L_44, /*hidden argument*/NULL);
		// code = code.Replace("$FIND_CODE", findCode);
		String_t* L_46 = V_3;
		NullCheck(L_45);
		String_t* L_47 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_45, _stringLiteral0566E955CDC0CD4BFFCE284F3522117F82193A58, L_46, /*hidden argument*/NULL);
		// return code;
		return L_47;
	}
}
// System.Void TableCodeGen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableCodeGen__ctor_mDFE780F2EF598ECFCEDEDEBA9B927091812097E9 (TableCodeGen_t883A58517A3071069370EC21B37BAD32544EA124 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.String UINetworkImage::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UINetworkImage_get_Url_mD29EB1C750449E949369EF438E6A7EEEA158544A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UINetworkImage_get_Url_mD29EB1C750449E949369EF438E6A7EEEA158544A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Url { get; set; }
		String_t* L_0 = ((UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7_StaticFields*)il2cpp_codegen_static_fields_for(UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7_il2cpp_TypeInfo_var))->get_U3CUrlU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UINetworkImage::set_Url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UINetworkImage_set_Url_m7465949C36FEEE8CEC47AEAC86CA802A4DB7138B (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UINetworkImage_set_Url_m7465949C36FEEE8CEC47AEAC86CA802A4DB7138B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Url { get; set; }
		String_t* L_0 = ___value0;
		((UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7_StaticFields*)il2cpp_codegen_static_fields_for(UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7_il2cpp_TypeInfo_var))->set_U3CUrlU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UINetworkImage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UINetworkImage_Start_mFA4727D640295E663FA13D15C2401F5C6350E6B9 (UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(DownSprite());
		RuntimeObject* L_0 = UINetworkImage_DownSprite_mF4C4B3FC9C6E246CEA30C7FDEC29DF3DB7054712(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UINetworkImage::DownSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UINetworkImage_DownSprite_mF4C4B3FC9C6E246CEA30C7FDEC29DF3DB7054712 (UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UINetworkImage_DownSprite_mF4C4B3FC9C6E246CEA30C7FDEC29DF3DB7054712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C * L_0 = (U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C *)il2cpp_codegen_object_new(U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C_il2cpp_TypeInfo_var);
		U3CDownSpriteU3Ed__5__ctor_mC9E9C3927FCE949CAB2A08ACEFB1E30465F92A7E(L_0, 0, /*hidden argument*/NULL);
		U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UINetworkImage::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UINetworkImage_OnApplicationQuit_m6047B52391D6BC177B8504321744DB3391F65F24 (UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7 * __this, const RuntimeMethod* method)
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_mA5469BB7BBB59B8A94BB86590B051E0DFACC12DD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UINetworkImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UINetworkImage__ctor_m0E17C06051A6DC5227DB66BD3A775DBB8789172B (UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7 * __this, const RuntimeMethod* method)
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
// System.Void UINetworkImage_<DownSprite>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownSpriteU3Ed__5__ctor_mC9E9C3927FCE949CAB2A08ACEFB1E30465F92A7E (U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UINetworkImage_<DownSprite>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownSpriteU3Ed__5_System_IDisposable_Dispose_m2651E7CB4AC3139F4828F0C98B302876FE212F66 (U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UINetworkImage_<DownSprite>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDownSpriteU3Ed__5_MoveNext_m198CB72AFD973D3C44EC350086D73578CEB27412 (U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDownSpriteU3Ed__5_MoveNext_m198CB72AFD973D3C44EC350086D73578CEB27412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_4 = NULL;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * V_5 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// UnityWebRequest wr = new UnityWebRequest(Url);
		String_t* L_4 = UINetworkImage_get_Url_mD29EB1C750449E949369EF438E6A7EEEA158544A_inline(/*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_5 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)il2cpp_codegen_object_new(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m8D62097CE983222DC563B0F47C9FC2C9B7A5F41F(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CwrU3E5__2_3(L_5);
		// DownloadHandlerTexture texD1 = new DownloadHandlerTexture(true);
		DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * L_6 = (DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 *)il2cpp_codegen_object_new(DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4_il2cpp_TypeInfo_var);
		DownloadHandlerTexture__ctor_mCD6A98C8B262A0D16BBD90F242C68AFA1C71504D(L_6, (bool)1, /*hidden argument*/NULL);
		__this->set_U3CtexD1U3E5__3_4(L_6);
		// wr.downloadHandler = texD1;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_7 = __this->get_U3CwrU3E5__2_3();
		DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * L_8 = __this->get_U3CtexD1U3E5__3_4();
		NullCheck(L_7);
		UnityWebRequest_set_downloadHandler_mB481C2EE30F84B62396C1A837F46046F12B8FA7E(L_7, L_8, /*hidden argument*/NULL);
		// yield return wr.SendWebRequest();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_9 = __this->get_U3CwrU3E5__2_3();
		NullCheck(L_9);
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_10 = UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD(L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0065:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int width = 1920;
		V_2 = ((int32_t)1920);
		// int high = 1080;
		V_3 = ((int32_t)1080);
		// if(!wr.isNetworkError)
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_11 = __this->get_U3CwrU3E5__2_3();
		NullCheck(L_11);
		bool L_12 = UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00e4;
		}
	}
	{
		// Texture2D tex = new Texture2D(width, high);
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_15 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_15, L_13, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		// tex = texD1.texture;
		DownloadHandlerTexture_tDD365789CD15EDFB8582612507C8EE34C62A3DE4 * L_16 = __this->get_U3CtexD1U3E5__3_4();
		NullCheck(L_16);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_17 = DownloadHandlerTexture_get_texture_m07CC27F45F3628A969584963AC9D5B08016D685D(L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		// Sprite sprite = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), new Vector2(0.5f, 0.5f));
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_18 = V_4;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_19 = V_4;
		NullCheck(L_19);
		int32_t L_20 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_19);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_21 = V_4;
		NullCheck(L_21);
		int32_t L_22 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_21);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_23), (0.0f), (0.0f), (((float)((float)L_20))), (((float)((float)L_22))), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_24), (0.5f), (0.5f), /*hidden argument*/NULL);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_25 = Sprite_Create_m9ED36DA8DA0637F93BA2753A16405EB0F7B17A3C(L_18, L_23, L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		// transform.GetComponent<Image>().sprite = sprite;
		UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7 * L_26 = V_1;
		NullCheck(L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_28 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(L_27, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_29 = V_5;
		NullCheck(L_28);
		Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		// }
		return (bool)0;
	}
}
// System.Object UINetworkImage_<DownSprite>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDownSpriteU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDD479B374061089425365218496134D4D01307C1 (U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UINetworkImage_<DownSprite>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownSpriteU3Ed__5_System_Collections_IEnumerator_Reset_m07C11D7F4247B0326944344037EA4790F0894C54 (U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDownSpriteU3Ed__5_System_Collections_IEnumerator_Reset_m07C11D7F4247B0326944344037EA4790F0894C54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDownSpriteU3Ed__5_System_Collections_IEnumerator_Reset_m07C11D7F4247B0326944344037EA4790F0894C54_RuntimeMethod_var);
	}
}
// System.Object UINetworkImage_<DownSprite>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDownSpriteU3Ed__5_System_Collections_IEnumerator_get_Current_mCC3BA5DFF63891AA41C1915E03705C25BBD51DAE (U3CDownSpriteU3Ed__5_t05AE65666448648A90BB502D0305B55F4816D33C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UIProgressBar::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIProgressBar_OnEnable_mB13B663E825DAF4009C315C350466C2F694D9363 (UIProgressBar_t2FF6D8395FB020C8D2EC33F23235E7BF2FE38B96 * __this, const RuntimeMethod* method)
{
	{
		// _progressBar.fillAmount = 0f;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_0 = __this->get__progressBar_5();
		NullCheck(L_0);
		Image_set_fillAmount_m613B7AC920F2EA886AF0D931005C6CD13F89A160(L_0, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIProgressBar::SetProgress(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIProgressBar_SetProgress_m391A2B59A8787BE8D23BD8682083D0AE28571DC1 (UIProgressBar_t2FF6D8395FB020C8D2EC33F23235E7BF2FE38B96 * __this, float ___v0, bool ___instant1, const RuntimeMethod* method)
{
	{
		// _target = v;
		float L_0 = ___v0;
		__this->set__target_7(L_0);
		// if (instant) {
		bool L_1 = ___instant1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// _progressBar.fillAmount = v;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_2 = __this->get__progressBar_5();
		float L_3 = ___v0;
		NullCheck(L_2);
		Image_set_fillAmount_m613B7AC920F2EA886AF0D931005C6CD13F89A160(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UIProgressBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIProgressBar_Update_m47CD47D9FFE60009EF202626B758AA7CB2949A59 (UIProgressBar_t2FF6D8395FB020C8D2EC33F23235E7BF2FE38B96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIProgressBar_Update_m47CD47D9FFE60009EF202626B758AA7CB2949A59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _progressBar.fillAmount = Mathf.Lerp(_progressBar.fillAmount,_target,Time.deltaTime*Speed);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_0 = __this->get__progressBar_5();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_1 = __this->get__progressBar_5();
		NullCheck(L_1);
		float L_2 = Image_get_fillAmount_m5FF6EE8DB33C4A219B3677FB24F50A6E5CCF44F0_inline(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get__target_7();
		float L_4 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_5 = __this->get_Speed_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_2, L_3, ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Image_set_fillAmount_m613B7AC920F2EA886AF0D931005C6CD13F89A160(L_0, L_6, /*hidden argument*/NULL);
		// _progressText.text = Mathf.RoundToInt(  _progressBar.fillAmount * 100) + "%";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_7 = __this->get__progressText_4();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_8 = __this->get__progressBar_5();
		NullCheck(L_8);
		float L_9 = Image_get_fillAmount_m5FF6EE8DB33C4A219B3677FB24F50A6E5CCF44F0_inline(L_8, /*hidden argument*/NULL);
		int32_t L_10 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041(((float)il2cpp_codegen_multiply((float)L_9, (float)(100.0f))), /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(L_12, _stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_13);
		// }
		return;
	}
}
// System.Void UIProgressBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIProgressBar__ctor_mE05CFE6AC56CEBBAD9221171023C03EA5DF2C2A1 (UIProgressBar_t2FF6D8395FB020C8D2EC33F23235E7BF2FE38B96 * __this, const RuntimeMethod* method)
{
	{
		// public float Speed = 2f;
		__this->set_Speed_6((2.0f));
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
// System.String UriHelper::GetFileName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriHelper_GetFileName_mEA76D8EE7B2B4B6789FB580EE27AC9A71615F1FD (String_t* ___url0, bool ___removeKind1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UriHelper_GetFileName_mEA76D8EE7B2B4B6789FB580EE27AC9A71615F1FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string file = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		// Uri u = new Uri(url);
		String_t* L_1 = ___url0;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_2 = (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)il2cpp_codegen_object_new(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2(L_2, L_1, /*hidden argument*/NULL);
		// file = Path.GetFileName(u.AbsolutePath);
		NullCheck(L_2);
		String_t* L_3 = Uri_get_AbsolutePath_mA9A825E2BBD0A43AD76EB9A9765E29E45FE32F31(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_GetFileName_m2307E8E0B250632002840D9EC27DBABE9C4EB85E(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// return removeKind?file.Split('.')[0]:file;
		bool L_5 = ___removeKind1;
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		String_t* L_7 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_8 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = 0;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}
}
// System.Void UriHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriHelper__ctor_mB6F33D824BBE2F44E099D1FA02CE7218A43C0E83 (UriHelper_tB7DB0E6AFBD8133A6AC20D4ED04BFAC35DCC1098 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.String WKWebView::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WKWebView_get_Url_m930A2F995A968AC8E5AC3812C8CA616DCCCB90F0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WKWebView_get_Url_m930A2F995A968AC8E5AC3812C8CA616DCCCB90F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Url      { get; set; }
		String_t* L_0 = ((WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields*)il2cpp_codegen_static_fields_for(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_il2cpp_TypeInfo_var))->get_U3CUrlU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void WKWebView::set_Url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WKWebView_set_Url_m37B3FD6216CAAEF906199437922D47B47D07BBF0 (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WKWebView_set_Url_m37B3FD6216CAAEF906199437922D47B47D07BBF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Url      { get; set; }
		String_t* L_0 = ___value0;
		((WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields*)il2cpp_codegen_static_fields_for(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_il2cpp_TypeInfo_var))->set_U3CUrlU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String WKWebView::get_Uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WKWebView_get_Uri_mF4FDCB31E54E6D529B5D01A12A9C7A53E39EA356 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WKWebView_get_Uri_mF4FDCB31E54E6D529B5D01A12A9C7A53E39EA356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Uri      { get; set; }
		String_t* L_0 = ((WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields*)il2cpp_codegen_static_fields_for(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_il2cpp_TypeInfo_var))->get_U3CUriU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void WKWebView::set_Uri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WKWebView_set_Uri_mD7CE60520C02CBE3E51E1078C3985FFA6E033C06 (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WKWebView_set_Uri_mD7CE60520C02CBE3E51E1078C3985FFA6E033C06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Uri      { get; set; }
		String_t* L_0 = ___value0;
		((WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields*)il2cpp_codegen_static_fields_for(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_il2cpp_TypeInfo_var))->set_U3CUriU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Boolean WKWebView::get_IsHybrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WKWebView_get_IsHybrid_mD1DF325C9E8405BF905547D0F1296FC90CC701F2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WKWebView_get_IsHybrid_mD1DF325C9E8405BF905547D0F1296FC90CC701F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool   IsHybrid { get; set; }
		bool L_0 = ((WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields*)il2cpp_codegen_static_fields_for(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_il2cpp_TypeInfo_var))->get_U3CIsHybridU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void WKWebView::set_IsHybrid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WKWebView_set_IsHybrid_m04EA8F275041805A5D1FD251846BE4314DB03B32 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WKWebView_set_IsHybrid_m04EA8F275041805A5D1FD251846BE4314DB03B32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool   IsHybrid { get; set; }
		bool L_0 = ___value0;
		((WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields*)il2cpp_codegen_static_fields_for(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_il2cpp_TypeInfo_var))->set_U3CIsHybridU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void WKWebView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WKWebView_Start_m7A6EB0303F9F234A2665D3BCF40600BDBF1584E1 (WKWebView_tB621CFF722AE711E3D509DD012802941708797B3 * __this, const RuntimeMethod* method)
{
	WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * G_B4_0 = NULL;
	WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * G_B5_1 = NULL;
	{
		// Init();
		WKWebView_Init_mC67972E9E9D740E4BD8D9249B5205F774AA004EA(__this, /*hidden argument*/NULL);
		// if (!string.IsNullOrEmpty(forceUrl))
		String_t* L_0 = __this->get_forceUrl_5();
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// _webViewObject.LoadURL(forceUrl);
		WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * L_2 = __this->get__webViewObject_4();
		String_t* L_3 = __this->get_forceUrl_5();
		NullCheck(L_2);
		WebViewObject_LoadURL_m7EAA1907B006B634F59FADC507D81D6A9A89E661(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0044;
	}

IL_0026:
	{
		// _webViewObject.LoadURL(IsHybrid ? Uri : Url);
		WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * L_4 = __this->get__webViewObject_4();
		bool L_5 = WKWebView_get_IsHybrid_mD1DF325C9E8405BF905547D0F1296FC90CC701F2_inline(/*hidden argument*/NULL);
		G_B3_0 = L_4;
		if (L_5)
		{
			G_B4_0 = L_4;
			goto IL_003a;
		}
	}
	{
		String_t* L_6 = WKWebView_get_Url_m930A2F995A968AC8E5AC3812C8CA616DCCCB90F0_inline(/*hidden argument*/NULL);
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_003f;
	}

IL_003a:
	{
		String_t* L_7 = WKWebView_get_Uri_mF4FDCB31E54E6D529B5D01A12A9C7A53E39EA356_inline(/*hidden argument*/NULL);
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_003f:
	{
		NullCheck(G_B5_1);
		WebViewObject_LoadURL_m7EAA1907B006B634F59FADC507D81D6A9A89E661(G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// _webViewObject.SetVisibility(true);
		WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * L_8 = __this->get__webViewObject_4();
		NullCheck(L_8);
		WebViewObject_SetVisibility_m1D5FEE21D31AE46F8F4FE68A2AEA08EE8ED1FCDF(L_8, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WKWebView::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WKWebView_Init_mC67972E9E9D740E4BD8D9249B5205F774AA004EA (WKWebView_tB621CFF722AE711E3D509DD012802941708797B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WKWebView_Init_mC67972E9E9D740E4BD8D9249B5205F774AA004EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B2_0 = NULL;
	WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * G_B2_1 = NULL;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B1_0 = NULL;
	WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * G_B1_1 = NULL;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B4_3 = NULL;
	WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * G_B4_4 = NULL;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B3_3 = NULL;
	WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * G_B3_4 = NULL;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B6_2 = NULL;
	RuntimeObject * G_B6_3 = NULL;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B6_4 = NULL;
	String_t* G_B6_5 = NULL;
	int32_t G_B6_6 = 0;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B6_7 = NULL;
	WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * G_B6_8 = NULL;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B5_2 = NULL;
	RuntimeObject * G_B5_3 = NULL;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B5_4 = NULL;
	String_t* G_B5_5 = NULL;
	int32_t G_B5_6 = 0;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B5_7 = NULL;
	WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * G_B5_8 = NULL;
	{
		// _webViewObject = (new GameObject("WebViewObject")).AddComponent<WebViewObject>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral603B002F3D9948771406E30695DFD633CCF0F584, /*hidden argument*/NULL);
		NullCheck(L_0);
		WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * L_1 = GameObject_AddComponent_TisWebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D_m44CE5F2768BB2EE8B5DB72E9753151DE33424020(L_0, /*hidden argument*/GameObject_AddComponent_TisWebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D_m44CE5F2768BB2EE8B5DB72E9753151DE33424020_RuntimeMethod_var);
		__this->set__webViewObject_4(L_1);
		// _webViewObject.Init(
		//                     cb: (msg) => { Debug.Log(string.Format("CallFromJS[{0}]", msg)); },
		//                     err: (msg) => { Debug.Log(string.Format("CallOnError[{0}]", msg)); },
		//                     started: (msg) => { Debug.Log(string.Format("CallOnStarted[{0}]", msg)); },
		//                     ld: (msg) => { _webViewObject.SetVisibility(true); }, enableWKWebView: true,
		//                     transparent: true);
		WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * L_2 = __this->get__webViewObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_3 = ((U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var))->get_U3CU3E9__15_0_1();
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var);
		U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 * L_5 = ((U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_6 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_mD9D4E02AEE600236E03EBAB2449B68B482FAC69B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CInitU3Eb__15_0_m411E5EF4FFB2F04EA187A454054737968342E843_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD9D4E02AEE600236E03EBAB2449B68B482FAC69B_RuntimeMethod_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_7 = L_6;
		((U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var))->set_U3CU3E9__15_0_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_8 = ((U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var))->get_U3CU3E9__15_1_2();
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_2 = 1;
		G_B3_3 = G_B2_0;
		G_B3_4 = G_B2_1;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			G_B4_2 = 1;
			G_B4_3 = G_B2_0;
			G_B4_4 = G_B2_1;
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var);
		U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 * L_10 = ((U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_11 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_mD9D4E02AEE600236E03EBAB2449B68B482FAC69B(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CInitU3Eb__15_1_m696619A57D939CD7ED56D45B851A73C0841E8243_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD9D4E02AEE600236E03EBAB2449B68B482FAC69B_RuntimeMethod_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_12 = L_11;
		((U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var))->set_U3CU3E9__15_1_2(L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		G_B4_4 = G_B3_4;
	}

IL_005f:
	{
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_13 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_mD9D4E02AEE600236E03EBAB2449B68B482FAC69B(L_13, __this, (intptr_t)((intptr_t)WKWebView_U3CInitU3Eb__15_2_mBE2A98148DECF2C18DEBB6B794BEBE46C3F5B042_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD9D4E02AEE600236E03EBAB2449B68B482FAC69B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_14 = ((U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var))->get_U3CU3E9__15_3_3();
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_15 = L_14;
		G_B5_0 = L_15;
		G_B5_1 = 1;
		G_B5_2 = L_13;
		G_B5_3 = NULL;
		G_B5_4 = G_B4_0;
		G_B5_5 = G_B4_1;
		G_B5_6 = G_B4_2;
		G_B5_7 = G_B4_3;
		G_B5_8 = G_B4_4;
		if (L_15)
		{
			G_B6_0 = L_15;
			G_B6_1 = 1;
			G_B6_2 = L_13;
			G_B6_3 = NULL;
			G_B6_4 = G_B4_0;
			G_B6_5 = G_B4_1;
			G_B6_6 = G_B4_2;
			G_B6_7 = G_B4_3;
			G_B6_8 = G_B4_4;
			goto IL_008c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var);
		U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 * L_16 = ((U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_17 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_mD9D4E02AEE600236E03EBAB2449B68B482FAC69B(L_17, L_16, (intptr_t)((intptr_t)U3CU3Ec_U3CInitU3Eb__15_3_m64C3C4E32D47DD384247DBAB0AA7811947817B14_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD9D4E02AEE600236E03EBAB2449B68B482FAC69B_RuntimeMethod_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_18 = L_17;
		((U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var))->set_U3CU3E9__15_3_3(L_18);
		G_B6_0 = L_18;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
		G_B6_5 = G_B5_5;
		G_B6_6 = G_B5_6;
		G_B6_7 = G_B5_7;
		G_B6_8 = G_B5_8;
	}

IL_008c:
	{
		NullCheck(G_B6_8);
		WebViewObject_Init_mADBC52DF92AEC8D58B2EB5C5CFE3FC0C12822EE4(G_B6_8, G_B6_7, (bool)G_B6_6, G_B6_5, G_B6_4, (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)G_B6_3, G_B6_2, (bool)G_B6_1, G_B6_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WKWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WKWebView__ctor_m85E8F80E2DA1BBDC24B67F701A3A68C5A217F7D2 (WKWebView_tB621CFF722AE711E3D509DD012802941708797B3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WKWebView::<Init>b__15_2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WKWebView_U3CInitU3Eb__15_2_mBE2A98148DECF2C18DEBB6B794BEBE46C3F5B042 (WKWebView_tB621CFF722AE711E3D509DD012802941708797B3 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	{
		// ld: (msg) => { _webViewObject.SetVisibility(true); }, enableWKWebView: true,
		WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * L_0 = __this->get__webViewObject_4();
		NullCheck(L_0);
		WebViewObject_SetVisibility_m1D5FEE21D31AE46F8F4FE68A2AEA08EE8ED1FCDF(L_0, (bool)1, /*hidden argument*/NULL);
		// ld: (msg) => { _webViewObject.SetVisibility(true); }, enableWKWebView: true,
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
// System.Void WKWebView_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD806471B8C8440F39B5FF651C5FFE4D0D8870D49 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mD806471B8C8440F39B5FF651C5FFE4D0D8870D49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 * L_0 = (U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 *)il2cpp_codegen_object_new(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA6BC08612EB38FD6C5CD5F5092447412F0D912C3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void WKWebView_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA6BC08612EB38FD6C5CD5F5092447412F0D912C3 (U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WKWebView_<>c::<Init>b__15_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitU3Eb__15_0_m411E5EF4FFB2F04EA187A454054737968342E843 (U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CInitU3Eb__15_0_m411E5EF4FFB2F04EA187A454054737968342E843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cb: (msg) => { Debug.Log(string.Format("CallFromJS[{0}]", msg)); },
		String_t* L_0 = ___msg0;
		String_t* L_1 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralAE3473C9AE5ABE32020681D6A3D59A2233F52854, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// cb: (msg) => { Debug.Log(string.Format("CallFromJS[{0}]", msg)); },
		return;
	}
}
// System.Void WKWebView_<>c::<Init>b__15_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitU3Eb__15_1_m696619A57D939CD7ED56D45B851A73C0841E8243 (U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CInitU3Eb__15_1_m696619A57D939CD7ED56D45B851A73C0841E8243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// err: (msg) => { Debug.Log(string.Format("CallOnError[{0}]", msg)); },
		String_t* L_0 = ___msg0;
		String_t* L_1 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral91FD40030193DD67C77C02107C4213CA53FC5092, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// err: (msg) => { Debug.Log(string.Format("CallOnError[{0}]", msg)); },
		return;
	}
}
// System.Void WKWebView_<>c::<Init>b__15_3(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitU3Eb__15_3_m64C3C4E32D47DD384247DBAB0AA7811947817B14 (U3CU3Ec_t0F254306430EF3423D7891BB4B6FDA567C69CEA9 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CInitU3Eb__15_3_m64C3C4E32D47DD384247DBAB0AA7811947817B14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// started: (msg) => { Debug.Log(string.Format("CallOnStarted[{0}]", msg)); },
		String_t* L_0 = ___msg0;
		String_t* L_1 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral8166F5BEE862379C1B9DC4291CF61A2BCE2F00A9, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// started: (msg) => { Debug.Log(string.Format("CallOnStarted[{0}]", msg)); },
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
// System.Boolean WebRequestCert::ValidateCertificate(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequestCert_ValidateCertificate_m78C55875851FCE9CB4F1CCD1731F5B40CA1A2CBF (WebRequestCert_t36368B40295F59CFBD8BEF9D4EE2CF01D7CB67BC * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___certificateData0, const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void WebRequestCert::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestCert__ctor_m28B293369793DED544B7AF16B4A7429147A3B220 (WebRequestCert_t36368B40295F59CFBD8BEF9D4EE2CF01D7CB67BC * __this, const RuntimeMethod* method)
{
	{
		CertificateHandler__ctor_m59D87E57FBE1BBCAB56324059DF93A8629415A15(__this, /*hidden argument*/NULL);
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
// System.Collections.IEnumerator WebUtil::GetText(System.String,System.Action`1<System.String>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebUtil_GetText_m0F983FE2D4CF6348C679349098588AD4DF7F3FCA (String_t* ___url0, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___success1, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___failure2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebUtil_GetText_m0F983FE2D4CF6348C679349098588AD4DF7F3FCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989 * L_0 = (U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989 *)il2cpp_codegen_object_new(U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989_il2cpp_TypeInfo_var);
		U3CGetTextU3Ed__1__ctor_mE28D278DD71DB5540FAB753D4CB83DE790F1A2DC(L_0, 0, /*hidden argument*/NULL);
		U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989 * L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		L_1->set_url_2(L_2);
		U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989 * L_3 = L_1;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_4 = ___success1;
		NullCheck(L_3);
		L_3->set_success_4(L_4);
		U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989 * L_5 = L_3;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = ___failure2;
		NullCheck(L_5);
		L_5->set_failure_3(L_6);
		return L_5;
	}
}
// System.Collections.IEnumerator WebUtil::DownloadFile(System.String,System.Action`1<System.Byte[]>,System.Action`1<System.Single>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebUtil_DownloadFile_m09D176135627CD02088234421BA83DDD0679DC4F (String_t* ___url0, Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7 * ___onDownloaded1, Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * ___progress2, float ___delay3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebUtil_DownloadFile_m09D176135627CD02088234421BA83DDD0679DC4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 * L_0 = (U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 *)il2cpp_codegen_object_new(U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9_il2cpp_TypeInfo_var);
		U3CDownloadFileU3Ed__2__ctor_m054598DC86AC21C7A8B1E7DD9DF3644EADCCF059(L_0, 0, /*hidden argument*/NULL);
		U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 * L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		L_1->set_url_2(L_2);
		U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 * L_3 = L_1;
		Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7 * L_4 = ___onDownloaded1;
		NullCheck(L_3);
		L_3->set_onDownloaded_5(L_4);
		U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 * L_5 = L_3;
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_6 = ___progress2;
		NullCheck(L_5);
		L_5->set_progress_3(L_6);
		U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 * L_7 = L_5;
		float L_8 = ___delay3;
		NullCheck(L_7);
		L_7->set_delay_4(L_8);
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
// System.Void WebUtil_<DownloadFile>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadFileU3Ed__2__ctor_m054598DC86AC21C7A8B1E7DD9DF3644EADCCF059 (U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WebUtil_<DownloadFile>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadFileU3Ed__2_System_IDisposable_Dispose_mC2CE1B3A70B939520BBAF3D93526F19D12FD00CA (U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebUtil_<DownloadFile>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDownloadFileU3Ed__2_MoveNext_m62259D215BF11369C088B53955C92192CCD3F065 (U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDownloadFileU3Ed__2_MoveNext_m62259D215BF11369C088B53955C92192CCD3F065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * G_B5_0 = NULL;
	Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * G_B4_0 = NULL;
	Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7 * G_B14_0 = NULL;
	Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7 * G_B13_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_00b5;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("??" + url);
		String_t* L_2 = __this->get_url_2();
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral2B9D013177DA6700FBAEE9F12BB86452C577CAF6, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// UnityWebRequest www       = UnityWebRequest.Get(url);
		String_t* L_4 = __this->get_url_2();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_5 = UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18(L_4, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_6(L_5);
		// var             operation = www.SendWebRequest();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_6 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_6);
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_7 = UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD(L_6, /*hidden argument*/NULL);
		__this->set_U3CoperationU3E5__3_7(L_7);
		goto IL_008e;
	}

IL_005b:
	{
		// progress?.Invoke(www.downloadProgress);
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_8 = __this->get_progress_3();
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_0067;
		}
	}
	{
		goto IL_0077;
	}

IL_0067:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_10 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_10);
		float L_11 = UnityWebRequest_get_downloadProgress_mE09FED8FB4ED03B0BBC23A3A243B283D4E148DC5(L_10, /*hidden argument*/NULL);
		NullCheck(G_B5_0);
		Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55(G_B5_0, L_11, /*hidden argument*/Action_1_Invoke_m55B40D28F52C723538E0931710217972D6386F55_RuntimeMethod_var);
	}

IL_0077:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0087:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_008e:
	{
		// while (!operation.isDone) {
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_12 = __this->get_U3CoperationU3E5__3_7();
		NullCheck(L_12);
		bool L_13 = AsyncOperation_get_isDone_m2A08EE3D38FD9FE81F2D619FA66255B6F61DAB54(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		// yield return new WaitForSeconds(delay);
		float L_14 = __this->get_delay_4();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_15 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_15, L_14, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00b5:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (www.isNetworkError || www.isHttpError) {
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_16 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_16);
		bool L_17 = UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0102;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_18 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_18);
		bool L_19 = UnityWebRequest_get_isHttpError_m8F636B70C239EC848FACC83189DE0C22CADEC1C3(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0102;
		}
	}
	{
		// onDownloaded?.Invoke(www.downloadHandler.data);
		Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7 * L_20 = __this->get_onDownloaded_5();
		Action_1_t98224925EBFF210B057632BF4539B3B7AED96DC7 * L_21 = L_20;
		G_B13_0 = L_21;
		if (L_21)
		{
			G_B14_0 = L_21;
			goto IL_00e2;
		}
	}
	{
		goto IL_00f7;
	}

IL_00e2:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_22 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_22);
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_23 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = DownloadHandler_get_data_m4AE4E3764FBE186ABA89B5F3A7F91048EE5E38FB(L_23, /*hidden argument*/NULL);
		NullCheck(G_B14_0);
		Action_1_Invoke_mE14FF42ED04F6447A383F0D4ED7CB7A70FBB3346(G_B14_0, L_24, /*hidden argument*/Action_1_Invoke_mE14FF42ED04F6447A383F0D4ED7CB7A70FBB3346_RuntimeMethod_var);
	}

IL_00f7:
	{
		// www.Dispose();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_25 = __this->get_U3CwwwU3E5__2_6();
		NullCheck(L_25);
		UnityWebRequest_Dispose_m6AFA87DA329282058723E5ACE016B0B08CFE806D(L_25, /*hidden argument*/NULL);
	}

IL_0102:
	{
		// }
		return (bool)0;
	}
}
// System.Object WebUtil_<DownloadFile>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDownloadFileU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m73B9E931E248B8BC2A13610AC51EFF93DC40E1D9 (U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebUtil_<DownloadFile>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadFileU3Ed__2_System_Collections_IEnumerator_Reset_mD8D0760A40B0A52CBCE2BE3D43181CF47F61C876 (U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDownloadFileU3Ed__2_System_Collections_IEnumerator_Reset_mD8D0760A40B0A52CBCE2BE3D43181CF47F61C876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDownloadFileU3Ed__2_System_Collections_IEnumerator_Reset_mD8D0760A40B0A52CBCE2BE3D43181CF47F61C876_RuntimeMethod_var);
	}
}
// System.Object WebUtil_<DownloadFile>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDownloadFileU3Ed__2_System_Collections_IEnumerator_get_Current_m7ED6E972FC5DE6CAF207B2E8282F52BA53D3BEA5 (U3CDownloadFileU3Ed__2_t85F3F7350852422BF8A214FCF51AAE65B8ECD0C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void WebUtil_<GetText>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextU3Ed__1__ctor_mE28D278DD71DB5540FAB753D4CB83DE790F1A2DC (U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WebUtil_<GetText>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextU3Ed__1_System_IDisposable_Dispose_mAB91D4F2ECBE2406874F308E786A7574275FD625 (U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebUtil_<GetText>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetTextU3Ed__1_MoveNext_m42AB2A3ABD46C3641E2323B65F729A1265632AAC (U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetTextU3Ed__1_MoveNext_m42AB2A3ABD46C3641E2323B65F729A1265632AAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B8_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B7_0 = NULL;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B11_0 = NULL;
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * G_B10_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// UnityWebRequest www = UnityWebRequest.Get(url);
		String_t* L_3 = __this->get_url_2();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_4 = UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18(L_3, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_5(L_4);
		// yield return www.Send();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_5 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_5);
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_6 = UnityWebRequest_Send_mE2BC0213F05A8E6E8384AB4BB8BA75883BDD801F(L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (www.isNetworkError || www.isHttpError) {
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_7 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_7);
		bool L_8 = UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0063;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_9 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_9);
		bool L_10 = UnityWebRequest_get_isHttpError_m8F636B70C239EC848FACC83189DE0C22CADEC1C3(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0076;
		}
	}

IL_0063:
	{
		// failure?.Invoke();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_11 = __this->get_failure_3();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_12 = L_11;
		G_B7_0 = L_12;
		if (L_12)
		{
			G_B8_0 = L_12;
			goto IL_006f;
		}
	}
	{
		goto IL_0097;
	}

IL_006f:
	{
		NullCheck(G_B8_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B8_0, /*hidden argument*/NULL);
		// }
		goto IL_0097;
	}

IL_0076:
	{
		// success?.Invoke(www.downloadHandler.text);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_13 = __this->get_success_4();
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_14 = L_13;
		G_B10_0 = L_14;
		if (L_14)
		{
			G_B11_0 = L_14;
			goto IL_0082;
		}
	}
	{
		goto IL_0097;
	}

IL_0082:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_15 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_15);
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_16 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF(L_16, /*hidden argument*/NULL);
		NullCheck(G_B11_0);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(G_B11_0, L_17, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
	}

IL_0097:
	{
		// }
		return (bool)0;
	}
}
// System.Object WebUtil_<GetText>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetTextU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7718D9860537424B13755AB856BB91BE22828A64 (U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebUtil_<GetText>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextU3Ed__1_System_Collections_IEnumerator_Reset_m183806B56450DF66A8C541E3577F7B0F622F02D0 (U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetTextU3Ed__1_System_Collections_IEnumerator_Reset_m183806B56450DF66A8C541E3577F7B0F622F02D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetTextU3Ed__1_System_Collections_IEnumerator_Reset_m183806B56450DF66A8C541E3577F7B0F622F02D0_RuntimeMethod_var);
	}
}
// System.Object WebUtil_<GetText>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetTextU3Ed__1_System_Collections_IEnumerator_get_Current_m070872017ABE7712E14FA52CE8C0D401368B6D7B (U3CGetTextU3Ed__1_t2A94C3E60A0358A0CD2631B1798416F2284F0989 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Boolean WebViewObject::get_IsKeyboardVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject_get_IsKeyboardVisible_m8AF286B886DADCFF2ED1092EED7BF257799FE043 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	{
		// return TouchScreenKeyboard.visible;
		bool L_0 = TouchScreenKeyboard_get_visible_mBE829EE6CC670F1E9A7BA83A5B98EB84B81A4A44(/*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _CWebViewPlugin_Init(char*, int32_t, char*, int32_t);
// System.IntPtr WebViewObject::_CWebViewPlugin_Init(System.String,System.Boolean,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WebViewObject__CWebViewPlugin_Init_m196E9DEFAEA5741144576427ADC7BC98F9E78AF0 (String_t* ___gameObject0, bool ___transparent1, String_t* ___ua2, bool ___enableWKWebView3, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, char*, int32_t);

	// Marshaling of parameter '___gameObject0' to native representation
	char* ____gameObject0_marshaled = NULL;
	____gameObject0_marshaled = il2cpp_codegen_marshal_string(___gameObject0);

	// Marshaling of parameter '___ua2' to native representation
	char* ____ua2_marshaled = NULL;
	____ua2_marshaled = il2cpp_codegen_marshal_string(___ua2);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_Init)(____gameObject0_marshaled, static_cast<int32_t>(___transparent1), ____ua2_marshaled, static_cast<int32_t>(___enableWKWebView3));

	// Marshaling cleanup of parameter '___gameObject0' native representation
	il2cpp_codegen_marshal_free(____gameObject0_marshaled);
	____gameObject0_marshaled = NULL;

	// Marshaling cleanup of parameter '___ua2' native representation
	il2cpp_codegen_marshal_free(____ua2_marshaled);
	____ua2_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _CWebViewPlugin_Destroy(intptr_t);
// System.Int32 WebViewObject::_CWebViewPlugin_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewObject__CWebViewPlugin_Destroy_m1C6393C3F2C1B147086379765E64C5BDEA59DEF5 (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_Destroy)(___instance0);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_SetMargins(intptr_t, float, float, float, float, int32_t);
// System.Void WebViewObject::_CWebViewPlugin_SetMargins(System.IntPtr,System.Single,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_SetMargins_mFBF6F377A073383BD5AADDA69F9FE593264A1B71 (intptr_t ___instance0, float ___left1, float ___top2, float ___right3, float ___bottom4, bool ___relative5, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float, float, float, float, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_SetMargins)(___instance0, ___left1, ___top2, ___right3, ___bottom4, static_cast<int32_t>(___relative5));

}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_SetVisibility(intptr_t, int32_t);
// System.Void WebViewObject::_CWebViewPlugin_SetVisibility(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_SetVisibility_m807571EE3D8F13BBA08180F834C789193902CE7E (intptr_t ___instance0, bool ___visibility1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_SetVisibility)(___instance0, static_cast<int32_t>(___visibility1));

}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_SetAlertDialogEnabled(intptr_t, int32_t);
// System.Void WebViewObject::_CWebViewPlugin_SetAlertDialogEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_SetAlertDialogEnabled_m39E2755ACB2EBC7D1BA1C005448DCC31B11259D8 (intptr_t ___instance0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_SetAlertDialogEnabled)(___instance0, static_cast<int32_t>(___enabled1));

}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_SetScrollBounceEnabled(intptr_t, int32_t);
// System.Void WebViewObject::_CWebViewPlugin_SetScrollBounceEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_SetScrollBounceEnabled_m81957F4D7D2343B1CEC9682D8CF0057CE6EAEAA6 (intptr_t ___instance0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_SetScrollBounceEnabled)(___instance0, static_cast<int32_t>(___enabled1));

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _CWebViewPlugin_SetURLPattern(intptr_t, char*, char*);
// System.Boolean WebViewObject::_CWebViewPlugin_SetURLPattern(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject__CWebViewPlugin_SetURLPattern_m89C65508E2639D92785577A9D55C810756A635B6 (intptr_t ___instance0, String_t* ___allowPattern1, String_t* ___denyPattern2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___allowPattern1' to native representation
	char* ____allowPattern1_marshaled = NULL;
	____allowPattern1_marshaled = il2cpp_codegen_marshal_string(___allowPattern1);

	// Marshaling of parameter '___denyPattern2' to native representation
	char* ____denyPattern2_marshaled = NULL;
	____denyPattern2_marshaled = il2cpp_codegen_marshal_string(___denyPattern2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_SetURLPattern)(___instance0, ____allowPattern1_marshaled, ____denyPattern2_marshaled);

	// Marshaling cleanup of parameter '___allowPattern1' native representation
	il2cpp_codegen_marshal_free(____allowPattern1_marshaled);
	____allowPattern1_marshaled = NULL;

	// Marshaling cleanup of parameter '___denyPattern2' native representation
	il2cpp_codegen_marshal_free(____denyPattern2_marshaled);
	____denyPattern2_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_LoadURL(intptr_t, char*);
// System.Void WebViewObject::_CWebViewPlugin_LoadURL(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_LoadURL_mE6781876A5604D8B0B9DB96FCC085F2E21A7A015 (intptr_t ___instance0, String_t* ___url1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___url1' to native representation
	char* ____url1_marshaled = NULL;
	____url1_marshaled = il2cpp_codegen_marshal_string(___url1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_LoadURL)(___instance0, ____url1_marshaled);

	// Marshaling cleanup of parameter '___url1' native representation
	il2cpp_codegen_marshal_free(____url1_marshaled);
	____url1_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_LoadHTML(intptr_t, char*, char*);
// System.Void WebViewObject::_CWebViewPlugin_LoadHTML(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_LoadHTML_m74319CF45EE20C18F4753B94E9519F04B73B9B0F (intptr_t ___instance0, String_t* ___html1, String_t* ___baseUrl2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___html1' to native representation
	char* ____html1_marshaled = NULL;
	____html1_marshaled = il2cpp_codegen_marshal_string(___html1);

	// Marshaling of parameter '___baseUrl2' to native representation
	char* ____baseUrl2_marshaled = NULL;
	____baseUrl2_marshaled = il2cpp_codegen_marshal_string(___baseUrl2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_LoadHTML)(___instance0, ____html1_marshaled, ____baseUrl2_marshaled);

	// Marshaling cleanup of parameter '___html1' native representation
	il2cpp_codegen_marshal_free(____html1_marshaled);
	____html1_marshaled = NULL;

	// Marshaling cleanup of parameter '___baseUrl2' native representation
	il2cpp_codegen_marshal_free(____baseUrl2_marshaled);
	____baseUrl2_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_EvaluateJS(intptr_t, char*);
// System.Void WebViewObject::_CWebViewPlugin_EvaluateJS(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_EvaluateJS_m7D691017E95F137BAB7BCA40882A38E723E3FDF5 (intptr_t ___instance0, String_t* ___url1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___url1' to native representation
	char* ____url1_marshaled = NULL;
	____url1_marshaled = il2cpp_codegen_marshal_string(___url1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_EvaluateJS)(___instance0, ____url1_marshaled);

	// Marshaling cleanup of parameter '___url1' native representation
	il2cpp_codegen_marshal_free(____url1_marshaled);
	____url1_marshaled = NULL;

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _CWebViewPlugin_Progress(intptr_t);
// System.Int32 WebViewObject::_CWebViewPlugin_Progress(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewObject__CWebViewPlugin_Progress_mED980DE358E72F53F3E485B2FC294E0D488ABF86 (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_Progress)(___instance0);

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _CWebViewPlugin_CanGoBack(intptr_t);
// System.Boolean WebViewObject::_CWebViewPlugin_CanGoBack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject__CWebViewPlugin_CanGoBack_m84F8124944D7E70CAAC78CF1814D59BDD2819402 (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_CanGoBack)(___instance0);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _CWebViewPlugin_CanGoForward(intptr_t);
// System.Boolean WebViewObject::_CWebViewPlugin_CanGoForward(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject__CWebViewPlugin_CanGoForward_mE168159F00B481D1DB56309DAAC57FD210CC16D4 (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_CanGoForward)(___instance0);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_GoBack(intptr_t);
// System.Void WebViewObject::_CWebViewPlugin_GoBack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_GoBack_m8673D89ADF712323D216CCC4DF5006BC758FF5A8 (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_GoBack)(___instance0);

}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_GoForward(intptr_t);
// System.Void WebViewObject::_CWebViewPlugin_GoForward(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_GoForward_m94699E27F1B8A0F0A5BE22EA546B8A480EC31588 (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_GoForward)(___instance0);

}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_AddCustomHeader(intptr_t, char*, char*);
// System.Void WebViewObject::_CWebViewPlugin_AddCustomHeader(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_AddCustomHeader_m5EE3CE4E4C4D07EBE95ECA440672A717BB2BD0B5 (intptr_t ___instance0, String_t* ___headerKey1, String_t* ___headerValue2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___headerKey1' to native representation
	char* ____headerKey1_marshaled = NULL;
	____headerKey1_marshaled = il2cpp_codegen_marshal_string(___headerKey1);

	// Marshaling of parameter '___headerValue2' to native representation
	char* ____headerValue2_marshaled = NULL;
	____headerValue2_marshaled = il2cpp_codegen_marshal_string(___headerValue2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_AddCustomHeader)(___instance0, ____headerKey1_marshaled, ____headerValue2_marshaled);

	// Marshaling cleanup of parameter '___headerKey1' native representation
	il2cpp_codegen_marshal_free(____headerKey1_marshaled);
	____headerKey1_marshaled = NULL;

	// Marshaling cleanup of parameter '___headerValue2' native representation
	il2cpp_codegen_marshal_free(____headerValue2_marshaled);
	____headerValue2_marshaled = NULL;

}
IL2CPP_EXTERN_C char* DEFAULT_CALL _CWebViewPlugin_GetCustomHeaderValue(intptr_t, char*);
// System.String WebViewObject::_CWebViewPlugin_GetCustomHeaderValue(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebViewObject__CWebViewPlugin_GetCustomHeaderValue_m9CFF505B3A33C795533610E8BB19FCA557217136 (intptr_t ___instance0, String_t* ___headerKey1, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___headerKey1' to native representation
	char* ____headerKey1_marshaled = NULL;
	____headerKey1_marshaled = il2cpp_codegen_marshal_string(___headerKey1);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_GetCustomHeaderValue)(___instance0, ____headerKey1_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___headerKey1' native representation
	il2cpp_codegen_marshal_free(____headerKey1_marshaled);
	____headerKey1_marshaled = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_RemoveCustomHeader(intptr_t, char*);
// System.Void WebViewObject::_CWebViewPlugin_RemoveCustomHeader(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_RemoveCustomHeader_mD368685F96A50A66DF6B733F1F8E1203760C4BB9 (intptr_t ___instance0, String_t* ___headerKey1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___headerKey1' to native representation
	char* ____headerKey1_marshaled = NULL;
	____headerKey1_marshaled = il2cpp_codegen_marshal_string(___headerKey1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_RemoveCustomHeader)(___instance0, ____headerKey1_marshaled);

	// Marshaling cleanup of parameter '___headerKey1' native representation
	il2cpp_codegen_marshal_free(____headerKey1_marshaled);
	____headerKey1_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_ClearCustomHeader(intptr_t);
// System.Void WebViewObject::_CWebViewPlugin_ClearCustomHeader(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_ClearCustomHeader_mC8D5FD8FAAE36503C017EFF060669FDDAB8C7544 (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_ClearCustomHeader)(___instance0);

}
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_ClearCookies();
// System.Void WebViewObject::_CWebViewPlugin_ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__CWebViewPlugin_ClearCookies_mDC33EF5DBA0593882B37444B126C90B6E33B86A9 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_ClearCookies)();

}
IL2CPP_EXTERN_C char* DEFAULT_CALL _CWebViewPlugin_GetCookies(char*);
// System.String WebViewObject::_CWebViewPlugin_GetCookies(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebViewObject__CWebViewPlugin_GetCookies_m8A771CDD3E0FA898F3BE5836285D31CF5CC5F456 (String_t* ___url0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_GetCookies)(____url0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Boolean WebViewObject::IsWebViewAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject_IsWebViewAvailable_mE5AC1AFBAADDC62352773768F0DEC69EFD697678 (const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void WebViewObject::Init(System.Action`1<System.String>,System.Boolean,System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Action`1<System.String>,System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_Init_mADBC52DF92AEC8D58B2EB5C5CFE3FC0C12822EE4 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___cb0, bool ___transparent1, String_t* ___ua2, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___err3, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___httpErr4, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___ld5, bool ___enableWKWebView6, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___started7, const RuntimeMethod* method)
{
	{
		// onJS = cb;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = ___cb0;
		__this->set_onJS_4(L_0);
		// onError = err;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = ___err3;
		__this->set_onError_5(L_1);
		// onHttpError = httpErr;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_2 = ___httpErr4;
		__this->set_onHttpError_6(L_2);
		// onStarted = started;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_3 = ___started7;
		__this->set_onStarted_7(L_3);
		// onLoaded = ld;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_4 = ___ld5;
		__this->set_onLoaded_8(L_4);
		// webView = _CWebViewPlugin_Init(name, transparent, ua, enableWKWebView);
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		bool L_6 = ___transparent1;
		String_t* L_7 = ___ua2;
		bool L_8 = ___enableWKWebView6;
		intptr_t L_9 = WebViewObject__CWebViewPlugin_Init_m196E9DEFAEA5741144576427ADC7BC98F9E78AF0(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->set_webView_16((intptr_t)L_9);
		// }
		return;
	}
}
// System.Void WebViewObject::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_OnDestroy_m3C80CB1B49ED2CA8CD21C036421D5EB98D14C7F4 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_OnDestroy_m3C80CB1B49ED2CA8CD21C036421D5EB98D14C7F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// _CWebViewPlugin_Destroy(webView);
		intptr_t L_2 = __this->get_webView_16();
		WebViewObject__CWebViewPlugin_Destroy_m1C6393C3F2C1B147086379765E64C5BDEA59DEF5((intptr_t)L_2, /*hidden argument*/NULL);
		// webView = IntPtr.Zero;
		__this->set_webView_16((intptr_t)(0));
		// }
		return;
	}
}
// System.Void WebViewObject::SetCenterPositionWithScale(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_SetCenterPositionWithScale_mCECAD77A332B1CCBB1DA2DAB4BC7124EF3098EBF (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___center0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___scale1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float left = (Screen.width - scale.x) / 2.0f + center.x;
		int32_t L_0 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___scale1;
		float L_2 = L_1.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___center0;
		float L_4 = L_3.get_x_0();
		V_0 = ((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_0))), (float)L_2))/(float)(2.0f))), (float)L_4));
		// float right = Screen.width - (left + scale.x);
		int32_t L_5 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		float L_6 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ___scale1;
		float L_8 = L_7.get_x_0();
		V_1 = ((float)il2cpp_codegen_subtract((float)(((float)((float)L_5))), (float)((float)il2cpp_codegen_add((float)L_6, (float)L_8))));
		// float bottom = (Screen.height - scale.y) / 2.0f + center.y;
		int32_t L_9 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = ___scale1;
		float L_11 = L_10.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = ___center0;
		float L_13 = L_12.get_y_1();
		V_2 = ((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_9))), (float)L_11))/(float)(2.0f))), (float)L_13));
		// float top = Screen.height - (bottom + scale.y);
		int32_t L_14 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		float L_15 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = ___scale1;
		float L_17 = L_16.get_y_1();
		V_3 = ((float)il2cpp_codegen_subtract((float)(((float)((float)L_14))), (float)((float)il2cpp_codegen_add((float)L_15, (float)L_17))));
		// SetMargins((int)left, (int)top, (int)right, (int)bottom);
		float L_18 = V_0;
		float L_19 = V_3;
		float L_20 = V_1;
		float L_21 = V_2;
		WebViewObject_SetMargins_m18BE30A7C6189622AC60AF295C95193E9BA4422F(__this, (((int32_t)((int32_t)L_18))), (((int32_t)((int32_t)L_19))), (((int32_t)((int32_t)L_20))), (((int32_t)((int32_t)L_21))), (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebViewObject::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_SetMargins_m18BE30A7C6189622AC60AF295C95193E9BA4422F (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, bool ___relative4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_SetMargins_m18BE30A7C6189622AC60AF295C95193E9BA4422F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// mMarginLeft = left;
		int32_t L_2 = ___left0;
		__this->set_mMarginLeft_12(L_2);
		// mMarginTop = top;
		int32_t L_3 = ___top1;
		__this->set_mMarginTop_13(L_3);
		// mMarginRight = right;
		int32_t L_4 = ___right2;
		__this->set_mMarginRight_14(L_4);
		// mMarginBottom = bottom;
		int32_t L_5 = ___bottom3;
		__this->set_mMarginBottom_15(L_5);
		// if (relative) {
		bool L_6 = ___relative4;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// float w = (float)Screen.width;
		int32_t L_7 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		V_0 = (((float)((float)L_7)));
		// float h = (float)Screen.height;
		int32_t L_8 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		V_1 = (((float)((float)L_8)));
		// _CWebViewPlugin_SetMargins(webView, left / w, top / h, right / w, bottom / h, true);
		intptr_t L_9 = __this->get_webView_16();
		int32_t L_10 = ___left0;
		float L_11 = V_0;
		int32_t L_12 = ___top1;
		float L_13 = V_1;
		int32_t L_14 = ___right2;
		float L_15 = V_0;
		int32_t L_16 = ___bottom3;
		float L_17 = V_1;
		WebViewObject__CWebViewPlugin_SetMargins_mFBF6F377A073383BD5AADDA69F9FE593264A1B71((intptr_t)L_9, ((float)((float)(((float)((float)L_10)))/(float)L_11)), ((float)((float)(((float)((float)L_12)))/(float)L_13)), ((float)((float)(((float)((float)L_14)))/(float)L_15)), ((float)((float)(((float)((float)L_16)))/(float)L_17)), (bool)1, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0060:
	{
		// _CWebViewPlugin_SetMargins(webView, (float)left, (float)top, (float)right, (float)bottom, false);
		intptr_t L_18 = __this->get_webView_16();
		int32_t L_19 = ___left0;
		int32_t L_20 = ___top1;
		int32_t L_21 = ___right2;
		int32_t L_22 = ___bottom3;
		WebViewObject__CWebViewPlugin_SetMargins_mFBF6F377A073383BD5AADDA69F9FE593264A1B71((intptr_t)L_18, (((float)((float)L_19))), (((float)((float)L_20))), (((float)((float)L_21))), (((float)((float)L_22))), (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebViewObject::SetVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_SetVisibility_m1D5FEE21D31AE46F8F4FE68A2AEA08EE8ED1FCDF (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, bool ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_SetVisibility_m1D5FEE21D31AE46F8F4FE68A2AEA08EE8ED1FCDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// _CWebViewPlugin_SetVisibility(webView, v);
		intptr_t L_2 = __this->get_webView_16();
		bool L_3 = ___v0;
		WebViewObject__CWebViewPlugin_SetVisibility_m807571EE3D8F13BBA08180F834C789193902CE7E((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		// visibility = v;
		bool L_4 = ___v0;
		__this->set_visibility_9(L_4);
		// }
		return;
	}
}
// System.Boolean WebViewObject::GetVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject_GetVisibility_m39140999D6FA1498C0EE9B2576D64444B5C9C38B (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	{
		// return visibility;
		bool L_0 = __this->get_visibility_9();
		return L_0;
	}
}
// System.Void WebViewObject::SetAlertDialogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_SetAlertDialogEnabled_m9D94FD7FEA9C86E3F4ADA955C85753441F8521D3 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, bool ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_SetAlertDialogEnabled_m9D94FD7FEA9C86E3F4ADA955C85753441F8521D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// _CWebViewPlugin_SetAlertDialogEnabled(webView, e);
		intptr_t L_2 = __this->get_webView_16();
		bool L_3 = ___e0;
		WebViewObject__CWebViewPlugin_SetAlertDialogEnabled_m39E2755ACB2EBC7D1BA1C005448DCC31B11259D8((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		// alertDialogEnabled = e;
		bool L_4 = ___e0;
		__this->set_alertDialogEnabled_10(L_4);
		// }
		return;
	}
}
// System.Boolean WebViewObject::GetAlertDialogEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject_GetAlertDialogEnabled_m15F7EB41BFE0A3D322C4945D0ED62D953C21F488 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	{
		// return alertDialogEnabled;
		bool L_0 = __this->get_alertDialogEnabled_10();
		return L_0;
	}
}
// System.Void WebViewObject::SetScrollBounceEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_SetScrollBounceEnabled_mD5CEAD3A3B7AB2F6A629B280C21AB9F967D15206 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, bool ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_SetScrollBounceEnabled_mD5CEAD3A3B7AB2F6A629B280C21AB9F967D15206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// _CWebViewPlugin_SetScrollBounceEnabled(webView, e);
		intptr_t L_2 = __this->get_webView_16();
		bool L_3 = ___e0;
		WebViewObject__CWebViewPlugin_SetScrollBounceEnabled_m81957F4D7D2343B1CEC9682D8CF0057CE6EAEAA6((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		// scrollBounceEnabled = e;
		bool L_4 = ___e0;
		__this->set_scrollBounceEnabled_11(L_4);
		// }
		return;
	}
}
// System.Boolean WebViewObject::GetScrollBounceEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject_GetScrollBounceEnabled_m4555315B9113343E2A9D99B05293B1FF06221C25 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	{
		// return scrollBounceEnabled;
		bool L_0 = __this->get_scrollBounceEnabled_11();
		return L_0;
	}
}
// System.Boolean WebViewObject::SetURLPattern(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject_SetURLPattern_m8E1F0A5113238076B1FD5A5B0AAC218A53289481 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___allowPattern0, String_t* ___denyPattern1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_SetURLPattern_m8E1F0A5113238076B1FD5A5B0AAC218A53289481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// return _CWebViewPlugin_SetURLPattern(webView, allowPattern, denyPattern);
		intptr_t L_2 = __this->get_webView_16();
		String_t* L_3 = ___allowPattern0;
		String_t* L_4 = ___denyPattern1;
		bool L_5 = WebViewObject__CWebViewPlugin_SetURLPattern_m89C65508E2639D92785577A9D55C810756A635B6((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void WebViewObject::LoadURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_LoadURL_m7EAA1907B006B634F59FADC507D81D6A9A89E661 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_LoadURL_m7EAA1907B006B634F59FADC507D81D6A9A89E661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(url))
		String_t* L_0 = ___url0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_2 = __this->get_webView_16();
		bool L_3 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// _CWebViewPlugin_LoadURL(webView, url);
		intptr_t L_4 = __this->get_webView_16();
		String_t* L_5 = ___url0;
		WebViewObject__CWebViewPlugin_LoadURL_mE6781876A5604D8B0B9DB96FCC085F2E21A7A015((intptr_t)L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebViewObject::LoadHTML(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_LoadHTML_m7DF6E81D03ADA20D88280C09F22E689B1F0D2E61 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___html0, String_t* ___baseUrl1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_LoadHTML_m7DF6E81D03ADA20D88280C09F22E689B1F0D2E61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(html))
		String_t* L_0 = ___html0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (string.IsNullOrEmpty(baseUrl))
		String_t* L_2 = ___baseUrl1;
		bool L_3 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// baseUrl = "";
		___baseUrl1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0018:
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_4 = __this->get_webView_16();
		bool L_5 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// return;
		return;
	}

IL_002b:
	{
		// _CWebViewPlugin_LoadHTML(webView, html, baseUrl);
		intptr_t L_6 = __this->get_webView_16();
		String_t* L_7 = ___html0;
		String_t* L_8 = ___baseUrl1;
		WebViewObject__CWebViewPlugin_LoadHTML_m74319CF45EE20C18F4753B94E9519F04B73B9B0F((intptr_t)L_6, L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebViewObject::EvaluateJS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_EvaluateJS_mC3017EEFBBDBB3F5C75051562C7DAC85AD436755 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___js0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_EvaluateJS_mC3017EEFBBDBB3F5C75051562C7DAC85AD436755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// _CWebViewPlugin_EvaluateJS(webView, js);
		intptr_t L_2 = __this->get_webView_16();
		String_t* L_3 = ___js0;
		WebViewObject__CWebViewPlugin_EvaluateJS_m7D691017E95F137BAB7BCA40882A38E723E3FDF5((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 WebViewObject::Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewObject_Progress_m38182A0BDC710C6095DF424419E309CBEA6968EC (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_Progress_m38182A0BDC710C6095DF424419E309CBEA6968EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0014:
	{
		// return _CWebViewPlugin_Progress(webView);
		intptr_t L_2 = __this->get_webView_16();
		int32_t L_3 = WebViewObject__CWebViewPlugin_Progress_mED980DE358E72F53F3E485B2FC294E0D488ABF86((intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean WebViewObject::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject_CanGoBack_mDF877A4772C791C2AB245B47D6DCE3C34C3E56C4 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_CanGoBack_mDF877A4772C791C2AB245B47D6DCE3C34C3E56C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// return _CWebViewPlugin_CanGoBack(webView);
		intptr_t L_2 = __this->get_webView_16();
		bool L_3 = WebViewObject__CWebViewPlugin_CanGoBack_m84F8124944D7E70CAAC78CF1814D59BDD2819402((intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean WebViewObject::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewObject_CanGoForward_m08AB94551C788C881659EFB1B45E14369F5C805C (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_CanGoForward_m08AB94551C788C881659EFB1B45E14369F5C805C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// return _CWebViewPlugin_CanGoForward(webView);
		intptr_t L_2 = __this->get_webView_16();
		bool L_3 = WebViewObject__CWebViewPlugin_CanGoForward_mE168159F00B481D1DB56309DAAC57FD210CC16D4((intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void WebViewObject::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_GoBack_m7EA19BFC31BF4425D85F67D9A6D0442C2B98A2BA (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_GoBack_m7EA19BFC31BF4425D85F67D9A6D0442C2B98A2BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// _CWebViewPlugin_GoBack(webView);
		intptr_t L_2 = __this->get_webView_16();
		WebViewObject__CWebViewPlugin_GoBack_m8673D89ADF712323D216CCC4DF5006BC758FF5A8((intptr_t)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebViewObject::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_GoForward_m9CA8CBAF545923CD8886C826520B9A305D3B0B32 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_GoForward_m9CA8CBAF545923CD8886C826520B9A305D3B0B32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// _CWebViewPlugin_GoForward(webView);
		intptr_t L_2 = __this->get_webView_16();
		WebViewObject__CWebViewPlugin_GoForward_m94699E27F1B8A0F0A5BE22EA546B8A480EC31588((intptr_t)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebViewObject::CallOnError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_CallOnError_m840C1B0031C78E62A564687DF3541807C6E8AA33 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_CallOnError_m840C1B0031C78E62A564687DF3541807C6E8AA33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onError != null)
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = __this->get_onError_5();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// onError(error);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = __this->get_onError_5();
		String_t* L_2 = ___error0;
		NullCheck(L_1);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_1, L_2, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void WebViewObject::CallOnHttpError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_CallOnHttpError_m542FFE97E71177C391B4616905E5E06D08A296AB (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_CallOnHttpError_m542FFE97E71177C391B4616905E5E06D08A296AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onHttpError != null)
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = __this->get_onHttpError_6();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// onHttpError(error);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = __this->get_onHttpError_6();
		String_t* L_2 = ___error0;
		NullCheck(L_1);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_1, L_2, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void WebViewObject::CallOnStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_CallOnStarted_m7185EBD51EE9939ADF85E53E32B81AB37DB16F13 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_CallOnStarted_m7185EBD51EE9939ADF85E53E32B81AB37DB16F13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onStarted != null)
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = __this->get_onStarted_7();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// onStarted(url);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = __this->get_onStarted_7();
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_1, L_2, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void WebViewObject::CallOnLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_CallOnLoaded_mF40AF7A26834221A9A62750056B0AFD875090076 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_CallOnLoaded_mF40AF7A26834221A9A62750056B0AFD875090076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onLoaded != null)
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = __this->get_onLoaded_8();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// onLoaded(url);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = __this->get_onLoaded_8();
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_1, L_2, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void WebViewObject::CallFromJS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_CallFromJS_m69D3AF8D146345502BD6DFA3C7054B0434947D18 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_CallFromJS_m69D3AF8D146345502BD6DFA3C7054B0434947D18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onJS != null)
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = __this->get_onJS_4();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// message = UnityWebRequest.UnEscapeURL(message);
		String_t* L_1 = ___message0;
		String_t* L_2 = UnityWebRequest_UnEscapeURL_m1224F23674AC91179573482A2993CB9E4EC98980(L_1, /*hidden argument*/NULL);
		___message0 = L_2;
		// onJS(message);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_3 = __this->get_onJS_4();
		String_t* L_4 = ___message0;
		NullCheck(L_3);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_3, L_4, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void WebViewObject::AddCustomHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_AddCustomHeader_m3A842840B26DB4FBBF84F1D5AF36D7FDA8E778B6 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___headerKey0, String_t* ___headerValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_AddCustomHeader_m3A842840B26DB4FBBF84F1D5AF36D7FDA8E778B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// _CWebViewPlugin_AddCustomHeader(webView, headerKey, headerValue);
		intptr_t L_2 = __this->get_webView_16();
		String_t* L_3 = ___headerKey0;
		String_t* L_4 = ___headerValue1;
		WebViewObject__CWebViewPlugin_AddCustomHeader_m5EE3CE4E4C4D07EBE95ECA440672A717BB2BD0B5((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String WebViewObject::GetCustomHeaderValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebViewObject_GetCustomHeaderValue_m43F6BF116F704493B15CA1FEAB8FAF5519472F67 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___headerKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_GetCustomHeaderValue_m43F6BF116F704493B15CA1FEAB8FAF5519472F67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0014:
	{
		// return _CWebViewPlugin_GetCustomHeaderValue(webView, headerKey);
		intptr_t L_2 = __this->get_webView_16();
		String_t* L_3 = ___headerKey0;
		String_t* L_4 = WebViewObject__CWebViewPlugin_GetCustomHeaderValue_m9CFF505B3A33C795533610E8BB19FCA557217136((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void WebViewObject::RemoveCustomHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_RemoveCustomHeader_m742A0D1282D6BD6FD86602C5288DC138CEED9C60 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___headerKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_RemoveCustomHeader_m742A0D1282D6BD6FD86602C5288DC138CEED9C60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// _CWebViewPlugin_RemoveCustomHeader(webView, headerKey);
		intptr_t L_2 = __this->get_webView_16();
		String_t* L_3 = ___headerKey0;
		WebViewObject__CWebViewPlugin_RemoveCustomHeader_mD368685F96A50A66DF6B733F1F8E1203760C4BB9((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebViewObject::ClearCustomHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_ClearCustomHeader_m89CD043FA422A390A2A85705E4376D5232E9BBBD (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_ClearCustomHeader_m89CD043FA422A390A2A85705E4376D5232E9BBBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// _CWebViewPlugin_ClearCustomHeader(webView);
		intptr_t L_2 = __this->get_webView_16();
		WebViewObject__CWebViewPlugin_ClearCustomHeader_mC8D5FD8FAAE36503C017EFF060669FDDAB8C7544((intptr_t)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebViewObject::ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject_ClearCookies_m062EF6FDDD0B2EB162AC87B74294819E9AABF00A (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_ClearCookies_m062EF6FDDD0B2EB162AC87B74294819E9AABF00A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// _CWebViewPlugin_ClearCookies();
		WebViewObject__CWebViewPlugin_ClearCookies_mDC33EF5DBA0593882B37444B126C90B6E33B86A9(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String WebViewObject::GetCookies(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebViewObject_GetCookies_m367C37F8A218420442F87BF85AA55FEBE895EF22 (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_GetCookies_m367C37F8A218420442F87BF85AA55FEBE895EF22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (webView == IntPtr.Zero)
		intptr_t L_0 = __this->get_webView_16();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0018:
	{
		// return _CWebViewPlugin_GetCookies(url);
		String_t* L_2 = ___url0;
		String_t* L_3 = WebViewObject__CWebViewPlugin_GetCookies_m8A771CDD3E0FA898F3BE5836285D31CF5CC5F456(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void WebViewObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewObject__ctor_mB2065A19781A8D1470534DAC5BB4AC657C871F0B (WebViewObject_tB93521E1A952A0911296B17ED309E36C417A2C9D * __this, const RuntimeMethod* method)
{
	{
		// bool alertDialogEnabled = true;
		__this->set_alertDialogEnabled_10((bool)1);
		// bool scrollBounceEnabled = true;
		__this->set_scrollBounceEnabled_11((bool)1);
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
// System.Void ZipFile::UnZip(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_UnZip_mD3AB0C3FE4FB05BC4FF9664C00EAD59BC2609B71 (String_t* ___filePath0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipFile_UnZip_mD3AB0C3FE4FB05BC4FF9664C00EAD59BC2609B71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA * V_0 = NULL;
	ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * V_1 = NULL;
	String_t* V_2 = NULL;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// using (ZipInputStream s = new ZipInputStream(new MemoryStream(data))) {
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___data1;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_1 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF(L_1, L_0, /*hidden argument*/NULL);
		ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA * L_2 = (ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA *)il2cpp_codegen_object_new(ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA_il2cpp_TypeInfo_var);
		ZipInputStream__ctor_m1CB03F176DC10404D2826B5431C9516D2C88E995(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0099;
		}

IL_0011:
		{
			// string directoryName = Path.GetDirectoryName(theEntry.Name);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4 = ZipEntry_get_Name_m7C82F27E52E95B2527A17776F2F9ADD266012DA3_inline(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
			String_t* L_5 = Path_GetDirectoryName_m61922AA6D7B48EACBA36FF41A1B28F506CFB8A97(L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			// string fileName      = Path.GetFileName(theEntry.Name);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_6 = V_1;
			NullCheck(L_6);
			String_t* L_7 = ZipEntry_get_Name_m7C82F27E52E95B2527A17776F2F9ADD266012DA3_inline(L_6, /*hidden argument*/NULL);
			String_t* L_8 = Path_GetFileName_m2307E8E0B250632002840D9EC27DBABE9C4EB85E(L_7, /*hidden argument*/NULL);
			// if (directoryName.Length > 0) {
			String_t* L_9 = V_2;
			NullCheck(L_9);
			int32_t L_10 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_9, /*hidden argument*/NULL);
			G_B3_0 = L_8;
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				G_B4_0 = L_8;
				goto IL_003e;
			}
		}

IL_0031:
		{
			// var dirPath = Path.Combine(filePath, directoryName);
			String_t* L_11 = ___filePath0;
			String_t* L_12 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
			String_t* L_13 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_11, L_12, /*hidden argument*/NULL);
			// Directory.CreateDirectory(dirPath);
			Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41(L_13, /*hidden argument*/NULL);
			G_B4_0 = G_B3_0;
		}

IL_003e:
		{
			// if (fileName != string.Empty) {
			String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			bool L_15 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(G_B4_0, L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0099;
			}
		}

IL_004a:
		{
			// var entryFilePath = Path.Combine(filePath, theEntry.Name);
			String_t* L_16 = ___filePath0;
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_17 = V_1;
			NullCheck(L_17);
			String_t* L_18 = ZipEntry_get_Name_m7C82F27E52E95B2527A17776F2F9ADD266012DA3_inline(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
			String_t* L_19 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_16, L_18, /*hidden argument*/NULL);
			// using (FileStream streamWriter = File.Create(entryFilePath)) {
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_20 = File_Create_mE6AF90C7A82E96EC1315821EB061327CF3EB55DD(L_19, /*hidden argument*/NULL);
			V_3 = L_20;
		}

IL_005c:
		try
		{ // begin try (depth: 2)
			{
				// int    size  = 2048;
				V_4 = ((int32_t)2048);
				// byte[] fdata = new byte[size];
				int32_t L_21 = V_4;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_21);
				V_5 = L_22;
			}

IL_006c:
			{
				// size = s.Read(fdata, 0, fdata.Length);
				ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA * L_23 = V_0;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = V_5;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = V_5;
				NullCheck(L_25);
				NullCheck(L_23);
				int32_t L_26 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))));
				V_4 = L_26;
				// if (size > 0) {
				int32_t L_27 = V_4;
				if ((((int32_t)L_27) <= ((int32_t)0)))
				{
					goto IL_008d;
				}
			}

IL_0080:
			{
				// streamWriter.Write(fdata, 0, size);
				FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_28 = V_3;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = V_5;
				int32_t L_30 = V_4;
				NullCheck(L_28);
				VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, 0, L_30);
				// }
				goto IL_006c;
			}

IL_008d:
			{
				// }
				IL2CPP_LEAVE(0x99, FINALLY_008f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_008f;
		}

FINALLY_008f:
		{ // begin finally (depth: 2)
			{
				FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_31 = V_3;
				if (!L_31)
				{
					goto IL_0098;
				}
			}

IL_0092:
			{
				FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_32 = V_3;
				NullCheck(L_32);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_32);
			}

IL_0098:
			{
				IL2CPP_END_FINALLY(143)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(143)
		{
			IL2CPP_JUMP_TBL(0x99, IL_0099)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0099:
		{
			// while ((theEntry = s.GetNextEntry()) != null) {
			ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA * L_33 = V_0;
			NullCheck(L_33);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_34 = ZipInputStream_GetNextEntry_m0DC0D8C513EDF625EAA4D3FB8C1BB9A3A926B212(L_33, /*hidden argument*/NULL);
			ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * L_35 = L_34;
			V_1 = L_35;
			if (L_35)
			{
				goto IL_0011;
			}
		}

IL_00a6:
		{
			// }
			IL2CPP_LEAVE(0xB2, FINALLY_00a8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{ // begin finally (depth: 1)
		{
			ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA * L_36 = V_0;
			if (!L_36)
			{
				goto IL_00b1;
			}
		}

IL_00ab:
		{
			ZipInputStream_t82F6C4022FB8AE02224488716212F63F88AAA6EA * L_37 = V_0;
			NullCheck(L_37);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_37);
		}

IL_00b1:
		{
			IL2CPP_END_FINALLY(168)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void ZipFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile__ctor_m84AEA9123D9F16B2E6A62A60C46981B4016081CD (ZipFile_t988BEADCE49E4CD6B32CE6B49E828E509E539B02 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Deflater_GetLevel_m3245924047B376EC0F6739CDAA734F0335AEB528_inline (Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * __this, const RuntimeMethod* method)
{
	{
		// return level;
		int32_t L_0 = __this->get_level_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ZipEntry_get_CompressionMethod_mD418E4CEC2781A7AAE2EC18FFEDCD5C55F41DB7B_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method)
{
	{
		// return method;
		int32_t L_0 = __this->get_method_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ZipEntry_get_Flags_m537DB42E6230C4C6721DE9B73D6F20B35D725889_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method)
{
	{
		// return flags;
		int32_t L_0 = __this->get_flags_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ZipEntry_set_Flags_mD1B0067510F90FB109B380E492DEE545124EE204_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// flags = value;
		int32_t L_0 = ___value0;
		__this->set_flags_12(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DeflaterOutputStream_get_Password_m1DE04D58F28BEAD551AC6125A0866E5C33EC3A58_inline (DeflaterOutputStream_t2965E256D01FCA563ED323FC368FB10124A3257E * __this, const RuntimeMethod* method)
{
	{
		// return password;
		String_t* L_0 = __this->get_password_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ZipEntry_set_Offset_m6C1BB08DB26D396B3C0306E4CA35511E9851C5B2_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// offset = value;
		int64_t L_0 = ___value0;
		__this->set_offset_14(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ZipEntry_get_Name_m7C82F27E52E95B2527A17776F2F9ADD266012DA3_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method)
{
	{
		// return name;
		String_t* L_0 = __this->get_name_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ZipEntry_get_ExtraData_m8D90211E2A1617E7C971F2E5964E1E6C9ED3BACE_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method)
{
	{
		// return extra;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_extra_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ZipExtraData_get_CurrentReadIndex_m54640708202733F4FBB8F380F682A5925254FCA2_inline (ZipExtraData_t474AC45B887BF63016377011EDE461252CC1447C * __this, const RuntimeMethod* method)
{
	{
		// get { return _index; }
		int32_t L_0 = __this->get__index_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t Deflater_get_TotalOut_mE0783C4225087EC96E17E4ED66332EC98A0C7D10_inline (Deflater_t1A177EC5BAD45551BA085ECC3A6F9F93DC98733C * __this, const RuntimeMethod* method)
{
	{
		// return totalOut;
		int64_t L_0 = __this->get_totalOut_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ZipEntry_IsZip64Forced_m56C1F47E01DE5B670EBDF0170E75A181813FA2FE_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method)
{
	{
		// return forceZip64_;
		bool L_0 = __this->get_forceZip64__15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t ZipEntry_get_Offset_m5A61D9B4FE83674722B7FDD3109221EEF21B987C_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method)
{
	{
		// return offset;
		int64_t L_0 = __this->get_offset_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ZipEntry_get_Comment_m00D142AF36AABD5E17AD9AF0C109588CEBAE6AB0_inline (ZipEntry_t043242ACC752B3BACF77887B45F925EB168F17B8 * __this, const RuntimeMethod* method)
{
	{
		// return comment;
		String_t* L_0 = __this->get_comment_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ZipStrings_get_SystemDefaultCodePage_mFDB66669B80E1C318C5D94F017AF0653D799B219_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZipStrings_get_SystemDefaultCodePage_mFDB66669B80E1C318C5D94F017AF0653D799B219AssemblyU2DCSharp3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int SystemDefaultCodePage { get; }
		IL2CPP_RUNTIME_CLASS_INIT(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_StaticFields*)il2cpp_codegen_static_fields_for(ZipStrings_t23C6B633B9EC5C11C5093905EC56B78D8A4849BD_il2cpp_TypeInfo_var))->get_U3CSystemDefaultCodePageU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* UINetworkImage_get_Url_mD29EB1C750449E949369EF438E6A7EEEA158544A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UINetworkImage_get_Url_mD29EB1C750449E949369EF438E6A7EEEA158544AAssemblyU2DCSharp3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Url { get; set; }
		String_t* L_0 = ((UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7_StaticFields*)il2cpp_codegen_static_fields_for(UINetworkImage_t4D30746273803D7E80E7B13F38531347D15FC5B7_il2cpp_TypeInfo_var))->get_U3CUrlU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Image_get_fillAmount_m5FF6EE8DB33C4A219B3677FB24F50A6E5CCF44F0_inline (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, const RuntimeMethod* method)
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->get_m_FillAmount_41();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WKWebView_get_IsHybrid_mD1DF325C9E8405BF905547D0F1296FC90CC701F2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WKWebView_get_IsHybrid_mD1DF325C9E8405BF905547D0F1296FC90CC701F2AssemblyU2DCSharp3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool   IsHybrid { get; set; }
		bool L_0 = ((WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields*)il2cpp_codegen_static_fields_for(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_il2cpp_TypeInfo_var))->get_U3CIsHybridU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WKWebView_get_Url_m930A2F995A968AC8E5AC3812C8CA616DCCCB90F0_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WKWebView_get_Url_m930A2F995A968AC8E5AC3812C8CA616DCCCB90F0AssemblyU2DCSharp3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Url      { get; set; }
		String_t* L_0 = ((WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields*)il2cpp_codegen_static_fields_for(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_il2cpp_TypeInfo_var))->get_U3CUrlU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WKWebView_get_Uri_mF4FDCB31E54E6D529B5D01A12A9C7A53E39EA356_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WKWebView_get_Uri_mF4FDCB31E54E6D529B5D01A12A9C7A53E39EA356AssemblyU2DCSharp3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Uri      { get; set; }
		String_t* L_0 = ((WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_StaticFields*)il2cpp_codegen_static_fields_for(WKWebView_tB621CFF722AE711E3D509DD012802941708797B3_il2cpp_TypeInfo_var))->get_U3CUriU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
