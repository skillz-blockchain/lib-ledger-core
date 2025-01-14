// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#ifndef DJINNI_GENERATED_DATABASEBLOB_HPP_JNI_
#define DJINNI_GENERATED_DATABASEBLOB_HPP_JNI_

#include "../../api/DatabaseBlob.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class DatabaseBlob final : ::djinni::JniInterface<::ledger::core::api::DatabaseBlob, DatabaseBlob> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::DatabaseBlob>;
    using CppOptType = std::shared_ptr<::ledger::core::api::DatabaseBlob>;
    using JniType = jobject;

    using Boxed = DatabaseBlob;

    ~DatabaseBlob();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<DatabaseBlob>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<DatabaseBlob>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    DatabaseBlob();
    friend ::djinni::JniClass<DatabaseBlob>;
    friend ::djinni::JniInterface<::ledger::core::api::DatabaseBlob, DatabaseBlob>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::DatabaseBlob
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::vector<uint8_t> read(int64_t offset, int64_t length) override;
        int64_t write(int64_t offset, const std::vector<uint8_t> & data) override;
        int64_t append(const std::vector<uint8_t> & data) override;
        int64_t trim(int64_t newLen) override;
        int64_t size() override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::DatabaseBlob, ::djinni_generated::DatabaseBlob>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("DatabaseBlob") };
    const jmethodID method_read { ::djinni::jniGetMethodID(clazz.get(), "read", "(JJ)[B") };
    const jmethodID method_write { ::djinni::jniGetMethodID(clazz.get(), "write", "(J[B)J") };
    const jmethodID method_append { ::djinni::jniGetMethodID(clazz.get(), "append", "([B)J") };
    const jmethodID method_trim { ::djinni::jniGetMethodID(clazz.get(), "trim", "(J)J") };
    const jmethodID method_size { ::djinni::jniGetMethodID(clazz.get(), "size", "()J") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_DATABASEBLOB_HPP_JNI_
