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
- (id)initWithPFArray:(id)pfarray;	// 0x33f774ed
- (id)initWithPFArray:(id)pfarray inRange:(NSRange)range;	// 0x33f78e19
- (BOOL)_isDeallocating;	// 0x33f78b69
- (void)_rehash;	// 0x33f788a1
- (BOOL)_tryRetain;	// 0x33f78b91
- (void)addObject:(id)object;	// 0x33f785b5
- (id)arrayFromObjectIDs;	// 0x33f7770d
- (unsigned)count;	// 0x33f78b55
- (void)dealloc;	// 0x33f78349
- (void)finalize;	// 0x33f78ca5
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x33f77671
- (unsigned)indexOfObject:(id)object;	// 0x33f77529
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x33f77561
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x33f77599
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x33f775d1
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x33f784b5
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x33f78799
- (id)newArrayFromObjectIDs;	// 0x33f78615
- (id)objectAtIndex:(unsigned)index;	// 0x33f78825
- (oneway void)release;	// 0x33f78bed
- (void)removeLastObject;	// 0x33f7851d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x33f78425
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x33f783bd
- (id)retain;	// 0x33f78c6d
- (unsigned)retainCount;	// 0x33f76a4d
- (id)subarrayWithRange:(NSRange)range;	// 0x33f78ce9
@end

