/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableArray.h> // Unknown library

@class _PFArray;

@interface _PFMutableProxyArray : NSMutableArray {
	int _cd_rc;	// 4 = 0x4
	unsigned _editCount;	// 8 = 0x8
	unsigned _offset;	// 12 = 0xc
	unsigned _limit;	// 16 = 0x10
	_PFArray *_originalArray;	// 20 = 0x14
	NSMutableArray *_updatedObjectsArray;	// 24 = 0x18
	CFArrayRef _indicesVeneer;	// 28 = 0x1c
}
- (id)initWithPFArray:(id)pfarray;	// 0x365b0e01
- (id)initWithPFArray:(id)pfarray inRange:(NSRange)range;	// 0x365b0d09
- (BOOL)_isDeallocating;	// 0x365b112d
- (void)_rehash;	// 0x365b116d
- (BOOL)_tryRetain;	// 0x365b10dd
- (void)addObject:(id)object;	// 0x365b1721
- (id)arrayFromObjectIDs;	// 0x365b160d
- (unsigned)count;	// 0x365b1159
- (void)dealloc;	// 0x365b0f5d
- (void)finalize;	// 0x365b0fd5
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x365b1585
- (unsigned)indexOfObject:(id)object;	// 0x365b1451
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x365b1489
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x365b14c1
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x365b14f9
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x365b1829
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x365b13c5
- (id)newArrayFromObjectIDs;	// 0x365b1635
- (id)objectAtIndex:(unsigned)index;	// 0x365b1351
- (oneway void)release;	// 0x365b1051
- (void)removeLastObject;	// 0x365b1781
- (void)removeObjectAtIndex:(unsigned)index;	// 0x365b188d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x365b1921
- (id)retain;	// 0x365b1019
- (unsigned)retainCount;	// 0x365b10c9
- (id)subarrayWithRange:(NSRange)range;	// 0x365b0e39
@end
