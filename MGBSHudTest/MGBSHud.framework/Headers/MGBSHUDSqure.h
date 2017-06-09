//
//  MGBSHUDSqure.h
//  MGBSUtils
//
//  Created by megabes_iOS on 2017/5/25.
//  Copyright © 2017年 wanweiwei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MGBSHUDSqure : UIView
@property (weak, nonatomic) IBOutlet UIImageView *imgV;
@property (weak, nonatomic) IBOutlet UILabel *label;

//约束
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imgVHeight;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *marginImgVToTop;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *marginLabelToBottom;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *marginLabelToLeft;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *marginLabelToRight;
@end
