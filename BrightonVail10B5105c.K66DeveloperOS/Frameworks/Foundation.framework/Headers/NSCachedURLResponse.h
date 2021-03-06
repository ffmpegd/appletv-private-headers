/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSCachedURLResponseInternal;

@interface NSCachedURLResponse : NSObject <NSCoding, NSCopying> {
	NSCachedURLResponseInternal *_internal;	// 4 = 0x4
}
- (id)initWithCoder:(id)coder;	// 0x3613de8d
- (id)initWithResponse:(id)response data:(id)data;	// 0x3613dc11
- (id)initWithResponse:(id)response data:(id)data userInfo:(id)info storagePolicy:(unsigned)policy;	// 0x3613dc39
- (id)initWithResponse:(id)response dataArray:(id)array userInfo:(id)info storagePolicy:(unsigned)policy;	// 0x3613dd6d
- (CFCachedURLResponseRef)_CFCachedURLResponse;	// 0x360b99e1
- (void)_deallocInternalCFCachedURLResponse;	// 0x3613e2b9
- (id)_initWithCFCachedURLResponse:(CFCachedURLResponseRef)cfcachedURLResponse;	// 0x360b98d9
- (void)_reestablishInternalCFCachedURLResponse:(CFCachedURLResponseRef)response;	// 0x3613e2f9
- (id)copyWithZone:(NSZone *)zone;	// 0x3613de7d
- (id)data;	// 0x3613e19d
- (id)dataArray;	// 0x3613e24d
- (void)dealloc;	// 0x360b9a01
- (void)encodeWithCoder:(id)coder;	// 0x3613e0b9
- (id)response;	// 0x3613e17d
- (unsigned)storagePolicy;	// 0x3613e299
- (id)userInfo;	// 0x3613e279
@end

