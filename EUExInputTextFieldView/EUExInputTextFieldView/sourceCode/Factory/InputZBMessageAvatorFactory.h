//
//  ZBMessageAvator.h
//  MessageDisplay
//
//  Created by zhoubin@moshi on 14-5-17.
//  Copyright (c) 2014年 Crius_ZB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

static CGFloat const kZBAvatarImageSize = 40.0f;

typedef NS_ENUM(NSInteger, ZBMessageAvatorType) {
    ZBMessageAvatorSquare,
    ZBMessageAvatorCircle
};

@interface InputZBMessageAvatorFactory : NSObject

+ (UIImage *)avatarImageNamed:(UIImage *)originImage messageAvatorType:(ZBMessageAvatorType)type;

@end
