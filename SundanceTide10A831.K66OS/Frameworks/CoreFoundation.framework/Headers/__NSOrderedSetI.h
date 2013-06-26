/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSOrderedSet.h"


__attribute__((visibility("hidden")))
@interface __NSOrderedSetI : NSOrderedSet {
	unsigned _used : 26;	// 4 = 0x4
	unsigned _szidx : 6;	// 7 = 0x7
}
+ (id)__new:(const id *)aNew :(unsigned)arg2 :(BOOL)arg3;	// 0x345967cd
+ (id)allocWithZone:(NSZone *)zone;	// 0x34620b39
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x34620b35
- (id)copyWithZone:(NSZone *)zone;	// 0x34620ab9
- (unsigned)count;	// 0x345a40b5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x345a3fe9
- (void)dealloc;	// 0x345a417d
- (void)finalize;	// 0x34620ac9
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x345a8009
- (unsigned)indexOfObject:(id)object;	// 0x346209a5
- (id)objectAtIndex:(unsigned)index;	// 0x345a40c9
@end
