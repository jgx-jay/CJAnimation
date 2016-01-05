//
//  ViewController.m
//  CJAnimation
//
//  Created by ConnorJ on 16/1/5.
//  Copyright © 2016年 ConnorJ. All rights reserved.
//

#import "ViewController.h"
#import "AnimationViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    UIView *view = [[UIView alloc] initWithFrame:CGRectMake(50, 50, 50, 50)];
    view.backgroundColor = [UIColor redColor];
    
    [view.layer addAnimation:[AnimationViewController opacityForever_Animation:2] forKey:@"opacity"];
    [self.view addSubview:view];
    
}



@end
