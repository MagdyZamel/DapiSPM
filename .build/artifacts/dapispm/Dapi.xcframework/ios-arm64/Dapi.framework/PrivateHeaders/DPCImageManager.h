//
//  DPCImageManager.h
//  DapiConnect
//
//  Created by Mohammed Ennabah on 9/26/21.
//  Copyright © 2021 Dapi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, DPCImageManagerError) {
    ImageManagerErrorInvalidURL,
    ImageManagerErrorNetworkError,
    ImageManagerErrorNotValidImage
};

@interface DPCImageManager : NSObject

+ (instancetype)alloc __attribute__((unavailable("alloc not available, call sharedImageManager instead")));
- (instancetype)init __attribute__((unavailable("init not available, call sharedImageManager instead")));
+ (instancetype)new __attribute__((unavailable("new not available, call sharedImageManager instead")));
- (instancetype)copy __attribute__((unavailable("copy not available, call sharedImageManager instead")));

@property (class, nonnull, readonly, strong) DPCImageManager *sharedInstance;

- (NSURLSessionTask * _Nullable)fetchImageWithURL:(NSURL *)url completion:(void (^)(UIImage * _Nullable image, NSError * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
