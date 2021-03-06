/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "CoreData-Structs.h"

@class NSMutableArray, NSManagedObjectModel;

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
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x31e3f789; converted property
@property(readonly, retain) NSMutableArray *persistentStores;	// G=0x31edde95; converted property
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;	// 0x31eddd91
+ (Class)_classForPersistentStoreAtURL:(id)url;	// 0x31edeadd
+ (void)_registerCoreDataStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x31e6db65
+ (void)_registerDefaultStoreClassesAndTypes;	// 0x31e6d919
+ (Class)_storeClassForStoreType:(id)storeType;	// 0x31e3f7f9
+ (id)_storeTypeForStore:(id)store;	// 0x31ee2f3d
+ (BOOL)accessInstanceVariablesDirectly;	// 0x31eddd8d
+ (void)initialize;	// 0x31e6cfe5
+ (id)metadataForPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x31ede039
+ (void)registerStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x31edecc9
+ (id)registeredStoreTypes;	// 0x31edebb1
+ (BOOL)setMetadata:(id)metadata forPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x31ede679
- (id)initWithManagedObjectModel:(id)managedObjectModel;	// 0x31e38229
- (id)URLForPersistentStore:(id)persistentStore;	// 0x31edfd7d
- (void)_addPersistentStore:(id)store identifier:(id)identifier;	// 0x31e4c9fd
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore;	// 0x31ee077d
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore forConfiguration:(id)configuration;	// 0x31ee0985
- (void)_assignObjects:(id)objects toStore:(id)store;	// 0x31ee1181
- (BOOL)_canSaveGraphRootedAtObject:(id)object intoStore:(id)store withPreviouslyChecked:(CFSetRef)previouslyChecked withAcceptableEntities:(CFSetRef)acceptableEntities;	// 0x31ee4225
- (id)_checkRequestForStore:(id)store originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x31ee35cd
- (id)_conflictsWithRowCacheForObject:(id)object andStore:(id)store;	// 0x31ee4719
- (void)_copyMetadataFromStore:(id)store toStore:(id)store2 migrationManager:(id)manager;	// 0x31ee2c95
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type error:(id *)error;	// 0x31ee08b1
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type options:(id)options error:(id *)error;	// 0x31ee0ea5
- (void)_doPreSaveAssignmentsForObjects:(id)objects;	// 0x31ee3291
- (id)_fetchAllInstancesFromStore:(id)store intoContext:(id)context underlyingException:(id *)exception;	// 0x31ee1fbd
- (void)_informAffectedStoresOfInterestByChildContextInObjectsWithObjectIDs:(id)objectIDs withSelector:(SEL)selector;	// 0x31e650a1
- (BOOL)_isRegisteredWithUbiquity;	// 0x31e66e51
- (id)_newConflictRecordForObject:(id)object andOriginalRow:(id)row;	// 0x31ee06cd
- (id)_newObjectGraphStyleRecordForRow:(id)row andObject:(id)object;	// 0x31ee3f79
- (id)_persistentStoreForIdentifier:(id)identifier;	// 0x31e4cc0d
- (void)_postStoresChangedNotificationsForStores:(id)stores changeKey:(id)key options:(id)options;	// 0x31e4cf1d
- (id)_realStoreTypeForStoreWithType:(id)type URL:(id)url error:(id *)error;	// 0x31ee07ed
- (BOOL)_removePersistentStore:(id)store;	// 0x31eddef1
- (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 storeType:(id)type error:(id *)error;	// 0x31ee0a7d
- (id)_retainedAllMigratedObjectsInStore:(id)store toStore:(id)store2;	// 0x31ee2809
- (id)_saveRequestForStore:(id)store originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x31ee16ad
- (void)_setIsRegisteredWithUbiquity:(BOOL)ubiquity;	// 0x31eddd99
- (id)addPersistentStoreWithType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x31e3c521
- (void)dealloc;	// 0x31e667e5
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x31e4ea99
- (void)finalize;	// 0x31ee00c9
- (id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x31ee0651
- (void)lock;	// 0x31e3f799
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x31ee06b9
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x31e6508d
- (id)managedObjectIDForURIRepresentation:(id)urirepresentation;	// 0x31edf20d
- (id)managedObjectIDFromUTF8String:(const char *)utf8String length:(unsigned)length;	// 0x31edeed1
// converted property getter: - (id)managedObjectModel;	// 0x31e3f789
- (id)metadataForPersistentStore:(id)persistentStore;	// 0x31edddbd
- (id)migratePersistentStore:(id)store toURL:(id)url options:(id)options withType:(id)type error:(id *)error;	// 0x31edf291
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x31ee0685
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x31e62945
- (BOOL)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x31ee1261
- (id)persistentStoreCoordinator;	// 0x31eddd95
- (id)persistentStoreForIdentifier:(id)identifier;	// 0x31ee08d5
- (id)persistentStoreForURL:(id)url;	// 0x31e4cab9
// converted property getter: - (id)persistentStores;	// 0x31edde95
- (BOOL)removePersistentStore:(id)store error:(id *)error;	// 0x31edfe05
- (void)setMetadata:(id)metadata forPersistentStore:(id)persistentStore;	// 0x31ee04b1
- (BOOL)setURL:(id)url forPersistentStore:(id)persistentStore;	// 0x31eddf45
- (BOOL)tryLock;	// 0x31e66e65
- (void)unlock;	// 0x31e4cbb1
@end

