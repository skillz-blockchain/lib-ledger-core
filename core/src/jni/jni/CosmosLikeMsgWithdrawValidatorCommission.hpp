// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEMSGWITHDRAWVALIDATORCOMMISSION_HPP_JNI_
#define DJINNI_GENERATED_COSMOSLIKEMSGWITHDRAWVALIDATORCOMMISSION_HPP_JNI_

#include "../../api/CosmosLikeMsgWithdrawValidatorCommission.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class CosmosLikeMsgWithdrawValidatorCommission final {
public:
    using CppType = ::ledger::core::api::CosmosLikeMsgWithdrawValidatorCommission;
    using JniType = jobject;

    using Boxed = CosmosLikeMsgWithdrawValidatorCommission;

    ~CosmosLikeMsgWithdrawValidatorCommission();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    CosmosLikeMsgWithdrawValidatorCommission();
    friend ::djinni::JniClass<CosmosLikeMsgWithdrawValidatorCommission>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("CosmosLikeMsgWithdrawValidatorCommission") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;)V") };
    const jfieldID field_validatorAddress { ::djinni::jniGetFieldID(clazz.get(), "validatorAddress", "Ljava/lang/String;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_COSMOSLIKEMSGWITHDRAWVALIDATORCOMMISSION_HPP_JNI_
