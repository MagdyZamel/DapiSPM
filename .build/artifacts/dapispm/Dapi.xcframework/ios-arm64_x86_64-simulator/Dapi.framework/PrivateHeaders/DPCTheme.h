//
//  DPCTheme.h
//  DapiConnect
//
//  Created by Mohammed Ennabah on 3/21/20.
//  Copyright © 2020 Dapi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DPCTheme : NSObject

@property (nonatomic, strong, readonly, class) UIColor *backgroundColor;
@property (nonatomic, strong, readonly, class) UIColor *textField;
@property (nonatomic, strong, readonly, class) UIColor *errorViewBackgroundColor;
@property (nonatomic, strong, readonly, class) UIColor *errorBorderViewBackgroundColor;

@property (nonatomic, strong, readonly, class) UIColor *currencyLabel;
@property (nonatomic, strong, readonly, class) UIColor *amountLabel;
@property (nonatomic, strong, readonly, class) UIColor *limitLabel;

@end

NS_ASSUME_NONNULL_END
