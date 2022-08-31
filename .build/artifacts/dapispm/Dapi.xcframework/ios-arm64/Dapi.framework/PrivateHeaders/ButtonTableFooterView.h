//
//  ButtonTableFooterView.h
//  DapiConnect
//
//  Created by Mohammed Ennabah on 3/11/20.
//  Copyright © 2020 Dapi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class ButtonTableFooterView;

@protocol ButtonTableFooterViewDelegate <NSObject>

- (void)buttonTableFooterViewDidTapButton:(ButtonTableFooterView *)footerView;

@end

@interface ButtonTableFooterView : UITableViewHeaderFooterView

@property (nonatomic, weak) id<ButtonTableFooterViewDelegate> delegate;
@property (nonatomic, strong) UIColor *color;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, assign) BOOL isEnabled;

@end

NS_ASSUME_NONNULL_END
