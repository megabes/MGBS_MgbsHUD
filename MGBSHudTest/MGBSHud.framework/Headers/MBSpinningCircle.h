//
//  NSSpinningCircle.h
//  Notestand
//
//  Created by M B. Bitar on 9/11/12.
//  Copyright (c) 2012 progenius, inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MBSpinningCircle : UIView

+(MBSpinningCircle*)getCircleWithSize:(CGFloat)width color:(UIColor*)color speed:(float)speed isAnimating:(bool)isAnimating hasGlow:(bool)hasGlow isLineBig:(bool)isLineBig;

@end
