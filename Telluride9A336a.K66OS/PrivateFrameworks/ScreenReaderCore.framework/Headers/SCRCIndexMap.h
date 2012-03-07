/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface SCRCIndexMap : NSObject <NSCopying> {
	CFDictionaryRef _map;	// 4 = 0x4
}
- (id)init;	// 0x32919a89
- (id)initWithObjects:(id *)objects andIndexes:(unsigned *)indexes count:(unsigned long)count;	// 0x329199b9
- (unsigned *)_createIndexesWithSize:(unsigned *)size;	// 0x32919c79
- (id)_initAndDeepCopyIndexMap:(id)map;	// 0x32919b61
- (id)_initWithIndexMap:(id)indexMap;	// 0x3291a005
- (void)addObjectsFromIndexMap:(id)indexMap;	// 0x3291ad6d
- (id)copyWithZone:(NSZone *)zone;	// 0x32919fcd
- (unsigned long)count;	// 0x3291c961
- (void)dealloc;	// 0x32919de1
- (id)deepCopyWithZone:(NSZone *)zone;	// 0x32919b29
- (id)description;	// 0x3291c7d9
- (id)indexes;	// 0x3291c8cd
- (id)objectForIndex:(unsigned long)index;	// 0x32919a75
- (void)removeAllObjects;	// 0x3291a085
- (void)removeObjectForIndex:(unsigned long)index;	// 0x3291b285
- (void)setObject:(id)object forIndex:(unsigned long)index;	// 0x32919b09
@end
