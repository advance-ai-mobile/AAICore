//
//  AAICEventCollector.h
//  AAILivenessSDK
//
//  Created by advance on 2024/7/15.
//
#if __has_include(<AAICore/AAICEventProtocol.h>)
#import <AAICore/AAICEventProtocol.h>
#else
#import "AAICEventProtocol.h"
#endif

#if __has_include(<AAICore/AAICCxxConstant.h>)
#import <AAICore/AAICCxxConstant.h>
#else
#import "AAICCxxConstant.h"
#endif

#if __has_include(<AAICore/AAICConstant.h>)
#import <AAICore/AAICConstant.h>
#else
#import "AAICConstant.h"
#endif

typedef NS_ENUM(NSInteger, AAICEventStructureType) {
    AAICEventStructureTypeFlattened = 0,
    AAICEventStructureTypeHierarchical = 1
};

typedef NS_ENUM(NSInteger, AAICWritableDataFlag) {
    AAICWritableDataFlagDefault = 0,
    AAICWritableDataFlagNotMergable = 1
};

NS_ASSUME_NONNULL_BEGIN
__attribute__((visibility("default")))
@interface AAICEventSplitConfig: NSObject
@property(nonatomic) NSInteger threshold;
@property(nonatomic) BOOL enabled;
@end

__attribute__((visibility("default")))
@interface AAICEventContext:NSObject

@property(nonatomic, copy) NSString *serviceName;
@property(nonatomic, copy) NSString *sdkVersion;
@property(nonatomic, nullable, copy) NSString *sessionId;
@property(nonatomic, nullable, copy) NSString *userId;

@property(nonatomic, nullable, copy) NSString *bizType;
@property(nonatomic) AAICPluginType pluginType;

@property(nonatomic) AAICEventType eventType;
@property(nonatomic) AAICEventProcessStrategy eventProcessStrategy;

@property(nonatomic) AAICEventStructureType structureType;

@property(nonatomic, nullable, copy) NSDictionary *additionalEventInfo;
@property(nonatomic, nullable, copy) NSDictionary *additionalCommonInfo;
@property(nonatomic, nullable, copy) NSDictionary *additionalUserInfo;

@property(nonatomic, nullable) AAICEventSplitConfig *splitConfig;

@property(class, nonatomic, readonly) NSString *coldStartTransactionId;

@end

@class AAICEventProvider;
@protocol AAICEventProcessor <NSObject>

@optional
- (NSDictionary *)processEvent:(NSString *)eventName
                     eventInfo:(NSDictionary * _Nullable)eventInfo
                 addCommonInfo:(NSDictionary * _Nullable)additionalCommonInfo
                   addUserInfo:(NSDictionary * _Nullable)additionalUserInfo
                     sessionId:(NSString * _Nullable)sessionId
                     timestamp:(long)timestamp
                      provider:(AAICEventProvider *)eventProvider;

- (NSDictionary *)postProcessEvent:(NSString *)eventName
                         eventInfo:(NSDictionary * _Nullable)eventInfo
                     fullEventInfo:(NSDictionary *)fullEventInfo
                         sessionId:(NSString * _Nullable)sessionId
                         timestamp:(long)timestamp
                          provider:(AAICEventProvider *)eventProvider;
@end


__attribute__((visibility("default")))
@interface AAICEventProvider: NSObject<AAICDataProvider>

@property(nonatomic, readonly, strong) AAICEventContext *context;
@property(nonatomic, readonly, strong) dispatch_queue_t trackingQueue;
@property(nonatomic, strong, nullable) id<AAICEventProcessor> eventProcessor;

AAICORE_INIT_UNAVAILABLE()

- (instancetype)initWithTrackingQueue:(dispatch_queue_t)trackingQueue
                              context:(AAICEventContext *)context NS_DESIGNATED_INITIALIZER;

- (void)mergePendingTracking:(AAICEventProvider *)pendingTracking;

- (NSMutableDictionary *)createUserInfo;

- (void)track:(NSString *)eventName
    eventInfo:(NSDictionary * _Nullable)eventInfo;

- (void)track:(NSString *)eventName
    eventInfo:(NSDictionary * _Nullable)eventInfo
        flags:(NSInteger)flags;

- (void)track:(NSString *)eventName
    eventInfo:(NSDictionary * _Nullable)eventInfo
   addCommonInfo:(NSDictionary * _Nullable)additionalCommonInfo
     addUserInfo:(NSDictionary * _Nullable)additionalUserInfo
        flags:(NSInteger)flags;

@end

__attribute__((visibility("default")))
@interface AAICEventStorage : NSObject<AAICFileStorage>

AAICORE_INIT_UNAVAILABLE()

- (instancetype)initWithFileDirPath:(NSString *)fileDirPath
                       storageQueue:(nullable dispatch_queue_t)storageQueue NS_DESIGNATED_INITIALIZER;
@end

__attribute__((visibility("default")))
@interface AAICEventManager: NSObject

@property(nonatomic, readonly, strong) id<AAICDataProvider> dataProvider;
@property(nonatomic, readonly, strong) id<AAICFileStorage> storage;
@property(nonatomic, readonly, strong) id<AAICFileUploader> uploader;

AAICORE_INIT_UNAVAILABLE()

- (instancetype)initWithDataProvider:(id<AAICDataProvider>)dataProvider
                             storage:(id<AAICFileStorage>)storage
                            uploader:(id<AAICFileUploader>)uploader NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

