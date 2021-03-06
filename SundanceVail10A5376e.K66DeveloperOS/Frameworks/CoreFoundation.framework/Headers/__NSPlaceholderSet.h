/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderSet : NSMutableSet {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x35663e25
+ (id)immutablePlaceholder;	// 0x355b6dbd
+ (void)initialize;	// 0x355d6c45
+ (id)mutablePlaceholder;	// 0x355a8ad9
- (id)init;	// 0x355a8ae9
- (id)initWithCapacity:(unsigned)capacity;	// 0x355a8b45
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x355b7105
- (void)addObject:(id)object;	// 0x356640b5
- (unsigned)count;	// 0x35663e5d
- (void)dealloc;	// 0x35663e49
- (id)member:(id)member;	// 0x35663f25
- (id)objectEnumerator;	// 0x35663fed
- (oneway void)release;	// 0x35663e3d
- (void)removeObject:(id)object;	// 0x3566417d
- (id)retain;	// 0x35663e39
- (unsigned)retainCount;	// 0x35663e41
@end

