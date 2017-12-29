//
//  NSString+Extension.m
//  GFFramework
//
//  Created by 孙行者网络 on 2017/11/14.
//  Copyright © 2017年 孙行者网络. All rights reserved.
//

#import "NSString+Extension.h"

@implementation NSString (Extension)
/**过滤特殊字符串
 *@params  specialCharaSet (要过滤的特殊字符集)
 *@params   originalStringString(原始字符)
 */
+ (NSString *)filterStringWithSet:(NSCharacterSet *)specialCharaSet originalStringString:(NSString *)originalStringString
{
    //   定义一个特殊字符的集合
//    NSCharacterSet *set = [NSCharacterSet characterSetWithCharactersInString: @"@／：；（）¥「」＂、[]{}#%-*+=_\\|~＜＞$€^•'@#$%^&*()_+'\""];
    NSString *newString = [originalStringString stringByTrimmingCharactersInSet:specialCharaSet];
    return newString;
}
@end
