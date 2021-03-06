/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSArray, NSNumber, NSString, NSMutableArray;

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
	NSString *_localPeerID;	// 64 = 0x40
	NSDictionary *_storeOptions;	// 68 = 0x44
	NSMutableArray *_filesInsertedInTransaction;	// 72 = 0x48
	NSArray *_filesDeletedInTransaction;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) NSDictionary *deletedObjects;	// G=0x32c13125; @synthesize=_deletedObjects
@property(readonly, assign, nonatomic) NSDictionary *entityNameToIndex;	// G=0x32c130c5; @synthesize=_entityNameToIndex
@property(readonly, assign, nonatomic) NSArray *entityNames;	// G=0x32c13185; @synthesize=_entityNames
@property(readonly, retain) NSArray *filesDeletedInTransaction;	// G=0x32c13075; converted property
@property(readonly, retain) NSMutableArray *filesInsertedInTransaction;	// G=0x32c13065; converted property
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToIndex;	// G=0x32c13095; @synthesize=_globalObjectIDToIndex
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToPermanentManagedObjectID;	// G=0x32c13085; @synthesize=_globalObjectIDToPermanentManagedObjectID
@property(readonly, assign, nonatomic) NSArray *globalObjectIDs;	// G=0x32c13165; @synthesize=_globalObjectIDs
@property(readonly, assign, nonatomic) NSDictionary *insertedObjects;	// G=0x32c13145; @synthesize=_insertedObjects
@property(retain, nonatomic) NSString *localPeerID;	// G=0x32c130f5; S=0x32c133b1; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSDictionary *managedObjectIDToGlobalObjectID;	// G=0x32c130d5; @synthesize=_managedObjectIDToGlobalObjectID
@property(readonly, assign, nonatomic) NSDictionary *peerIDToIndex;	// G=0x32c130b5; @synthesize=_peerIDToIndex
@property(readonly, assign, nonatomic) NSArray *peerIDs;	// G=0x32c13175; @synthesize=_peerIDs
@property(readonly, assign, nonatomic) NSDictionary *peerStates;	// G=0x32c13115; @synthesize=_peerStates
@property(readonly, assign, nonatomic) NSDictionary *primaryKeyToIndex;	// G=0x32c130a5; @synthesize=_primaryKeyToIndex
@property(readonly, assign, nonatomic) NSArray *primaryKeys;	// G=0x32c13155; @synthesize=_primaryKeys
@property(readonly, assign, nonatomic) NSDictionary *storeOptions;	// G=0x32c130e5; @synthesize=_storeOptions
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x32c13105; @synthesize=_transactionNumber
@property(readonly, assign, nonatomic) NSDictionary *updatedObjects;	// G=0x32c13135; @synthesize=_updatedObjects
- (id)init;	// 0x32c13195
- (id)initWithLocalPeerID:(id)localPeerID;	// 0x32c15061
- (id)initWithPersistentStoreOptions:(id)persistentStoreOptions andLocalPeerID:(id)anId;	// 0x32c14f89
- (void)_setFilesDeletedInTransaction:(id)transaction;	// 0x32c14b7d
- (id)addManagedObject:(id)object withTransactionType:(int)transactionType andStoreExportContext:(id)context withError:(id *)error;	// 0x32c14635
- (id)checkIndex:(id)index forValue:(id)value fromArrayOfValues:(id)values;	// 0x32c14aad
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)globalObjectID;	// 0x32c14865
- (id)createKnowledgeVectorFromPeerStates;	// 0x32c140c1
- (id)createUbiquityDictionary:(id)dictionary withStoreExportContext:(id)storeExportContext error:(id *)error;	// 0x32c133d9
- (void)dealloc;	// 0x32c14d55
// declared property getter: - (id)deletedObjects;	// 0x32c13125
- (id)description;	// 0x32c14bc5
// declared property getter: - (id)entityNameToIndex;	// 0x32c130c5
// declared property getter: - (id)entityNames;	// 0x32c13185
// converted property getter: - (id)filesDeletedInTransaction;	// 0x32c13075
// converted property getter: - (id)filesInsertedInTransaction;	// 0x32c13065
- (void)generatePeerStatesWithStoreExportContext:(id)storeExportContext;	// 0x32c1427d
- (id)globalObjectIDForManagedObject:(id)managedObject withStoreExportContext:(id)storeExportContext;	// 0x32c14985
- (id)globalObjectIDFromCompressedObjectID:(id)compressedObjectID;	// 0x32c14769
// declared property getter: - (id)globalObjectIDToIndex;	// 0x32c13095
// declared property getter: - (id)globalObjectIDToPermanentManagedObjectID;	// 0x32c13085
// declared property getter: - (id)globalObjectIDs;	// 0x32c13165
// declared property getter: - (id)insertedObjects;	// 0x32c13145
// declared property getter: - (id)localPeerID;	// 0x32c130f5
// declared property getter: - (id)managedObjectIDToGlobalObjectID;	// 0x32c130d5
// declared property getter: - (id)peerIDToIndex;	// 0x32c130b5
// declared property getter: - (id)peerIDs;	// 0x32c13175
// declared property getter: - (id)peerStates;	// 0x32c13115
// declared property getter: - (id)primaryKeyToIndex;	// 0x32c130a5
// declared property getter: - (id)primaryKeys;	// 0x32c13155
- (void)reserveTransactionNumberWithStoreExportContext:(id)storeExportContext;	// 0x32c14469
- (void)setDeletedObjects:(id)objects;	// 0x32c13b71
- (void)setEntityNames:(id)names globalObjectIDs:(id)ids primaryKeys:(id)keys forStoreWithName:(id)name;	// 0x32c13be9
- (void)setInsertedObjects:(id)objects;	// 0x32c13bc1
// declared property setter: - (void)setLocalPeerID:(id)anId;	// 0x32c133b1
- (void)setTransactionNumber:(id)number peerStates:(id)states andPeerIDs:(id)ids;	// 0x32c13f4d
- (void)setUpdatedObjects:(id)objects;	// 0x32c13b99
// declared property getter: - (id)storeOptions;	// 0x32c130e5
// declared property getter: - (id)transactionNumber;	// 0x32c13105
// declared property getter: - (id)updatedObjects;	// 0x32c13135
@end

