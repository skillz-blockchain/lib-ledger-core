// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "BitcoinLikeAccount.hpp"  // my header
#include "Address.hpp"
#include "AddressListCallback.hpp"
#include "AmountCallback.hpp"
#include "BigIntListCallback.hpp"
#include "BitcoinLikeOutputListCallback.hpp"
#include "BitcoinLikePickingStrategy.hpp"
#include "BitcoinLikeTransaction.hpp"
#include "BitcoinLikeTransactionBuilder.hpp"
#include "I32Callback.hpp"
#include "Marshal.hpp"
#include "StringCallback.hpp"

namespace djinni_generated {

BitcoinLikeAccount::BitcoinLikeAccount() : ::djinni::JniInterface<::ledger::core::api::BitcoinLikeAccount, BitcoinLikeAccount>("BitcoinLikeAccount$CppProxy") {}

BitcoinLikeAccount::~BitcoinLikeAccount() = default;


CJNIEXPORT void JNICALL Java_BitcoinLikeAccount_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::BitcoinLikeAccount>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_BitcoinLikeAccount_00024CppProxy_native_1getUTXO(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_from, jint j_to, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeAccount>(nativeRef);
        ref->getUTXO(::djinni::I32::toCpp(jniEnv, j_from),
                     ::djinni::I32::toCpp(jniEnv, j_to),
                     ::djinni_generated::BitcoinLikeOutputListCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_BitcoinLikeAccount_00024CppProxy_native_1getUTXOCount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeAccount>(nativeRef);
        ref->getUTXOCount(::djinni_generated::I32Callback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_BitcoinLikeAccount_00024CppProxy_native_1broadcastRawTransaction(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jbyteArray j_transaction, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeAccount>(nativeRef);
        ref->broadcastRawTransaction(::djinni::Binary::toCpp(jniEnv, j_transaction),
                                     ::djinni_generated::StringCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_BitcoinLikeAccount_00024CppProxy_native_1broadcastTransaction(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_transaction, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeAccount>(nativeRef);
        ref->broadcastTransaction(::djinni_generated::BitcoinLikeTransaction::toCpp(jniEnv, j_transaction),
                                  ::djinni_generated::StringCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_BitcoinLikeAccount_00024CppProxy_native_1buildTransaction(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jboolean j_partial)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeAccount>(nativeRef);
        auto r = ref->buildTransaction(::djinni::Bool::toCpp(jniEnv, j_partial));
        return ::djinni::release(::djinni_generated::BitcoinLikeTransactionBuilder::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_BitcoinLikeAccount_00024CppProxy_native_1getFees(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeAccount>(nativeRef);
        ref->getFees(::djinni_generated::BigIntListCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_BitcoinLikeAccount_00024CppProxy_native_1getAddresses(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jlong j_from, jlong j_to, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeAccount>(nativeRef);
        ref->getAddresses(::djinni::I64::toCpp(jniEnv, j_from),
                          ::djinni::I64::toCpp(jniEnv, j_to),
                          ::djinni_generated::AddressListCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_BitcoinLikeAccount_00024CppProxy_native_1getAllAddresses(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeAccount>(nativeRef);
        auto r = ref->getAllAddresses();
        return ::djinni::release(::djinni::List<::djinni_generated::Address>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_BitcoinLikeAccount_00024CppProxy_native_1getMaxSpendable(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_strategy, jobject j_maxUtxos, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeAccount>(nativeRef);
        ref->getMaxSpendable(::djinni_generated::BitcoinLikePickingStrategy::toCpp(jniEnv, j_strategy),
                             ::djinni::Optional<std::experimental::optional, ::djinni::I32>::toCpp(jniEnv, j_maxUtxos),
                             ::djinni_generated::AmountCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
