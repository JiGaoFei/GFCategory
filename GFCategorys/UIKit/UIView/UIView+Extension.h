//
//  UIView+Extension.h
//  GFFramework
//
//  Created by 孙行者网络 on 2017/11/1.
//  Copyright © 2017年 孙行者网络. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)
/** 视图位置尺寸 */
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGPoint origin;
/** 获取当前视图所在控制器 */
- (UIViewController*)viewController;
@end
