//
//  UITextField+PlaceholderColor.h
//  GFFramework
//
//  Created by 孙行者网络 on 2017/11/8.
//  Copyright © 2017年 孙行者网络. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (Extension)
/** 占位文字颜色 */
@property(nonatomic, strong) UIColor *placeholderColor;
/**占位符字体*/
@property (nonatomic,assign) CGFloat placeholderFont;
@end
