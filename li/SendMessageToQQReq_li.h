//
//  SendMessageToQQReq_li.h
//  TestQQ
//
//  Created by lzw on 2022/6/10.
//

#import <Foundation/Foundation.h>
#import "TencentOAuth.h"
#import "QQApiInterface.h"
#import "QQApiInterfaceObject.h"
#import "sdkdef.h"

NS_ASSUME_NONNULL_BEGIN

@interface SendMessageToQQReq_li : SendMessageToQQReq

+(SendMessageToQQReq*)getReq:(QQApiObject *)obj;

@end

NS_ASSUME_NONNULL_END
