//
//  MFAViewController.h
//  DapiConnect
//
//  Created by Mohammed Ennabah on 3/10/20.
//  Copyright © 2020 Dapi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MFANavigationController.h"

NS_ASSUME_NONNULL_BEGIN

@interface MFAViewController : UIViewController

//@property (nonatomic, strong, readonly) NSArray<NSDictionary<NSString *, NSString *> *> *userInput;
@property (nonatomic, copy) void (^mfaValuesSubmitted)(NSArray<MFAParameter *> *);
@property (nonatomic, copy) void (^mfaCancelled)(void);

- (instancetype)initWithUserInput:(NSArray<MFAParameter *> *)userInput colorScheme:(MFAColorScheme *)colorScheme bankLogo:(NSString *)logo bankID:(NSString *)bankID;

@end

NS_ASSUME_NONNULL_END
