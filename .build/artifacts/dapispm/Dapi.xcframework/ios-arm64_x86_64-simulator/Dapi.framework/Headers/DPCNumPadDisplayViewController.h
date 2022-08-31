//
//  DPCNumPadDisplayViewController.h
//  DapiConnect
//
//  Created by Mohammed Ennabah on 3/17/20.
//  Copyright © 2020 Dapi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class DPCNumPadDisplayViewController;

@protocol DPCNumPadDisplayViewControllerDelegate <NSObject>

- (void)numPadDisplayViewController:(DPCNumPadDisplayViewController *)viewController didSubmitValue:(double)value;

@end

@interface DPCNumPadDisplayViewController : UIViewController

@property (nonatomic, weak) id<DPCNumPadDisplayViewControllerDelegate> delegate;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, strong) NSNumber *balance;
@property (nonatomic, strong) NSNumber *amount;
@property (nonatomic, assign) NSUInteger minimumAmount;
@property (nonatomic, assign) NSUInteger maximumAmount;
@property (nonatomic, strong) UIColor* colorScheme;

@end

NS_ASSUME_NONNULL_END
