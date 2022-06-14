//
//  NSMutableDictionary+JDMCheck.h
//  mcdn-ios-demo
//
//  Created by ext.zhangxiaoxu on 2022/6/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableDictionary (JDMCheck)

/// 更新指定键值上的对象
/// @param anObject 待更新对象
/// @param aKey 键值
- (void)jdm_setObjectCheck:(id)anObject forKey:(id <NSCopying>)aKey;

/// 删除指定键值上的对象
/// @param aKey 键值
- (void)jdm_removeObjectForKeyCheck:(id)aKey;

@end

NS_ASSUME_NONNULL_END
