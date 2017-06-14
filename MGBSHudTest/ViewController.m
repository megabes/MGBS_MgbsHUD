//
//  ViewController.m
//  MGBSHudTest
//
//  Created by megabes_wanweiwei on 2017/6/9.
//  Copyright © 2017年 wanweiwei. All rights reserved.
//

#import "ViewController.h"
#import <MGBSHud/MGBSHUD.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

}

- (IBAction)clickMGBSHudOnlyText:(id)sender {
    [MGBSHUD showOnlyText:@"Hello_World!!!" fontSize:20 uiEnabled:YES delay:1.5f backgroudStyle:0 position:0 popstyle:0 identifier:nil];
}

- (IBAction)clickImgAndText:(id)sender {
    [MGBSHUD showImgText:@"Hi_This is HUD With Img ... " fontSize:15 uiEnabled:YES delay:1.5f backgroudStyle:0 position:1 popstyle:1 imgType:MGBSHUDImgtypeSuccess ifCircleColor:nil ifCustomImg:nil identifier:nil];
}
- (IBAction)clickSqure:(id)sender {
    [MGBSHUD showSqureHUDbyText:@"加载失败..." fontSize:15 uiEnabled:YES delay:2.0f backgroudStyle:0 popstyle:1 imgType:MGBSHUDImgtypeSpinCircle ifCircleColor:[UIColor redColor] ifCustomImg:nil identifier:nil];
}
- (IBAction)clickNoDismiss:(id)sender {
    [MGBSHUD showSqureHUDbyText:@"加载成功" fontSize:30 uiEnabled:YES delay:0.f backgroudStyle:0 popstyle:1 imgType:MGBSHUDImgtypeSuccess ifCircleColor:nil ifCustomImg:nil identifier:@"IDENTIFIER"];
}
- (IBAction)dismiss:(id)sender {
    [MGBSHUD dismissHUDWithIdentifier:@"IDENTIFIER"];

    
}

@end
