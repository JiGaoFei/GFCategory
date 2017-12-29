//
//  CABasicAnimation+Extension.h
//  GFFramework
//
//  Created by 孙行者网络 on 2017/12/27.
//  Copyright © 2017年 孙行者网络. All rights reserved.
//

@interface CABasicAnimation (Extension)
/**永久闪烁的动画
 *  @param time   time duration 持续时间
 *  @return self   返回当前类
 */
+ (CABasicAnimation *)gf_opacityForever_Animation:(float)time;
@end
