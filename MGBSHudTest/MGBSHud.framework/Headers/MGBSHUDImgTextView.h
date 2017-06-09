//
//  MGBSHUDImgTextView.h
//  MGBSUtils
//
//  Created by megabes_iOS on 2017/5/25.
//  Copyright © 2017年 wanweiwei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MGBSHUDImgTextView : UIView
@property (weak, nonatomic) IBOutlet UIImageView *imgV;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *heightImgV;
@end
