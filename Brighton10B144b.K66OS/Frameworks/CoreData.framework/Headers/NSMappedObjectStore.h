/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"

@class NSPersistentStoreMap, NSSet;

@interface NSMappedObjectStore : NSPersistentStore {
	NSPersistentStoreMap *_theMap;	// 44 = 0x2c
	NSSet *_entitiesToFetch;	// 48 = 0x30
}
@property(retain) id metadata;	// G=0x30f17f45; S=0x30f17f65; converted property
- (id)init;	// 0x30f16465
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x30f164bd
- (void)_addObject:(id)object objectIDMap:(id)map;	// 0x30f17e85
- (id)_pathFromURI:(id)uri;	// 0x30f167b9
- (id)_rawMetadata__;	// 0x30f17f25
- (void)_removeObject:(id)object objectIDMap:(id)map;	// 0x30f17ead
- (void)_setMap:(id)map;	// 0x30f16755
- (id)_theMap;	// 0x30f16745
- (void)_updateObject:(id)object objectIDMap:(id)map;	// 0x30f17ed5
- (id)dataForKey:(id)key;	// 0x30f16799
- (void)dealloc;	// 0x30f1669d
- (id)executeCountRequest:(id)request withContext:(id)context;	// 0x30f174d1
- (id)executeFetchRequest:(id)request withContext:(id)context;	// 0x30f169c1
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x30f16891
- (id)executeSaveChangesRequest:(id)request withContext:(id)context;	// 0x30f175d5
- (id)getNewIDForObject:(id)object;	// 0x30f17dc5
- (id)identifier;	// 0x30f17f05
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x30f17efd
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x30f17f01
// converted property getter: - (id)metadata;	// 0x30f17f45
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x30f17c05
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x30f17bb9
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x30f17c85
- (void)save;	// 0x30f16815
- (void)saveDocumentToPath:(id)path;	// 0x30f1685d
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x30f17f65
@end
