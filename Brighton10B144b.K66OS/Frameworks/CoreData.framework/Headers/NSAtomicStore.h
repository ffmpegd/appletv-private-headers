/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"

@class NSMutableDictionary;

@interface NSAtomicStore : NSPersistentStore {
	NSMutableDictionary *_nodeCache;	// 44 = 0x2c
	NSMutableDictionary *_entityCache;	// 48 = 0x30
	NSMutableDictionary *_storeMetadata;	// 52 = 0x34
	int _nextReference;	// 56 = 0x38
	void *_reserved4;	// 60 = 0x3c
	void *_reserved5;	// 64 = 0x40
}
@property(retain) id metadata;	// G=0x30ecd3e5; S=0x30ecd469; converted property
+ (void)initialize;	// 0x30ecccf1
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x30eccd0d
- (id)init;	// 0x30eccd55
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x30eccd9d
- (void)_addObject:(id)object;	// 0x30ecf015
- (void)_deleteNodeFromEntityCache:(id)entityCache;	// 0x30ece91d
- (void)_deleteNodeFromMainCache:(id)mainCache;	// 0x30ece8d9
- (void)_didLoadMetadata;	// 0x30ecee49
- (id)_getNewIDForObject:(id)object;	// 0x30ecef99
- (void)_insertNodeIntoEntityCache:(id)cache;	// 0x30ece7ed
- (void)_insertNodeIntoMainCache:(id)cache;	// 0x30ece7ad
- (void)_preflightCrossCheck;	// 0x30eceeb5
- (id)_rawMetadata__;	// 0x30ecd3d5
- (void)_registerCacheNode:(id)node;	// 0x30ecd4fd
- (void)_removeObject:(id)object;	// 0x30ecf061
- (id)_retainedObjectIDForEntity:(id)entity referenceObject:(id)object;	// 0x30ecf311
- (id)_retrieveNodeForObject:(id)object;	// 0x30ece771
- (id)_retrieveNodeForObjectID:(id)objectID;	// 0x30ece751
- (id)_retrieveNodesSatisfyingRequest:(id)request;	// 0x30ece9e1
- (void)_storeNextReferenceInMetadata;	// 0x30eceeb9
- (void)_updateObject:(id)object;	// 0x30ecf0ad
- (void)addCacheNodes:(id)nodes;	// 0x30eccf5d
- (id)cacheNodeForObjectID:(id)objectID;	// 0x30ecd1f5
- (id)cacheNodes;	// 0x30ecd1a9
- (void)dealloc;	// 0x30ecce3d
- (id)executeCountRequest:(id)request withContext:(id)context;	// 0x30ece0c5
- (id)executeFetchRequest:(id)request withContext:(id)context;	// 0x30ecd61d
- (id)executeRefreshRequest:(id)request withContext:(id)context;	// 0x30ece74d
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x30ecd531
- (id)executeSaveChangesRequest:(id)request withContext:(id)context;	// 0x30ece1bd
- (BOOL)load:(id *)load;	// 0x30eccf15
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x30ecf1bd
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x30ecf1c1
// converted property getter: - (id)metadata;	// 0x30ecd3e5
- (id)newCacheNodeForManagedObject:(id)managedObject;	// 0x30ecd215
- (id)newReferenceObjectForManagedObject:(id)managedObject;	// 0x30ecd2a5
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x30ececd5
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x30ececad
- (id)objectIDForEntity:(id)entity referenceObject:(id)object;	// 0x30ecd2f9
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x30ecf1c5
- (id)referenceObjectForObjectID:(id)objectID;	// 0x30ecd359
- (BOOL)save:(id *)save;	// 0x30eccecd
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x30ecd469
- (void)updateCacheNode:(id)node fromManagedObject:(id)managedObject;	// 0x30ecd25d
- (void)willRemoveCacheNodes:(id)nodes;	// 0x30ecd1f1
@end
