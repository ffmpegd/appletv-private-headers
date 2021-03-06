/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSLocking.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectModel, NSMutableArray;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {
@private
	persistentStoreCoordinatorFlags _flags;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
	NSMutableArray *_extendedStoreURLs;	// 12 = 0xc
	id _externalRecordsHelper;	// 16 = 0x10
	NSManagedObjectModel *_managedObjectModel;	// 20 = 0x14
	id _coreLock;	// 24 = 0x18
	NSMutableArray *_persistentStores;	// 28 = 0x1c
}
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x32ad9d11; converted property
@property(readonly, retain) NSMutableArray *persistentStores;	// G=0x32b786f1; converted property
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;	// 0x32b785ed
+ (Class)_classForPersistentStoreAtURL:(id)url;	// 0x32b793a1
+ (void)_registerCoreDataStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x32b07da5
+ (void)_registerDefaultStoreClassesAndTypes;	// 0x32b07b59
+ (Class)_storeClassForStoreType:(id)storeType;	// 0x32ad9d81
+ (id)_storeTypeForStore:(id)store;	// 0x32b7d7b5
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32b785e9
+ (void)initialize;	// 0x32b07281
+ (id)metadataForPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x32b78895
+ (void)registerStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x32b7958d
+ (id)registeredStoreTypes;	// 0x32b79475
+ (BOOL)setMetadata:(id)metadata forPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x32b78f09
- (id)initWithManagedObjectModel:(id)managedObjectModel;	// 0x32ad42f9
- (id)URLForPersistentStore:(id)persistentStore;	// 0x32b7a641
- (void)_addPersistentStore:(id)store identifier:(id)identifier;	// 0x32ae6e31
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore;	// 0x32b7b041
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore forConfiguration:(id)configuration;	// 0x32b7b249
- (void)_assignObjects:(id)objects toStore:(id)store;	// 0x32b7ba45
- (BOOL)_canSaveGraphRootedAtObject:(id)object intoStore:(id)store withPreviouslyChecked:(CFSetRef)previouslyChecked withAcceptableEntities:(CFSetRef)acceptableEntities;	// 0x32b7ea9d
- (id)_checkRequestForStore:(id)store originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x32b7de45
- (id)_conflictsWithRowCacheForObject:(id)object andStore:(id)store;	// 0x32b7ef91
- (void)_copyMetadataFromStore:(id)store toStore:(id)store2 migrationManager:(id)manager;	// 0x32b7d559
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type error:(id *)error;	// 0x32b7b175
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type options:(id)options error:(id *)error;	// 0x32b7b769
- (void)_doPreSaveAssignmentsForObjects:(id)objects;	// 0x32b7db09
- (id)_fetchAllInstancesFromStore:(id)store intoContext:(id)context underlyingException:(id *)exception;	// 0x32b7c881
- (void)_informAffectedStoresOfInterestByChildContextInObjectsWithObjectIDs:(id)objectIDs withSelector:(SEL)selector;	// 0x32aff359
- (BOOL)_isRegisteredWithUbiquity;	// 0x32b01109
- (id)_newConflictRecordForObject:(id)object andOriginalRow:(id)row;	// 0x32b7af91
- (id)_newObjectGraphStyleRecordForRow:(id)row andObject:(id)object;	// 0x32b7e7f1
- (id)_persistentStoreForIdentifier:(id)identifier;	// 0x32ae7041
- (void)_postStoresChangedNotificationsForStores:(id)stores changeKey:(id)key options:(id)options;	// 0x32ae7351
- (id)_realStoreTypeForStoreWithType:(id)type URL:(id)url error:(id *)error;	// 0x32b7b0b1
- (BOOL)_removePersistentStore:(id)store;	// 0x32b7874d
- (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 storeType:(id)type error:(id *)error;	// 0x32b7b341
- (id)_retainedAllMigratedObjectsInStore:(id)store toStore:(id)store2;	// 0x32b7d0cd
- (id)_saveRequestForStore:(id)store originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x32b7bf71
- (void)_setIsRegisteredWithUbiquity:(BOOL)ubiquity;	// 0x32b785f5
- (id)addPersistentStoreWithType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x32ad8601
- (void)dealloc;	// 0x32b00a9d
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x32ae8ecd
- (void)finalize;	// 0x32b7a98d
- (id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x32b7af15
- (void)lock;	// 0x32ad9d21
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x32b7af7d
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x32aff345
- (id)managedObjectIDForURIRepresentation:(id)urirepresentation;	// 0x32b79ad1
- (id)managedObjectIDFromUTF8String:(const char *)utf8String length:(unsigned)length;	// 0x32b79795
// converted property getter: - (id)managedObjectModel;	// 0x32ad9d11
- (id)metadataForPersistentStore:(id)persistentStore;	// 0x32b78619
- (id)migratePersistentStore:(id)store toURL:(id)url options:(id)options withType:(id)type error:(id *)error;	// 0x32b79b55
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x32b7af49
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x32afcc09
- (BOOL)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x32b7bb25
- (id)persistentStoreCoordinator;	// 0x32b785f1
- (id)persistentStoreForIdentifier:(id)identifier;	// 0x32b7b199
- (id)persistentStoreForURL:(id)url;	// 0x32ae6eed
// converted property getter: - (id)persistentStores;	// 0x32b786f1
- (BOOL)removePersistentStore:(id)store error:(id *)error;	// 0x32b7a6c9
- (void)setMetadata:(id)metadata forPersistentStore:(id)persistentStore;	// 0x32b7ad75
- (BOOL)setURL:(id)url forPersistentStore:(id)persistentStore;	// 0x32b787a1
- (BOOL)tryLock;	// 0x32b0111d
- (void)unlock;	// 0x32ae6fe5
@end

