//
//  AAICore.h
//  AAICore
//
//  Created by advance on 2024/9/19.
//

#import <UIKit/UIKit.h>

#if __has_include(<AAICore/AAICDataUtil.h>)
#import <AAICore/AAICDataUtil.h>
#else
#import "AAICDataUtil.h"
#endif

#if __has_include(<AAICore/AAICCheckUtils.h>)
#import <AAICore/AAICCheckUtils.h>
#else
#import "AAICCheckUtils.h"
#endif

#if __has_include(<AAICore/AAICThreadSafeArray.h>)
#import <AAICore/AAICThreadSafeArray.h>
#else
#import "AAICThreadSafeArray.h"
#endif

#if __has_include(<AAICore/AAICCxxConstant.h>)
#import <AAICore/AAICCxxConstant.h>
#else
#import "AAICCxxConstant.h"
#endif

#if __has_include(<AAICore/AAICDefaultMutiFileUploadStrategy.h>)
#import <AAICore/AAICDefaultMutiFileUploadStrategy.h>
#else
#import "AAICDefaultMutiFileUploadStrategy.h"
#endif

#if __has_include(<AAICore/AAICEventProtocol.h>)
#import <AAICore/AAICEventProtocol.h>
#else
#import "AAICEventProtocol.h"
#endif

#if __has_include(<AAICore/AAICEventUploader.h>)
#import <AAICore/AAICEventUploader.h>
#else
#import "AAICEventUploader.h"
#endif

#if __has_include(<AAICore/AAICEventCollector.h>)
#import <AAICore/AAICEventCollector.h>
#else
#import "AAICEventCollector.h"
#endif

#if __has_include(<AAICore/AAICDefaultSentryProcessor.h>)
#import <AAICore/AAICDefaultSentryProcessor.h>
#else
#import "AAICDefaultSentryProcessor.h"
#endif

#if __has_include(<AAICore/AAICCrashUtil.h>)
#import <AAICore/AAICCrashUtil.h>
#else
#import "AAICCrashUtil.h"
#endif

#if __has_include(<AAICore/AAICCrashUtil+CtxInfo.h>)
#import <AAICore/AAICCrashUtil+CtxInfo.h>
#else
#import "AAICCrashUtil+CtxInfo.h"
#endif

#if __has_include(<AAICore/AAICCrashConstant.h>)
#import <AAICore/AAICCrashConstant.h>
#else
#import "AAICCrashConstant.h"
#endif

#if __has_include(<AAICore/AAICConstant.h>)
#import <AAICore/AAICConstant.h>
#else
#import "AAICConstant.h"
#endif

#if __has_include(<AAICore/AAICEventManager+Default.h>)
#import <AAICore/AAICEventManager+Default.h>
#else
#import "AAICEventManager+Default.h"
#endif

#if __has_include(<AAICore/AAICCheckUtils+DV.h>)
#import <AAICore/AAICCheckUtils+DV.h>
#else
#import "AAICCheckUtils+DV.h"
#endif

#if __has_include(<AAICore/AAICCheckUtils+FG.h>)
#import <AAICore/AAICCheckUtils+FG.h>
#else
#import "AAICCheckUtils+FG.h"
#endif

#if __has_include(<AAICore/AAICEventProvider+Sentry.h>)
#import <AAICore/AAICEventProvider+Sentry.h>
#else
#import "AAICEventProvider+Sentry.h"
#endif

FOUNDATION_EXPORT double AAICoreVersionNumber;
FOUNDATION_EXPORT const unsigned char AAICoreVersionString[];

