/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface SSNetworkConstraints : NSObject <SSCoding, SSXPCCoding, NSCopying> {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	long long _sizeLimit2G;	// 8 = 0x8
	long long _sizeLimit3G;	// 16 = 0x10
	long long _sizeLimitWiFi;	// 24 = 0x18
}
@property(readonly, assign, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;	// G=0x341f5151; 
+ (void)_addNetworkConstraintsToDictionary:(id)dictionary forNetworkType:(int)networkType legacyDictionary:(id)dictionary3;	// 0x341f6085
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)dictionary;	// 0x341f6325
+ (id)_newModernNetworkConstraintsWithArray:(id)array;	// 0x341f63ed
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)urlbag;	// 0x341f5d5d
- (id)init;	// 0x341f50c1
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x341f5915
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x341f5a41
- (void)_setSizeLimit:(long long)limit forNetworkType:(int)networkType;	// 0x341f6715
- (id)copyPropertyListEncoding;	// 0x341f5ad1
- (id)copyWithZone:(NSZone *)zone;	// 0x341f57dd
- (void *)copyXPCEncoding;	// 0x341f5c6d
- (void)dealloc;	// 0x341f5111
- (id)description;	// 0x341f54e1
// declared property getter: - (BOOL)isAnyNetworkTypeEnabled;	// 0x341f5151
- (BOOL)isEqual:(id)equal;	// 0x341f5729
- (void)setAllNetworkTypesDisabled;	// 0x341f525d
- (void)setSizeLimit:(long long)limit forNetworkType:(int)networkType;	// 0x341f5311
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)storeConstraintDictionary;	// 0x341f5e2d
- (long long)sizeLimitForNetworkType:(int)networkType;	// 0x341f53bd
@end

