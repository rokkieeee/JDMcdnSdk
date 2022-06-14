//
//  JDMcdnSdk.h
//  JDMcdnSdk
//
//  Created by huangchuanchuan5 on 2022/5/27.
//

#import <Foundation/Foundation.h>
#import "JDMNodeModel.h"
#import "JDMNodeManager.h"
//
//! Project version number for JDMcdnSdk.
FOUNDATION_EXPORT double JDMcdnSdkVersionNumber;

//! Project version string for JDMcdnSdk.
FOUNDATION_EXPORT const unsigned char JDMcdnSdkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JDMcdnSdk/PublicHeader.h>
@interface JDMcdnSdk : NSObject

+ (JDMcdnSdk *)sharedInstance;
- (void) initWithAppId: (NSString *)appId appKey: (NSString *)appKey;
- (NSURL *) reverseProxyURL: (NSURL *)originURL;
- (NSString *)logStr;

@end


