//
//  MFATextField.h
//  DapiConnect
//
//  Created by Mohammed Ennabah on 5/22/21.
//  Copyright © 2021 Dapi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Dapi/Dapi-Swift.h>

NS_ASSUME_NONNULL_BEGIN

@interface MFATextField : UITextField

@property (strong, nonatomic, readonly) MFAParameter *mfaParameter;

- (instancetype)initWithMFAParameter:(MFAParameter *)mfaParameter;

@end

NS_ASSUME_NONNULL_END
