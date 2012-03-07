/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableOrderedSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderOrderedSet : NSMutableOrderedSet {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3532c17d
+ (id)immutablePlaceholder;	// 0x352a291d
+ (void)initialize;	// 0x352a2819
+ (id)mutablePlaceholder;	// 0x352a3341
- (id)init;	// 0x352a292d
- (id)initWithCapacity:(unsigned)capacity;	// 0x352a3d59
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x352a2981
- (unsigned)count;	// 0x3532c1a5
- (void)dealloc;	// 0x3532c1a1
- (unsigned)indexOfObject:(id)object;	// 0x3532c269
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3532c3f1
- (id)objectAtIndex:(unsigned)index;	// 0x3532c32d
- (oneway void)release;	// 0x3532c195
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3532c4b5
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3532c579
- (id)retain;	// 0x3532c191
- (unsigned)retainCount;	// 0x3532c199
@end

