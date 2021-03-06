/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreSaveSnapshot : NSObject {
@private
	NSMutableArray *_entityNames;	// 4 = 0x4
	NSMutableArray *_peerIDs;	// 8 = 0x8
	NSMutableArray *_globalObjectIDs;	// 12 = 0xc
	NSMutableArray *_primaryKeys;	// 16 = 0x10
	NSMutableDictionary *_managedObjectIDToGlobalObjectID;	// 20 = 0x14
	NSMutableDictionary *_globalObjectIDToPermanentManagedObjectID;	// 24 = 0x18
	NSMutableDictionary *_entityNameToIndex;	// 28 = 0x1c
	NSMutableDictionary *_peerIDToIndex;	// 32 = 0x20
	NSMutableDictionary *_primaryKeyToIndex;	// 36 = 0x24
	NSMutableDictionary *_globalObjectIDToIndex;	// 40 = 0x28
	NSMutableDictionary *_insertedObjects;	// 44 = 0x2c
	NSMutableDictionary *_updatedObjects;	// 48 = 0x30
	NSMutableDictionary *_deletedObjects;	// 52 = 0x34
	NSMutableDictionary *_peerStates;	// 56 = 0x38
	NSNumber *_transactionNumber;	// 60 = 0x3c
	NSDictionary *_storeOptions;	// 64 = 0x40
	NSMutableArray *_filesInsertedInTransaction;	// 68 = 0x44
	NSArray *_filesDeletedInTransaction;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) NSDictionary *deletedObjects;	// G=0x3406d73d; @synthesize=_deletedObjects
@property(readonly, assign, nonatomic) NSDictionary *entityNameToIndex;	// G=0x3406d6ed; @synthesize=_entityNameToIndex
@property(readonly, assign, nonatomic) NSArray *entityNames;	// G=0x3406d79d; @synthesize=_entityNames
@property(readonly, retain) NSArray *filesDeletedInTransaction;	// G=0x3406d69d; converted property
@property(readonly, retain) NSMutableArray *filesInsertedInTransaction;	// G=0x3406d68d; converted property
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToIndex;	// G=0x3406d6bd; @synthesize=_globalObjectIDToIndex
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToPermanentManagedObjectID;	// G=0x3406d6ad; @synthesize=_globalObjectIDToPermanentManagedObjectID
@property(readonly, assign, nonatomic) NSArray *globalObjectIDs;	// G=0x3406d77d; @synthesize=_globalObjectIDs
@property(readonly, assign, nonatomic) NSDictionary *insertedObjects;	// G=0x3406d75d; @synthesize=_insertedObjects
@property(readonly, assign, nonatomic) NSDictionary *managedObjectIDToGlobalObjectID;	// G=0x3406d6fd; @synthesize=_managedObjectIDToGlobalObjectID
@property(readonly, assign, nonatomic) NSDictionary *peerIDToIndex;	// G=0x3406d6dd; @synthesize=_peerIDToIndex
@property(readonly, assign, nonatomic) NSArray *peerIDs;	// G=0x3406d78d; @synthesize=_peerIDs
@property(readonly, assign, nonatomic) NSDictionary *peerStates;	// G=0x3406d72d; @synthesize=_peerStates
@property(readonly, assign, nonatomic) NSDictionary *primaryKeyToIndex;	// G=0x3406d6cd; @synthesize=_primaryKeyToIndex
@property(readonly, assign, nonatomic) NSArray *primaryKeys;	// G=0x3406d76d; @synthesize=_primaryKeys
@property(readonly, assign, nonatomic) NSDictionary *storeOptions;	// G=0x3406d70d; @synthesize=_storeOptions
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x3406d71d; @synthesize=_transactionNumber
@property(readonly, assign, nonatomic) NSDictionary *updatedObjects;	// G=0x3406d74d; @synthesize=_updatedObjects
- (id)init;	// 0x3406d7ad
- (id)initWithPersistentStoreOptions:(id)persistentStoreOptions;	// 0x3406f341
- (void)_setFilesDeletedInTransaction:(id)transaction;	// 0x3406ef51
- (id)addManagedObject:(id)object withTransactionType:(int)transactionType andStoreExportContext:(id)context withError:(id *)error;	// 0x3406ea09
- (id)checkIndex:(id)index forValue:(id)value fromArrayOfValues:(id)values;	// 0x3406ee81
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)globalObjectID;	// 0x3406ec39
- (id)createUbiquityDictionary:(id)dictionary withStoreExportContext:(id)storeExportContext error:(id *)error;	// 0x3406d9bd
- (void)dealloc;	// 0x3406f129
// declared property getter: - (id)deletedObjects;	// 0x3406d73d
- (id)description;	// 0x3406ef99
// declared property getter: - (id)entityNameToIndex;	// 0x3406d6ed
// declared property getter: - (id)entityNames;	// 0x3406d79d
// converted property getter: - (id)filesDeletedInTransaction;	// 0x3406d69d
// converted property getter: - (id)filesInsertedInTransaction;	// 0x3406d68d
- (void)generatePeerStatesWithStoreExportContext:(id)storeExportContext;	// 0x3406e641
- (id)globalObjectIDForManagedObject:(id)managedObject withStoreExportContext:(id)storeExportContext;	// 0x3406ed59
- (id)globalObjectIDFromCompressedObjectID:(id)compressedObjectID;	// 0x3406eb3d
// declared property getter: - (id)globalObjectIDToIndex;	// 0x3406d6bd
// declared property getter: - (id)globalObjectIDToPermanentManagedObjectID;	// 0x3406d6ad
// declared property getter: - (id)globalObjectIDs;	// 0x3406d77d
// declared property getter: - (id)insertedObjects;	// 0x3406d75d
// declared property getter: - (id)managedObjectIDToGlobalObjectID;	// 0x3406d6fd
// declared property getter: - (id)peerIDToIndex;	// 0x3406d6dd
// declared property getter: - (id)peerIDs;	// 0x3406d78d
// declared property getter: - (id)peerStates;	// 0x3406d72d
// declared property getter: - (id)primaryKeyToIndex;	// 0x3406d6cd
// declared property getter: - (id)primaryKeys;	// 0x3406d76d
- (void)reserveTransactionNumberWithStoreExportContext:(id)storeExportContext;	// 0x3406e83d
- (void)setDeletedObjects:(id)objects;	// 0x3406e0f1
- (void)setEntityNames:(id)names globalObjectIDs:(id)ids primaryKeys:(id)keys forStoreWithName:(id)name;	// 0x3406e169
- (void)setInsertedObjects:(id)objects;	// 0x3406e141
- (void)setTransactionNumber:(id)number peerStates:(id)states andPeerIDs:(id)ids;	// 0x3406e4cd
- (void)setUpdatedObjects:(id)objects;	// 0x3406e119
// declared property getter: - (id)storeOptions;	// 0x3406d70d
// declared property getter: - (id)transactionNumber;	// 0x3406d71d
// declared property getter: - (id)updatedObjects;	// 0x3406d74d
@end

