/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSArray.h> // Unknown library
#import "NSKeyValueProxyCaching.h"

@class NSObject, NSKeyValueNonmutatingArrayMethodSet, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching> {
@private
	NSObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSKeyValueNonmutatingArrayMethodSet *_methods;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31a607c5
+ (id)_proxyShare;	// 0x31a607d5
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31a60805
- (XXStruct_OzJQfB)_proxyLocator;	// 0x31a608b1
- (void)_proxyNonGCFinalize;	// 0x31a608d5
- (unsigned)count;	// 0x31a60979
- (void)dealloc;	// 0x31a60941
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31a609a9
- (id)objectAtIndex:(unsigned)index;	// 0x31a60a21
- (id)objectsAtIndexes:(id)indexes;	// 0x31a60ae5
@end
