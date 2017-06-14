//
//  AppDelegate.h
//  MGBSHudTest
//
//  Created by megabes inc. on 2017/6/9.
//  Copyright © 2017年 megabes inc. All rights reserved.
//
//  WebSite : http://www.megabes.com/
//  E-mail  : megabes@126.com

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// backgroundStyle : Dark, Blur
typedef NS_ENUM (NSInteger, MGBSHUDBackgourdStyle){
    MGBSHUDBackgourdStyleDark = 0,
    MGBSHUDBackgourdStyleBlur
};

// Position : center, bottom
typedef NS_ENUM (NSInteger, MGBSHUDPosition){
    MGBSHUDPositionCenter = 0,
    MGBSHUDPositionBottom
};

// MGBSHUDPopstyle : fade, transform
typedef NS_ENUM (NSInteger, MGBSHUDPopstyle){
    MGBSHUDPopstyleNormal = 0, // 淡入淡出
    MGBSHUDPopstyleTransform   // 变形动画
};

// MGBSHUDImgtype
typedef NS_ENUM (NSInteger, MGBSHUDImgtype){
    MGBSHUDImgtypeSpinCircle = 0,
    MGBSHUDImgtypeSuccess,
    MGBSHUDImgtypeFail,
    MGBSHUDImgtypeWarning,
    MGBSHUDImgtypeCustom // 可以定制自己的IMG
};

@interface MGBSHUD : NSObject

/*
 * 方法：展示一个text的HUD，可以定制
 * fontsize :
 * uiEnabled : uiUserEnabled
 * delay : TIME LAST
 * backgroudStyle :
 * position :
 * popstyle : animation style
 */
+(void)showOnlyText:(NSString*)text fontSize:(CGFloat)size uiEnabled:(bool)uiEnabled delay:(NSTimeInterval)delay backgroudStyle:(MGBSHUDBackgourdStyle)backgroundStyle position:(MGBSHUDPosition)position popstyle:(MGBSHUDPopstyle)popStyle identifier:(NSString*)identifier;

/*
 * 方法：展示一个text的HUD，可以定制
 * fontsize :
 * uiEnabled : uiUserEnabled
 * delay : TIME LAST
 * backgroudStyle :
 * position :
 * popstyle : animation style
 * imgType :
 * ifCircleColor : 可以定制转圈的颜色
 */
+(void)showImgText:(NSString*)text fontSize:(CGFloat)size uiEnabled:(bool)uiEnabled delay:(NSTimeInterval)delay backgroudStyle:(MGBSHUDBackgourdStyle)backgroundStyle position:(MGBSHUDPosition)position popstyle:(MGBSHUDPopstyle)popStyle imgType:(MGBSHUDImgtype)imgType ifCircleColor:(UIColor*)circleColor ifCustomImg:(UIImage*)img identifier:(NSString*)identifier;

+(void)showSqureHUDbyText:(NSString*)text fontSize:(CGFloat)size uiEnabled:(bool)uiEnabled delay:(NSTimeInterval)delay backgroudStyle:(MGBSHUDBackgourdStyle)backgroundStyle popstyle:(MGBSHUDPopstyle)popStyle imgType:(MGBSHUDImgtype)imgType ifCircleColor:(UIColor*)circleColor ifCustomImg:(UIImage*)img identifier:(NSString*)identifier;

+(void)dismissHUDWithIdentifier:(NSString*)identifier;

@end
