//
//  MGBSMetaToolSize.h
//  MGBSUtils
//
//  Created by megabes_wanweiwei on 2017/5/24.
//  Copyright © 2017年 wanweiwei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MGBSMetaToolSize : NSObject
+ (CGFloat)getWidthByText:(NSString*)text andFont:(CGFloat)fontSize;//根据string计算label的长度
+ (CGFloat)getWidthWithTitle:(NSString *)title font:(UIFont *)font;
+ (CGFloat)getHeightWithTitle:(NSString *)title font:(UIFont *)font width:(CGFloat)width;//计算高度的
+ (float)getHeightForString:(NSString *)str font:(float)font width:(float)width withLineSpace:(float)space;
@end
