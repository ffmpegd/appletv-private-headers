/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSArrayM : NSMutableArray {
	unsigned _used;	// 4 = 0x4
	unsigned _doHardRetain : 1;	// 8 = 0x8
	unsigned _doWeakAccess : 1;	// 8 = 0x8
	unsigned _size : 30;	// 8 = 0x8
	unsigned _hasObjects : 1;	// 12 = 0xc
	unsigned _hasStrongReferences : 1;	// 12 = 0xc
	unsigned _offset : 30;	// 12 = 0xc
	unsigned long _mutations;	// 16 = 0x10
	id *_list;	// 20 = 0x14
}
+ (id)__new:(const id *)aNew :(unsigned)arg2 :(BOOL)arg3 :(BOOL)arg4 :(BOOL)arg5;	// 0x2d238969
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d2ea8bd
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x2d2ea8b9
- (BOOL)_hasObjects;	// 0x2d23ebed
- (BOOL)_hasStrongReferences;	// 0x2d2ea349
- (void)_mutate;	// 0x2d2399e1
- (void)addObject:(id)object;	// 0x2d238b0d
- (id)copyWithZone:(NSZone *)zone;	// 0x2d23ec01
- (unsigned)count;	// 0x2d2349dd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x2d237d59
- (void)dealloc;	// 0x2d239bc9
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x2d2ea361
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x2d2ea56d
- (void)finalize;	// 0x2d2ea6f5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x2d2390ed
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x2d267881
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x2d238b45
- (id)objectAtIndex:(unsigned)index;	// 0x2d239dd5
- (void)removeLastObject;	// 0x2d270db1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x2d239ec1
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x2d2399f9
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x2d256b4d
@end

