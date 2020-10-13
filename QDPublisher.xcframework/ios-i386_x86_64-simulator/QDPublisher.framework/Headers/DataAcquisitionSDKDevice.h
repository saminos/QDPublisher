#import <Foundation/Foundation.h>
@import AdSupport;

@interface DataAcquisitionSDKDevice : NSObject

+ (NSString *) identifierForAdvertising;
+ (NSString *) distinctId;
+ (NSString *) deviceModel;
+ (NSMutableDictionary *) collectAutomaticProperties;
+ (BOOL) isForeground;
@end
