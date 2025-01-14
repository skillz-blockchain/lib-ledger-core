// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEMSGBEGINREDELEGATE_HPP_JNI_
#define DJINNI_GENERATED_COSMOSLIKEMSGBEGINREDELEGATE_HPP_JNI_

#include "../../api/CosmosLikeMsgBeginRedelegate.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class CosmosLikeMsgBeginRedelegate final {
public:
    using CppType = ::ledger::core::api::CosmosLikeMsgBeginRedelegate;
    using JniType = jobject;

    using Boxed = CosmosLikeMsgBeginRedelegate;

    ~CosmosLikeMsgBeginRedelegate();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    CosmosLikeMsgBeginRedelegate();
    friend ::djinni::JniClass<CosmosLikeMsgBeginRedelegate>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("CosmosLikeMsgBeginRedelegate") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;LCosmosLikeAmount;)V") };
    const jfieldID field_delegatorAddress { ::djinni::jniGetFieldID(clazz.get(), "delegatorAddress", "Ljava/lang/String;") };
    const jfieldID field_validatorSourceAddress { ::djinni::jniGetFieldID(clazz.get(), "validatorSourceAddress", "Ljava/lang/String;") };
    const jfieldID field_validatorDestinationAddress { ::djinni::jniGetFieldID(clazz.get(), "validatorDestinationAddress", "Ljava/lang/String;") };
    const jfieldID field_amount { ::djinni::jniGetFieldID(clazz.get(), "amount", "LCosmosLikeAmount;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_COSMOSLIKEMSGBEGINREDELEGATE_HPP_JNI_
