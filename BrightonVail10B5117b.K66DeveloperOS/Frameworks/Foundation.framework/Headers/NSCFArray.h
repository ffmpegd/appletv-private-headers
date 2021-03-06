/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableArray.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSCFArray : NSMutableArray {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x319a71f5
- (BOOL)_isDeallocating;	// 0x319a71a9
- (BOOL)_tryRetain;	// 0x319a7199
- (void)addObject:(id)object;	// 0x319a7351
- (Class)classForCoder;	// 0x319a71f9
- (BOOL)containsObject:(id)object inRange:(NSRange)range;	// 0x319a769d
- (id)copyWithZone:(NSZone *)zone;	// 0x319a7231
- (unsigned)count;	// 0x319a728d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x319a7341
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x319a77ad
- (void)finalize;	// 0x319a71b5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x319a76f5
- (unsigned)hash;	// 0x319a717d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x319a7385
- (BOOL)isEqual:(id)equal;	// 0x319a7131
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x319a726d
- (id)objectAtIndex:(unsigned)index;	// 0x319a7291
- (oneway void)release;	// 0x319a7191
- (void)removeAllObjects;	// 0x319a7751
- (void)removeLastObject;	// 0x319a7529
- (void)removeObjectAtIndex:(unsigned)index;	// 0x319a7561
- (void)removeObjectsInRange:(NSRange)range;	// 0x319a75ed
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x319a7459
- (void)replaceObjectsInRange:(NSRange)range withObjects:(id *)objects count:(unsigned)count;	// 0x319a7901
- (id)retain;	// 0x319a7181
- (unsigned)retainCount;	// 0x319a7195
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x319a7841
@end

