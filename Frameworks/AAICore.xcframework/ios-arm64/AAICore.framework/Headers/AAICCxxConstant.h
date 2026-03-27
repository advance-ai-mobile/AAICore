//
//  AAICCxxConstant.h
//  AAILivenessSDK
//
//  Created by advance on 2024/9/10.
//  Copyright © 2024 Advance.ai. All rights reserved.
//

#ifndef AAICCxxConstant_h
#define AAICCxxConstant_h

#ifdef DEBUG
    #ifndef AAI_TLOG
    #define AAI_TLOG(xx, ...)  NSLog(xx, ##__VA_ARGS__)
    #endif
#else
    #define AAI_TLOG(xx, ...)
#endif

#ifdef DEBUG
    #ifndef AAI_CHECK_STR
    #define AAI_CHECK_STR(expect, value) \
                    do { \
                        NSCAssert([value isEqualToString:expect], @"Check string failed: expect [%@], but get [%@]", expect, value); \
                    } while (0)
    #endif
#else
    #define AAI_CHECK_STR(expect, value)
#endif

#ifndef AAICORE_INIT_UNAVAILABLE

#define AAICORE_INIT_UNAVAILABLE() \
- (instancetype)init NS_UNAVAILABLE; \
+ (instancetype)new NS_UNAVAILABLE;

#endif

#endif /* AAICCxxConstant_h */
