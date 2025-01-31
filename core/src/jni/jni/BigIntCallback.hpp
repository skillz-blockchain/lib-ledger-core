// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_BIGINTCALLBACK_HPP_JNI_
#define DJINNI_GENERATED_BIGINTCALLBACK_HPP_JNI_

#include "../../api/BigIntCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BigIntCallback final : ::djinni::JniInterface<::ledger::core::api::BigIntCallback, BigIntCallback> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::BigIntCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BigIntCallback>;
    using JniType = jobject;

    using Boxed = BigIntCallback;

    ~BigIntCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<BigIntCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<BigIntCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    BigIntCallback();
    friend ::djinni::JniClass<BigIntCallback>;
    friend ::djinni::JniInterface<::ledger::core::api::BigIntCallback, BigIntCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::BigIntCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onCallback(const std::shared_ptr<::ledger::core::api::BigInt> & result, const std::experimental::optional<::ledger::core::api::Error> & error) override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::BigIntCallback, ::djinni_generated::BigIntCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("BigIntCallback") };
    const jmethodID method_onCallback { ::djinni::jniGetMethodID(clazz.get(), "onCallback", "(LBigInt;LError;)V") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_BIGINTCALLBACK_HPP_JNI_
