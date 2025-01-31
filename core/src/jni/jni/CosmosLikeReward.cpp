// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "CosmosLikeReward.hpp"  // my header
#include "Amount.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

CosmosLikeReward::CosmosLikeReward() : ::djinni::JniInterface<::ledger::core::api::CosmosLikeReward, CosmosLikeReward>("CosmosLikeReward$CppProxy") {}

CosmosLikeReward::~CosmosLikeReward() = default;


CJNIEXPORT void JNICALL Java_CosmosLikeReward_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::CosmosLikeReward>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_CosmosLikeReward_00024CppProxy_native_1getDelegatorAddress(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::CosmosLikeReward>(nativeRef);
        auto r = ref->getDelegatorAddress();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_CosmosLikeReward_00024CppProxy_native_1getValidatorAddress(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::CosmosLikeReward>(nativeRef);
        auto r = ref->getValidatorAddress();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeReward_00024CppProxy_native_1getRewardAmount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::CosmosLikeReward>(nativeRef);
        auto r = ref->getRewardAmount();
        return ::djinni::release(::djinni_generated::Amount::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
