/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquitySafeSaveFile.h"

@class PFUbiquityLocation, NSMutableDictionary, NSString, NSDictionary, PFUbiquityBaselineMetadata, _PFZipFileArchive, NSPersistentStore, NSManagedObjectModel;

@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile {
	PFUbiquityLocation *_baselineStagingLocation;	// 40 = 0x28
	PFUbiquityBaselineMetadata *_metadata;	// 44 = 0x2c
	NSMutableDictionary *_storeFilenameToData;	// 48 = 0x30
	NSString *_storeFilename;	// 52 = 0x34
	NSString *_storeName;	// 56 = 0x38
	NSString *_modelVersionHash;	// 60 = 0x3c
	NSManagedObjectModel *_model;	// 64 = 0x40
	_PFZipFileArchive *_baselineArchive;	// 68 = 0x44
	NSPersistentStore *_store;	// 72 = 0x48
}
@property(readonly, assign) _PFZipFileArchive *baselineArchive;	// G=0x2d18f315; @synthesize=_baselineArchive
@property(readonly, assign) PFUbiquityLocation *baselineArchiveLocation;	// G=0x2d186501; 
@property(readonly, assign) PFUbiquityLocation *baselinePeerArchiveLocation;	// G=0x2d186511; 
@property(readonly, assign) PFUbiquityLocation *baselineStagingLocation;	// G=0x2d18f29d; @synthesize=_baselineStagingLocation
@property(readonly, assign) PFUbiquityBaselineMetadata *metadata;	// G=0x2d18f2b1; @synthesize=_metadata
@property(readonly, assign) NSString *modelVersionHash;	// G=0x2d18f301; @synthesize=_modelVersionHash
@property(readonly, assign) NSPersistentStore *store;	// G=0x2d18f329; @synthesize=_store
@property(readonly, assign) NSString *storeFilename;	// G=0x2d18f2c5; @synthesize=_storeFilename
@property(readonly, assign) NSDictionary *storeFilenameToData;	// G=0x2d18f2d9; @synthesize=_storeFilenameToData
@property(readonly, assign) NSString *storeName;	// G=0x2d18f2ed; @synthesize=_storeName
+ (BOOL)canRollBaselineForStoreMetadata:(id)storeMetadata withStack:(id)stack andManagedObjectModel:(id)model error:(id *)error;	// 0x2d18a159
+ (BOOL)checkPeerReceiptsUnderRootLocation:(id)location forAgreementWithLocalPeerID:(id)localPeerID storeName:(id)name modelVersionHash:(id)hash error:(id *)error;	// 0x2d18a8a9
+ (id)createArchiveWithModel:(id)model metadata:(id)metadata storeFilenameToData:(id)data storeFilename:(id)filename error:(id *)error;	// 0x2d18df4d
+ (id)createBaselineGCModelForStoreName:(id)storeName modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x2d18da71
+ (id)createBaselineOptimizedModelForStoreName:(id)storeName modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x2d18d8ed
+ (id)createModelFromBaselineModelWithModelVersionHash:(id)modelVersionHash storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x2d18dbf5
+ (id)createStringOfContentsOfBaselineFile:(id)baselineFile;	// 0x2d18ecc9
+ (BOOL)enoughTransactionsHavePassedToRollBaseline:(id)rollBaseline withLocalPeerID:(id)localPeerID error:(id *)error;	// 0x2d189905
+ (BOOL)logsConsumeEnoughDiskSpaceToRollBaseline:(id)rollBaseline withLocalPeerID:(id)localPeerID andStoreURL:(id)url error:(id *)error;	// 0x2d189c35
+ (id)metadataFromBaselineArchive:(id)baselineArchive;	// 0x2d18df09
+ (id)metadataFromCurrentBaselineForStoreWithName:(id)name modelVersionHash:(id)hash andUbiquityRootLocation:(id)location withError:(id *)error;	// 0x2d18dc49
+ (unsigned)numRequiredTransactionsForBaselineRoll;	// 0x2d18f1d1
+ (BOOL)removePeerSpecificIdentifiersFromStore:(id)store withLocalPeerID:(id)localPeerID;	// 0x2d18c9d9
+ (/*unknown-type-(D)*/ void*)requiredFractionOfDiskSpaceUsedForLogs;	// 0x2d18f1f1
+ (void)setNumRequiredTransactionsForBaselineRoll:(unsigned)baselineRoll;	// 0x2d18f1e1
+ (void)setRequiredFractionOfDiskSpaceUsedForLogs:(/*unknown-type-(D)*/ void*)logs;	// 0x2d18f205
- (id)init;	// 0x2d185f39
- (id)initWithBaselineLocation:(id)baselineLocation andLocalPeerID:(id)anId;	// 0x2d186165
- (id)initWithLocalPeerID:(id)localPeerID ubiquityRootLocation:(id)location forStoreWithName:(id)name andManagedObjectModel:(id)model;	// 0x2d186015
- (id)_createPersistentStoreCoordinatorForCurrentBaseline:(BOOL)currentBaseline error:(id *)error;	// 0x2d18cf2d
// declared property getter: - (id)baselineArchive;	// 0x2d18f315
// declared property getter: - (id)baselineArchiveLocation;	// 0x2d186501
- (id)baselineMetadataData;	// 0x2d18d63d
// declared property getter: - (id)baselinePeerArchiveLocation;	// 0x2d186511
// declared property getter: - (id)baselineStagingLocation;	// 0x2d18f29d
- (BOOL)canReplaceStoreAtKnowledgeVector:(id)knowledgeVector;	// 0x2d188d6d
- (BOOL)clearOutStagingLocationWithError:(id *)error;	// 0x2d186521
- (BOOL)constructBaselineArchive:(id *)archive;	// 0x2d1872bd
- (id)createManagedObjectModel;	// 0x2d18d71d
- (id)createManagedObjectModelFromCurrentBaseline;	// 0x2d18d881
- (id)createPersistentStoreCoordinatorForCurrentBaseline:(id *)currentBaseline;	// 0x2d18cf19
- (id)createSetOfInUseExternalDataRefUUIDs:(id *)useExternalDataRefUUIDs;	// 0x2d18e3a9
- (void)dealloc;	// 0x2d18633d
- (id)description;	// 0x2d18645d
- (BOOL)gatherContentsAndConstructArchiveWithError:(id *)error;	// 0x2d186fad
- (BOOL)gatherContentsFromMigratedBaseline:(id)migratedBaseline withStoreFileURL:(id)storeFileURL error:(id *)error;	// 0x2d186db9
- (id)gcModelData;	// 0x2d18d6a5
- (BOOL)haveTransactionLogsForPeer:(id)peer between:(int)between and:(int)anAnd;	// 0x2d189225
- (BOOL)importBaselineForStoreAtURL:(id)url ofType:(id)type options:(id)options withLocalPeerID:(id)localPeerID stack:(id)stack andPersistentStoreCoordinator:(id)coordinator error:(id *)error;	// 0x2d18b0a9
- (BOOL)isUploaded:(id *)uploaded;	// 0x2d189771
- (BOOL)loadFileFromLocation:(id)location error:(id *)error;	// 0x2d1873dd
- (BOOL)makeCurrentBaselineWithError:(id *)error;	// 0x2d18b525
// declared property getter: - (id)metadata;	// 0x2d18f2b1
- (BOOL)metadataMatchesCurrentMetadata:(id *)metadata;	// 0x2d18983d
// declared property getter: - (id)modelVersionHash;	// 0x2d18f301
- (BOOL)moveToPermanentLocation:(id *)permanentLocation;	// 0x2d18c8e5
- (id)optimizedModelData;	// 0x2d18d671
- (BOOL)prepareForBaselineRollOfPersistentStore:(id)persistentStore andLocalPeerID:(id)anId error:(id *)error;	// 0x2d186715
- (BOOL)removeUnusedExternalDataReferences:(id *)references;	// 0x2d18e8ed
- (BOOL)replaceLocalPersistentStoreAtURL:(id)url ofType:(id)type withOptions:(id)options usingPersistentStoreCoordinator:(id)coordinator error:(id *)error;	// 0x2d1887b9
- (void)setMetadata:(id)metadata;	// 0x2d18f219
// declared property getter: - (id)store;	// 0x2d18f329
- (id)storeData;	// 0x2d18d6d9
// declared property getter: - (id)storeFilename;	// 0x2d18f2c5
// declared property getter: - (id)storeFilenameToData;	// 0x2d18f2d9
// declared property getter: - (id)storeName;	// 0x2d18f2ed
- (BOOL)unpackStoreFilesToStagingLocation:(id *)stagingLocation;	// 0x2d188451
- (BOOL)updateCurrentStoreIdentifier:(id)identifier error:(id *)error;	// 0x2d18b325
- (BOOL)writeFileToLocation:(id)location error:(id *)error;	// 0x2d18c3d1
@end

