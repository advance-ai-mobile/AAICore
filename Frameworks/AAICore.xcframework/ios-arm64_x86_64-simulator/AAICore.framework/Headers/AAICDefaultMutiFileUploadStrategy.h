//
//  AAICDefaultMutiFileUploadStrategy.h
//  AAILivenessSDK
//
//  Created by advance on 2024/8/3.
//
#if __has_include(<AAICore/AAICEventProtocol.h>)
#import <AAICore/AAICEventProtocol.h>
#else
#import "AAICEventProtocol.h"
#endif

#if __has_include(<AAICore/AAICThreadSafeArray.h>)
#import <AAICore/AAICThreadSafeArray.h>
#else
#import "AAICThreadSafeArray.h"
#endif

#if __has_include(<AAICore/AAICCxxConstant.h>)
#import <AAICore/AAICCxxConstant.h>
#else
#import "AAICCxxConstant.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@class AAICDefaultMutiFileUploadStrategy;
@protocol AAICDefaultMutiFileUploadStrategyDelegate <NSObject>

@optional
- (BOOL)shouldUploadFiles:(AAICDefaultMutiFileUploadStrategy *)uploadStrategy;

@required
- (void)uploadStrategy:(AAICDefaultMutiFileUploadStrategy *)uploadStrategy
   uploadEventInfoList:(NSArray<NSDictionary *> *)eventInfoList
         callbackQueue:(dispatch_queue_t)queue
            completion:(void (^ _Nullable)(BOOL))completionBlk;

@end

__attribute__((visibility("default")))
@interface AAICDefaultMutiFileUploadStrategy : NSObject<AAICMutiFilesUploadStrategy>

@property(nonatomic) NSInteger maxUploadingFileNum;
@property(nonatomic) double checkInterval;
@property(nonatomic, readonly, nullable) id<AAICDefaultMutiFileUploadStrategyDelegate> delegate;

AAICORE_INIT_UNAVAILABLE()

- (instancetype)initWithFileDirPath:(NSString *)fileDirPath
                           delegate:(id<AAICDefaultMutiFileUploadStrategyDelegate> _Nullable)delegate NS_DESIGNATED_INITIALIZER;

- (BOOL)isTimeIntervalExceeded;

- (BOOL)isUploadSuccess:(NSError* _Nullable)error;

@end

NS_ASSUME_NONNULL_END
