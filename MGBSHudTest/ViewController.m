//
//  ViewController.m
//  MGBSHudTest
//
//  Created by megabes_wanweiwei on 2017/6/9.
//  Copyright © 2017年 wanweiwei. All rights reserved.
//

#import "ViewController.h"
#import <MGBSHud/MGBSHud.h>
#import "MGBSSearchPriceProtocol.h"
#import "MGBSSearchTool.h"

// NSString Format 简写
#define MGBS_STRINGFORMAT(fmt, ...) [NSString stringWithFormat:fmt,##__VA_ARGS__]
#define NSSFORMAT(fmt, ...) [NSString stringWithFormat:fmt,##__VA_ARGS__]
// UIImage简写
#define MGBS_UIIMG(a) [UIImage imageNamed:a]
#define UIIMGN(a) [UIImage imageNamed:a]

@interface ViewController ()

@property (nonatomic, weak  ) id<MGBSSearchPriceProtocol> delegateSearchPrice;
@property (nonatomic, strong) NSString *string;

@property (nonatomic, strong) UIView   *viewT;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    MGBSSearchTool *searchTool = [MGBSSearchTool new];
    id<MGBSSearchPriceProtocol> delegate = (id<MGBSSearchPriceProtocol>)searchTool;
    [delegate getPriceOfTicketByKind:1];
    searchTool->_a = 99;
    NSLog(@"searchTool->a %d",searchTool->_a);
    searchTool.b = 100;
    NSLog(@"searchTool.b %d",searchTool.b);
    [self changeObj:searchTool];// 引用传递，OC方法
    NSLog(@"searchTool.b %d",searchTool.b);
    
//    
//    for (int i = 0; i < 10; i++) {
//        __strong UIView *view;
////        int a = 0;
////        int *b = &a;
////        NSInteger aInteger;
////        NSInteger *b2 = &aInteger;
//        NSLog(@"%@",view);
//        NSLog(@"%f",view.alpha);
//        [view removeFromSuperview];
//        
//        
//        MGBSSearchTool *searchToolT;
//        NSLog(@"%f",searchToolT.b);
//        [searchToolT speak];
//
//    }
    
//    MGBSSearchTool *searchToolT = nil;
//    NSLog(@"%f",searchToolT.b);
//    [searchToolT speak];
//    test();
//    //NSLog(@"%f",searchToolT->_a);

}

-(void)changeObj:(MGBSSearchTool*)tool{
    tool.b = 100000;
}

void test(){
    printf("asdfasdf");
    NSLog(@"aaaaaaa");
}

- (IBAction)clickMGBSHudOnlyText:(id)sender {
    [MGBSHUD showOnlyText:@"Hello_World!!!" fontSize:20 uiEnabled:YES delay:1.5f backgroudStyle:0 position:0 popstyle:0 identifier:nil];
}

- (IBAction)clickImgAndText:(id)sender {
    [MGBSHUD showImgText:@"Hi_This is HUD With Img ... " fontSize:15 uiEnabled:YES delay:1.5f backgroudStyle:0 position:1 popstyle:1 imgType:MGBSHUDImgtypeSuccess identifier:nil];
}
- (IBAction)clickSqure:(id)sender {
    [MGBSHUD showSqureHUDbyText:@"加载失败..." fontSize:15 uiEnabled:YES delay:2.0f backgroudStyle:0 popstyle:1 imgType:MGBSHUDImgtypeSpinCircle identifier:nil];
}
- (IBAction)clickNoDismiss:(id)sender {
    [MGBSHUD showSqureHUDbyText:@"加载成功" fontSize:30 uiEnabled:YES delay:0.f backgroudStyle:0 popstyle:1 imgType:MGBSHUDImgtypeSuccess identifier:@"IDENTIFIER"];
}
- (IBAction)dismiss:(id)sender {
    [MGBSHUD dismissHUDWithIdentifier:@"IDENTIFIER"];

    
}

+ (NSSet *)keyPathsForValuesAffectingd
{
    return [NSSet setWithObjects:@"<#keyPath#>", nil];
}


@end
