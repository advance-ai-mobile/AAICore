//
//  AAICCrashUtil+CtxInfo.h
//  AAICore
//
//  Created by advance on 2024/9/23.
//
#if __has_include(<AAICore/AAICCrashUtil.h>)
#import <AAICore/AAICCrashUtil.h>
#else
#import "AAICCrashUtil.h"
#endif

#if __has_include(<AAICore/AAICConstant.h>)
#import <AAICore/AAICConstant.h>
#else
#import "AAICConstant.h"
#endif

NS_ASSUME_NONNULL_BEGIN
__attribute__((visibility("default")))
@interface AAICCrashContext : NSObject

@property(nonatomic, copy) NSString *sdkVersion;
@property(nonatomic, copy) NSString *bizType;
@property(nonatomic, copy) NSString *sessionId;
@property(nonatomic, copy) NSString *networkStatus;
@property(nonatomic, copy, nullable) NSString *coldStartTid;
@property(nonatomic) AAICPluginType pluginType;

@end

typedef NS_ENUM(NSUInteger, AAICrashInfoValueType) {
    AAICrashInfoValueTypeInteger = 1,
    AAICrashInfoValueTypeDouble = 2,
    AAICrashInfoValueTypeStr = 3
};

__attribute__((visibility("default")))
@interface AAICCrashUtil(CtxInfo)

+ (void)appendDefaultCrashContext:(AAICCrashContext *)context;

+ (void)appendCtxInfoForKey:(NSString *)key value:(id)value valueType:(AAICrashInfoValueType)valueType;

+ (NSDictionary * _Nullable)tryLoadAndRemovePendingCrashReport;

@end

__attribute__((visibility("default")))
@interface AAICCrashUtil(Frames)

+ (NSString *)currThreadFramesDesc:(BOOL)boolValue;

@end
NS_ASSUME_NONNULL_END
