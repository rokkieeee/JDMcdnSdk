//
//  NSMutableArray+JDMCheck.h
//  mcdn-ios-demo
//
//  Created by ext.zhangxiaoxu on 2022/6/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (JDMCheck)

/// 安全获取数组中指定索引的对象，索引不在数组范围内的返回空对象。
/// @param index 索引
- (nullable id)jdm_objectAtIndexCheck:(NSInteger)index;

/// 安全获取数组中指定索引的对象，索引不在数组范围内的返回空对象，对象可以为NSNull类型。
/// @param index 索引
- (nullable id)jdm_objectAtIndexSafely:(NSInteger)index;

@end

@interface NSMutableArray (JDMCheck)

/// 安全向数组中添加对象，对象为空时，保持原数组。
/// @param anObject 待插入的对象
- (void)jdm_addObjectCheck:(id)anObject;

/// 在数组的指定索引处插入对象，对象为空时，保持原数组。
/// @param anObject 待插入的对象
/// @param index 索引
- (void)jdm_insertObjectCheck:(id)anObject atIndex:(NSUInteger)index;

/// 删除数组中指定索引上的对象，索引不在数组范围内，保持原数组。
/// @param index 索引
- (void)jdm_removeObjectAtIndexCheck:(NSUInteger)index;

/// 替换指定索引上的对象，索引不在数组范围内，或对象为空，保持原数组。
/// @param index 索引
/// @param anObject 待替换对象
- (void)jdm_replaceObjectAtIndexCheck:(NSUInteger)index withObject:(id)anObject;

@end

NS_ASSUME_NONNULL_END
