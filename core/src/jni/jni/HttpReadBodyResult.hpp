// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#ifndef DJINNI_GENERATED_HTTPREADBODYRESULT_HPP_JNI_
#define DJINNI_GENERATED_HTTPREADBODYRESULT_HPP_JNI_

#include "../../api/HttpReadBodyResult.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class HttpReadBodyResult final {
public:
    using CppType = ::ledger::core::api::HttpReadBodyResult;
    using JniType = jobject;

    using Boxed = HttpReadBodyResult;

    ~HttpReadBodyResult();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    HttpReadBodyResult();
    friend ::djinni::JniClass<HttpReadBodyResult>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("HttpReadBodyResult") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(LError;[B)V") };
    const jfieldID field_error { ::djinni::jniGetFieldID(clazz.get(), "error", "LError;") };
    const jfieldID field_data { ::djinni::jniGetFieldID(clazz.get(), "data", "[B") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_HTTPREADBODYRESULT_HPP_JNI_
