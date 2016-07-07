//
//  WCPScreenAdaptationDetail.h
//  WCPScreenAdaptation
//
//  Created by 王程鹏 on 16/7/7.
//  Copyright © 2016年 baling. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

//4s    w=320.000000 h=480.000000 rator=0.666667     3.5
//5     w=320.000000 h=568.000000 rator=0.563380     4
//5s    w=320.000000 h=568.000000 rator=0.563380
//6     w=375.000000 h=667.000000 rator=0.562219     4.7
//6p    w=414.000000 h=736.000000 rator=0.562500
//6s p  w=414.000000 h=736.000000 rator=0.562500
//适配策略, 设计的以iPhones5作为基准, 6和6p等比例方法

//   320/375=0.8533     568/667=0.8517
//   320/414=0.7729     568/736=0.7717


@interface WCPScreenAdaptationDetail : NSObject

CGRect CGRectMakeEx(CGFloat x, CGFloat y, CGFloat width, CGFloat height);

CGSize CGSizeMakeEx(CGFloat width, CGFloat height);

CGPoint CGPointMakeEx(CGFloat x, CGFloat y);

double heightEx(double height);

double widthEx(double width);

@end
