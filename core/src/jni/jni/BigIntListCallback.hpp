// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_BIGINTLISTCALLBACK_HPP_JNI_
#define DJINNI_GENERATED_BIGINTLISTCALLBACK_HPP_JNI_

#include "../../api/BigIntListCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BigIntListCallback final : ::djinni::JniInterface<::ledger::core::api::BigIntListCallback, BigIntListCallback> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::BigIntListCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BigIntListCallback>;
    using JniType = jobject;

    using Boxed = BigIntListCallback;

    ~BigIntListCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<BigIntListCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<BigIntListCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    BigIntListCallback();
    friend ::djinni::JniClass<BigIntListCallback>;
    friend ::djinni::JniInterface<::ledger::core::api::BigIntListCallback, BigIntListCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::BigIntListCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onCallback(const std::experimental::optional<std::vector<std::shared_ptr<::ledger::core::api::BigInt>>> & result, const std::experimental::optional<::ledger::core::api::Error> & error) override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::BigIntListCallback, ::djinni_generated::BigIntListCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("BigIntListCallback") };
    const jmethodID method_onCallback { ::djinni::jniGetMethodID(clazz.get(), "onCallback", "(Ljava/util/ArrayList;LError;)V") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_BIGINTLISTCALLBACK_HPP_JNI_
