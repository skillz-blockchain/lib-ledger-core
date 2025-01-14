// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_ALGORANDASSETAMOUNTCALLBACK_HPP_JNI_
#define DJINNI_GENERATED_ALGORANDASSETAMOUNTCALLBACK_HPP_JNI_

#include "../../api/AlgorandAssetAmountCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class AlgorandAssetAmountCallback final : ::djinni::JniInterface<::ledger::core::api::AlgorandAssetAmountCallback, AlgorandAssetAmountCallback> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::AlgorandAssetAmountCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::AlgorandAssetAmountCallback>;
    using JniType = jobject;

    using Boxed = AlgorandAssetAmountCallback;

    ~AlgorandAssetAmountCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<AlgorandAssetAmountCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<AlgorandAssetAmountCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    AlgorandAssetAmountCallback();
    friend ::djinni::JniClass<AlgorandAssetAmountCallback>;
    friend ::djinni::JniInterface<::ledger::core::api::AlgorandAssetAmountCallback, AlgorandAssetAmountCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::AlgorandAssetAmountCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onCallback(const std::experimental::optional<::ledger::core::api::AlgorandAssetAmount> & result, const std::experimental::optional<::ledger::core::api::Error> & error) override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::AlgorandAssetAmountCallback, ::djinni_generated::AlgorandAssetAmountCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("AlgorandAssetAmountCallback") };
    const jmethodID method_onCallback { ::djinni::jniGetMethodID(clazz.get(), "onCallback", "(LAlgorandAssetAmount;LError;)V") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_ALGORANDASSETAMOUNTCALLBACK_HPP_JNI_
