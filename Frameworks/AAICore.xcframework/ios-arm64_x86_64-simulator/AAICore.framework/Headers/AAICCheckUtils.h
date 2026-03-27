//
//  AAICCheckUtils.h
//  AAILivenessSDK
//
//  Created by advance on 2023/6/6.
//  Copyright © 2023 Advance.ai. All rights reserved.
//
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

__attribute__((visibility("default")))
@interface AAICCheckUtils : NSObject

+ (NSDictionary *)additionalInfo;

+ (NSString *)platform;

+ (NSDictionary *)deviceInfo;

+ (NSDictionary *)dfInfo:(NSString* _Nullable)localDID config:(NSDictionary * _Nullable)config;

@end

NS_ASSUME_NONNULL_END

