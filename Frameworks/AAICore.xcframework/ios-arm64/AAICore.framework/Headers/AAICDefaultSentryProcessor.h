//
//  AAICDefaultSentryProcessor.h
//  AAICore
//
//  Created by advance on 2024/12/30.
//

#import <Foundation/Foundation.h>

#if __has_include(<AAICore/AAICEventCollector.h>)
#import <AAICore/AAICEventCollector.h>
#else
#import "AAICEventCollector.h"
#endif

NS_ASSUME_NONNULL_BEGIN
__attribute__((visibility("default")))
@interface AAICDefaultSentryProcessor : NSObject<AAICEventProcessor>

@end

NS_ASSUME_NONNULL_END
