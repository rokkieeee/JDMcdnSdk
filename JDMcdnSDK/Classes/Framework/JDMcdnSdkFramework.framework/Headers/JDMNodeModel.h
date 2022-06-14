//
//  JDMNodeModel.h
//  mcdn-ios-demo
//
//  Created by ext.zhangxiaoxu on 2022/6/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDMNodeDataModel : NSObject

@property (nonatomic, copy) NSString *server_name;
@property (nonatomic, copy) NSString *ip;
@property (nonatomic, copy) NSString *port;
@property (nonatomic, copy) NSString *ssl_port;
@property (nonatomic, copy) NSString *score;
@property (nonatomic, copy) NSString *used_bandwidth;
@property (nonatomic, copy) NSString *used_down_bandwidth;
@property (nonatomic, copy) NSString *max_bandwidth;
@property (nonatomic, copy) NSString *max_down_bandwidth;
@property (nonatomic, copy) NSString *nodeUrlString;
@property (nonatomic, assign) NSInteger requestNum; //该节点上正在进行的请求数量
//@property (nonatomic, strong) NSString *content-range;

@end

@interface JDMNodeModel : NSObject

@property (nonatomic, copy) NSString *jd_args;
@property (nonatomic, copy) NSString *file_total_size;
@property (nonatomic, copy) NSString *file_id;
@property (nonatomic, copy) NSString *sdk_host;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic, copy) NSArray <JDMNodeDataModel *> *data;
//分数所占比例，用于计算最好的节点
@property (nonatomic, copy) NSString *scoreRatio;
//带宽所占比例，用于计算最好的节点
@property (nonatomic, copy) NSString *bandwidthRatio;

@end

NS_ASSUME_NONNULL_END
