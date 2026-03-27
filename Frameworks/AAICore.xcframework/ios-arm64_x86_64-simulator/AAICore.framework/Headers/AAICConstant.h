//
//  AAICConstant.h
//  AAICore
//
//  Created by advance on 2024/9/24.
//

#import <Foundation/Foundation.h>

#ifndef AAICConstant_h
#define AAICConstant_h

typedef NS_ENUM(NSInteger, AAICPluginType) {
    AAICPluginTypeOther = -1,
    AAICPluginTypeStandard = 0,
    AAICPluginTypeReactNative = 1,
    AAICPluginTypeFlutter = 2,
    AAICPluginTypeCordova = 3,
    AAICPluginTypeXamarin = 4,
    AAICPluginTypeKMM = 5,
};

typedef NS_ENUM(NSInteger, AAICEventType) {
    AAICEventTypeShence = 0,
    AAICEventTypeLog = 1,
    AAICEventTypeSentry = 2
};

typedef NS_ENUM(NSInteger, AAICEventProcessStrategy) {
    AAICEventProcessStrategySerial = 0,
    AAICEventProcessStrategyConcurrent = 1
};

typedef NS_ENUM(NSInteger, AAICSentryLevel) {
    AAICSentryLevelCrash = 0,
    AAICSentryLevelWarning = 1
};

#ifdef AAI_CORE_HIDE_SYMBOL
#define AAI_CORE_API __attribute__((visibility("hidden")))
#else
#define AAI_CORE_API __attribute__((visibility("default")))
#endif

FOUNDATION_EXPORT AAI_CORE_API
NSString* aaiCPluginTypeStr(AAICPluginType pluginType);

FOUNDATION_EXPORT AAI_CORE_API
NSString* aaiCRandomStr(void);

#endif /* AAICConstant_h */
