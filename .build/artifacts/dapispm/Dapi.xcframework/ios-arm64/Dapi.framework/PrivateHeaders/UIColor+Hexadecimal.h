//
//  UIColor+Hexadecimal.h
//  DapiConnect
//
//  Created by Mohammed Ennabah on 3/4/20.
//  Copyright © 2020 Dapi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (Hexadecimal)

+ (UIColor *)colorWithHexString:(NSString *)hexString;

@end

NS_ASSUME_NONNULL_END
