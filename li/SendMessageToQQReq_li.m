//
//  SendMessageToQQReq_li.m
//  TestQQ
//
//  Created by lzw on 2022/6/10.
//

#import "SendMessageToQQReq_li.h"



@implementation SendMessageToQQReq_li

+(SendMessageToQQReq*)getReq:(QQApiObject *)obj{
    return [SendMessageToQQReq reqWithContent:obj];
}

@end
