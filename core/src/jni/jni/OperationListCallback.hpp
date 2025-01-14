// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_OPERATIONLISTCALLBACK_HPP_JNI_
#define DJINNI_GENERATED_OPERATIONLISTCALLBACK_HPP_JNI_

#include "../../api/OperationListCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class OperationListCallback final : ::djinni::JniInterface<::ledger::core::api::OperationListCallback, OperationListCallback> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::OperationListCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::OperationListCallback>;
    using JniType = jobject;

    using Boxed = OperationListCallback;

    ~OperationListCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<OperationListCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<OperationListCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    OperationListCallback();
    friend ::djinni::JniClass<OperationListCallback>;
    friend ::djinni::JniInterface<::ledger::core::api::OperationListCallback, OperationListCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::OperationListCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onCallback(const std::experimental::optional<std::vector<std::shared_ptr<::ledger::core::api::Operation>>> & result, const std::experimental::optional<::ledger::core::api::Error> & error) override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::OperationListCallback, ::djinni_generated::OperationListCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("OperationListCallback") };
    const jmethodID method_onCallback { ::djinni::jniGetMethodID(clazz.get(), "onCallback", "(Ljava/util/ArrayList;LError;)V") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_OPERATIONLISTCALLBACK_HPP_JNI_
