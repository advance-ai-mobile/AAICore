//
//  AAICCheckUtils+DV.h
//  AAICore
//
//  Created by advance on 2024/12/19.
//
#if __has_include(<AAICore/AAICCheckUtils.h>)
#import <AAICore/AAICCheckUtils.h>
#else
#import "AAICCheckUtils.h"
#endif

NS_ASSUME_NONNULL_BEGIN

__attribute__((visibility("default")))
@interface AAICCheckUtils(DV)

+ (BOOL)dvAvailable;
+ (BOOL)asyncGetDVInfoWithConfig:(NSDictionary *)config
                   completionBlk:(void(^)(NSString *token, NSInteger resultCode))completionBlk;
                                  
@end

NS_ASSUME_NONNULL_END
