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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Action
struct Action_t1264377477;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Exception
struct Exception_t;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t3750997369;
// System.String
struct String_t;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t540272775;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// UniRx.Async.IAwaiter
struct IAwaiter_t775381681;
// UniRx.Async.IAwaiter`1<UniRx.Async.AsyncUnit>
struct IAwaiter_1_t2656787433;
// UniRx.Async.Internal.ContinuationQueue[]
struct ContinuationQueueU5BU5D_t4014767662;
// UniRx.Async.Internal.PlayerLoopRunner[]
struct PlayerLoopRunnerU5BU5D_t3856534473;
// UniRx.Async.UniTask/WhenAllPromise
struct WhenAllPromise_t1006072582;
// UniRx.Async.UniTask/WhenAnyPromise
struct WhenAnyPromise_t1810881040;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef PLAYERLOOPHELPER_T1546603372_H
#define PLAYERLOOPHELPER_T1546603372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.PlayerLoopHelper
struct  PlayerLoopHelper_t1546603372  : public RuntimeObject
{
public:

public:
};

struct PlayerLoopHelper_t1546603372_StaticFields
{
public:
	// System.Int32 UniRx.Async.PlayerLoopHelper::mainThreadId
	int32_t ___mainThreadId_0;
	// System.Threading.SynchronizationContext UniRx.Async.PlayerLoopHelper::unitySynchronizationContetext
	SynchronizationContext_t2326897723 * ___unitySynchronizationContetext_1;
	// UniRx.Async.Internal.ContinuationQueue[] UniRx.Async.PlayerLoopHelper::yielders
	ContinuationQueueU5BU5D_t4014767662* ___yielders_2;
	// UniRx.Async.Internal.PlayerLoopRunner[] UniRx.Async.PlayerLoopHelper::runners
	PlayerLoopRunnerU5BU5D_t3856534473* ___runners_3;

public:
	inline static int32_t get_offset_of_mainThreadId_0() { return static_cast<int32_t>(offsetof(PlayerLoopHelper_t1546603372_StaticFields, ___mainThreadId_0)); }
	inline int32_t get_mainThreadId_0() const { return ___mainThreadId_0; }
	inline int32_t* get_address_of_mainThreadId_0() { return &___mainThreadId_0; }
	inline void set_mainThreadId_0(int32_t value)
	{
		___mainThreadId_0 = value;
	}

	inline static int32_t get_offset_of_unitySynchronizationContetext_1() { return static_cast<int32_t>(offsetof(PlayerLoopHelper_t1546603372_StaticFields, ___unitySynchronizationContetext_1)); }
	inline SynchronizationContext_t2326897723 * get_unitySynchronizationContetext_1() const { return ___unitySynchronizationContetext_1; }
	inline SynchronizationContext_t2326897723 ** get_address_of_unitySynchronizationContetext_1() { return &___unitySynchronizationContetext_1; }
	inline void set_unitySynchronizationContetext_1(SynchronizationContext_t2326897723 * value)
	{
		___unitySynchronizationContetext_1 = value;
		Il2CppCodeGenWriteBarrier((&___unitySynchronizationContetext_1), value);
	}

	inline static int32_t get_offset_of_yielders_2() { return static_cast<int32_t>(offsetof(PlayerLoopHelper_t1546603372_StaticFields, ___yielders_2)); }
	inline ContinuationQueueU5BU5D_t4014767662* get_yielders_2() const { return ___yielders_2; }
	inline ContinuationQueueU5BU5D_t4014767662** get_address_of_yielders_2() { return &___yielders_2; }
	inline void set_yielders_2(ContinuationQueueU5BU5D_t4014767662* value)
	{
		___yielders_2 = value;
		Il2CppCodeGenWriteBarrier((&___yielders_2), value);
	}

