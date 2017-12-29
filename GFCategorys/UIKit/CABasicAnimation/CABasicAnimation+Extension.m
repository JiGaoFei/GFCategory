//
//  CABasicAnimation+Extension.m
//  GFFramework
//
//  Created by 孙行者网络 on 2017/12/27.
//  Copyright © 2017年 孙行者网络. All rights reserved.
//

#import "CABasicAnimation+Extension.h"

@implementation CABasicAnimation (Extension)
/**永久闪烁的动画
 *  @param time   time duration 持续时间
 *  @return self   返回当前类
 */
+ (CABasicAnimation *)gf_opacityForever_Animation:(float)time
{
    CABasicAnimation *animation = [CABasicAnimation animationWithKeyPath:@"opacity"];
    animation.fromValue = @0;
    animation.toValue = @0.8;
    animation.autoreverses = YES;
    animation.duration = time;
    animation.repeatCount = MAXFLOAT;
    animation.removedOnCompletion = NO;
    animation.fillMode = kCAFillModeForwards;
    //定义动画的样式 
    animation.timingFunction=[CAMediaTimingFunction functionWithName:kCAMediaTimingFunctionEaseInEaseOut];
    return animation;
}
@end
