// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#include "TezosConfigurationDefaults.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

TezosConfigurationDefaults::TezosConfigurationDefaults() : ::djinni::JniInterface<::ledger::core::api::TezosConfigurationDefaults, TezosConfigurationDefaults>("TezosConfigurationDefaults$CppProxy") {}

TezosConfigurationDefaults::~TezosConfigurationDefaults() = default;


CJNIEXPORT void JNICALL Java_TezosConfigurationDefaults_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::TezosConfigurationDefaults>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
