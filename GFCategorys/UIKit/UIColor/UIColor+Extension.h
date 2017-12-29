//
//  UIColor+Extension.h
//  GFFramework
//
//  Created by 孙行者网络 on 2017/11/1.
//  Copyright © 2017年 孙行者网络. All rights reserved.
//
/** 从十六进制字符串获取颜色 */
#define HEXSTR_RGB(V)   [UIColor colorWithHexString:V]
#define HEXSTR_RGBA(V, A)   [UIColor colorWithHexString:V alpha:A]
/** 从十六进制数字获取颜色 */
#define HEX_RGB(V)  [UIColor colorWithHex:V]
#define HEX_RGBA(V, A)   [UIColor colorWithHex:V alpha:A]
/** RGB颜色 */
#define RGB(R,G,B)  [UIColor colorWithRed:R/255.0f green:G/255.0f blue:B/255.0f alpha:1.0f]
#define RGBA(R,G,B,A)   [UIColor colorWithRed:R/255.0f green:G/255.0f blue:B/255.0f alpha:A]
/** 随机色 */
#define RANDOMCOLOR [UIColor colorWithRed:arc4random() % 256 / 255.0 green:arc4random() % 256 / 255.0 blue:arc4random() % 256 / 255.0 alpha:1]
/** 清除背景色 */
#define CLEARCOLOR [UIColor clearColor]
/*************************************************颜色**********************************************/
/** 主题色(00,CA,A3) */
#define ThemeColor [UIColor colorWithRed:0/255.0 green:202/255.0 blue:163/255.0 alpha:1]
/** 白色(FF,FF,FF) */
#define WhiteColor [UIColor colorWithRed:255/255.0 green:255/255.0 blue:255/255.0 alpha:1]
/**黄色(FC,BF,13)*/
#define YellowColor [UIColor colorWithRed:252/255.0 green:191/255.0 blue:19/255.0 alpha:1]
/** 红色(EA,55,44) */
#define RedColor [UIColor colorWithRed:234/255.0 green:85/255.0 blue:68/255.0 alpha:1]
/** 蓝色(1E,88,E5) */
#define BlueColor [UIColor colorWithRed:30/255.0 green:136/255.0 blue:229/255.0 alpha:1]
/** 黑色(33,33,33) */
#define BlackColor [UIColor colorWithRed:51/255.0 green:51/255.0 blue:51/255.0 alpha:1]
/** 灰色C3(C3,C3,C3) */
#define GrayHC3Color [UIColor colorWithRed:195/255.0 green:195/255.0 blue:195/255.0 alpha:1]
/** 灰色B(BB,BB,BB) */
#define GrayHBColor [UIColor colorWithRed:187/255.0 green:187/255.0 blue:187/255.0 alpha:1]
/** 文字灰色(66,66,66) */
#define GrayH6Color [UIColor colorWithRed:102/255.0 green:102/255.0 blue:102/255.0 alpha:1]
/** 文字灰色(99,99,99) */
#define GrayH9Color [UIColor colorWithRed:153/255.0 green:153/255.0 blue:153/255.0 alpha:1]
/** 分割线颜色(DD,DD,DD) */
#define GrayLineColor [UIColor colorWithRed:221 / 254.0 green:221 / 254.0 blue:221 / 254.0 alpha:1]
/** 控制器背景颜色(EE,EE,EE) */
#define GrayVCColor [UIColor colorWithRed:238/255.0 green:238/255.0 blue:238/255.0 alpha:1]
/** 边框(CC,CC,CC) */
#define GrayFrameColor [UIColor colorWithRed:204/255.0 green:204/255.0 blue:204/255.0 alpha:1]
#import <UIKit/UIKit.h>

@interface UIColor (Extension)
/**
 * 从十六进制字符串获取颜色
 *
 * @parameter color:16进制字符串。支持@“#123456”、 @“0X123456”、 @“123456”三种格式
 * @parameter alpha:透明度
 * @return 颜色。color类型
 */
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;
/**
 * 从十六进制字符串获取颜色，透明度默认为1
 *
 * @parameter color:16进制字符串。支持@“#123456”、 @“0X123456”、 @“123456”三种格式
 * @return 颜色。color类型
 */
+ (UIColor *)colorWithHexString:(NSString *)color;
/**
 * 从十六进制数字获取颜色
 *
 * @parameter color:16进制数字
 * @parameter alpha:透明度
 * @return 颜色。color类型
 */
+ (UIColor *)colorWithHex:(NSInteger)hexValue alpha:(CGFloat)alphaValue;
/**
 * 从十六进制数字获取颜色，透明度默认为1
 *
 * @parameter color:16进制数字
 * @return 颜色。color类型
 */
+ (UIColor *)colorWithHex:(NSInteger)hexValue;
/**
 * 把color类型颜色转换成十六进制字符
 *
 * @parameter color:颜色
 * @return 十六进制字符
 */
+ (NSString *)hexFromUIColor:(UIColor*)color;
@end
