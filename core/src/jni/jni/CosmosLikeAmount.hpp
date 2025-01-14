// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEAMOUNT_HPP_JNI_
#define DJINNI_GENERATED_COSMOSLIKEAMOUNT_HPP_JNI_

#include "../../api/CosmosLikeAmount.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class CosmosLikeAmount final {
public:
    using CppType = ::ledger::core::api::CosmosLikeAmount;
    using JniType = jobject;

    using Boxed = CosmosLikeAmount;

    ~CosmosLikeAmount();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    CosmosLikeAmount();
    friend ::djinni::JniClass<CosmosLikeAmount>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("CosmosLikeAmount") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;Ljava/lang/String;)V") };
    const jfieldID field_amount { ::djinni::jniGetFieldID(clazz.get(), "amount", "Ljava/lang/String;") };
    const jfieldID field_denom { ::djinni::jniGetFieldID(clazz.get(), "denom", "Ljava/lang/String;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_COSMOSLIKEAMOUNT_HPP_JNI_
