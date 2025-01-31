// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from preferences.djinni

#ifndef DJINNI_GENERATED_PREFERENCESCHANGE_HPP_JNI_
#define DJINNI_GENERATED_PREFERENCESCHANGE_HPP_JNI_

#include "../../api/PreferencesChange.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class PreferencesChange final {
public:
    using CppType = ::ledger::core::api::PreferencesChange;
    using JniType = jobject;

    using Boxed = PreferencesChange;

    ~PreferencesChange();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    PreferencesChange();
    friend ::djinni::JniClass<PreferencesChange>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("PreferencesChange") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(LPreferencesChangeType;[B[B)V") };
    const jfieldID field_type { ::djinni::jniGetFieldID(clazz.get(), "type", "LPreferencesChangeType;") };
    const jfieldID field_key { ::djinni::jniGetFieldID(clazz.get(), "key", "[B") };
    const jfieldID field_value { ::djinni::jniGetFieldID(clazz.get(), "value", "[B") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_PREFERENCESCHANGE_HPP_JNI_
