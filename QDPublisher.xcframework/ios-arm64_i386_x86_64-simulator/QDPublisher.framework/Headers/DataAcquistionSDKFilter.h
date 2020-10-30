//
//  DataAcquistionSDKFilter.h
//  DataAcquisitionSDK
//
//  Created by Syam Sasidharan on 28/12/18.
//  Copyright © 2018 DataAcquisitionSDK. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DataAcquistionSDKFilter : NSObject

+(DataAcquistionSDKFilter *)shared;
- (BOOL) isGenericFieldNeedToBeFiltered:(NSString *)item;
- (BOOL) isCommonFieldNeedToBeFiltered:(NSString *)item;
- (BOOL) isLocationFieldNeedToBeFiltered:(NSString *)item;

@end

NS_ASSUME_NONNULL_END
