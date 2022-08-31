//
//  DPCFontManager.h
//  DapiConnect
//
//  Created by Mohammed Ennabah on 05/05/2020.
//  Copyright © 2020 Dapi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DPCFontManager: NSObject

//@property (nonatomic, copy, readonly) NSString *black;
//@property (nonatomic, copy, readonly) NSString *blackItalic;
//@property (nonatomic, copy, readonly) NSString *bold;
//@property (nonatomic, copy, readonly) NSString *boldItalic;
//@property (nonatomic, copy, readonly) NSString *extraBold;
//@property (nonatomic, copy, readonly) NSString *extraBoldItalic;
//@property (nonatomic, copy, readonly) NSString *extraLight;
//@property (nonatomic, copy, readonly) NSString *extraLightItalic;
//@property (nonatomic, copy, readonly) NSString *italic;
//@property (nonatomic, copy, readonly) NSString *light;
//@property (nonatomic, copy, readonly) NSString *lightItalic;
//@property (nonatomic, copy, readonly) NSString *medium;
//@property (nonatomic, copy, readonly) NSString *mediumItalic;
//@property (nonatomic, copy, readonly) NSString *regular;
//@property (nonatomic, copy, readonly) NSString *semiBold;
//@property (nonatomic, copy, readonly) NSString *semiBoldItalic;

+ (void)startLoading;

+ (NSString *)black;
+ (NSString *)blackItalic;
+ (NSString *)bold;
+ (NSString *)boldItalic;
+ (NSString *)extraBold;
+ (NSString *)extraBoldItalic;
+ (NSString *)extraLight;
+ (NSString *)extraLightItalic;
+ (NSString *)italic;
+ (NSString *)light;
+ (NSString *)lightItalic;
+ (NSString *)medium;
+ (NSString *)mediumItalic;
+ (NSString *)regular;
+ (NSString *)semiBold;
+ (NSString *)semiBoldItalic;

@end

NS_ASSUME_NONNULL_END
