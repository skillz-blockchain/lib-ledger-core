// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_OPERATION_HPP_JNI_
#define DJINNI_GENERATED_OPERATION_HPP_JNI_

#include "../../api/Operation.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class Operation final : ::djinni::JniInterface<::ledger::core::api::Operation, Operation> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::Operation>;
    using CppOptType = std::shared_ptr<::ledger::core::api::Operation>;
    using JniType = jobject;

    using Boxed = Operation;

    ~Operation();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<Operation>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<Operation>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    Operation();
    friend ::djinni::JniClass<Operation>;
    friend ::djinni::JniInterface<::ledger::core::api::Operation, Operation>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_OPERATION_HPP_JNI_