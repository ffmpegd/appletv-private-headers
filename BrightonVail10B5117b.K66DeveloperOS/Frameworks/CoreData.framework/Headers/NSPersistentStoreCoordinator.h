/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSLocking.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSManagedObjectModel;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {
	persistentStoreCoordinatorFlags _flags;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
	NSMutableArray *_extendedStoreURLs;	// 12 = 0xc
	id _externalRecordsHelper;	// 16 = 0x10
	NSManagedObjectModel *_managedObjectModel;	// 20 = 0x14
	id _coreLock;	// 24 = 0x18
	NSMutableArray *_persistentStores;	// 28 = 0x1c
}
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x30ee6fed; converted property
@property(readonly, retain) NSMutableArray *persistentStores;	// G=0x30f77f55; converted property
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;	// 0x30f7629d
+ (Class)_classForPersistentStoreAtURL:(id)url;	// 0x30f765fd
+ (BOOL)_melissaIsDebugging;	// 0x30f77fb5
+ (void)_registerCoreDataStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x30edf811
+ (void)_registerDefaultStoreClassesAndTypes;	// 0x30edf405
+ (Class)_storeClassForStoreType:(id)storeType;	// 0x30ee7eb9
+ (id)_storeTypeForStore:(id)store;	// 0x30f7bb29
+ (BOOL)accessInstanceVariablesDirectly;	// 0x30f76299
+ (void)initialize;	// 0x30edef1d
+ (id)metadataForPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x30f76b59
+ (void)registerStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x30f762a1
+ (id)registeredStoreTypes;	// 0x30f764dd
+ (BOOL)setMetadata:(id)metadata forPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x30f766fd
- (id)initWithManagedObjectModel:(id)managedObjectModel;	// 0x30ee51c5
- (id)URLForPersistentStore:(id)persistentStore;	// 0x30f784dd
- (void)_addPersistentStore:(id)store identifier:(id)identifier;	// 0x30ef53b5
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore;	// 0x30f7c899
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore forConfiguration:(id)configuration;	// 0x30f7c8fd
- (void)_assignObjects:(id)objects toStore:(id)store;	// 0x30f795f5
- (BOOL)_canSaveGraphRootedAtObject:(id)object intoStore:(id)store withPreviouslyChecked:(CFSetRef)previouslyChecked withAcceptableEntities:(CFSetRef)acceptableEntities;	// 0x30f79d61
- (BOOL)_checkForPostLionWriter:(id)postLionWriter;	// 0x30f7d0fd
- (BOOL)_checkForSkewedEntityHashes:(id)skewedEntityHashes metadata:(id)metadata;	// 0x30f77fb9
- (id)_checkRequestForStore:(id)store withContext:(id)context originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x30f7a89d
- (id)_conflictsWithRowCacheForObject:(id)object withContext:(id)context andStore:(id)store;	// 0x30f7a799
- (void)_copyMetadataFromStore:(id)store toStore:(id)store2 migrationManager:(id)manager;	// 0x30f7cf39
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type error:(id *)error;	// 0x30f7dcc9
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type options:(id)options error:(id *)error;	// 0x30f7d8a5
- (void)_doPreSaveAssignmentsForObjects:(id)objects;	// 0x30f7a10d
- (id)_fetchAllInstancesFromStore:(id)store intoContext:(id)context underlyingException:(id *)exception;	// 0x30f7c09d
- (void)_informAffectedStoresOfInterestByChildContextInObjectsWithObjectIDs:(id)objectIDs withSelector:(SEL)selector;	// 0x30f7be99
- (BOOL)_isRegisteredWithUbiquity;	// 0x30f7d169
- (id)_newConflictRecordForObject:(id)object andOriginalRow:(id)row withContext:(id)context;	// 0x30f7a6ed
- (id)_newObjectGraphStyleRecordForRow:(id)row andObject:(id)object withContext:(id)context;	// 0x30f7a441
- (id)_persistentStoreForIdentifier:(id)identifier;	// 0x30ef55c5
- (void)_postStoresChangedNotificationsForStores:(id)stores changeKey:(id)key options:(id)options;	// 0x30ef58ed
- (id)_realStoreTypeForStoreWithType:(id)type URL:(id)url error:(id *)error;	// 0x30f7c9e9
- (BOOL)_removePersistentStore:(id)store;	// 0x30f7810d
- (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 storeType:(id)type error:(id *)error;	// 0x30f7d17d
- (id)_retainedAllMigratedObjectsInStore:(id)store toStore:(id)store2;	// 0x30f7cab1
- (id)_saveRequestForStore:(id)store withContext:(id)context originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x30f7b1f9
- (void)_setIsRegisteredWithUbiquity:(BOOL)ubiquity;	// 0x30f7d149
- (id)addPersistentStoreWithType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x30ee5679
- (void)dealloc;	// 0x30f77825
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x30ef7fb1
- (void)finalize;	// 0x30f77479
- (id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x30f79531
- (void)lock;	// 0x30ee7e55
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x30f795cd
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x30f795e1
- (id)managedObjectIDForURIRepresentation:(id)urirepresentation;	// 0x30f790f9
- (id)managedObjectIDFromUTF8String:(const char *)utf8String length:(unsigned)length;	// 0x30f791a1
// converted property getter: - (id)managedObjectModel;	// 0x30ee6fed
- (id)metadataForPersistentStore:(id)persistentStore;	// 0x30f77359
- (id)migratePersistentStore:(id)store toURL:(id)url options:(id)options withType:(id)type error:(id *)error;	// 0x30f78695
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x30f79599
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x30f79565
- (BOOL)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x30f796f5
- (id)persistentStoreCoordinator;	// 0x30f7952d
- (id)persistentStoreForIdentifier:(id)identifier;	// 0x30f7dced
- (id)persistentStoreForURL:(id)url;	// 0x30ef546d
// converted property getter: - (id)persistentStores;	// 0x30f77f55
- (BOOL)removePersistentStore:(id)store error:(id *)error;	// 0x30f78161
- (void)setMetadata:(id)metadata forPersistentStore:(id)persistentStore;	// 0x30f77185
- (BOOL)setURL:(id)url forPersistentStore:(id)persistentStore;	// 0x30f78565
- (BOOL)tryLock;	// 0x30f77f31
- (void)unlock;	// 0x30ef5569
@end

