//
//  UIView+radius.m
//  GFFramework
//
//  Created by 孙行者网络 on 2017/12/22.
//  Copyright © 2017年 孙行者网络. All rights reserved.
//

#import "UIView+radius.h"
#import <objc/runtime.h>
@implementation UIView (radius)
/**设置圆角半径*/
-(void)setCornerRadius:(CGFloat)cornerRadius{
    self.layer.masksToBounds = YES;
    self.layer.cornerRadius = cornerRadius;
}
/**设置边颜色*/
-(void)setBorderColor:(UIColor *)borderColor{
    self.layer.borderColor = borderColor.CGColor;
}
/**设置边款*/
-(void)setBorderWidth:(CGFloat)borderWidth{
    self.layer.borderWidth = borderWidth;
}

- (CGFloat)cornerRadius{
    return self.layer.cornerRadius;
}
- (CGFloat)borderWidth{
    return self.layer.borderWidth;
}
- (UIColor *)borderColor{
    return [UIColor colorWithCGColor:self.layer.borderColor];
}
@end
