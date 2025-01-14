// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#ifndef DJINNI_GENERATED_DATABASECONNECTION_HPP_JNI_
#define DJINNI_GENERATED_DATABASECONNECTION_HPP_JNI_

#include "../../api/DatabaseConnection.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class DatabaseConnection final : ::djinni::JniInterface<::ledger::core::api::DatabaseConnection, DatabaseConnection> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::DatabaseConnection>;
    using CppOptType = std::shared_ptr<::ledger::core::api::DatabaseConnection>;
    using JniType = jobject;

    using Boxed = DatabaseConnection;

    ~DatabaseConnection();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<DatabaseConnection>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<DatabaseConnection>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    DatabaseConnection();
    friend ::djinni::JniClass<DatabaseConnection>;
    friend ::djinni::JniInterface<::ledger::core::api::DatabaseConnection, DatabaseConnection>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::DatabaseConnection
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::shared_ptr<::ledger::core::api::DatabaseStatement> prepareStatement(const std::string & query, bool repeatable) override;
        void begin() override;
        void rollback() override;
        void commit() override;
        void close() override;
        std::shared_ptr<::ledger::core::api::DatabaseBlob> newBlob() override;
        bool isAlive() override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::DatabaseConnection, ::djinni_generated::DatabaseConnection>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("DatabaseConnection") };
    const jmethodID method_prepareStatement { ::djinni::jniGetMethodID(clazz.get(), "prepareStatement", "(Ljava/lang/String;Z)LDatabaseStatement;") };
    const jmethodID method_begin { ::djinni::jniGetMethodID(clazz.get(), "begin", "()V") };
    const jmethodID method_rollback { ::djinni::jniGetMethodID(clazz.get(), "rollback", "()V") };
    const jmethodID method_commit { ::djinni::jniGetMethodID(clazz.get(), "commit", "()V") };
    const jmethodID method_close { ::djinni::jniGetMethodID(clazz.get(), "close", "()V") };
    const jmethodID method_newBlob { ::djinni::jniGetMethodID(clazz.get(), "newBlob", "()LDatabaseBlob;") };
    const jmethodID method_isAlive { ::djinni::jniGetMethodID(clazz.get(), "isAlive", "()Z") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_DATABASECONNECTION_HPP_JNI_
