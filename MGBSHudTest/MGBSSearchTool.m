/*!
    Project name: MGBSHudTest
    @filename   : MGBSSearchTool.m
    @author     : Created by megabes_wanweiwei, Megabes Inc. http://www.megabes.com/
    @date       : Created at 下午9:59 2017/6/10.
    @copyright  :  Copyright © 2017年 wanweiwei. All rights reserved.
    @version    : <#version#>
 
    @class      : MGBSSearchTool
    @superclass : NSObject
 
    @classdesign: <#One Word Tell About Design For What Use#>
    @brief      : <#brief#>
    @discussion : <#Details#>
    @remark     : <#remarks#>
 */

#import "MGBSSearchTool.h"
#import "MGBSSearchPriceProtocol.h"

@interface MGBSSearchTool ()
<
    // Delegate
    MGBSSearchPriceProtocol
>
@end

@implementation MGBSSearchTool

int flag;

#pragma mark - init And UI
-(instancetype)init{
    if (self = [super init]) {
        //
    }
    return self;
}

#pragma mark - Public Methods


#pragma mark - Private Methods

void test();

#pragma mark - Delegate Methods
-(float)getPriceOfTicketByKind:(int)kind{
    if(kind == 1){
        NSLog(@"1 的价格是100元。");
    }
    test();
    return 0.f;
}

//void test(){
//    NSLog(@"bbbbbb");
//}

#pragma mark - Getters and Setters
@synthesize b = _b;
-(void)setB:(int)b{
    _b = b;
}
-(int)b{
    return _b;
}

-(void)speak{
    NSLog(@"speak");
}
@end
