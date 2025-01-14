// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_ACCOUNTCREATIONINFO_HPP_JNI_
#define DJINNI_GENERATED_ACCOUNTCREATIONINFO_HPP_JNI_

#include "../../api/AccountCreationInfo.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class AccountCreationInfo final {
public:
    using CppType = ::ledger::core::api::AccountCreationInfo;
    using JniType = jobject;

    using Boxed = AccountCreationInfo;

    ~AccountCreationInfo();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    AccountCreationInfo();
    friend ::djinni::JniClass<AccountCreationInfo>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("AccountCreationInfo") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(ILjava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;)V") };
    const jfieldID field_index { ::djinni::jniGetFieldID(clazz.get(), "index", "I") };
    const jfieldID field_owners { ::djinni::jniGetFieldID(clazz.get(), "owners", "Ljava/util/ArrayList;") };
    const jfieldID field_derivations { ::djinni::jniGetFieldID(clazz.get(), "derivations", "Ljava/util/ArrayList;") };
    const jfieldID field_publicKeys { ::djinni::jniGetFieldID(clazz.get(), "publicKeys", "Ljava/util/ArrayList;") };
    const jfieldID field_chainCodes { ::djinni::jniGetFieldID(clazz.get(), "chainCodes", "Ljava/util/ArrayList;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_ACCOUNTCREATIONINFO_HPP_JNI_
