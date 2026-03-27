//
//  AAICEventProvider+Sentry.h
//  AAICore
//
//  Created by advance on 2024/12/30.
//

#if __has_include(<AAICore/AAICEventCollector.h>)
#import <AAICore/AAICEventCollector.h>
#else
#import "AAICEventCollector.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface AAICEventProvider (Sentry)

- (void)trackCrash:(NSDictionary *)crashInfo;

- (void)trackWarning:(NSString *)stackInfo addInfo:(NSDictionary * _Nullable)additionInfo;

@end

NS_ASSUME_NONNULL_END
