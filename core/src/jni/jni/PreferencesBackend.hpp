// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from preferences.djinni

#ifndef DJINNI_GENERATED_PREFERENCESBACKEND_HPP_JNI_
#define DJINNI_GENERATED_PREFERENCESBACKEND_HPP_JNI_

#include "../../api/PreferencesBackend.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class PreferencesBackend final : ::djinni::JniInterface<::ledger::core::api::PreferencesBackend, PreferencesBackend> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::PreferencesBackend>;
    using CppOptType = std::shared_ptr<::ledger::core::api::PreferencesBackend>;
    using JniType = jobject;

    using Boxed = PreferencesBackend;

    ~PreferencesBackend();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<PreferencesBackend>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<PreferencesBackend>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    PreferencesBackend();
    friend ::djinni::JniClass<PreferencesBackend>;
    friend ::djinni::JniInterface<::ledger::core::api::PreferencesBackend, PreferencesBackend>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::PreferencesBackend
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::experimental::optional<std::vector<uint8_t>> get(const std::vector<uint8_t> & key) override;
        bool commit(const std::vector<::ledger::core::api::PreferencesChange> & changes) override;
        void setEncryption(const std::shared_ptr<::ledger::core::api::RandomNumberGenerator> & rng, const std::string & password) override;
        void unsetEncryption() override;
        bool resetEncryption(const std::shared_ptr<::ledger::core::api::RandomNumberGenerator> & rng, const std::string & oldPassword, const std::string & newPassword) override;
        std::string getEncryptionSalt() override;
        void clear() override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::PreferencesBackend, ::djinni_generated::PreferencesBackend>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("PreferencesBackend") };
    const jmethodID method_get { ::djinni::jniGetMethodID(clazz.get(), "get", "([B)[B") };
    const jmethodID method_commit { ::djinni::jniGetMethodID(clazz.get(), "commit", "(Ljava/util/ArrayList;)Z") };
    const jmethodID method_setEncryption { ::djinni::jniGetMethodID(clazz.get(), "setEncryption", "(LRandomNumberGenerator;Ljava/lang/String;)V") };
    const jmethodID method_unsetEncryption { ::djinni::jniGetMethodID(clazz.get(), "unsetEncryption", "()V") };
    const jmethodID method_resetEncryption { ::djinni::jniGetMethodID(clazz.get(), "resetEncryption", "(LRandomNumberGenerator;Ljava/lang/String;Ljava/lang/String;)Z") };
    const jmethodID method_getEncryptionSalt { ::djinni::jniGetMethodID(clazz.get(), "getEncryptionSalt", "()Ljava/lang/String;") };
    const jmethodID method_clear { ::djinni::jniGetMethodID(clazz.get(), "clear", "()V") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_PREFERENCESBACKEND_HPP_JNI_
