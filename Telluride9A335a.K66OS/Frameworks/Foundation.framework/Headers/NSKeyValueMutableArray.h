/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableArray.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSKeyValueProxyCaching.h"

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueMutableArray : NSMutableArray <NSKeyValueProxyCaching> {
@private
	NSObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x32080289
+ (id)_proxyShare;	// 0x320802a5
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x320802f9
- (XXStruct_OzJQfB)_proxyLocator;	// 0x320802d5
- (void)_proxyNonGCFinalize;	// 0x32080381
- (void)dealloc;	// 0x320803d1
- (void)setArray:(id)array;	// 0x3208040d
@end

