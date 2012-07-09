/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableOrderedSet.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface __NSOrderedSetM : NSMutableOrderedSet {
@private
	unsigned _used;	// 4 = 0x4
@protected
	CFBasicHashRef _set;	// 8 = 0x8
	NSMutableArray *_array;	// 12 = 0xc
}
+ (id)__new:(const id *)aNew :(unsigned)arg2;	// 0x369c2275
+ (id)allocWithZone:(NSZone *)zone;	// 0x36a57635
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x36a57631
- (void)_mutate;	// 0x369c2d95
- (unsigned)count;	// 0x369c2365
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x369c2f39
- (void)dealloc;	// 0x369d1d95
- (void)finalize;	// 0x36a575ed
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x369c297d
- (unsigned)indexOfObject:(id)object;	// 0x369d1b69
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x369c2db5
- (id)objectAtIndex:(unsigned)index;	// 0x369c2395
- (void)removeObjectAtIndex:(unsigned)index;	// 0x369d2085
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x36a571ed
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x36a573c9
@end
