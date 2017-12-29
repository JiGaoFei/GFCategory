//
//  UITextField+PlaceholderColor.m
//  GFFramework
//
//  Created by 孙行者网络 on 2017/11/8.
//  Copyright © 2017年 孙行者网络. All rights reserved.
//

#import "UITextField+Extension.h"
#import <objc/message.h>
@implementation UITextField (Extension)
static const char * placeholderSize = "placeholderSize";
#pragma Mark- 分类代码
+ (void)load
{
    // 获取系统
    Method placeholder = class_getInstanceMethod(self,@selector(setPlaceholder:));
 
    //自定义颜色方法
    Method  PFplaceholder= class_getInstanceMethod(self, @selector(setPFplaceholder:));
    // 自定义字体大小方法
    Method  PFplaceholderFont= class_getInstanceMethod(self, @selector(setPFPlaceholderFont:));
    
    // 交换方法设置颜色方法
    method_exchangeImplementations(placeholder, PFplaceholder);
    // 交换设置字体大小方法
    method_exchangeImplementations(placeholder, PFplaceholderFont);
}
// 设置颜色的方法(set)
- (void)setPlaceholderColor:(UIColor *)placeholderColor
{
    // 给textField添加颜色属性
    objc_setAssociatedObject(self, "placeholderColor", placeholderColor, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
     UILabel *placeholder = [self valueForKey:@"placeholderLabel"];
     placeholder.textColor =placeholderColor;
}
// 设置颜色(get)
- (UIColor *)placeholderColor
{
    // 绑定属性
    return objc_getAssociatedObject(self, "placeholderColor");
}

// 设置字体(get)
- (CGFloat)placeholderFont
{
    return [objc_getAssociatedObject(self, placeholderSize) floatValue] ;
}
// 设置字体(set)
- (void)setPlaceholderFont:(CGFloat)placeholderFont
{
    objc_setAssociatedObject(self, placeholderSize, @(placeholderFont), OBJC_ASSOCIATION_ASSIGN);
    UILabel *placeholder = [self valueForKey:@"placeholderLabel"];
    if (placeholderFont) {
          placeholder.font =[UIFont systemFontOfSize:placeholderFont];
    }
    placeholder.textColor = [UIColor colorWithRed:153/255.0 green:153/255.0 blue:153/255.0 alpha:1];
}
// 交换系统方法和设置字体方法
- (void)setPFPlaceholderFont:(CGFloat )placeholderFont
{
    [self setPFPlaceholderFont:placeholderFont];
    self.placeholderFont = self.placeholderFont;
}
// 交换系统方法和设置颜色方法
- (void)setPFplaceholder:(NSString *)placeholder
{
    // 因为交换方法的实现所以调用了系统方法
    [self setPFplaceholder:placeholder];
    self.placeholderColor = self.placeholderColor;
}

@end
