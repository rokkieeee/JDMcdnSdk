//
//  JDMNodeManager.h
//  mcdn-ios-demo
//
//  Created by ext.zhangxiaoxu on 2022/6/3.
//

#import <Foundation/Foundation.h>
#import "JDMNodeModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JDMNodeManager : NSObject

@property (nonatomic, assign) NSInteger maxNodeNum;//最多节点个数
@property (nonatomic, assign) NSInteger maxNodeRequestNum;//我们希望的一个节点最大请求数

+ (instancetype)shareInstance;

//old
//+ (instancetype)manager;
//测试用
-(void) setAppWithId: (NSString *)appId appKey: (NSString *) appKey;
-(NSArray *) getNodeUrlArray;

- (void)jdm_getSortNodeUrlWithOriginalUrl:(NSString *)originalStr Success:(void(^)(NSArray *nodeArray,NSString *originalStr))success;
//获取节点
- (void)jdm_getSortNodeArrayWithOriginalUrl:(NSString *)originalStr Success:(void(^)(NSArray *nodeArray,NSArray *nodeUrlArray))success;
//刷新节点
- (void)jdm_refreshNodeUrlWithOriginalUrl:(NSString *)originalStr Success:(void(^)(NSArray *nodeArray,NSArray *nodeUrlArray))success;
//删除节点
- (NSArray *)jdm_deleteNodeWithServerName:(NSString *)ServerName originalUrlStr:(NSString *)originalUrlStr;
//    拿到最好的代替节点
- (JDMNodeDataModel *)jdm_getBestSubstitutedNodeWithRequestNum:(NSInteger)requestNum withOriginalUrl:(NSString *)originalUrl;
//设置节点请求数
- (void)jdm_setNodeRequestNum:(NSInteger)requestNum nodeServerName:(NSString *)serverName originalUrlStr:(NSString *)originalStr;

//删除originalUrl对应的所有节点
- (void)jdm_deleteAllNodelWithOriginaUrl:(NSString *)originalUrlString;

@end

NS_ASSUME_NONNULL_END
