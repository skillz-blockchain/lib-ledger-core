// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEVOTEOPTION_HPP_JNI_
#define DJINNI_GENERATED_COSMOSLIKEVOTEOPTION_HPP_JNI_

#include "../../api/CosmosLikeVoteOption.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class CosmosLikeVoteOption final : ::djinni::JniEnum {
public:
    using CppType = ::ledger::core::api::CosmosLikeVoteOption;
    using JniType = jobject;

    using Boxed = CosmosLikeVoteOption;

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return static_cast<CppType>(::djinni::JniClass<CosmosLikeVoteOption>::get().ordinal(jniEnv, j)); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, CppType c) { return ::djinni::JniClass<CosmosLikeVoteOption>::get().create(jniEnv, static_cast<jint>(c)); }

private:
    CosmosLikeVoteOption() : JniEnum("CosmosLikeVoteOption") {}
    friend ::djinni::JniClass<CosmosLikeVoteOption>;
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_COSMOSLIKEVOTEOPTION_HPP_JNI_
