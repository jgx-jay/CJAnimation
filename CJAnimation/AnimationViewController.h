//
//  AnimationViewController.h
//  CJAnimation
//
//  Created by ConnorJ on 16/1/5.
//  Copyright © 2016年 ConnorJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AnimationViewController : UIViewController

+ (CABasicAnimation *)opacityForever_Animation:(float)time;

+ (CABasicAnimation *)opacityTimes_Animation:(float)repeatTimes
                                    durTimes:(float)time;

+ (CABasicAnimation *)moveX:(float)time
                          X:(NSNumber *)x;

+ (CABasicAnimation *)moveY:(float)time
                          Y:(NSNumber *)y;

+ (CABasicAnimation *)scale:(NSNumber *)Multiple
                      orgin:(NSNumber *)orginMultiple
                   durTimes:(float)time
                        Rep:(float)repeatTimes;

+ (CAAnimationGroup *)groupAnimation:(NSArray *)animationAry
                            durTimes:(float)time
                                 Rep:(float)repeatTimes;

+ (CAKeyframeAnimation *)keyframeAniamtion:(CGMutablePathRef)path
                                  durTimes:(float)time
                                       Rep:(float)repeatTimes;

+ (CABasicAnimation *)movepoint:(CGPoint)point;

+ (CABasicAnimation *)rotation:(float)dur
                        degree:(float)degree
                     direction:(int)direction
                   repeatCount:(int)repeatCount;
@end
