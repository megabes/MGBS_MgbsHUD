//
//  MGBSSearchPrice.h
//  MGBSHudTest
//
//  Created by megabes_wanweiwei on 2017/6/10.
//  Copyright © 2017年 wanweiwei. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MGBSSearchPriceProtocol <NSObject>

@required
-(float)getPriceOfTicketByKind:(int)kind;

@optional

@end
