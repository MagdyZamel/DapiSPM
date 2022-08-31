//
//  MessageViewController.h
//  DapiConnect
//
//  Created by Mohammed Ennabah on 11/28/20.
//  Copyright © 2020 Dapi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class MessageViewController;

@protocol MessageViewControllerDelegate <NSObject>

- (void)messageViewControllerDidTapButton:(MessageViewController *)messageViewController error:(nullable NSError *)error;
@end

@interface MessageViewController : UIViewController

@property (nonatomic, weak) id<MessageViewControllerDelegate> delegate;
@property (nonatomic, copy,nullable) NSError *error;

- (instancetype)initWithError:(NSError *)error delegate:(id<MessageViewControllerDelegate>)delegate;
- (instancetype)initWithImageNamed:(NSString *)imageName title:(NSString *)title message:(NSString *)message delegate:(id<MessageViewControllerDelegate>)delegate;
- (instancetype)initWithImageGifNamed:(NSString *)imageGifName title:(NSString *)title message:(NSString *)message delegate:(id<MessageViewControllerDelegate>)delegate;
@end

NS_ASSUME_NONNULL_END
