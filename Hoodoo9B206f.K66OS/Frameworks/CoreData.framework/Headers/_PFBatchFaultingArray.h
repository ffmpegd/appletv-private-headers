/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSArray.h> // Unknown library

@class NSManagedObjectContext, NSFetchRequest, _PFArray;

__attribute__((visibility("hidden")))
@interface _PFBatchFaultingArray : NSArray {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	_PFArray *_array;	// 12 = 0xc
	unsigned *_entryFlags;	// 16 = 0x10
	NSManagedObjectContext *_moc;	// 20 = 0x14
	NSFetchRequest *_request;	// 24 = 0x18
	unsigned _batchSize;	// 28 = 0x1c
	unsigned *_LRUBatches;	// 32 = 0x20
	PFBatchFaultingArrayFlags _flags;	// 36 = 0x24
}
@property(readonly, assign) unsigned count;	// G=0x36267c4d; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x36267c35
+ (id)alloc;	// 0x3626ae41
+ (id)allocWithZone:(NSZone *)zone;	// 0x3626ae39
+ (void)initialize;	// 0x362686e1
- (id)initWithPFArray:(id)pfarray andRequest:(id)request andContext:(id)context;	// 0x3626ac3d
- (BOOL)_isDeallocating;	// 0x3626a9fd
- (id)_newSubArrayInRange:(NSRange)range asMutable:(BOOL)aMutable;	// 0x3626a4d1
- (BOOL)_tryRetain;	// 0x3626ab05
- (void)_turnAllBatchesIntoFaults;	// 0x362681e9
- (id)arrayFromObjectIDs;	// 0x362686b9
- (id)copyWithZone:(NSZone *)zone;	// 0x36268035
// converted property getter: - (unsigned)count;	// 0x36267c4d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3626af75
- (void)dealloc;	// 0x3626b0fd
- (id)description;	// 0x3626aeed
- (void)getObjects:(id *)objects;	// 0x36268269
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3626b02d
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x3626849d
- (unsigned)indexOfObject:(id)object;	// 0x36268299
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x362682c9
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x362682f9
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x36268329
- (BOOL)isEqualToArray:(id)array;	// 0x3626b181
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x362685e1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36268045
- (id)newArrayFromObjectIDs;	// 0x3626a759
- (id)objectAtIndex:(unsigned)index;	// 0x3626ae49
- (oneway void)release;	// 0x3626aa85
- (id)retain;	// 0x3626a9c5
- (unsigned)retainCount;	// 0x36267c39
- (id)subarrayWithRange:(NSRange)range;	// 0x3626865d
@end
