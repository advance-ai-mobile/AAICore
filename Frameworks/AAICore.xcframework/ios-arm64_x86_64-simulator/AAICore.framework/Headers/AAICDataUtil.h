//
//  AAICDataUtil.h
//  AAILivenessSDK
//
//  Created by Advance.ai on 2019/3/6.
//  Copyright © 2019 Advance.ai. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

__attribute__((visibility("default")))
@interface AAICDataUtil : NSObject

+ (NSData *)appendData:(NSData *)data;
+ (NSData *)removeData:(NSData *)data;
+ (NSString *)simudid;
+ (NSString *)join:(NSString *)strings, ...;
+ (NSString *)queueNameFromPath:(NSString *)fileDirPath suffix:(NSString *)suffix;
+ (NSArray<NSString *> *)splitStringPreservingCharacters:(NSString *) str threshold:(NSUInteger)threshold;

@end

NS_ASSUME_NONNULL_END
