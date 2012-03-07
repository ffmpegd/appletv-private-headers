/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "NSCoding.h"
#import "CoreData-Structs.h"

@class NSUndoManager, NSMutableSet;

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {
@private
	int _spinLock;	// 4 = 0x4
	id _parentObjectStore;	// 8 = 0x8
	NSUndoManager *_undoManager;	// 12 = 0xc
	void *_dispatchQueue;	// 16 = 0x10
	managedObjectContextFlags _flags;	// 20 = 0x14
	NSMutableSet *_unprocessedChanges;	// 24 = 0x18
	NSMutableSet *_unprocessedDeletes;	// 28 = 0x1c
	NSMutableSet *_unprocessedInserts;	// 32 = 0x20
	NSMutableSet *_insertedObjects;	// 36 = 0x24
	NSMutableSet *_deletedObjects;	// 40 = 0x28
	NSMutableSet *_changedObjects;	// 44 = 0x2c
	NSMutableSet *_lockedObjects;	// 48 = 0x30
	NSMutableSet *_refreshedObjects;	// 52 = 0x34
	id _infoByGID;	// 56 = 0x38
	id *_cachedObsInfoByEntity;	// 60 = 0x3c
	short _undoTransactionID;	// 64 = 0x40
	id _lock;	// 68 = 0x44
	long _lockCount;	// 72 = 0x48
	long _objectStoreLockCount;	// 76 = 0x4c
	double _fetchTimestamp;	// 80 = 0x50
	id _delegate;	// 88 = 0x58
	id _referenceQueue;	// 92 = 0x5c
	id _userinfo;	// 96 = 0x60
	id _mergePolicy;	// 100 = 0x64
	int _cd_rc;	// 104 = 0x68
	int _ignoreChangeNotification;	// 108 = 0x6c
	id _editors;	// 112 = 0x70
	id *_debuggingRecords;	// 116 = 0x74
	id _childObjectStores;	// 120 = 0x78
	id _reserved2;	// 124 = 0x7c
}
@property(readonly, retain) NSMutableSet *deletedObjects;	// G=0x31eb3851; converted property
@property(readonly, retain) NSMutableSet *insertedObjects;	// G=0x31eb3785; converted property
@property(retain) id mergePolicy;	// G=0x31eb3041; S=0x31e4d269; converted property
@property(retain) id parentContext;	// G=0x31eb30fd; S=0x31eb4265; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x31e4d3c9; S=0x31e4d0d5; converted property
@property(assign) BOOL propagatesDeletesAtEndOfEvent;	// G=0x31eb3099; S=0x31eb391d; converted property
@property(assign) BOOL retainsRegisteredObjects;	// G=0x31eb302d; S=0x31eb33cd; converted property
@property(assign) double stalenessInterval;	// G=0x31e62b2d; S=0x31e6f841; converted property
@property(retain) NSUndoManager *undoManager;	// G=0x31eb3089; S=0x31e4d1f1; converted property
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;	// 0x31eb3029
+ (BOOL)_handleError:(id)error withError:(id *)error2;	// 0x31eb9399
+ (void)_mergeChangesFromRemoteContextSave:(id)remoteContextSave intoContexts:(id)contexts;	// 0x31ec5339
+ (BOOL)accessInstanceVariablesDirectly;	// 0x31eb3025
+ (void)initialize;	// 0x31e6d485
- (id)init;	// 0x31e36001
- (id)initWithCoder:(id)coder;	// 0x31eb51d5
- (id)initWithConcurrencyType:(unsigned)concurrencyType;	// 0x31e36015
- (BOOL)_attemptCoalesceChangesForFetch;	// 0x31eb9c89
- (unsigned)_batchRetainedObjects:(id *)objects forCount:(unsigned)count withIDs:(id *)ids optionalHandler:(id)handler withInlineStorage:(BOOL)inlineStorage;	// 0x31ec5e91
- (void)_changeIDsForManagedObjects:(id)managedObjects toIDs:(id)ids;	// 0x31ec2eb9
- (void)_clearChangedThisTransaction:(id)transaction;	// 0x31ebc589
- (void)_clearDeletions;	// 0x31ebbd0d
- (void)_clearInsertions;	// 0x31ebb9c5
- (void)_clearLockedObjects;	// 0x31eb901d
- (void)_clearOriginalSnapshotAndInitializeRec:(id)rec;	// 0x31eb9285
- (void)_clearOriginalSnapshotForObject:(id)object;	// 0x31eb924d
- (void)_clearRefreshedObjects;	// 0x31eb903d
- (void)_clearUnprocessedDeletions;	// 0x31ebbeb1
- (void)_clearUnprocessedInsertions;	// 0x31ebbb69
- (void)_clearUnprocessedUpdates;	// 0x31ebc1f9
- (void)_clearUpdates;	// 0x31ebc055
- (id)_committedSnapshotForObject:(id)object;	// 0x31eb92f5
- (void)_copyChildObject:(id)object toParentObject:(id)parentObject fromChildContext:(id)childContext;	// 0x31ec618d
- (unsigned)_countWithMergedChangesForRequest:(id)request possibleChanges:(id)changes possibleDeletes:(id)deletes error:(id *)error;	// 0x31ec00ed
- (unsigned)_countWithNoChangesForRequest:(id)request error:(id *)error;	// 0x31ebf6dd
- (void)_createAndPostChangeNotification:(id)notification withDeletions:(id)deletions withUpdates:(id)updates withRefreshes:(id)refreshes;	// 0x31eb9cfd
- (id)_createStoreFetchRequestForFetchRequest:(id)fetchRequest;	// 0x31e4e949
- (id)_currentEventSnapshotForObject:(id)object;	// 0x31eb935d
- (void)_dealloc__;	// 0x31e63b29
- (id)_debuggingOnly_localObjectForGlobalID:(id)globalID;	// 0x31ebe6b1
- (id)_delegate;	// 0x31eb32dd
- (void)_didSaveChanges;	// 0x31ec1c85
- (void)_disableChangeNotifications;	// 0x31e649bd
- (BOOL)_disableDiscardEditing;	// 0x31eb3201
- (void)_dispose:(BOOL)dispose;	// 0x31e63f71
- (void)_disposeObjects:(id *)objects count:(unsigned long)count notifyParent:(BOOL)parent;	// 0x31e64b2d
- (void)_enableChangeNotifications;	// 0x31eb32a1
- (void)_enqueueEndOfEventNotification;	// 0x31eb9fad
- (void)_establishEventSnapshotsForObject:(id)object;	// 0x31eb94ad
- (void)_forceInsertionForObject:(id)object;	// 0x31eb98a9
- (void)_forceRemoveFromDeletedObjects:(id)deletedObjects;	// 0x31eb9a01
- (void)_forgetObject:(id)object propagateToObjectStore:(BOOL)objectStore;	// 0x31eb3d79
- (void)_forgetObject:(id)object propagateToObjectStore:(BOOL)objectStore removeFromRegistry:(BOOL)registry;	// 0x31ec2b19
- (id)_globalIDForObject:(id)object;	// 0x31eb92bd
- (id)_globalIDsForObjects:(id)objects;	// 0x31eb3ed9
- (void)_growRegistrationCollectionForEntitySlot:(unsigned)entitySlot toSize:(unsigned)size;	// 0x31eb3191
- (BOOL)_handleError:(id)error withError:(id *)error2;	// 0x31eb4241
- (BOOL)_handleOptimisticLockingError:(id)error withError:(id *)error2;	// 0x31eb41e5
- (BOOL)_ignoringChangeNotifications;	// 0x31eb3289
- (id)_implicitObservationInfoForEntity:(id)entity forResultingClass:(Class *)resultingClass;	// 0x31ec4ecd
- (void)_incrementUndoTransactionID;	// 0x31eb3251
- (void)_informParentStore:(id)store noLongerInterestedInObjects:(id)objects;	// 0x31eb9155
- (void)_informParentStore:(id)store ofInterestInObjects:(id)objects;	// 0x31eb905d
- (id)_initWithParentObjectStore:(unsigned long)parentObjectStore;	// 0x31e36119
- (void)_insertObjectWithGlobalID:(id)globalID globalID:(id)anId;	// 0x31ec0b55
- (BOOL)_isDeallocating;	// 0x31eb8b79
- (BOOL)_isImportContext;	// 0x31eb31ad
- (BOOL)_isPreflightSaveInProgress;	// 0x31eb31c1
- (void)_lockObjectStore_oldSchool;	// 0x31e69efd
- (void)_managedObjectContextEditor:(id)editor didCommit:(BOOL)commit contextInfo:(XXStruct_gOQQEC *)info;	// 0x31ec5231
- (void)_mergeChangesFromDidSaveDictionary:(id)_mergeChangesFrom usingObjectIDs:(BOOL)ids;	// 0x31eb4575
- (void)_mergeChangesFromRemoteContextSave:(id)remoteContextSave;	// 0x31ebd545
- (id)_newSaveRequestForCurrentState;	// 0x31eb3c65
- (id)_newUnchangedLockedObjects;	// 0x31ebb7a9
- (void)_noop:(id)noop;	// 0x31eb327d
- (void)_objectsChangedInStore:(id)store;	// 0x31eba11d
- (id)_orderedSetWithResultsFromFetchRequest:(id)fetchRequest;	// 0x31eba481
- (id)_parentObjectsForFetchRequest:(id)fetchRequest inContext:(id)context error:(id *)error;	// 0x31ec64bd
- (BOOL)_parentObtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x31ec1a85
- (id)_parentProcessSaveRequest:(id)request inContext:(id)context error:(id *)error;	// 0x31ebf065
- (id)_parentStore;	// 0x31e62935
- (void)_postObjectsDidChangeNotificationWithUserInfo:(id)_postObjects;	// 0x31eba035
- (void)_postRefreshedObjectsNotificationAndClearList;	// 0x31eb9c09
- (BOOL)_postSaveNotifications;	// 0x31eb323d
- (BOOL)_prepareForPushChanges:(id *)pushChanges;	// 0x31ebb08d
- (void)_processChangedStoreConfigurationNotification:(id)notification;	// 0x31ec4369
- (BOOL)_processDeletedObjects:(id *)objects;	// 0x31eb9f05
- (void)_processEndOfEventNotification:(id)eventNotification;	// 0x31ebdf8d
- (void)_processNotificationQueue;	// 0x31eb32b5
- (void)_processObjectStoreChanges:(id)changes;	// 0x31eb3285
- (void)_processOwnedObjects:(id)objects set:(id)set boolean:(BOOL)boolean;	// 0x31eb3281
- (id)_processPendingDeletions:(id)deletions withInsertions:(id)insertions withUpdates:(id)updates withNewlyForgottenList:(id)newlyForgottenList withRemovedChangedObjects:(id)removedChangedObjects;	// 0x31ebc94d
- (id)_processPendingInsertions:(id)insertions withDeletions:(id)deletions withUpdates:(id)updates;	// 0x31ebcdf9
- (id)_processPendingUpdates:(id)updates;	// 0x31ebd13d
- (BOOL)_processRecentChanges:(id *)changes;	// 0x31ec3129
- (void)_processRecentlyForgottenObjects:(id)objects;	// 0x31ebd3ad
- (void)_processReferenceQueue:(BOOL)queue;	// 0x31e65551
- (void)_propagateDeletesUsingTable:(id)table;	// 0x31ec3fd5
- (BOOL)_propagatePendingDeletesAtEndOfEvent:(id *)event;	// 0x31ebde75
- (void)_refaultObject:(id)object globalID:(id)anId boolean:(BOOL)boolean;	// 0x31eb3f89
- (void)_registerClearStateWithUndoManager;	// 0x31eb9a9d
- (void)_registerForNotificationsWithCoordinator:(id)coordinator;	// 0x31e4d191
- (void)_registerObject:(id)object withID:(id)anId;	// 0x31e5ee45
- (void)_registerUndoForDeletedObjects:(id)deletedObjects withDeletedChanges:(id)deletedChanges;	// 0x31eb9619
- (void)_registerUndoForInsertedObjects:(id)insertedObjects;	// 0x31eb9571
- (void)_registerUndoForModifiedObjects:(id)modifiedObjects;	// 0x31eb9875
- (void)_registerUndoForOperation:(SEL)operation withObjects:(id)objects withExtraArguments:(id)extraArguments;	// 0x31ebee39
- (void)_resetAllChanges;	// 0x31eb3d99
- (id)_retainedObjectWithID:(id)anId;	// 0x31ebb081
- (id)_retainedObjectWithID:(id)anId error:(id *)error;	// 0x31ebb075
- (id)_retainedObjectWithID:(id)anId optionalHandler:(id)handler withInlineStorage:(BOOL)inlineStorage;	// 0x31e5dac5
- (id)_retainedObjectsFromRemovedStore:(id)removedStore;	// 0x31ebc39d
- (id)_retainedRegisteredObjects;	// 0x31ebb615
- (void)_sendCommitEditingSelectorToTarget:(id)target sender:(id)sender selector:(SEL)selector flag:(BOOL)flag contextInfo:(void *)info delayed:(BOOL)delayed;	// 0x31eba365
- (void)_sendOrEnqueueNotification:(id)notification selector:(SEL)selector;	// 0x31eba1a9
- (void)_setDelegate:(id)delegate;	// 0x31eb32cd
- (void)_setDisableDiscardEditing:(BOOL)editing;	// 0x31eb31d9
- (void)_setIsUbiquityImportContext:(BOOL)context;	// 0x31eb3195
- (void)_setParentContext:(id)context;	// 0x31eb4361
- (void)_setPersistentStoreCoordinator:(id)coordinator;	// 0x31eb8d3d
- (void)_setPostSaveNotifications:(BOOL)notifications;	// 0x31eb3215
- (void)_setRetainsRegisteredObjects:(BOOL)objects;	// 0x31eb8bfd
- (void)_setStopsValidationAfterFirstError:(BOOL)error;	// 0x31eb3169
- (void)_setUndoManager:(id)manager;	// 0x31eb35a1
- (void)_startObservingUndoManagerNotifications;	// 0x31eba0a1
- (void)_stopConflictDetectionForObject:(id)object;	// 0x31eba4c9
- (void)_stopObservingUndoManagerNotifications;	// 0x31e63e39
- (BOOL)_stopsValidationAfterFirstError;	// 0x31eb3151
- (void)_storeConfigurationChanged:(id)changed;	// 0x31eba189
- (BOOL)_tryRetain;	// 0x31eb8ba1
- (void)_undoDeletions:(id)deletions;	// 0x31ebe871
- (void)_undoDeletionsMovedToUpdates:(id)updates;	// 0x31eb95a5
- (void)_undoInsertions:(id)insertions;	// 0x31ebe6c5
- (void)_undoManagerCheckpoint:(id)checkpoint;	// 0x31eb9ed5
- (void)_undoUpdates:(id)updates;	// 0x31ebec99
- (void)_unlockObjectStore_oldSchool;	// 0x31e6ce55
- (void)_unregisterForNotifications;	// 0x31e63d89
- (void)_updateUndoTransactionForThisEvent:(id)thisEvent withDeletions:(id)deletions withUpdates:(id)updates;	// 0x31eb9e49
- (void)_updateUnprocessedOwnDestinations:(id)destinations;	// 0x31eb3279
- (BOOL)_validateChangesForSave:(id *)save;	// 0x31eb8e45
- (BOOL)_validateDeletesUsingTable:(id)table withError:(id *)error;	// 0x31eb8e05
- (BOOL)_validateObjects:(id)objects forOperation:(unsigned)operation error:(id *)error exhaustive:(BOOL)exhaustive forSave:(BOOL)save;	// 0x31ebd871
- (void)assignObject:(id)object toPersistentStore:(id)persistentStore;	// 0x31eb7e95
- (BOOL)commitEditing;	// 0x31ec51c1
- (void)commitEditingWithDelegate:(id)delegate didCommitSelector:(SEL)selector contextInfo:(void *)info;	// 0x31ec52ed
- (unsigned)concurrencyType;	// 0x31eb3129
- (unsigned)countForFetchRequest:(id)fetchRequest error:(id *)error;	// 0x31eb6595
- (void)dealloc;	// 0x31e63abd
- (void)deleteObject:(id)object;	// 0x31eb78b1
// converted property getter: - (id)deletedObjects;	// 0x31eb3851
- (void)detectConflictsForObject:(id)object;	// 0x31eb5125
- (void)discardEditing;	// 0x31ec5151
- (void)encodeWithCoder:(id)coder;	// 0x31eb39c5
- (id)executeFetchRequest:(id)request error:(id *)error;	// 0x31e4d599
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x31ec0e65
- (id)existingObjectWithID:(id)anId error:(id *)error;	// 0x31eb69ed
- (void)finalize;	// 0x31eb8175
- (BOOL)hasChanges;	// 0x31e4e935
- (void)insertObject:(id)object;	// 0x31eb7a35
// converted property getter: - (id)insertedObjects;	// 0x31eb3785
- (BOOL)isEditing;	// 0x31eb32b9
- (void)lock;	// 0x31eb508d
- (void)lockObjectStore;	// 0x31e4ea45
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x31ec1089
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x31ec10d5
- (void)mergeChangesFromContextDidSaveNotification:(id)mergeChangesFromContext;	// 0x31eb3b79
// converted property getter: - (id)mergePolicy;	// 0x31eb3041
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x31ec14f9
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x31ec1121
- (void)objectDidBeginEditing:(id)object;	// 0x31ec5021
- (void)objectDidEndEditing:(id)object;	// 0x31ec50b9
- (id)objectRegisteredForID:(id)anId;	// 0x31eb7c89
- (id)objectWithID:(id)anId;	// 0x31eb6b1d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31eb7b39
- (BOOL)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x31eb7441
// converted property getter: - (id)parentContext;	// 0x31eb30fd
- (void)performBlock:(id)block;	// 0x31eb44ad
- (void)performBlockAndWait:(id)wait;	// 0x31eb4401
// converted property getter: - (id)persistentStoreCoordinator;	// 0x31e4d3c9
- (void)processPendingChanges;	// 0x31eb367d
// converted property getter: - (BOOL)propagatesDeletesAtEndOfEvent;	// 0x31eb3099
- (void)redo;	// 0x31eb53c5
- (void)refreshObject:(id)object mergeChanges:(BOOL)changes;	// 0x31eb57dd
- (id)registeredObjects;	// 0x31eb375d
- (oneway void)release;	// 0x31e63a3d
- (void)reset;	// 0x31eb8331
- (id)retain;	// 0x31e6f8c1
- (unsigned)retainCount;	// 0x31eb3051
// converted property getter: - (BOOL)retainsRegisteredObjects;	// 0x31eb302d
- (void)rollback;	// 0x31eb5c69
- (BOOL)save:(id *)save;	// 0x31eb6b8d
// converted property setter: - (void)setMergePolicy:(id)policy;	// 0x31e4d269
// converted property setter: - (void)setParentContext:(id)context;	// 0x31eb4265
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x31e4d0d5
// converted property setter: - (void)setPropagatesDeletesAtEndOfEvent:(BOOL)event;	// 0x31eb391d
// converted property setter: - (void)setRetainsRegisteredObjects:(BOOL)objects;	// 0x31eb33cd
// converted property setter: - (void)setStalenessInterval:(double)interval;	// 0x31e6f841
// converted property setter: - (void)setUndoManager:(id)manager;	// 0x31e4d1f1
// converted property getter: - (double)stalenessInterval;	// 0x31e62b2d
- (BOOL)tryLock;	// 0x31eb3abd
- (void)undo;	// 0x31eb55d1
// converted property getter: - (id)undoManager;	// 0x31eb3089
- (void)unlock;	// 0x31eb3b29
- (void)unlockObjectStore;	// 0x31e5a78d
- (id)updatedObjects;	// 0x31eb3691
- (id)userInfo;	// 0x31eb30ed
@end

