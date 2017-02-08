//
//  RegisterApi.h
//  Solar
//
//  Created by TangQiao on 11/8/14.
//  Copyright (c) 2014 fenbi. All rights reserved.
//

#import "YTKRequest.h"


/**
 XXXAPI这一层重写父类的方法，参数 请求地址 数据处理 。。。
 */
@interface RegisterApi : YTKRequest

- (id)initWithUsername:(NSString *)username password:(NSString *)password;

- (NSString *)userId;

@end
