//
//  BeforeScanSingleton.h
//  BlockDemo
//
//
//  Created by Caoyq on 16/4/7.
//  Copyright (c) 2016年 Caoyq. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum ScanStyle
{
    QQStyle,         /**< QQ扫码类型 */
    AliPayStyle,      /**< 支付宝扫码类型 */
    WeChatStyle       /**< 微信扫码类型 */
}ScanStyle;

@interface BeforeScanSingleton : NSObject

+ (BeforeScanSingleton *)shareScan;

- (void)ShowSelectedType:(ScanStyle)type WithViewController:(UIViewController *)vc;

@end
