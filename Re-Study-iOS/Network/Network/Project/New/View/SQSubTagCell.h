//
//  SQSubTagCell.h
//  Network
//
//  Created by 朱双泉 on 2018/10/15.
//  Copyright © 2018 Castie!. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SQSubTagCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UIImageView *iconImageView;
@property (weak, nonatomic) IBOutlet UILabel *numLabel;
+ (instancetype)cell;

@end

NS_ASSUME_NONNULL_END
