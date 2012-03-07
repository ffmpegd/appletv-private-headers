/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableArray.h> // Unknown library
#import "CoreData-Structs.h"

@class _PFArray;

__attribute__((visibility("hidden")))
@interface _PFMutableProxyArray : NSMutableArray {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _editCount;	// 8 = 0x8
	unsigned _offset;	// 12 = 0xc
	unsigned _limit;	// 16 = 0x10
	_PFArray *_originalArray;	// 20 = 0x14
	NSMutableArray *_updatedObjectsArray;	// 24 = 0x18
	CFArrayRef _indicesVeneer;	// 28 = 0x1c
}
- (id)initWithPFArray:(id)pfarray;	// 0x31e7f4ed
- (id)initWithPFArray:(id)pfarray inRange:(NSRange)range;	// 0x31e80e19
- (BOOL)_isDeallocating;	// 0x31e80b69
- (void)_rehash;	// 0x31e808a1
- (BOOL)_tryRetain;	// 0x31e80b91
- (void)addObject:(id)object;	// 0x31e805b5
- (id)arrayFromObjectIDs;	// 0x31e7f70d
- (unsigned)count;	// 0x31e80b55
- (void)dealloc;	// 0x31e80349
- (void)finalize;	// 0x31e80ca5
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x31e7f671
- (unsigned)indexOfObject:(id)object;	// 0x31e7f529
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x31e7f561
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x31e7f599
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x31e7f5d1
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x31e804b5
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x31e80799
- (id)newArrayFromObjectIDs;	// 0x31e80615
- (id)objectAtIndex:(unsigned)index;	// 0x31e80825
- (oneway void)release;	// 0x31e80bed
- (void)removeLastObject;	// 0x31e8051d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31e80425
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x31e803bd
- (id)retain;	// 0x31e80c6d
- (unsigned)retainCount;	// 0x31e7ea4d
- (id)subarrayWithRange:(NSRange)range;	// 0x31e80ce9
@end

