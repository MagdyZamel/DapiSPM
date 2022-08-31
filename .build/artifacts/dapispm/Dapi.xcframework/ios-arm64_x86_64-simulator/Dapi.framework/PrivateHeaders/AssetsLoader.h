//
//  AssetsLoader.h
//  DapiConnect
//
//  Created by Mohammed Ennabah on 3/4/20.
//  Copyright © 2020 Dapi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AssetsLoader : NSObject

+ (UIImage *)imageNamed:(NSString *)imageName;
+ (NSData *)dataForGIFNamed:(NSString *)gifName;

@end

NS_ASSUME_NONNULL_END
