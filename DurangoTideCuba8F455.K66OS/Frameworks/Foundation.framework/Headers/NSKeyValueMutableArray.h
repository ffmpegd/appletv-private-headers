/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableArray.h> // Unknown library
#import "NSKeyValueProxyCaching.h"

@class NSString, NSObject;

__attribute__((visibility("hidden")))
@interface NSKeyValueMutableArray : NSMutableArray <NSKeyValueProxyCaching> {
@private
	NSObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31061dc1
+ (id)_proxyShare;	// 0x31061e41
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31061d3d
- (XXStruct_OzJQfB)_proxyLocator;	// 0x31060f19
- (void)_proxyNonGCFinalize;	// 0x31061ced
- (void)dealloc;	// 0x31061dd9
- (void)setArray:(id)array;	// 0x31061cc1
@end

