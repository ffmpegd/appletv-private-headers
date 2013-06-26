/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, NSMutableDictionary, NSArray, NSDictionary, NSNumber, PFUbiquityKnowledgeVector;

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
	PFUbiquityKnowledgeVector *_storeKV;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) NSDictionary *deletedObjects;	// G=0x31017e3d; @synthesize=_deletedObjects
@property(readonly, assign, nonatomic) NSDictionary *entityNameToIndex;	// G=0x31017ead; @synthesize=_entityNameToIndex
@property(readonly, assign, nonatomic) NSArray *entityNames;	// G=0x31017ddd; @synthesize=_entityNames
@property(retain, nonatomic) NSString *exportingPeerID;	// G=0x31017e6d; S=0x31017e7d; @synthesize=_exportingPeerID
@property(readonly, retain) NSArray *filesDeletedInTransaction;	// G=0x31016359; converted property
@property(readonly, retain) NSMutableArray *filesInsertedInTransaction;	// G=0x31016349; converted property
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToIndex;	// G=0x31017edd; @synthesize=_globalObjectIDToIndex
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToPermanentManagedObjectID;	// G=0x31017eed; @synthesize=_globalObjectIDToPermanentManagedObjectID
@property(readonly, assign, nonatomic) NSArray *globalObjectIDs;	// G=0x31017dfd; @synthesize=_globalObjectIDs
@property(readonly, assign, nonatomic) NSDictionary *insertedObjects;	// G=0x31017e1d; @synthesize=_insertedObjects
@property(retain, nonatomic) NSString *localPeerID;	// G=0x31017efd; S=0x31017f0d; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSDictionary *managedObjectIDToGlobalObjectID;	// G=0x31017e9d; @synthesize=_managedObjectIDToGlobalObjectID
@property(readonly, assign, nonatomic) NSDictionary *peerIDToIndex;	// G=0x31017ebd; @synthesize=_peerIDToIndex
@property(readonly, assign, nonatomic) NSArray *peerIDs;	// G=0x31017ded; @synthesize=_peerIDs
@property(readonly, assign, nonatomic) NSDictionary *peerStates;	// G=0x31017e4d; @synthesize=_peerStates
@property(readonly, assign, nonatomic) NSDictionary *primaryKeyToIndex;	// G=0x31017ecd; @synthesize=_primaryKeyToIndex
@property(readonly, assign, nonatomic) NSArray *primaryKeys;	// G=0x31017e0d; @synthesize=_primaryKeys
@property(retain, nonatomic) PFUbiquityKnowledgeVector *storeKV;	// G=0x31017f1d; S=0x31017f2d; @synthesize=_storeKV
@property(readonly, assign, nonatomic) NSDictionary *storeOptions;	// G=0x31017e8d; @synthesize=_storeOptions
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x31017e5d; @synthesize=_transactionNumber
@property(readonly, assign, nonatomic) NSDictionary *updatedObjects;	// G=0x31017e2d; @synthesize=_updatedObjects
- (id)init;	// 0x31015c69
- (id)initWithExportingPeerID:(id)exportingPeerID;	// 0x31015e6d
- (id)initWithPersistentStoreOptions:(id)persistentStoreOptions andExportingPeerID:(id)anId;	// 0x31015eb1
- (void)_setFilesDeletedInTransaction:(id)transaction;	// 0x31016369
- (id)addManagedObject:(id)object withTransactionType:(int)transactionType andStoreExportContext:(id)context withError:(id *)error;	// 0x31016791
- (id)checkIndex:(id)index forValue:(id)value fromArrayOfValues:(id)values;	// 0x310163ad
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)globalObjectID;	// 0x31016589
- (id)createKnowledgeVectorFromPeerStates;	// 0x31016aa5
- (id)createUbiquityDictionary:(id)dictionary withStoreExportContext:(id)storeExportContext error:(id *)error;	// 0x31017375
- (void)dealloc;	// 0x31015f79
// declared property getter: - (id)deletedObjects;	// 0x31017e3d
- (id)description;	// 0x310161b9
// declared property getter: - (id)entityNameToIndex;	// 0x31017ead
// declared property getter: - (id)entityNames;	// 0x31017ddd
// declared property getter: - (id)exportingPeerID;	// 0x31017e6d
// converted property getter: - (id)filesDeletedInTransaction;	// 0x31016359
// converted property getter: - (id)filesInsertedInTransaction;	// 0x31016349
- (void)generatePeerStatesWithStoreExportContext:(id)storeExportContext;	// 0x3101693d
- (id)globalObjectIDForManagedObject:(id)managedObject withStoreExportContext:(id)storeExportContext;	// 0x3101647d
- (id)globalObjectIDFromCompressedObjectID:(id)compressedObjectID;	// 0x31016699
// declared property getter: - (id)globalObjectIDToIndex;	// 0x31017edd
// declared property getter: - (id)globalObjectIDToPermanentManagedObjectID;	// 0x31017eed
// declared property getter: - (id)globalObjectIDs;	// 0x31017dfd
// declared property getter: - (id)insertedObjects;	// 0x31017e1d
// declared property getter: - (id)localPeerID;	// 0x31017efd
// declared property getter: - (id)managedObjectIDToGlobalObjectID;	// 0x31017e9d
// declared property getter: - (id)peerIDToIndex;	// 0x31017ebd
// declared property getter: - (id)peerIDs;	// 0x31017ded
// declared property getter: - (id)peerStates;	// 0x31017e4d
// declared property getter: - (id)primaryKeyToIndex;	// 0x31017ecd
// declared property getter: - (id)primaryKeys;	// 0x31017e0d
- (void)reserveTransactionNumberWithStoreExportContext:(id)storeExportContext;	// 0x310168b5
- (void)setDeletedObjects:(id)objects;	// 0x31017331
- (void)setEntityNames:(id)names globalObjectIDs:(id)ids primaryKeys:(id)keys forStoreName:(id)storeName withRootLocation:(id)rootLocation;	// 0x31016e91
// declared property setter: - (void)setExportingPeerID:(id)anId;	// 0x31017e7d
- (void)setInsertedObjects:(id)objects;	// 0x310172a9
// declared property setter: - (void)setLocalPeerID:(id)anId;	// 0x31017f0d
// declared property setter: - (void)setStoreKV:(id)kv;	// 0x31017f2d
- (void)setTransactionNumber:(id)number peerStates:(id)states andPeerIDs:(id)ids;	// 0x31016d19
- (void)setUpdatedObjects:(id)objects;	// 0x310172ed
// declared property getter: - (id)storeKV;	// 0x31017f1d
// declared property getter: - (id)storeOptions;	// 0x31017e8d
// declared property getter: - (id)transactionNumber;	// 0x31017e5d
- (id)transactionNumberFromPeerStates:(id)peerStates;	// 0x31016c5d
// declared property getter: - (id)updatedObjects;	// 0x31017e2d
@end
