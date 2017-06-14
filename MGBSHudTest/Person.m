/*!
    Project name: MGBSHudTest
    @filename   : Person.m
    @author     : Created by megabes_wanweiwei, Megabes Inc. http://www.megabes.com/
    @date       : Created at 上午10:17 2017/6/11.
    @copyright  :  Copyright © 2017年 wanweiwei. All rights reserved.
    @version    : <#version#>
 
    @class      : Person
    @superclass : NSObject
 
    @classdesign: <#One Word Tell About Design For What Use#>
    @brief      : <#brief#>
    @discussion : <#Details#>
    @remark     : <#remarks#>
 */

#import "Person.h"

@interface Person ()
<
    // Delegate
>
@end

@implementation Person

#pragma mark - init And UI
-(instancetype)init{
    if (self = [super init]) {
        <#statements#>
    }
    return self;
}

#pragma mark - Public Methods


#pragma mark - Private Methods


#pragma mark - Getters and Setters
-(void)setArrMData:(NSMutableArray *)arrMData{
    _arrMData = arrMData;
    [self reloadData];
}

@end
