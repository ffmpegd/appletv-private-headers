/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSDictionary, NSData, NSURLResponse;

__attribute__((visibility("hidden")))
@interface NSCachedURLResponseInternal : NSObject {
@private
	NSURLResponse *response;	// 4 = 0x4
	NSData *data;	// 8 = 0x8
	NSDictionary *userInfo;	// 12 = 0xc
	unsigned storagePolicy;	// 16 = 0x10
	CFCachedURLResponseRef _cachedURLResponse;	// 20 = 0x14
}
- (void)dealloc;	// 0x30294239
@end

