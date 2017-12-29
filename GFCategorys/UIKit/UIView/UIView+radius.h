//
//  UIView+radius.h
//  GFFramework
//
//  Created by 孙行者网络 on 2017/12/22.
//  Copyright © 2017年 孙行者网络. All rights reserved.
//

#import <UIKit/UIKit.h>
IB_DESIGNABLE
@interface UIView (radius)
/**设置圆角半径*/
@property(nonatomic,assign) IBInspectable CGFloat cornerRadius;
/**设置边框宽度*/
@property(nonatomic,assign) IBInspectable CGFloat borderWidth;
/**设置边框颜色*/
@property(nonatomic,assign) IBInspectable UIColor *borderColor;
@end
