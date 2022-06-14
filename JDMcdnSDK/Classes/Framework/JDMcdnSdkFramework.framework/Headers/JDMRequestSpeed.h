//
//  JDMRequestSpeed.h
//  JDMcdnSdk
//
//  Created by ext.zhangxiaoxu on 2022/6/8.
//  Copyright © 2022 Single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDMRequestSpeed : NSObject
+(instancetype)manager;

- (void)jdm_checkDlownloadSpeedWithReceiveContentLength:(float)length callBack:(void(^)(NSString *downloadSpeed))completion;
@end

NS_ASSUME_NONNULL_END
