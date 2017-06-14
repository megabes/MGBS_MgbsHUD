//
//  MGBSHUD.h
//  MGBSUtils
//
//  Created by megabes_wanweiwei on 2017/5/24.
//  Copyright © 2017年 wanweiwei. All rights reserved.
//

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
    MGBSHUDPopstyleNormal = 0,
    MGBSHUDPopstyleTransform
};

// MGBSHUDImgtype
typedef NS_ENUM (NSInteger, MGBSHUDImgtype){
    MGBSHUDImgtypeSpinCircle = 0,
    MGBSHUDImgtypeSuccess,
    MGBSHUDImgtypeFail,
    MGBSHUDImgtypeWarning,
    MGBSHUDImgtypeCustom
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
 */
+(void)showImgText:(NSString*)text fontSize:(CGFloat)size uiEnabled:(bool)uiEnabled delay:(NSTimeInterval)delay backgroudStyle:(MGBSHUDBackgourdStyle)backgroundStyle position:(MGBSHUDPosition)position popstyle:(MGBSHUDPopstyle)popStyle imgType:(MGBSHUDImgtype)imgType ifCircleColor:(UIColor*)circleColor ifCustomImg:(UIImage*)img identifier:(NSString*)identifier;

+(void)showSqureHUDbyText:(NSString*)text fontSize:(CGFloat)size uiEnabled:(bool)uiEnabled delay:(NSTimeInterval)delay backgroudStyle:(MGBSHUDBackgourdStyle)backgroundStyle popstyle:(MGBSHUDPopstyle)popStyle imgType:(MGBSHUDImgtype)imgType ifCircleColor:(UIColor*)circleColor ifCustomImg:(UIImage*)img identifier:(NSString*)identifier;

+(void)dismissHUDWithIdentifier:(NSString*)identifier;

@end
