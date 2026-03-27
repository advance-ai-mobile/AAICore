//
//  AAICEventManager+Default.h
//  AAICore
//
//  Created by advance on 2024/9/23.
//
#if __has_include(<AAICore/AAICEventCollector.h>)
#import <AAICore/AAICEventCollector.h>
#else
#import "AAICEventCollector.h"
#endif

#if __has_include(<AAICore/AAICEventUploader.h>)
#import <AAICore/AAICEventUploader.h>
#else
#import "AAICEventUploader.h"
#endif

#if __has_include(<AAICore/AAICDefaultMutiFileUploadStrategy.h>)
#import <AAICore/AAICDefaultMutiFileUploadStrategy.h>
#else
#import "AAICDefaultMutiFileUploadStrategy.h"
#endif


NS_ASSUME_NONNULL_BEGIN

__attribute__((visibility("default")))
@interface AAICEventManager(Default)

@property(nonatomic, readonly) AAICEventProvider *defaultDataProvider;
@property(nonatomic, readonly) AAICEventUploader *defaultDataUploader;


+ (instancetype)eventManagerWithContext:(AAICEventContext *)context
                          fileDirPath:(NSString *)fileDirPath
                 uploadStrategyDelegate:(id<AAICDefaultMutiFileUploadStrategyDelegate>)uploadStrategyDelegate;

+ (instancetype)eventManagerWithContext:(AAICEventContext *)context
                            fileDirPath:(NSString *)fileDirPath
                         uploadStrategy:(AAICDefaultMutiFileUploadStrategy *)uploadStrategy
                              processor:(id<AAICEventProcessor> _Nullable)processor;

+ (void)clearCache;

@end

NS_ASSUME_NONNULL_END
