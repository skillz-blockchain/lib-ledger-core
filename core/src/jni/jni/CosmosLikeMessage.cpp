// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#include "CosmosLikeMessage.hpp"  // my header
#include "CosmosLikeMsgBeginRedelegate.hpp"
#include "CosmosLikeMsgCreateValidator.hpp"
#include "CosmosLikeMsgDelegate.hpp"
#include "CosmosLikeMsgDeposit.hpp"
#include "CosmosLikeMsgEditValidator.hpp"
#include "CosmosLikeMsgMultiSend.hpp"
#include "CosmosLikeMsgSend.hpp"
#include "CosmosLikeMsgSetWithdrawAddress.hpp"
#include "CosmosLikeMsgSubmitProposal.hpp"
#include "CosmosLikeMsgType.hpp"
#include "CosmosLikeMsgUndelegate.hpp"
#include "CosmosLikeMsgUnjail.hpp"
#include "CosmosLikeMsgVote.hpp"
#include "CosmosLikeMsgWithdrawDelegationReward.hpp"
#include "CosmosLikeMsgWithdrawDelegatorReward.hpp"
#include "CosmosLikeMsgWithdrawValidatorCommission.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

CosmosLikeMessage::CosmosLikeMessage() : ::djinni::JniInterface<::ledger::core::api::CosmosLikeMessage, CosmosLikeMessage>("CosmosLikeMessage$CppProxy") {}

CosmosLikeMessage::~CosmosLikeMessage() = default;


CJNIEXPORT void JNICALL Java_CosmosLikeMessage_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::CosmosLikeMessage>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_00024CppProxy_native_1getMessageType(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::CosmosLikeMessage>(nativeRef);
        auto r = ref->getMessageType();
        return ::djinni::release(::djinni_generated::CosmosLikeMsgType::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_CosmosLikeMessage_00024CppProxy_native_1getRawMessageType(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::CosmosLikeMessage>(nativeRef);
        auto r = ref->getRawMessageType();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_CosmosLikeMessage_00024CppProxy_native_1getSuccess(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::CosmosLikeMessage>(nativeRef);
        auto r = ref->getSuccess();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_CosmosLikeMessage_00024CppProxy_native_1getLog(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::CosmosLikeMessage>(nativeRef);
        auto r = ref->getLog();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_CosmosLikeMessage_00024CppProxy_native_1getIndex(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::CosmosLikeMessage>(nativeRef);
        auto r = ref->getIndex();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgSend(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgSend(::djinni_generated::CosmosLikeMsgSend::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgSend(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgSend(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgSend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgDelegate(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgDelegate(::djinni_generated::CosmosLikeMsgDelegate::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgDelegate(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgDelegate(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgDelegate::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgUndelegate(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgUndelegate(::djinni_generated::CosmosLikeMsgUndelegate::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgUndelegate(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgUndelegate(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgUndelegate::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgBeginRedelegate(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgBeginRedelegate(::djinni_generated::CosmosLikeMsgBeginRedelegate::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgBeginRedelegate(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgBeginRedelegate(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgBeginRedelegate::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgSubmitProposal(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgSubmitProposal(::djinni_generated::CosmosLikeMsgSubmitProposal::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgSubmitProposal(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgSubmitProposal(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgSubmitProposal::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgVote(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgVote(::djinni_generated::CosmosLikeMsgVote::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgVote(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgVote(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgVote::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgDeposit(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgDeposit(::djinni_generated::CosmosLikeMsgDeposit::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgDeposit(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgDeposit(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgDeposit::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgWithdrawDelegationReward(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgWithdrawDelegationReward(::djinni_generated::CosmosLikeMsgWithdrawDelegationReward::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgWithdrawDelegationReward(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgWithdrawDelegationReward(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgWithdrawDelegationReward::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgMultiSend(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgMultiSend(::djinni_generated::CosmosLikeMsgMultiSend::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgMultiSend(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgMultiSend(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgMultiSend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgCreateValidator(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgCreateValidator(::djinni_generated::CosmosLikeMsgCreateValidator::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgCreateValidator(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgCreateValidator(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgCreateValidator::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgEditValidator(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgEditValidator(::djinni_generated::CosmosLikeMsgEditValidator::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgEditValidator(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgEditValidator(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgEditValidator::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgSetWithdrawAddress(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgSetWithdrawAddress(::djinni_generated::CosmosLikeMsgSetWithdrawAddress::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgSetWithdrawAddress(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgSetWithdrawAddress(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgSetWithdrawAddress::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgWithdrawDelegatorReward(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgWithdrawDelegatorReward(::djinni_generated::CosmosLikeMsgWithdrawDelegatorReward::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgWithdrawDelegatorReward(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgWithdrawDelegatorReward(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgWithdrawDelegatorReward::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgWithdrawValidatorCommission(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgWithdrawValidatorCommission(::djinni_generated::CosmosLikeMsgWithdrawValidatorCommission::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgWithdrawValidatorCommission(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgWithdrawValidatorCommission(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgWithdrawValidatorCommission::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_wrapMsgUnjail(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::wrapMsgUnjail(::djinni_generated::CosmosLikeMsgUnjail::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMessage::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CosmosLikeMessage_unwrapMsgUnjail(JNIEnv* jniEnv, jobject /*this*/, jobject j_msg)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::CosmosLikeMessage::unwrapMsgUnjail(::djinni_generated::CosmosLikeMessage::toCpp(jniEnv, j_msg));
        return ::djinni::release(::djinni_generated::CosmosLikeMsgUnjail::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
