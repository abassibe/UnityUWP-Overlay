#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[35] = 
{
	{ 0, 0 } /* 0x06000001 System.Exception System.Linq.Error::ArgumentNull(System.String) */,
	{ 0, 0 } /* 0x06000002 System.Exception System.Linq.Error::MoreThanOneMatch() */,
	{ 0, 0 } /* 0x06000003 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x06000004 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x06000005 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>) */,
	{ 0, 0 } /* 0x06000006 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>) */,
	{ 0, 0 } /* 0x06000007 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>) */,
	{ 0, 0 } /* 0x06000008 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x06000009 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x0600000A System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>) */,
	{ 0, 0 } /* 0x0600000B System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x0600000C System.Void System.Linq.Enumerable/Iterator`1::.ctor() */,
	{ 0, 0 } /* 0x0600000D TSource System.Linq.Enumerable/Iterator`1::get_Current() */,
	{ 0, 0 } /* 0x0600000E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone() */,
	{ 0, 0 } /* 0x0600000F System.Void System.Linq.Enumerable/Iterator`1::Dispose() */,
	{ 0, 0 } /* 0x06000010 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator() */,
	{ 0, 0 } /* 0x06000011 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext() */,
	{ 0, 0 } /* 0x06000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x06000013 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current() */,
	{ 0, 0 } /* 0x06000014 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator() */,
	{ 0, 0 } /* 0x06000015 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x06000016 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone() */,
	{ 0, 0 } /* 0x06000017 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose() */,
	{ 0, 0 } /* 0x06000018 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext() */,
	{ 0, 0 } /* 0x06000019 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x0600001A System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x0600001B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone() */,
	{ 0, 0 } /* 0x0600001C System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext() */,
	{ 0, 0 } /* 0x0600001D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x0600001E System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x0600001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone() */,
	{ 0, 0 } /* 0x06000020 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext() */,
	{ 0, 0 } /* 0x06000021 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x06000022 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor() */,
	{ 0, 0 } /* 0x06000023 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsSystem_Core[];
Il2CppSequencePoint g_sequencePointsSystem_Core[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#else
extern Il2CppSequencePoint g_sequencePointsSystem_Core[];
Il2CppSequencePoint g_sequencePointsSystem_Core[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[35] = 
{
	{ 0, 0, 0 } /* System.Exception System.Linq.Error::ArgumentNull(System.String) */,
	{ 0, 0, 0 } /* System.Exception System.Linq.Error::MoreThanOneMatch() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>) */,
	{ 0, 0, 0 } /* TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>) */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/Iterator`1::.ctor() */,
	{ 0, 0, 0 } /* TSource System.Linq.Enumerable/Iterator`1::get_Current() */,
	{ 0, 0, 0 } /* System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone() */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/Iterator`1::Dispose() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator() */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current() */,
	{ 0, 0, 0 } /* System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator() */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone() */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose() */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone() */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone() */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor() */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationSystem_Core;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationSystem_Core = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	0,
	(Il2CppSequencePoint*)g_sequencePointsSystem_Core,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	0,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