	inline static int32_t get_offset_of_runners_3() { return static_cast<int32_t>(offsetof(PlayerLoopHelper_t1546603372_StaticFields, ___runners_3)); }
	inline PlayerLoopRunnerU5BU5D_t3856534473* get_runners_3() const { return ___runners_3; }
	inline PlayerLoopRunnerU5BU5D_t3856534473** get_address_of_runners_3() { return &___runners_3; }
	inline void set_runners_3(PlayerLoopRunnerU5BU5D_t3856534473* value)
	{
		___runners_3 = value;
		Il2CppCodeGenWriteBarrier((&___runners_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLOOPHELPER_T1546603372_H
#ifndef ASYNCUNITAWAITER_T4259518821_H
#define ASYNCUNITAWAITER_T4259518821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/AsyncUnitAwaiter
struct  AsyncUnitAwaiter_t4259518821  : public RuntimeObject
{
public:
	// UniRx.Async.IAwaiter UniRx.Async.UniTask/AsyncUnitAwaiter::awaiter
	RuntimeObject* ___awaiter_0;

public:
	inline static int32_t get_offset_of_awaiter_0() { return static_cast<int32_t>(offsetof(AsyncUnitAwaiter_t4259518821, ___awaiter_0)); }
	inline RuntimeObject* get_awaiter_0() const { return ___awaiter_0; }
	inline RuntimeObject** get_address_of_awaiter_0() { return &___awaiter_0; }
	inline void set_awaiter_0(RuntimeObject* value)
	{
		___awaiter_0 = value;
		Il2CppCodeGenWriteBarrier((&___awaiter_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCUNITAWAITER_T4259518821_H
#ifndef ISCANCELEDAWAITER_T2846147367_H
#define ISCANCELEDAWAITER_T2846147367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/IsCanceledAwaiter
struct  IsCanceledAwaiter_t2846147367  : public RuntimeObject
{
public:
	// UniRx.Async.IAwaiter UniRx.Async.UniTask/IsCanceledAwaiter::awaiter
	RuntimeObject* ___awaiter_0;

public:
	inline static int32_t get_offset_of_awaiter_0() { return static_cast<int32_t>(offsetof(IsCanceledAwaiter_t2846147367, ___awaiter_0)); }
	inline RuntimeObject* get_awaiter_0() const { return ___awaiter_0; }
	inline RuntimeObject** get_address_of_awaiter_0() { return &___awaiter_0; }
	inline void set_awaiter_0(RuntimeObject* value)
	{
		___awaiter_0 = value;
		Il2CppCodeGenWriteBarrier((&___awaiter_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISCANCELEDAWAITER_T2846147367_H
#ifndef WHENALLPROMISE_T1006072582_H
#define WHENALLPROMISE_T1006072582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/WhenAllPromise
struct  WhenAllPromise_t1006072582  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Async.UniTask/WhenAllPromise::completeCount
	int32_t ___completeCount_0;
	// System.Int32 UniRx.Async.UniTask/WhenAllPromise::resultLength
	int32_t ___resultLength_1;
	// System.Action UniRx.Async.UniTask/WhenAllPromise::whenComplete
	Action_t1264377477 * ___whenComplete_2;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo UniRx.Async.UniTask/WhenAllPromise::exception
	ExceptionDispatchInfo_t3750997369 * ___exception_3;

public:
	inline static int32_t get_offset_of_completeCount_0() { return static_cast<int32_t>(offsetof(WhenAllPromise_t1006072582, ___completeCount_0)); }
	inline int32_t get_completeCount_0() const { return ___completeCount_0; }
	inline int32_t* get_address_of_completeCount_0() { return &___completeCount_0; }
	inline void set_completeCount_0(int32_t value)
	{
		___completeCount_0 = value;
	}

	inline static int32_t get_offset_of_resultLength_1() { return static_cast<int32_t>(offsetof(WhenAllPromise_t1006072582, ___resultLength_1)); }
	inline int32_t get_resultLength_1() const { return ___resultLength_1; }
	inline int32_t* get_address_of_resultLength_1() { return &___resultLength_1; }
	inline void set_resultLength_1(int32_t value)
	{
		___resultLength_1 = value;
	}

	inline static int32_t get_offset_of_whenComplete_2() { return static_cast<int32_t>(offsetof(WhenAllPromise_t1006072582, ___whenComplete_2)); }
	inline Action_t1264377477 * get_whenComplete_2() const { return ___whenComplete_2; }
	inline Action_t1264377477 ** get_address_of_whenComplete_2() { return &___whenComplete_2; }
	inline void set_whenComplete_2(Action_t1264377477 * value)
	{
		___whenComplete_2 = value;
		Il2CppCodeGenWriteBarrier((&___whenComplete_2), value);
	}

	inline static int32_t get_offset_of_exception_3() { return static_cast<int32_t>(offsetof(WhenAllPromise_t1006072582, ___exception_3)); }
	inline ExceptionDispatchInfo_t3750997369 * get_exception_3() const { return ___exception_3; }
	inline ExceptionDispatchInfo_t3750997369 ** get_address_of_exception_3() { return &___exception_3; }
	inline void set_exception_3(ExceptionDispatchInfo_t3750997369 * value)
	{
		___exception_3 = value;
		Il2CppCodeGenWriteBarrier((&___exception_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHENALLPROMISE_T1006072582_H
#ifndef WHENANYPROMISE_T1810881040_H
#define WHENANYPROMISE_T1810881040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/WhenAnyPromise
struct  WhenAnyPromise_t1810881040  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Async.UniTask/WhenAnyPromise::completeCount
	int32_t ___completeCount_0;
	// System.Int32 UniRx.Async.UniTask/WhenAnyPromise::winArgumentIndex
	int32_t ___winArgumentIndex_1;
	// System.Action UniRx.Async.UniTask/WhenAnyPromise::whenComplete
	Action_t1264377477 * ___whenComplete_2;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo UniRx.Async.UniTask/WhenAnyPromise::exception
	ExceptionDispatchInfo_t3750997369 * ___exception_3;

public:
	inline static int32_t get_offset_of_completeCount_0() { return static_cast<int32_t>(offsetof(WhenAnyPromise_t1810881040, ___completeCount_0)); }
	inline int32_t get_completeCount_0() const { return ___completeCount_0; }
	inline int32_t* get_address_of_completeCount_0() { return &___completeCount_0; }
	inline void set_completeCount_0(int32_t value)
	{
		___completeCount_0 = value;
	}

	inline static int32_t get_offset_of_winArgumentIndex_1() { return static_cast<int32_t>(offsetof(WhenAnyPromise_t1810881040, ___winArgumentIndex_1)); }
	inline int32_t get_winArgumentIndex_1() const { return ___winArgumentIndex_1; }
	inline int32_t* get_address_of_winArgumentIndex_1() { return &___winArgumentIndex_1; }
	inline void set_winArgumentIndex_1(int32_t value)
	{
		___winArgumentIndex_1 = value;
	}

	inline static int32_t get_offset_of_whenComplete_2() { return static_cast<int32_t>(offsetof(WhenAnyPromise_t1810881040, ___whenComplete_2)); }
	inline Action_t1264377477 * get_whenComplete_2() const { return ___whenComplete_2; }
	inline Action_t1264377477 ** get_address_of_whenComplete_2() { return &___whenComplete_2; }
	inline void set_whenComplete_2(Action_t1264377477 * value)
	{
		___whenComplete_2 = value;
		Il2CppCodeGenWriteBarrier((&___whenComplete_2), value);
	}

	inline static int32_t get_offset_of_exception_3() { return static_cast<int32_t>(offsetof(WhenAnyPromise_t1810881040, ___exception_3)); }
	inline ExceptionDispatchInfo_t3750997369 * get_exception_3() const { return ___exception_3; }
	inline ExceptionDispatchInfo_t3750997369 ** get_address_of_exception_3() { return &___exception_3; }
	inline void set_exception_3(ExceptionDispatchInfo_t3750997369 * value)
	{
		___exception_3 = value;
		Il2CppCodeGenWriteBarrier((&___exception_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHENANYPROMISE_T1810881040_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef CANCELLATIONTOKEN_T784455623_H
#define CANCELLATIONTOKEN_T784455623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t784455623 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t540272775 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623, ___m_source_0)); }
	inline CancellationTokenSource_t540272775 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t540272775 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t540272775 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t784455623_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t3252573759 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t3252573759 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t3252573759 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t3252573759 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_pinvoke
{
	CancellationTokenSource_t540272775 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_com
{
	CancellationTokenSource_t540272775 * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T784455623_H
#ifndef ASYNCUNIT_T89357596_H
#define ASYNCUNIT_T89357596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.AsyncUnit
struct  AsyncUnit_t89357596 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_t89357596__padding[1];
	};

public:
};

struct AsyncUnit_t89357596_StaticFields
{
public:
	// UniRx.Async.AsyncUnit UniRx.Async.AsyncUnit::Default
	AsyncUnit_t89357596  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(AsyncUnit_t89357596_StaticFields, ___Default_0)); }
	inline AsyncUnit_t89357596  get_Default_0() const { return ___Default_0; }
	inline AsyncUnit_t89357596 * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(AsyncUnit_t89357596  value)
	{
		___Default_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCUNIT_T89357596_H
#ifndef ASYNCUNITASKVOIDMETHODBUILDER_T1734012961_H
#define ASYNCUNITASKVOIDMETHODBUILDER_T1734012961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct  AsyncUniTaskVoidMethodBuilder_t1734012961 
{
public:
	// System.Action UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder::moveNext
	Action_t1264377477 * ___moveNext_0;

public:
	inline static int32_t get_offset_of_moveNext_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskVoidMethodBuilder_t1734012961, ___moveNext_0)); }
	inline Action_t1264377477 * get_moveNext_0() const { return ___moveNext_0; }
	inline Action_t1264377477 ** get_address_of_moveNext_0() { return &___moveNext_0; }
	inline void set_moveNext_0(Action_t1264377477 * value)
	{
		___moveNext_0 = value;
		Il2CppCodeGenWriteBarrier((&___moveNext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t1734012961_marshaled_pinvoke
{
	Il2CppMethodPointer ___moveNext_0;
};
// Native definition for COM marshalling of UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t1734012961_marshaled_com
{
	Il2CppMethodPointer ___moveNext_0;
};
#endif // ASYNCUNITASKVOIDMETHODBUILDER_T1734012961_H
#ifndef AWAITER_T65917499_H
#define AWAITER_T65917499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/WhenAllPromise/Awaiter
struct  Awaiter_t65917499 
{
public:
	// UniRx.Async.UniTask/WhenAllPromise UniRx.Async.UniTask/WhenAllPromise/Awaiter::parent
	WhenAllPromise_t1006072582 * ___parent_0;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(Awaiter_t65917499, ___parent_0)); }
	inline WhenAllPromise_t1006072582 * get_parent_0() const { return ___parent_0; }
	inline WhenAllPromise_t1006072582 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(WhenAllPromise_t1006072582 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UniRx.Async.UniTask/WhenAllPromise/Awaiter
struct Awaiter_t65917499_marshaled_pinvoke
{
	WhenAllPromise_t1006072582 * ___parent_0;
};
// Native definition for COM marshalling of UniRx.Async.UniTask/WhenAllPromise/Awaiter
struct Awaiter_t65917499_marshaled_com
{
	WhenAllPromise_t1006072582 * ___parent_0;
};
#endif // AWAITER_T65917499_H
#ifndef AWAITER_T2449784271_H
#define AWAITER_T2449784271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/WhenAnyPromise/Awaiter
struct  Awaiter_t2449784271 
{
public:
	// UniRx.Async.UniTask/WhenAnyPromise UniRx.Async.UniTask/WhenAnyPromise/Awaiter::parent
	WhenAnyPromise_t1810881040 * ___parent_0;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(Awaiter_t2449784271, ___parent_0)); }
	inline WhenAnyPromise_t1810881040 * get_parent_0() const { return ___parent_0; }
	inline WhenAnyPromise_t1810881040 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(WhenAnyPromise_t1810881040 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UniRx.Async.UniTask/WhenAnyPromise/Awaiter
struct Awaiter_t2449784271_marshaled_pinvoke
{
	WhenAnyPromise_t1810881040 * ___parent_0;
};
// Native definition for COM marshalling of UniRx.Async.UniTask/WhenAnyPromise/Awaiter
struct Awaiter_t2449784271_marshaled_com
{
	WhenAnyPromise_t1810881040 * ___parent_0;
};
#endif // AWAITER_T2449784271_H
#ifndef AWAITERSTATUS_T2968141202_H
#define AWAITERSTATUS_T2968141202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.AwaiterStatus
struct  AwaiterStatus_t2968141202 
{
public:
	// System.Int32 UniRx.Async.AwaiterStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AwaiterStatus_t2968141202, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AWAITERSTATUS_T2968141202_H
#ifndef PLAYERLOOPTIMING_T315725744_H
#define PLAYERLOOPTIMING_T315725744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.PlayerLoopTiming
struct  PlayerLoopTiming_t315725744 
{
public:
	// System.Int32 UniRx.Async.PlayerLoopTiming::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerLoopTiming_t315725744, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLOOPTIMING_T315725744_H
#ifndef UNITASK_1_T1085457848_H
#define UNITASK_1_T1085457848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask`1<UniRx.Async.AsyncUnit>
struct  UniTask_1_t1085457848 
{
public:
	// T UniRx.Async.UniTask`1::result
	AsyncUnit_t89357596  ___result_0;
	// UniRx.Async.IAwaiter`1<T> UniRx.Async.UniTask`1::awaiter
	RuntimeObject* ___awaiter_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTask_1_t1085457848, ___result_0)); }
	inline AsyncUnit_t89357596  get_result_0() const { return ___result_0; }
	inline AsyncUnit_t89357596 * get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(AsyncUnit_t89357596  value)
	{
		___result_0 = value;
	}

	inline static int32_t get_offset_of_awaiter_1() { return static_cast<int32_t>(offsetof(UniTask_1_t1085457848, ___awaiter_1)); }
	inline RuntimeObject* get_awaiter_1() const { return ___awaiter_1; }
	inline RuntimeObject** get_address_of_awaiter_1() { return &___awaiter_1; }
	inline void set_awaiter_1(RuntimeObject* value)
	{
		___awaiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___awaiter_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITASK_1_T1085457848_H
#ifndef REUSABLEPROMISE_T2891273818_H
#define REUSABLEPROMISE_T2891273818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.Internal.ReusablePromise
struct  ReusablePromise_t2891273818  : public RuntimeObject
{
public:
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo UniRx.Async.Internal.ReusablePromise::exception
	ExceptionDispatchInfo_t3750997369 * ___exception_0;
	// System.Object UniRx.Async.Internal.ReusablePromise::continuation
	RuntimeObject * ___continuation_1;
	// UniRx.Async.AwaiterStatus UniRx.Async.Internal.ReusablePromise::status
	int32_t ___status_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(ReusablePromise_t2891273818, ___exception_0)); }
	inline ExceptionDispatchInfo_t3750997369 * get_exception_0() const { return ___exception_0; }
	inline ExceptionDispatchInfo_t3750997369 ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(ExceptionDispatchInfo_t3750997369 * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_0), value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(ReusablePromise_t2891273818, ___continuation_1)); }
	inline RuntimeObject * get_continuation_1() const { return ___continuation_1; }
	inline RuntimeObject ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(RuntimeObject * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((&___continuation_1), value);
	}

	inline static int32_t get_offset_of_status_2() { return static_cast<int32_t>(offsetof(ReusablePromise_t2891273818, ___status_2)); }
	inline int32_t get_status_2() const { return ___status_2; }
	inline int32_t* get_address_of_status_2() { return &___status_2; }
	inline void set_status_2(int32_t value)
	{
		___status_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REUSABLEPROMISE_T2891273818_H
#ifndef REUSABLEPROMISE_1_T430895174_H
#define REUSABLEPROMISE_1_T430895174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.Internal.ReusablePromise`1<System.Int32>
struct  ReusablePromise_1_t430895174  : public RuntimeObject
{
public:
	// T UniRx.Async.Internal.ReusablePromise`1::result
	int32_t ___result_0;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo UniRx.Async.Internal.ReusablePromise`1::exception
	ExceptionDispatchInfo_t3750997369 * ___exception_1;
	// System.Object UniRx.Async.Internal.ReusablePromise`1::continuation
	RuntimeObject * ___continuation_2;
	// UniRx.Async.AwaiterStatus UniRx.Async.Internal.ReusablePromise`1::status
	int32_t ___status_3;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(ReusablePromise_1_t430895174, ___result_0)); }
	inline int32_t get_result_0() const { return ___result_0; }
	inline int32_t* get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(int32_t value)
	{
		___result_0 = value;
	}

	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(ReusablePromise_1_t430895174, ___exception_1)); }
	inline ExceptionDispatchInfo_t3750997369 * get_exception_1() const { return ___exception_1; }
	inline ExceptionDispatchInfo_t3750997369 ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(ExceptionDispatchInfo_t3750997369 * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_continuation_2() { return static_cast<int32_t>(offsetof(ReusablePromise_1_t430895174, ___continuation_2)); }
	inline RuntimeObject * get_continuation_2() const { return ___continuation_2; }
	inline RuntimeObject ** get_address_of_continuation_2() { return &___continuation_2; }
	inline void set_continuation_2(RuntimeObject * value)
	{
		___continuation_2 = value;
		Il2CppCodeGenWriteBarrier((&___continuation_2), value);
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(ReusablePromise_1_t430895174, ___status_3)); }
	inline int32_t get_status_3() const { return ___status_3; }
	inline int32_t* get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(int32_t value)
	{
		___status_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REUSABLEPROMISE_1_T430895174_H
#ifndef UNITASK_T2999217737_H
#define UNITASK_T2999217737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask
struct  UniTask_t2999217737 
{
public:
	// UniRx.Async.IAwaiter UniRx.Async.UniTask::awaiter
	RuntimeObject* ___awaiter_1;

public:
	inline static int32_t get_offset_of_awaiter_1() { return static_cast<int32_t>(offsetof(UniTask_t2999217737, ___awaiter_1)); }
	inline RuntimeObject* get_awaiter_1() const { return ___awaiter_1; }
	inline RuntimeObject** get_address_of_awaiter_1() { return &___awaiter_1; }
	inline void set_awaiter_1(RuntimeObject* value)
	{
		___awaiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___awaiter_1), value);
	}
};

struct UniTask_t2999217737_StaticFields
{
public:
	// UniRx.Async.UniTask`1<UniRx.Async.AsyncUnit> UniRx.Async.UniTask::DefaultAsyncUnitTask
	UniTask_1_t1085457848  ___DefaultAsyncUnitTask_0;
	// UniRx.Async.UniTask UniRx.Async.UniTask::CanceledUniTask
	UniTask_t2999217737  ___CanceledUniTask_2;

public:
	inline static int32_t get_offset_of_DefaultAsyncUnitTask_0() { return static_cast<int32_t>(offsetof(UniTask_t2999217737_StaticFields, ___DefaultAsyncUnitTask_0)); }
	inline UniTask_1_t1085457848  get_DefaultAsyncUnitTask_0() const { return ___DefaultAsyncUnitTask_0; }
	inline UniTask_1_t1085457848 * get_address_of_DefaultAsyncUnitTask_0() { return &___DefaultAsyncUnitTask_0; }
	inline void set_DefaultAsyncUnitTask_0(UniTask_1_t1085457848  value)
	{
		___DefaultAsyncUnitTask_0 = value;
	}

	inline static int32_t get_offset_of_CanceledUniTask_2() { return static_cast<int32_t>(offsetof(UniTask_t2999217737_StaticFields, ___CanceledUniTask_2)); }
	inline UniTask_t2999217737  get_CanceledUniTask_2() const { return ___CanceledUniTask_2; }
	inline UniTask_t2999217737 * get_address_of_CanceledUniTask_2() { return &___CanceledUniTask_2; }
	inline void set_CanceledUniTask_2(UniTask_t2999217737  value)
	{
		___CanceledUniTask_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UniRx.Async.UniTask
struct UniTask_t2999217737_marshaled_pinvoke
{
	RuntimeObject* ___awaiter_1;
};
// Native definition for COM marshalling of UniRx.Async.UniTask
struct UniTask_t2999217737_marshaled_com
{
	RuntimeObject* ___awaiter_1;
};
#endif // UNITASK_T2999217737_H
#ifndef PLAYERLOOPREUSABLEPROMISEBASE_T491828126_H
#define PLAYERLOOPREUSABLEPROMISEBASE_T491828126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.Internal.PlayerLoopReusablePromiseBase
struct  PlayerLoopReusablePromiseBase_t491828126  : public ReusablePromise_t2891273818
{
public:
	// UniRx.Async.PlayerLoopTiming UniRx.Async.Internal.PlayerLoopReusablePromiseBase::timing
	int32_t ___timing_3;
	// System.Threading.CancellationToken UniRx.Async.Internal.PlayerLoopReusablePromiseBase::cancellationToken
	CancellationToken_t784455623  ___cancellationToken_4;
	// System.Boolean UniRx.Async.Internal.PlayerLoopReusablePromiseBase::isRunning
	bool ___isRunning_5;

public:
	inline static int32_t get_offset_of_timing_3() { return static_cast<int32_t>(offsetof(PlayerLoopReusablePromiseBase_t491828126, ___timing_3)); }
	inline int32_t get_timing_3() const { return ___timing_3; }
	inline int32_t* get_address_of_timing_3() { return &___timing_3; }
	inline void set_timing_3(int32_t value)
	{
		___timing_3 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(PlayerLoopReusablePromiseBase_t491828126, ___cancellationToken_4)); }
	inline CancellationToken_t784455623  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_t784455623 * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_t784455623  value)
	{
		___cancellationToken_4 = value;
	}

	inline static int32_t get_offset_of_isRunning_5() { return static_cast<int32_t>(offsetof(PlayerLoopReusablePromiseBase_t491828126, ___isRunning_5)); }
	inline bool get_isRunning_5() const { return ___isRunning_5; }
	inline bool* get_address_of_isRunning_5() { return &___isRunning_5; }
	inline void set_isRunning_5(bool value)
	{
		___isRunning_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLOOPREUSABLEPROMISEBASE_T491828126_H
#ifndef PLAYERLOOPREUSABLEPROMISEBASE_1_T2702688395_H
#define PLAYERLOOPREUSABLEPROMISEBASE_1_T2702688395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.Internal.PlayerLoopReusablePromiseBase`1<System.Int32>
struct  PlayerLoopReusablePromiseBase_1_t2702688395  : public ReusablePromise_1_t430895174
{
public:
	// UniRx.Async.PlayerLoopTiming UniRx.Async.Internal.PlayerLoopReusablePromiseBase`1::timing
	int32_t ___timing_4;
	// System.Threading.CancellationToken UniRx.Async.Internal.PlayerLoopReusablePromiseBase`1::cancellationToken
	CancellationToken_t784455623  ___cancellationToken_5;
	// System.Boolean UniRx.Async.Internal.PlayerLoopReusablePromiseBase`1::isRunning
	bool ___isRunning_6;

public:
	inline static int32_t get_offset_of_timing_4() { return static_cast<int32_t>(offsetof(PlayerLoopReusablePromiseBase_1_t2702688395, ___timing_4)); }
	inline int32_t get_timing_4() const { return ___timing_4; }
	inline int32_t* get_address_of_timing_4() { return &___timing_4; }
	inline void set_timing_4(int32_t value)
	{
		___timing_4 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_5() { return static_cast<int32_t>(offsetof(PlayerLoopReusablePromiseBase_1_t2702688395, ___cancellationToken_5)); }
	inline CancellationToken_t784455623  get_cancellationToken_5() const { return ___cancellationToken_5; }
	inline CancellationToken_t784455623 * get_address_of_cancellationToken_5() { return &___cancellationToken_5; }
	inline void set_cancellationToken_5(CancellationToken_t784455623  value)
	{
		___cancellationToken_5 = value;
	}

	inline static int32_t get_offset_of_isRunning_6() { return static_cast<int32_t>(offsetof(PlayerLoopReusablePromiseBase_1_t2702688395, ___isRunning_6)); }
	inline bool get_isRunning_6() const { return ___isRunning_6; }
	inline bool* get_address_of_isRunning_6() { return &___isRunning_6; }
	inline void set_isRunning_6(bool value)
	{
		___isRunning_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLOOPREUSABLEPROMISEBASE_1_T2702688395_H
#ifndef AWAITER_T3115729477_H
#define AWAITER_T3115729477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/Awaiter
struct  Awaiter_t3115729477 
{
public:
	// UniRx.Async.UniTask UniRx.Async.UniTask/Awaiter::task
	UniTask_t2999217737  ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(Awaiter_t3115729477, ___task_0)); }
	inline UniTask_t2999217737  get_task_0() const { return ___task_0; }
	inline UniTask_t2999217737 * get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(UniTask_t2999217737  value)
	{
		___task_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UniRx.Async.UniTask/Awaiter
struct Awaiter_t3115729477_marshaled_pinvoke
{
	UniTask_t2999217737_marshaled_pinvoke ___task_0;
};
// Native definition for COM marshalling of UniRx.Async.UniTask/Awaiter
struct Awaiter_t3115729477_marshaled_com
{
	UniTask_t2999217737_marshaled_com ___task_0;
};
#endif // AWAITER_T3115729477_H
#ifndef DELAYFRAMEPROMISE_T3641985670_H
#define DELAYFRAMEPROMISE_T3641985670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/DelayFramePromise
struct  DelayFramePromise_t3641985670  : public PlayerLoopReusablePromiseBase_1_t2702688395
{
public:
	// System.Int32 UniRx.Async.UniTask/DelayFramePromise::delayFrameCount
	int32_t ___delayFrameCount_7;
	// System.Int32 UniRx.Async.UniTask/DelayFramePromise::currentFrameCount
	int32_t ___currentFrameCount_8;

public:
	inline static int32_t get_offset_of_delayFrameCount_7() { return static_cast<int32_t>(offsetof(DelayFramePromise_t3641985670, ___delayFrameCount_7)); }
	inline int32_t get_delayFrameCount_7() const { return ___delayFrameCount_7; }
	inline int32_t* get_address_of_delayFrameCount_7() { return &___delayFrameCount_7; }
	inline void set_delayFrameCount_7(int32_t value)
	{
		___delayFrameCount_7 = value;
	}

	inline static int32_t get_offset_of_currentFrameCount_8() { return static_cast<int32_t>(offsetof(DelayFramePromise_t3641985670, ___currentFrameCount_8)); }
	inline int32_t get_currentFrameCount_8() const { return ___currentFrameCount_8; }
	inline int32_t* get_address_of_currentFrameCount_8() { return &___currentFrameCount_8; }
	inline void set_currentFrameCount_8(int32_t value)
	{
		___currentFrameCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELAYFRAMEPROMISE_T3641985670_H
#ifndef DELAYIGNORETIMESCALEPROMISE_T2050698749_H
#define DELAYIGNORETIMESCALEPROMISE_T2050698749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/DelayIgnoreTimeScalePromise
struct  DelayIgnoreTimeScalePromise_t2050698749  : public PlayerLoopReusablePromiseBase_t491828126
{
public:
	// System.Single UniRx.Async.UniTask/DelayIgnoreTimeScalePromise::delayFrameTimeSpan
	float ___delayFrameTimeSpan_6;
	// System.Single UniRx.Async.UniTask/DelayIgnoreTimeScalePromise::elapsed
	float ___elapsed_7;

public:
	inline static int32_t get_offset_of_delayFrameTimeSpan_6() { return static_cast<int32_t>(offsetof(DelayIgnoreTimeScalePromise_t2050698749, ___delayFrameTimeSpan_6)); }
	inline float get_delayFrameTimeSpan_6() const { return ___delayFrameTimeSpan_6; }
	inline float* get_address_of_delayFrameTimeSpan_6() { return &___delayFrameTimeSpan_6; }
	inline void set_delayFrameTimeSpan_6(float value)
	{
		___delayFrameTimeSpan_6 = value;
	}

	inline static int32_t get_offset_of_elapsed_7() { return static_cast<int32_t>(offsetof(DelayIgnoreTimeScalePromise_t2050698749, ___elapsed_7)); }
	inline float get_elapsed_7() const { return ___elapsed_7; }
	inline float* get_address_of_elapsed_7() { return &___elapsed_7; }
	inline void set_elapsed_7(float value)
	{
		___elapsed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELAYIGNORETIMESCALEPROMISE_T2050698749_H
#ifndef DELAYPROMISE_T3613007650_H
#define DELAYPROMISE_T3613007650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/DelayPromise
struct  DelayPromise_t3613007650  : public PlayerLoopReusablePromiseBase_t491828126
{
public:
	// System.Single UniRx.Async.UniTask/DelayPromise::delayFrameTimeSpan
	float ___delayFrameTimeSpan_6;
	// System.Single UniRx.Async.UniTask/DelayPromise::elapsed
	float ___elapsed_7;

public:
	inline static int32_t get_offset_of_delayFrameTimeSpan_6() { return static_cast<int32_t>(offsetof(DelayPromise_t3613007650, ___delayFrameTimeSpan_6)); }
	inline float get_delayFrameTimeSpan_6() const { return ___delayFrameTimeSpan_6; }
	inline float* get_address_of_delayFrameTimeSpan_6() { return &___delayFrameTimeSpan_6; }
	inline void set_delayFrameTimeSpan_6(float value)
	{
		___delayFrameTimeSpan_6 = value;
	}

	inline static int32_t get_offset_of_elapsed_7() { return static_cast<int32_t>(offsetof(DelayPromise_t3613007650, ___elapsed_7)); }
	inline float get_elapsed_7() const { return ___elapsed_7; }
	inline float* get_address_of_elapsed_7() { return &___elapsed_7; }
	inline void set_elapsed_7(float value)
	{
		___elapsed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELAYPROMISE_T3613007650_H
#ifndef WAITUNTILPROMISE_T2440566612_H
#define WAITUNTILPROMISE_T2440566612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/WaitUntilPromise
struct  WaitUntilPromise_t2440566612  : public PlayerLoopReusablePromiseBase_t491828126
{
public:
	// System.Func`1<System.Boolean> UniRx.Async.UniTask/WaitUntilPromise::predicate
	Func_1_t3822001908 * ___predicate_6;

public:
	inline static int32_t get_offset_of_predicate_6() { return static_cast<int32_t>(offsetof(WaitUntilPromise_t2440566612, ___predicate_6)); }
	inline Func_1_t3822001908 * get_predicate_6() const { return ___predicate_6; }
	inline Func_1_t3822001908 ** get_address_of_predicate_6() { return &___predicate_6; }
	inline void set_predicate_6(Func_1_t3822001908 * value)
	{
		___predicate_6 = value;
		Il2CppCodeGenWriteBarrier((&___predicate_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITUNTILPROMISE_T2440566612_H
#ifndef WAITWHILEPROMISE_T833574124_H
#define WAITWHILEPROMISE_T833574124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/WaitWhilePromise
struct  WaitWhilePromise_t833574124  : public PlayerLoopReusablePromiseBase_t491828126
{
public:
	// System.Func`1<System.Boolean> UniRx.Async.UniTask/WaitWhilePromise::predicate
	Func_1_t3822001908 * ___predicate_6;

public:
	inline static int32_t get_offset_of_predicate_6() { return static_cast<int32_t>(offsetof(WaitWhilePromise_t833574124, ___predicate_6)); }
	inline Func_1_t3822001908 * get_predicate_6() const { return ___predicate_6; }
	inline Func_1_t3822001908 ** get_address_of_predicate_6() { return &___predicate_6; }
	inline void set_predicate_6(Func_1_t3822001908 * value)
	{
		___predicate_6 = value;
		Il2CppCodeGenWriteBarrier((&___predicate_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITWHILEPROMISE_T833574124_H
#ifndef U3CRUNTASKU3ED__6_T3214119581_H
#define U3CRUNTASKU3ED__6_T3214119581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/WhenAllPromise/<RunTask>d__6
struct  U3CRunTaskU3Ed__6_t3214119581  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Async.UniTask/WhenAllPromise/<RunTask>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder UniRx.Async.UniTask/WhenAllPromise/<RunTask>d__6::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t1734012961  ___U3CU3Et__builder_1;
	// UniRx.Async.UniTask UniRx.Async.UniTask/WhenAllPromise/<RunTask>d__6::task
	UniTask_t2999217737  ___task_2;
	// System.Int32 UniRx.Async.UniTask/WhenAllPromise/<RunTask>d__6::index
	int32_t ___index_3;
	// UniRx.Async.UniTask/WhenAllPromise UniRx.Async.UniTask/WhenAllPromise/<RunTask>d__6::<>4__this
	WhenAllPromise_t1006072582 * ___U3CU3E4__this_4;
	// System.Int32 UniRx.Async.UniTask/WhenAllPromise/<RunTask>d__6::<count>5__1
	int32_t ___U3CcountU3E5__1_5;
	// System.Exception UniRx.Async.UniTask/WhenAllPromise/<RunTask>d__6::<ex>5__2
	Exception_t * ___U3CexU3E5__2_6;
	// UniRx.Async.UniTask/Awaiter UniRx.Async.UniTask/WhenAllPromise/<RunTask>d__6::<>u__1
	Awaiter_t3115729477  ___U3CU3Eu__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t3214119581, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t3214119581, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskVoidMethodBuilder_t1734012961  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskVoidMethodBuilder_t1734012961 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskVoidMethodBuilder_t1734012961  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_task_2() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t3214119581, ___task_2)); }
	inline UniTask_t2999217737  get_task_2() const { return ___task_2; }
	inline UniTask_t2999217737 * get_address_of_task_2() { return &___task_2; }
	inline void set_task_2(UniTask_t2999217737  value)
	{
		___task_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t3214119581, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t3214119581, ___U3CU3E4__this_4)); }
	inline WhenAllPromise_t1006072582 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline WhenAllPromise_t1006072582 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(WhenAllPromise_t1006072582 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_4), value);
	}

	inline static int32_t get_offset_of_U3CcountU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t3214119581, ___U3CcountU3E5__1_5)); }
	inline int32_t get_U3CcountU3E5__1_5() const { return ___U3CcountU3E5__1_5; }
	inline int32_t* get_address_of_U3CcountU3E5__1_5() { return &___U3CcountU3E5__1_5; }
	inline void set_U3CcountU3E5__1_5(int32_t value)
	{
		___U3CcountU3E5__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CexU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t3214119581, ___U3CexU3E5__2_6)); }
	inline Exception_t * get_U3CexU3E5__2_6() const { return ___U3CexU3E5__2_6; }
	inline Exception_t ** get_address_of_U3CexU3E5__2_6() { return &___U3CexU3E5__2_6; }
	inline void set_U3CexU3E5__2_6(Exception_t * value)
	{
		___U3CexU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CexU3E5__2_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__6_t3214119581, ___U3CU3Eu__1_7)); }
	inline Awaiter_t3115729477  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline Awaiter_t3115729477 * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(Awaiter_t3115729477  value)
	{
		___U3CU3Eu__1_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRUNTASKU3ED__6_T3214119581_H
#ifndef U3CRUNTASKU3ED__7_T3912452459_H
#define U3CRUNTASKU3ED__7_T3912452459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/WhenAnyPromise/<RunTask>d__7
struct  U3CRunTaskU3Ed__7_t3912452459  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Async.UniTask/WhenAnyPromise/<RunTask>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder UniRx.Async.UniTask/WhenAnyPromise/<RunTask>d__7::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t1734012961  ___U3CU3Et__builder_1;
	// UniRx.Async.UniTask UniRx.Async.UniTask/WhenAnyPromise/<RunTask>d__7::task
	UniTask_t2999217737  ___task_2;
	// System.Int32 UniRx.Async.UniTask/WhenAnyPromise/<RunTask>d__7::index
	int32_t ___index_3;
	// UniRx.Async.UniTask/WhenAnyPromise UniRx.Async.UniTask/WhenAnyPromise/<RunTask>d__7::<>4__this
	WhenAnyPromise_t1810881040 * ___U3CU3E4__this_4;
	// System.Int32 UniRx.Async.UniTask/WhenAnyPromise/<RunTask>d__7::<count>5__1
	int32_t ___U3CcountU3E5__1_5;
	// System.Exception UniRx.Async.UniTask/WhenAnyPromise/<RunTask>d__7::<ex>5__2
	Exception_t * ___U3CexU3E5__2_6;
	// UniRx.Async.UniTask/Awaiter UniRx.Async.UniTask/WhenAnyPromise/<RunTask>d__7::<>u__1
	Awaiter_t3115729477  ___U3CU3Eu__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__7_t3912452459, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__7_t3912452459, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskVoidMethodBuilder_t1734012961  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskVoidMethodBuilder_t1734012961 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskVoidMethodBuilder_t1734012961  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_task_2() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__7_t3912452459, ___task_2)); }
	inline UniTask_t2999217737  get_task_2() const { return ___task_2; }
	inline UniTask_t2999217737 * get_address_of_task_2() { return &___task_2; }
	inline void set_task_2(UniTask_t2999217737  value)
	{
		___task_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__7_t3912452459, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__7_t3912452459, ___U3CU3E4__this_4)); }
	inline WhenAnyPromise_t1810881040 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline WhenAnyPromise_t1810881040 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(WhenAnyPromise_t1810881040 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_4), value);
	}

	inline static int32_t get_offset_of_U3CcountU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__7_t3912452459, ___U3CcountU3E5__1_5)); }
	inline int32_t get_U3CcountU3E5__1_5() const { return ___U3CcountU3E5__1_5; }
	inline int32_t* get_address_of_U3CcountU3E5__1_5() { return &___U3CcountU3E5__1_5; }
	inline void set_U3CcountU3E5__1_5(int32_t value)
	{
		___U3CcountU3E5__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CexU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__7_t3912452459, ___U3CexU3E5__2_6)); }
	inline Exception_t * get_U3CexU3E5__2_6() const { return ___U3CexU3E5__2_6; }
	inline Exception_t ** get_address_of_U3CexU3E5__2_6() { return &___U3CexU3E5__2_6; }
	inline void set_U3CexU3E5__2_6(Exception_t * value)
	{
		___U3CexU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CexU3E5__2_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3CRunTaskU3Ed__7_t3912452459, ___U3CU3Eu__1_7)); }
	inline Awaiter_t3115729477  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline Awaiter_t3115729477 * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(Awaiter_t3115729477  value)
	{
		___U3CU3Eu__1_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRUNTASKU3ED__7_T3912452459_H
#ifndef YIELDPROMISE_T2253840786_H
#define YIELDPROMISE_T2253840786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Async.UniTask/YieldPromise
struct  YieldPromise_t2253840786  : public PlayerLoopReusablePromiseBase_t491828126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YIELDPROMISE_T2253840786_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4100 = { sizeof (PlayerLoopHelper_t1546603372), -1, sizeof(PlayerLoopHelper_t1546603372_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4100[4] = 
{
	PlayerLoopHelper_t1546603372_StaticFields::get_offset_of_mainThreadId_0(),
	PlayerLoopHelper_t1546603372_StaticFields::get_offset_of_unitySynchronizationContetext_1(),
	PlayerLoopHelper_t1546603372_StaticFields::get_offset_of_yielders_2(),
	PlayerLoopHelper_t1546603372_StaticFields::get_offset_of_runners_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4101 = { sizeof (UniTask_t2999217737)+ sizeof (RuntimeObject), -1, sizeof(UniTask_t2999217737_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4101[3] = 
{
	UniTask_t2999217737_StaticFields::get_offset_of_DefaultAsyncUnitTask_0(),
	UniTask_t2999217737::get_offset_of_awaiter_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UniTask_t2999217737_StaticFields::get_offset_of_CanceledUniTask_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4102 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4102[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4103 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4103[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4104 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4104[10] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4105 = { sizeof (WhenAllPromise_t1006072582), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4105[4] = 
{
	WhenAllPromise_t1006072582::get_offset_of_completeCount_0(),
	WhenAllPromise_t1006072582::get_offset_of_resultLength_1(),
	WhenAllPromise_t1006072582::get_offset_of_whenComplete_2(),
	WhenAllPromise_t1006072582::get_offset_of_exception_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4106 = { sizeof (Awaiter_t65917499)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4106[1] = 
{
	Awaiter_t65917499::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4107 = { sizeof (U3CRunTaskU3Ed__6_t3214119581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4107[8] = 
{
	U3CRunTaskU3Ed__6_t3214119581::get_offset_of_U3CU3E1__state_0(),
	U3CRunTaskU3Ed__6_t3214119581::get_offset_of_U3CU3Et__builder_1(),
	U3CRunTaskU3Ed__6_t3214119581::get_offset_of_task_2(),
	U3CRunTaskU3Ed__6_t3214119581::get_offset_of_index_3(),
	U3CRunTaskU3Ed__6_t3214119581::get_offset_of_U3CU3E4__this_4(),
	U3CRunTaskU3Ed__6_t3214119581::get_offset_of_U3CcountU3E5__1_5(),
	U3CRunTaskU3Ed__6_t3214119581::get_offset_of_U3CexU3E5__2_6(),
	U3CRunTaskU3Ed__6_t3214119581::get_offset_of_U3CU3Eu__1_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4108 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4108[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4109 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4109[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4110 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4110[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4111 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4111[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4112 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4112[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4113 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4113[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4114 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4114[10] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4115 = { sizeof (WhenAnyPromise_t1810881040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4115[4] = 
{
	WhenAnyPromise_t1810881040::get_offset_of_completeCount_0(),
	WhenAnyPromise_t1810881040::get_offset_of_winArgumentIndex_1(),
	WhenAnyPromise_t1810881040::get_offset_of_whenComplete_2(),
	WhenAnyPromise_t1810881040::get_offset_of_exception_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4116 = { sizeof (Awaiter_t2449784271)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4116[1] = 
{
	Awaiter_t2449784271::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4117 = { sizeof (U3CRunTaskU3Ed__7_t3912452459), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4117[8] = 
{
	U3CRunTaskU3Ed__7_t3912452459::get_offset_of_U3CU3E1__state_0(),
	U3CRunTaskU3Ed__7_t3912452459::get_offset_of_U3CU3Et__builder_1(),
	U3CRunTaskU3Ed__7_t3912452459::get_offset_of_task_2(),
	U3CRunTaskU3Ed__7_t3912452459::get_offset_of_index_3(),
	U3CRunTaskU3Ed__7_t3912452459::get_offset_of_U3CU3E4__this_4(),
	U3CRunTaskU3Ed__7_t3912452459::get_offset_of_U3CcountU3E5__1_5(),
	U3CRunTaskU3Ed__7_t3912452459::get_offset_of_U3CexU3E5__2_6(),
	U3CRunTaskU3Ed__7_t3912452459::get_offset_of_U3CU3Eu__1_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4118 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4118[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4119 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4119[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4120 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4120[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4121 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4121[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4122 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4122[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4123 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4123[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4124 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4124[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4125 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4125[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4126 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4126[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4127 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4127[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4128 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4128[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4129 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4129[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4130 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4130[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4131 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4131[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4132 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4132[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4133 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4133[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4134 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4134[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4135 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4135[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4136 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4136[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4137 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4137[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4138 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4138[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4139 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4139[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4140 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4140[10] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4141 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4141[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4142 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4142[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4143 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4143[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4144 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4144[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4145 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4145[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4146 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4146[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4147 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4147[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4148 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4148[11] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4149 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4149[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4150 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4150[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4151 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4151[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4152 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4152[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4153 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4153[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4154 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4154[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4155 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4155[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4156 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4156[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4157 = { sizeof (AsyncUnitAwaiter_t4259518821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4157[1] = 
{
	AsyncUnitAwaiter_t4259518821::get_offset_of_awaiter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4158 = { sizeof (IsCanceledAwaiter_t2846147367), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4158[1] = 
{
	IsCanceledAwaiter_t2846147367::get_offset_of_awaiter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4159 = { sizeof (Awaiter_t3115729477)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4159[1] = 
{
	Awaiter_t3115729477::get_offset_of_task_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4160 = { sizeof (WaitUntilPromise_t2440566612), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4160[1] = 
{
	WaitUntilPromise_t2440566612::get_offset_of_predicate_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4161 = { sizeof (WaitWhilePromise_t833574124), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4161[1] = 
{
	WaitWhilePromise_t833574124::get_offset_of_predicate_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4162 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4162[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4163 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4163[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4164 = { sizeof (YieldPromise_t2253840786), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4165 = { sizeof (DelayFramePromise_t3641985670), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4165[2] = 
{
	DelayFramePromise_t3641985670::get_offset_of_delayFrameCount_7(),
	DelayFramePromise_t3641985670::get_offset_of_currentFrameCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4166 = { sizeof (DelayPromise_t3613007650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4166[2] = 
{
	DelayPromise_t3613007650::get_offset_of_delayFrameTimeSpan_6(),
	DelayPromise_t3613007650::get_offset_of_elapsed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4167 = { sizeof (DelayIgnoreTimeScalePromise_t2050698749), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4167[2] = 
{
	DelayIgnoreTimeScalePromise_t2050698749::get_offset_of_delayFrameTimeSpan_6(),
	DelayIgnoreTimeScalePromise_t2050698749::get_offset_of_elapsed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4168 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4168[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4169 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4169[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4170 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4170[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4171 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4171[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4172 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4172[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4173 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4173[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4174 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4174[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4175 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4175[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4176 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4176[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4177 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4177[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4178 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4178[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4179 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4179[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4180 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4180[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4181 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4181[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4182 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4182[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4183 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4183[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4184 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4184[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4185 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4185[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4186 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4186[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4187 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4187[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4188 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4188[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4189 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4189[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4190 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4190[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4191 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4191[10] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4192 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4192[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4193 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4193[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4194 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4194[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4195 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4195[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4196 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4196[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4197 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4197[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4198 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4198[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4199 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4199[11] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
