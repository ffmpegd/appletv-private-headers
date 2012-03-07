/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSCFArray : NSMutableArray {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x335005b5
- (BOOL)_isDeallocating;	// 0x33500561
- (BOOL)_tryRetain;	// 0x3350054d
- (void)addObject:(id)object;	// 0x334853cd
- (Class)classForCoder;	// 0x335005b9
- (id)copyWithZone:(NSZone *)zone;	// 0x33480fd1
- (unsigned)count;	// 0x3345d96d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33472f39
- (void)finalize;	// 0x33500571
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x334882c5
- (unsigned)hash;	// 0x33500549
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x33485401
- (BOOL)isEqual:(id)equal;	// 0x3348f141
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33480e75
- (id)objectAtIndex:(unsigned)index;	// 0x3345d971
- (oneway void)release;	// 0x33482c11
- (void)removeLastObject;	// 0x335005f9
- (void)removeObjectAtIndex:(unsigned)index;	// 0x33485fe9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x33480e91
- (id)retain;	// 0x33485319
- (unsigned)retainCount;	// 0x3350056d
@end

