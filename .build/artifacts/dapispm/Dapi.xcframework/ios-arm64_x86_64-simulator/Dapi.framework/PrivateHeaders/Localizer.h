//
//  Localizer.h
//  DapiConnect
//
//  Created by MSZ on 04/03/2022.
//  Copyright © 2022 Dapi. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef LocalizedStrings
#define LocalizedStrings(key) \
NSLocalizedStringFromTableInBundle(key, @"DapiConnect", [NSBundle bundleWithPath:[[[NSBundle bundleForClass:[Localizer class]] resourcePath] stringByAppendingPathComponent:@"DapiConnect.bundle"]], nil)
#endif

NS_ASSUME_NONNULL_BEGIN

@interface Localizer : NSObject

+ (NSString *)getLocalizedStringByKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
