#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class MFAParameter;
@class MFAColorScheme;

@interface MFANavigationController : UINavigationController

@property (nonatomic, strong, readonly) NSArray<NSDictionary<NSString *, NSString *> *> *userInput;
@property (nonatomic, copy) void (^mfaValuesSubmitted)(NSArray<MFAParameter *> *);
@property (nonatomic, copy) void (^mfaCancelled)(void);

- (instancetype)initWithUserInput:(NSArray<MFAParameter *> *)userInput colorScheme:(MFAColorScheme *)colorScheme bankLogo:(NSString *)logo bankID:(NSString *)bankID;


@end

NS_ASSUME_NONNULL_END
