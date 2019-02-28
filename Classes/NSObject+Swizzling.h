//
//  NSObject+Swizzling.h
//  GoldCatBank
//
//  Created by 王鑫锋 on 2017/8/21.
//  Copyright © 2017年 王鑫锋. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Swizzling)


/**
 方法替换

 @param originalSelector 原有方法
 @param swizzledSelector 替换的方法
 */
+ (void)swizzleSelector:(SEL)originalSelector withSwizzledSelector:(SEL)swizzledSelector;

@end
