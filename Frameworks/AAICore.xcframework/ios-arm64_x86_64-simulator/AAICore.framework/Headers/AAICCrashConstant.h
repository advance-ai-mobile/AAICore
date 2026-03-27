//
//  AAICCrashConstant.h
//  AAILivenessSDK
//
//  Created by advance on 2023/8/29.
//  Copyright © 2023 Advance.ai. All rights reserved.
//

#ifndef AAICCrashConstant_h
#define AAICCrashConstant_h

#ifdef ENABLE_CRASH_LOG

#ifndef AAI_CRASH_CLOG
#define AAI_CRASH_CLOG(format, ...) \
        do { \
            char buffer[128]; \
            snprintf(buffer, sizeof(buffer), "[AAICrash][Line %d]" format "\n", __LINE__, ##__VA_ARGS__); \
            printf("%s", buffer); \
        } while (0)
#endif

#ifndef AAI_CRASH_ASSERT_TRUE
#define AAI_CRASH_ASSERT_TRUE(condition, format, ...) \
        do { \
            if ((condition)) { \
                AAI_CRASH_CLOG(format, ##__VA_ARGS__); \
                assert(0); \
            } \
        } while (0)
#endif

#else

#ifndef AAI_CRASH_CLOG
#define AAI_CRASH_CLOG(format, ...)
#endif

#ifndef AAI_CRASH_ASSERT_TRUE
#define AAI_CRASH_ASSERT_TRUE(condition, format, ...)
#endif

#endif

#endif /* AAICCrashConstant_h */
