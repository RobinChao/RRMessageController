//
//  SendMessageViewController.h
//  SendMessageController
//
//  Created by Remi Robert on 17/11/14.
//  Copyright (c) 2014 remirobert. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RRMessageModel.h"
#import "UICollectionViewCellPhoto.h"

@protocol RRSendMessageDelegate;

@interface RRSendMessageViewController : UIViewController <UICollectionViewDelegate,
UICollectionViewDataSource, UITextViewDelegate>

@property (nonatomic, assign) id<RRSendMessageDelegate> delegate;

@property (nonatomic, assign) NSInteger numberPhoto;

- (instancetype) initWithMessage:(RRMessageModel *)message;
- (void) presentController:(UIViewController *)parentController :(void (^)(RRMessageModel *model, BOOL isCancel))completion;

@end

@protocol RRSendMessageDelegate <NSObject>

@optional
- (void) messageCancel;
- (void) getMessage:(RRMessageModel *)message;

@end