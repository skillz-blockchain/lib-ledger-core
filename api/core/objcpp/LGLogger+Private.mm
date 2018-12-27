// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from logger.djinni

#import "LGLogger+Private.h"
#import "LGLogger.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface LGLogger ()

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::Logger>&)cppRef;

@end

@implementation LGLogger {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ledger::core::api::Logger>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::Logger>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)d:(nonnull NSString *)tag
  message:(nonnull NSString *)message {
    try {
        _cppRefHandle.get()->d(::djinni::String::toCpp(tag),
                               ::djinni::String::toCpp(message));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)i:(nonnull NSString *)tag
  message:(nonnull NSString *)message {
    try {
        _cppRefHandle.get()->i(::djinni::String::toCpp(tag),
                               ::djinni::String::toCpp(message));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)e:(nonnull NSString *)tag
  message:(nonnull NSString *)message {
    try {
        _cppRefHandle.get()->e(::djinni::String::toCpp(tag),
                               ::djinni::String::toCpp(message));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)w:(nonnull NSString *)tag
  message:(nonnull NSString *)message {
    try {
        _cppRefHandle.get()->w(::djinni::String::toCpp(tag),
                               ::djinni::String::toCpp(message));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)c:(nonnull NSString *)tag
  message:(nonnull NSString *)message {
    try {
        _cppRefHandle.get()->c(::djinni::String::toCpp(tag),
                               ::djinni::String::toCpp(message));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto Logger::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto Logger::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<LGLogger>(cpp);
}

}  // namespace djinni_generated

@end