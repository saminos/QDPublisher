#import <Foundation/Foundation.h>
#import "zlib.h"

@interface DataAcquisitionSDKUtil : NSObject 

@property (strong) NSString* ip;

//MARK: HashCodable

//TODO: return type change to NSString and parameter also NSString
+ (NSData *)sha256HMacWithData:(NSData *)data withKey:(NSData *)key;

//TODO: return type change to NSString
+ (NSData *)getV4DerivedKey:(NSString *)secret date:(NSString *)dateStamp region:(NSString *)regionName service:(NSString *)serviceName;
+ (NSString *)hexEncode:(NSString *)string;
+ (NSString*)sha256HashFor:(NSString*)input;
+ (NSString *)sha1:(NSString *)str;
+ (NSString*)md5HexDigest:(NSString*)input;

//MARK: ZIP
+ (NSData *)gzippedData: (NSData *) data;
//MARK: validation
+ (BOOL) validateEmail: (NSString *) candidate;
//MARK: cache
+ (NSMutableArray*)getCachedValues;
+ (void) cacheValues: (NSDictionary *)params;
+ (void) clearCache;
+ (long long) getLastLocationTracked;
+ (void) saveLastLocationTracked: (long long)lastLocationTracked;
+ (long long) getLastBatchSent;
+ (void) saveLastBatchSent: (long long)lastBatchSent;
+ (void)saveCachedIp:(NSString*)ip;
+ (NSString*)getCachedIp;

@end
