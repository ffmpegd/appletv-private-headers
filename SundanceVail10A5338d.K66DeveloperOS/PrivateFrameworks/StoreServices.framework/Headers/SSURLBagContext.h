/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSDictionary, NSMutableDictionary, NSNumber;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {
	int _allowedRetryCount;	// 4 = 0x4
	BOOL _allowsExpiredBags;	// 8 = 0x8
	int _bagType;	// 12 = 0xc
	NSMutableDictionary *_httpHeaders;	// 16 = 0x10
	BOOL _ignoresDiskCache;	// 20 = 0x14
	NSNumber *_userIdentifier;	// 24 = 0x18
	BOOL _usesCachedBagsOnly;	// 28 = 0x1c
}
@property(copy, nonatomic) NSDictionary *allHTTPHeaders;	// G=0x32369e99; S=0x32369f51; 
@property(assign, nonatomic) int allowedRetryCount;	// G=0x3236a7d1; S=0x3236a7e1; @synthesize=_allowedRetryCount
@property(assign, nonatomic) BOOL allowsExpiredBags;	// G=0x3236a7f1; S=0x3236a801; @synthesize=_allowsExpiredBags
@property(assign, nonatomic) int bagType;	// G=0x3236a811; S=0x3236a821; @synthesize=_bagType
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x32369ed1; 
@property(readonly, assign, nonatomic) CFStringRef diskCacheExpirationTimeKey;	// G=0x3236a255; 
@property(readonly, assign, nonatomic) NSString *diskCacheKey;	// G=0x3236a29d; 
@property(readonly, assign, nonatomic) NSString *diskCachePath;	// G=0x3236a311; 
@property(assign, nonatomic) BOOL ignoresDiskCache;	// G=0x3236a831; S=0x3236a841; @synthesize=_ignoresDiskCache
@property(retain, nonatomic) NSNumber *userIdentifier;	// G=0x3236a851; S=0x3236a861; @synthesize=_userIdentifier
@property(assign, nonatomic) BOOL usesCachedBagsOnly;	// G=0x3236a871; S=0x3236a881; @synthesize=_usesCachedBagsOnly
+ (id)contextWithBagType:(int)bagType;	// 0x32369e45
- (id)init;	// 0x32369da1
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3236a53d
// declared property getter: - (id)allHTTPHeaders;	// 0x32369e99
// declared property getter: - (int)allowedRetryCount;	// 0x3236a7d1
// declared property getter: - (BOOL)allowsExpiredBags;	// 0x3236a7f1
// declared property getter: - (int)bagType;	// 0x3236a811
// declared property getter: - (id)cacheKey;	// 0x32369ed1
- (id)copyWithZone:(NSZone *)zone;	// 0x3236a45d
- (id)copyXPCEncoding;	// 0x3236a6d1
- (void)dealloc;	// 0x32369de1
- (id)description;	// 0x3236a06d
// declared property getter: - (CFStringRef)diskCacheExpirationTimeKey;	// 0x3236a255
// declared property getter: - (id)diskCacheKey;	// 0x3236a29d
// declared property getter: - (id)diskCachePath;	// 0x3236a311
- (unsigned)hash;	// 0x3236a101
// declared property getter: - (BOOL)ignoresDiskCache;	// 0x3236a831
- (BOOL)isEqual:(id)equal;	// 0x3236a151
// declared property setter: - (void)setAllHTTPHeaders:(id)headers;	// 0x32369f51
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x3236a7e1
// declared property setter: - (void)setAllowsExpiredBags:(BOOL)bags;	// 0x3236a801
// declared property setter: - (void)setBagType:(int)type;	// 0x3236a821
// declared property setter: - (void)setIgnoresDiskCache:(BOOL)cache;	// 0x3236a841
// declared property setter: - (void)setUserIdentifier:(id)identifier;	// 0x3236a861
// declared property setter: - (void)setUsesCachedBagsOnly:(BOOL)only;	// 0x3236a881
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x32369f95
// declared property getter: - (id)userIdentifier;	// 0x3236a851
// declared property getter: - (BOOL)usesCachedBagsOnly;	// 0x3236a871
- (id)valueForHTTPHeaderField:(id)httpheaderField;	// 0x3236a025
@end

