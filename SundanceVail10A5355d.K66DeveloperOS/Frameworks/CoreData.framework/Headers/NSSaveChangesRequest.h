/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStoreRequest.h"

@class NSSet;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {
	NSSet *_insertedObjects;	// 8 = 0x8
	NSSet *_updatedObjects;	// 12 = 0xc
	NSSet *_deletedObjects;	// 16 = 0x10
	NSSet *_optimisticallyLockedObjects;	// 20 = 0x14
	void *_reserved1;	// 24 = 0x18
	void *_reserved2;	// 28 = 0x1c
}
@property(retain) NSSet *deletedObjects;	// G=0x33517601; S=0x33517625; converted property
@property(readonly, retain) NSSet *insertedObjects;	// G=0x335175e1; converted property
@property(readonly, retain) NSSet *updatedObjects;	// G=0x335175f1; converted property
+ (void)initialize;	// 0x33517409
- (id)init;	// 0x33517579
- (id)initWithInsertedObjects:(id)insertedObjects updatedObjects:(id)objects deletedObjects:(id)objects3 lockedObjects:(id)objects4;	// 0x33517425
- (void)dealloc;	// 0x335174d1
// converted property getter: - (id)deletedObjects;	// 0x33517601
- (BOOL)hasChanges;	// 0x33517681
// converted property getter: - (id)insertedObjects;	// 0x335175e1
- (id)lockedObjects;	// 0x33517611
- (unsigned)requestType;	// 0x33517621
// converted property setter: - (void)setDeletedObjects:(id)objects;	// 0x33517625
// converted property getter: - (id)updatedObjects;	// 0x335175f1
@end
