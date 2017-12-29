//
//  NSDate+Extension.h
//  GFFramework
//
//  Created by 孙行者网络 on 2017/11/1.
//  Copyright © 2017年 孙行者网络. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Extension)
/**
 *  判断某个时间是否为今年
 */
- (BOOL)isThisYear;
/**
 *  判断某个时间是否为昨天
 */
- (BOOL)isYesterday;
/**
 *  判断某个时间是否为今天
 */
- (BOOL)isToday;
@end
