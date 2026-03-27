//
//  AAICEventUploader.h
//  AAILivenessSDK
//
//  Created by advance on 2024/8/3.
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

NS_ASSUME_NONNULL_BEGIN
__attribute__((visibility("default")))
@interface AAICEventUploader: NSObject<AAICFileUploader>

AAICORE_INIT_UNAVAILABLE()

@end

NS_ASSUME_NONNULL_END
