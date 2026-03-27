//
//  AAICCheckUtils+FG.h
//  AAICore
//
//  Created by advance on 2025/6/23.
//

#if __has_include(<AAICore/AAICCheckUtils.h>)
#import <AAICore/AAICCheckUtils.h>
#else
#import "AAICCheckUtils.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface AAICCheckUtils (FG)

+ (BOOL)fgAvailable;
+ (void)asyncGetFGInfoWithConfig:(NSDictionary *)config
                   completionBlk:(void(^)(NSDictionary *result))completionBlk;

@end

NS_ASSUME_NONNULL_END
