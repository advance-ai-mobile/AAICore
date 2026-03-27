//
//  AAICCrashUtil.h
//  AAILivenessSDK
//
//  Created by advance on 2023/8/2.
//  Copyright © 2023 Advance.ai. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

__attribute__((visibility("default")))
@interface AAICCrashConfig : NSObject

- (void)setCrashLogDirPath:(NSString *)dirPath;

@end

__attribute__((visibility("default")))
@interface AAICCrashUtil : NSObject

+ (BOOL)hasPendingCrashReport;
+ (NSArray * _Nullable)loadPendingCrashReportData;
+ (void)purgePendingCrashReport;

+ (AAICCrashConfig * _Nullable)getCrashConfig;

+ (void)enableCrashReport:(AAICCrashConfig *)config;
+ (void)disableCrashReport;
+ (BOOL)isCrashReportEnabled;

@end

NS_ASSUME_NONNULL_END
