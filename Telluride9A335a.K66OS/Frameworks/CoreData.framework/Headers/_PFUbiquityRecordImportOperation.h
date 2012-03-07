/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSOperation.h> // Unknown library
#import "NSManagedObjectContextFaultingDelegate.h"

@class NSMutableSet, NSString, NSDictionary, NSMutableDictionary, PFUbiquityTransactionLog, NSPersistentStoreCoordinator, NSManagedObjectContext, PFUbiquityImportContext;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordImportOperation : NSOperation <NSManagedObjectContextFaultingDelegate> {
@private
	NSManagedObjectContext *_moc;	// 12 = 0xc
	NSPersistentStoreCoordinator *_psc;	// 16 = 0x10
	PFUbiquityTransactionLog *_transactionLog;	// 20 = 0x14
	NSString *_localPeerID;	// 24 = 0x18
	id _delegate;	// 28 = 0x1c
	NSMutableSet *_insertedObjectIDs;	// 32 = 0x20
	NSMutableSet *_updatedObjectIDs;	// 36 = 0x24
	NSMutableSet *_deletedObjectIDs;	// 40 = 0x28
	NSDictionary *_logScore;	// 44 = 0x2c
	NSMutableDictionary *_resolvedConflicts;	// 48 = 0x30
	BOOL _lockedExistingCoord;	// 52 = 0x34
	NSDictionary *_initialStoreKnowledgeVector;	// 56 = 0x38
	NSDictionary *_newUbiquityKnowledgeVector;	// 60 = 0x3c
	PFUbiquityImportContext *_importContext;	// 64 = 0x40
	BOOL _transactionDidRollback;	// 68 = 0x44
	int _inMemorySequenceNumber;	// 72 = 0x48
}
@property(assign) id delegate;	// G=0x331cafa1; S=0x331cafb1; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSMutableSet *deletedObjectIDs;	// G=0x331cafe1; @synthesize=_deletedObjectIDs
@property(readonly, assign, nonatomic) PFUbiquityImportContext *importContext;	// G=0x331caf61; @synthesize=_importContext
@property(readonly, assign) NSDictionary *initialStoreKnowledgeVector;	// G=0x331caf71; @synthesize=_initialStoreKnowledgeVector
@property(readonly, assign, nonatomic) NSMutableSet *insertedObjectIDs;	// G=0x331cb001; @synthesize=_insertedObjectIDs
@property(readonly, assign) NSString *localPeerID;	// G=0x331cb011; @synthesize=_localPeerID
@property(assign) BOOL lockedExistingCoord;	// G=0x331caf81; S=0x331caf91; @synthesize=_lockedExistingCoord
@property(retain, nonatomic) NSDictionary *logScore;	// G=0x331cafc1; S=0x331cb2ed; @synthesize=_logScore
@property(readonly, assign) NSManagedObjectContext *moc;	// G=0x331cb041; @synthesize=_moc
@property(readonly, assign, nonatomic) NSDictionary *newUbiquityKnowledgeVector;	// G=0x331caf51; @synthesize=_newUbiquityKnowledgeVector
@property(readonly, assign) NSPersistentStoreCoordinator *psc;	// G=0x331cb031; @synthesize=_psc
@property(readonly, assign, nonatomic) NSMutableDictionary *resolvedConflicts;	// G=0x331cafd1; @synthesize=_resolvedConflicts
@property(readonly, assign, nonatomic) BOOL transactionDidRollBack;	// G=0x331caf41; @synthesize=_transactionDidRollback
@property(readonly, assign, nonatomic) PFUbiquityTransactionLog *transactionLog;	// G=0x331cb021; @synthesize=_transactionLog
@property(readonly, assign, nonatomic) NSMutableSet *updatedObjectIDs;	// G=0x331caff1; @synthesize=_updatedObjectIDs
- (id)initWithTransactionLog:(id)transactionLog;	// 0x331cb051
- (id)initWithTransactionLog:(id)transactionLog withLocalPeerID:(id)localPeerID;	// 0x331cb23d
- (void)addManagedObject:(id)object missingObjectWithID:(id)anId atKey:(id)key toMissingObjects:(id)missingObjects;	// 0x331cb9f1
- (void)applyChangesFromStoreSaveSnapshot:(id)storeSaveSnapshot withImportContext:(id)importContext withError:(id *)error;	// 0x331d164d
- (id)checkPSCForStoreIdentifiedByImportContext:(id)storeIdentifiedByImportContext;	// 0x331cb7c1
- (int)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)objectID andTrigger:(id)trigger;	// 0x331caf3d
- (void)coordinatorWillRemoveStore:(id)coordinator;	// 0x331cb315
- (id)copy;	// 0x331cb27d
- (void)dealloc;	// 0x331d1985
// declared property getter: - (id)delegate;	// 0x331cafa1
// declared property getter: - (id)deletedObjectIDs;	// 0x331cafe1
- (id)description;	// 0x331cb475
- (void)fillManagedObject:(id)object fromUbiquityDictionary:(id)ubiquityDictionary missingObjects:(id)objects withStoreSaveSnapshot:(id)storeSaveSnapshot andGlobalObjectIDToLocalIDURIMap:(id)localIDURIMap;	// 0x331cbb2d
// declared property getter: - (id)importContext;	// 0x331caf61
// declared property getter: - (id)initialStoreKnowledgeVector;	// 0x331caf71
- (void)initializePersistentStoreCoordinatorForImportContext:(id)importContext;	// 0x331cb751
// declared property getter: - (id)insertedObjectIDs;	// 0x331cb001
// declared property getter: - (id)localPeerID;	// 0x331cb011
// declared property getter: - (BOOL)lockedExistingCoord;	// 0x331caf81
// declared property getter: - (id)logScore;	// 0x331cafc1
- (void)main;	// 0x331cd7e1
// declared property getter: - (id)moc;	// 0x331cb041
- (id)newPersistentStoreCoordinatorForImportContext:(id)importContext;	// 0x331cb61d
// declared property getter: - (id)newUbiquityKnowledgeVector;	// 0x331caf51
- (void)notifyDelegateOfError:(id)error;	// 0x331d1919
- (void)processObjects:(id)objects withState:(int)state withGlobalIDIndexesToLocalURIMap:(id)localURIMap andImportContext:(id)context outError:(id *)error;	// 0x331cc1b5
// declared property getter: - (id)psc;	// 0x331cb031
// declared property getter: - (id)resolvedConflicts;	// 0x331cafd1
- (void)respondToStoreTransactionStateChangeNotification:(id)storeTransactionStateChangeNotification;	// 0x331cb51d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x331cafb1
// declared property setter: - (void)setLockedExistingCoord:(BOOL)coord;	// 0x331caf91
// declared property setter: - (void)setLogScore:(id)score;	// 0x331cb2ed
// declared property getter: - (BOOL)transactionDidRollBack;	// 0x331caf41
// declared property getter: - (id)transactionLog;	// 0x331cb021
// declared property getter: - (id)updatedObjectIDs;	// 0x331caff1
@end

