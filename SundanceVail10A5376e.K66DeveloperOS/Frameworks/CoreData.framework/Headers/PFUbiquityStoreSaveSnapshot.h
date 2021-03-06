/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, NSMutableDictionary, NSArray, NSDictionary, NSNumber;

@interface PFUbiquityStoreSaveSnapshot : NSObject {
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
	NSString *_exportingPeerID;	// 64 = 0x40
	NSString *_localPeerID;	// 68 = 0x44
	NSDictionary *_storeOptions;	// 72 = 0x48
	NSMutableArray *_filesInsertedInTransaction;	// 76 = 0x4c
	NSArray *_filesDeletedInTransaction;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSDictionary *deletedObjects;	// G=0x35d06975; @synthesize=_deletedObjects
@property(readonly, assign, nonatomic) NSDictionary *entityNameToIndex;	// G=0x35d069e5; @synthesize=_entityNameToIndex
@property(readonly, assign, nonatomic) NSArray *entityNames;	// G=0x35d06915; @synthesize=_entityNames
@property(retain, nonatomic) NSString *exportingPeerID;	// G=0x35d069a5; S=0x35d069b5; @synthesize=_exportingPeerID
@property(readonly, retain) NSArray *filesDeletedInTransaction;	// G=0x35d04cb1; converted property
@property(readonly, retain) NSMutableArray *filesInsertedInTransaction;	// G=0x35d04ca1; converted property
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToIndex;	// G=0x35d06a15; @synthesize=_globalObjectIDToIndex
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToPermanentManagedObjectID;	// G=0x35d06a25; @synthesize=_globalObjectIDToPermanentManagedObjectID
@property(readonly, assign, nonatomic) NSArray *globalObjectIDs;	// G=0x35d06935; @synthesize=_globalObjectIDs
@property(readonly, assign, nonatomic) NSDictionary *insertedObjects;	// G=0x35d06955; @synthesize=_insertedObjects
@property(retain, nonatomic) NSString *localPeerID;	// G=0x35d06a35; S=0x35d06a45; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSDictionary *managedObjectIDToGlobalObjectID;	// G=0x35d069d5; @synthesize=_managedObjectIDToGlobalObjectID
@property(readonly, assign, nonatomic) NSDictionary *peerIDToIndex;	// G=0x35d069f5; @synthesize=_peerIDToIndex
@property(readonly, assign, nonatomic) NSArray *peerIDs;	// G=0x35d06925; @synthesize=_peerIDs
@property(readonly, assign, nonatomic) NSDictionary *peerStates;	// G=0x35d06985; @synthesize=_peerStates
@property(readonly, assign, nonatomic) NSDictionary *primaryKeyToIndex;	// G=0x35d06a05; @synthesize=_primaryKeyToIndex
@property(readonly, assign, nonatomic) NSArray *primaryKeys;	// G=0x35d06945; @synthesize=_primaryKeys
@property(readonly, assign, nonatomic) NSDictionary *storeOptions;	// G=0x35d069c5; @synthesize=_storeOptions
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x35d06995; @synthesize=_transactionNumber
@property(readonly, assign, nonatomic) NSDictionary *updatedObjects;	// G=0x35d06965; @synthesize=_updatedObjects
- (id)init;	// 0x35d045d9
- (id)initWithExportingPeerID:(id)exportingPeerID;	// 0x35d047dd
- (id)initWithPersistentStoreOptions:(id)persistentStoreOptions andExportingPeerID:(id)anId;	// 0x35d04821
- (void)_setFilesDeletedInTransaction:(id)transaction;	// 0x35d04cc1
- (id)addManagedObject:(id)object withTransactionType:(int)transactionType andStoreExportContext:(id)context withError:(id *)error;	// 0x35d050e9
- (id)checkIndex:(id)index forValue:(id)value fromArrayOfValues:(id)values;	// 0x35d04d05
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)globalObjectID;	// 0x35d04ee1
- (id)createKnowledgeVectorFromPeerStates;	// 0x35d055dd
- (id)createUbiquityDictionary:(id)dictionary withStoreExportContext:(id)storeExportContext error:(id *)error;	// 0x35d05ead
- (void)dealloc;	// 0x35d048e9
// declared property getter: - (id)deletedObjects;	// 0x35d06975
- (id)description;	// 0x35d04b11
// declared property getter: - (id)entityNameToIndex;	// 0x35d069e5
// declared property getter: - (id)entityNames;	// 0x35d06915
// declared property getter: - (id)exportingPeerID;	// 0x35d069a5
// converted property getter: - (id)filesDeletedInTransaction;	// 0x35d04cb1
// converted property getter: - (id)filesInsertedInTransaction;	// 0x35d04ca1
- (void)generatePeerStatesWithStoreExportContext:(id)storeExportContext;	// 0x35d053c1
- (id)globalObjectIDForManagedObject:(id)managedObject withStoreExportContext:(id)storeExportContext;	// 0x35d04dd5
- (id)globalObjectIDFromCompressedObjectID:(id)compressedObjectID;	// 0x35d04ff1
// declared property getter: - (id)globalObjectIDToIndex;	// 0x35d06a15
// declared property getter: - (id)globalObjectIDToPermanentManagedObjectID;	// 0x35d06a25
// declared property getter: - (id)globalObjectIDs;	// 0x35d06935
// declared property getter: - (id)insertedObjects;	// 0x35d06955
// declared property getter: - (id)localPeerID;	// 0x35d06a35
// declared property getter: - (id)managedObjectIDToGlobalObjectID;	// 0x35d069d5
// declared property getter: - (id)peerIDToIndex;	// 0x35d069f5
// declared property getter: - (id)peerIDs;	// 0x35d06925
// declared property getter: - (id)peerStates;	// 0x35d06985
// declared property getter: - (id)primaryKeyToIndex;	// 0x35d06a05
// declared property getter: - (id)primaryKeys;	// 0x35d06945
- (void)reserveTransactionNumberWithStoreExportContext:(id)storeExportContext;	// 0x35d0520d
- (void)setDeletedObjects:(id)objects;	// 0x35d05e69
- (void)setEntityNames:(id)names globalObjectIDs:(id)ids primaryKeys:(id)keys forStoreName:(id)storeName withRootLocation:(id)rootLocation;	// 0x35d059c9
// declared property setter: - (void)setExportingPeerID:(id)anId;	// 0x35d069b5
- (void)setInsertedObjects:(id)objects;	// 0x35d05de1
// declared property setter: - (void)setLocalPeerID:(id)anId;	// 0x35d06a45
- (void)setTransactionNumber:(id)number peerStates:(id)states andPeerIDs:(id)ids;	// 0x35d05851
- (void)setUpdatedObjects:(id)objects;	// 0x35d05e25
// declared property getter: - (id)storeOptions;	// 0x35d069c5
// declared property getter: - (id)transactionNumber;	// 0x35d06995
- (id)transactionNumberFromPeerStates:(id)peerStates;	// 0x35d05795
// declared property getter: - (id)updatedObjects;	// 0x35d06965
@end

