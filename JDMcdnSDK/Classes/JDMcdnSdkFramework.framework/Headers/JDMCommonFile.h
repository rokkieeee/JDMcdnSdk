//
//  JDMCommonFile.h
//  mcdn-ios-demo
//
//  Created by ext.zhangxiaoxu on 2022/6/9.
//  Copyright © 2022 Single. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import <CocoaLumberjack/CocoaLumberjack.h>
#import "NSMutableArray+JDMCheck.h"
#import "NSMutableDictionary+JDMCheck.h"

#define ScreenWidth [UIScreen mainScreen].bounds.size.width
#define ScreenHeight [UIScreen mainScreen].bounds.size.height

#define JDDSaaSWeak( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __weak __typeof__(x) __weak_##x##__ = x; \
_Pragma("clang diagnostic pop")

#define JDDSaaSStrong( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __typeof__(x) x = __weak_##x##__; if (!x)return;\
_Pragma("clang diagnostic pop")

//NS_ASSUME_NONNULL_BEGIN
//
//@interface JDMCommonFile : NSObject
//
//
//
////static const DDLogLevel ddLogLevel = DDLogLevelWarning;
//
//@end
//
//NS_ASSUME_NONNULL_END
