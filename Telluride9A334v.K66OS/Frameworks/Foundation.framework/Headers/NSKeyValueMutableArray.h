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
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x30676289
+ (id)_proxyShare;	// 0x306762a5
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x306762f9
- (XXStruct_OzJQfB)_proxyLocator;	// 0x306762d5
- (void)_proxyNonGCFinalize;	// 0x30676381
- (void)dealloc;	// 0x306763d1
- (void)setArray:(id)array;	// 0x3067640d
@end

