#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
188,
201,
202,
203,
204,
205,
206,
207,
208,
209,
212,
213,
214,
382,
383,
384,
407,
408,
409,
426,
427,
428,
530,
531,
532,
535,
567,
568,
570,
572,
574,
576,
581,
589,
590,
591,
592,
593,
594,
595,
596,
597,
675,
676,
718,
727,
728,
797,
803,
806,
808,
813,
814,
816,
817,
821,
822,
824,
825,
828,
829,
830,
833,
835,
838,
840,
842,
851,
917,
919,
921,
931,
932,
933,
935,
941,
942,
943,
944,
945,
953,
954,
955,
959,
960,
962,
966,
967,
968,
1260,
1422,
1423,
8608,
8609,
8611,
8612,
8613,
8614,
8615,
8617,
8618,
8619,
8636,
8638,
8643,
8645,
8647,
8649,
8700,
8701,
8703,
8704,
8705,
8706,
8707,
8709,
8711,
9687,
9691,
9693,
9694,
9695,
9696,
10116,
10117,
10118,
10119,
10137,
10138,
10139,
10183,
10248,
10251,
10259,
10260,
10261,
10262,
10263,
10537,
10541,
10542,
10569,
10603,
10610,
10617,
10628,
10632,
10655,
10733,
10735,
10744,
10746,
10747,
10754,
10769,
10789,
10790,
10798,
10800,
10807,
10808,
10811,
10813,
10818,
10824,
10825,
10832,
10834,
10846,
10849,
10850,
10851,
10862,
10872,
10878,
10879,
10880,
10882,
10883,
10900,
10902,
10917,
10935,
10962,
10992,
10993,
11478,
11562,
11563,
11747,
11748,
11752,
11753,
11754,
11759,
11810,
12201,
12202,
12393,
12397,
12407,
13256,
13277,
13279,
13281,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 188,
ves_icall_System_Array_InternalCreate,
// token 201,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 202,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 203,
ves_icall_System_Array_CanChangePrimitive,
// token 204,
ves_icall_System_Array_FastCopy,
// token 205,
ves_icall_System_Array_GetLengthInternal_raw,
// token 206,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 207,
ves_icall_System_Array_GetGenericValue_icall,
// token 208,
ves_icall_System_Array_GetValueImpl_raw,
// token 209,
ves_icall_System_Array_SetGenericValue_icall,
// token 212,
ves_icall_System_Array_SetValueImpl_raw,
// token 213,
ves_icall_System_Array_InitializeInternal_raw,
// token 214,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 382,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 383,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 384,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 407,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 408,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 409,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 426,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 427,
ves_icall_System_Enum_InternalGetCorElementType,
// token 428,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 530,
ves_icall_System_Environment_get_ProcessorCount,
// token 531,
ves_icall_System_Environment_get_TickCount,
// token 532,
ves_icall_System_Environment_get_TickCount64,
// token 535,
ves_icall_System_Environment_FailFast_raw,
// token 567,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 568,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 570,
ves_icall_System_GC_SuppressFinalize_raw,
// token 572,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 574,
ves_icall_System_GC_GetGCMemoryInfo,
// token 576,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 581,
ves_icall_System_Object_MemberwiseClone_raw,
// token 589,
ves_icall_System_Math_Ceiling,
// token 590,
ves_icall_System_Math_Cos,
// token 591,
ves_icall_System_Math_Floor,
// token 592,
ves_icall_System_Math_Pow,
// token 593,
ves_icall_System_Math_Sin,
// token 594,
ves_icall_System_Math_Sqrt,
// token 595,
ves_icall_System_Math_Tan,
// token 596,
ves_icall_System_Math_Log2,
// token 597,
ves_icall_System_Math_ModF,
// token 675,
ves_icall_System_MathF_Log2,
// token 676,
ves_icall_System_MathF_ModF,
// token 718,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 727,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 728,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 797,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 803,
ves_icall_RuntimeType_make_array_type_raw,
// token 806,
ves_icall_RuntimeType_make_byref_type_raw,
// token 808,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 813,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 814,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 816,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 817,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 821,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 822,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 824,
ves_icall_System_RuntimeType_getFullName_raw,
// token 825,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 828,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 829,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 830,
ves_icall_RuntimeType_GetFields_native_raw,
// token 833,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 835,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 838,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 840,
ves_icall_RuntimeType_GetName_raw,
// token 842,
ves_icall_RuntimeType_GetNamespace_raw,
// token 851,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 917,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 919,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 921,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 931,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 932,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 933,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 935,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 941,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 942,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 943,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 944,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 945,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 953,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 954,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 955,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 959,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 960,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 962,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 966,
ves_icall_System_String_FastAllocateString_raw,
// token 967,
ves_icall_System_String_InternalIsInterned_raw,
// token 968,
ves_icall_System_String_InternalIntern_raw,
// token 1260,
ves_icall_System_Type_internal_from_handle_raw,
// token 1422,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1423,
ves_icall_System_ValueType_Equals_raw,
// token 8608,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8609,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8611,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8612,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8613,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8614,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8615,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8617,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8618,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8619,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8636,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8638,
mono_monitor_exit_icall_raw,
// token 8643,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8645,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8647,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8649,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8700,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8701,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8703,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8704,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8705,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8706,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8707,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8709,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8711,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9687,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9691,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9693,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9694,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9695,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9696,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 10116,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 10117,
ves_icall_System_GCHandle_InternalFree_raw,
// token 10118,
ves_icall_System_GCHandle_InternalGet_raw,
// token 10119,
ves_icall_System_GCHandle_InternalSet_raw,
// token 10137,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 10138,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 10139,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 10183,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 10248,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 10251,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 10259,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 10260,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 10261,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 10262,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10263,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 10537,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10541,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10542,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10569,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10603,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10610,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10617,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10628,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10632,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10655,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 10733,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 10735,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10744,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 10746,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 10747,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10754,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10769,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10789,
ves_icall_reflection_get_token_raw,
// token 10790,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10798,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10800,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10807,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10808,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10811,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10813,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10818,
ves_icall_reflection_get_token_raw,
// token 10824,
ves_icall_get_method_info_raw,
// token 10825,
ves_icall_get_method_attributes,
// token 10832,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10834,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10846,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10849,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10850,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10851,
ves_icall_reflection_get_token_raw,
// token 10862,
ves_icall_InternalInvoke_raw,
// token 10872,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10878,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10879,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10880,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10882,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10883,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10900,
ves_icall_InvokeClassConstructor_raw,
// token 10902,
ves_icall_InternalInvoke_raw,
// token 10917,
ves_icall_reflection_get_token_raw,
// token 10935,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10962,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10992,
ves_icall_reflection_get_token_raw,
// token 10993,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11478,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11562,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11563,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11747,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11748,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11752,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11753,
ves_icall_ModuleBuilder_getToken_raw,
// token 11754,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11759,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11810,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 12201,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 12202,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12393,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 12397,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 12407,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 13256,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13277,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13279,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13281,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
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
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
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
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
};
