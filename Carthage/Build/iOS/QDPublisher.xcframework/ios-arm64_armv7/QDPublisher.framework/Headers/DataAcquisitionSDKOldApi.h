//
//  DataAcquisitionSDKOldApi.h
//  DataAcquisitionSDK
//
//  Created by Syam Sasidharan on 28/12/18.
//  Copyright © 2018 DataAcquisitionSDK. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DataAcquisitionSDKOldApi : NSObject

@property BOOL debug;
@property (nonatomic, copy) void (^ _Nullable connectionErrorHandler)(NSString* error);
@property (strong) NSString* _Nullable sdkKey;

+(DataAcquisitionSDKOldApi *)shared;
- (void) makeApiCall: (NSArray<NSDictionary *>*)params_array stream:(NSString *)streamName clearCache:(bool)clearCache;
- (void) getIp:(void (^) (NSString* _Nullable ip))complete;
- (BOOL) checkAuth;
- (void) setup: (NSString*)sdkKey publicKey:(NSString*)publicKey secretKey:(NSString *)secretKey;


@end

NS_ASSUME_NONNULL_END
