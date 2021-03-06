//
//  NTESConfigTipBtn.h
//  ShortVideo_Demo
//
//  Created by Netease on 17/2/17.
//  Copyright © 2017年 Netease. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NTESConfigTipBtn : UIControl

@property (nonatomic, assign, readonly) CGSize tipRect;

@property (nonatomic, assign) NSInteger section;

@property (nonatomic, assign) NSInteger duration;

@property (nonatomic, assign) NSInteger resolution;

@property (nonatomic, assign) NSInteger scaleMode;

@end
