// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#ifndef DJINNI_GENERATED_DATABASEERROR_HPP_JNI_
#define DJINNI_GENERATED_DATABASEERROR_HPP_JNI_

#include "../../api/DatabaseError.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class DatabaseError final : ::djinni::JniInterface<::ledger::core::api::DatabaseError, DatabaseError> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::DatabaseError>;
    using CppOptType = std::shared_ptr<::ledger::core::api::DatabaseError>;
    using JniType = jobject;

    using Boxed = DatabaseError;

    ~DatabaseError();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<DatabaseError>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<DatabaseError>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    DatabaseError();
    friend ::djinni::JniClass<DatabaseError>;
    friend ::djinni::JniInterface<::ledger::core::api::DatabaseError, DatabaseError>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::DatabaseError
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::string getMessage() override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::DatabaseError, ::djinni_generated::DatabaseError>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("DatabaseError") };
    const jmethodID method_getMessage { ::djinni::jniGetMethodID(clazz.get(), "getMessage", "()Ljava/lang/String;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_DATABASEERROR_HPP_JNI_
