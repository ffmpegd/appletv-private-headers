/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, PFUbiquityLocation, NSDictionary, NSManagedObjectModel, NSPersistentStore, PFUbiquityBaselineMetadata, _PFZipFileArchive;

@interface PFUbiquityBaseline : NSObject {
	PFUbiquityLocation *_ubiquityRootLocation;	// 4 = 0x4
	PFUbiquityLocation *_baselineArchiveLocation;	// 8 = 0x8
	PFUbiquityLocation *_baselinePeerArchiveLocation;	// 12 = 0xc
	PFUbiquityLocation *_baselineStagingLocation;	// 16 = 0x10
	PFUbiquityLocation *_currentLocation;	// 20 = 0x14
	PFUbiquityBaselineMetadata *_metadata;	// 24 = 0x18
	NSMutableDictionary *_storeFilenameToData;	// 28 = 0x1c
	NSString *_storeFilename;	// 32 = 0x20
	NSString *_storeName;	// 36 = 0x24
	NSString *_localPeerID;	// 40 = 0x28
	NSString *_modelVersionHash;	// 44 = 0x2c
	NSManagedObjectModel *_model;	// 48 = 0x30
	_PFZipFileArchive *_baselineArchive;	// 52 = 0x34
	NSPersistentStore *_store;	// 56 = 0x38
}
@property(readonly, assign) _PFZipFileArchive *baselineArchive;	// G=0x35d00f19; @synthesize=_baselineArchive
@property(readonly, assign) PFUbiquityLocation *baselineArchiveLocation;	// G=0x35d00e65; @synthesize=_baselineArchiveLocation
@property(readonly, assign) PFUbiquityLocation *baselinePeerArchiveLocation;	// G=0x35d00e8d; @synthesize=_baselinePeerArchiveLocation
@property(readonly, assign) PFUbiquityLocation *baselineStagingLocation;	// G=0x35d00e79; @synthesize=_baselineStagingLocation
@property(readonly, assign) PFUbiquityLocation *currentLocation;	// G=0x35d00ea1; @synthesize=_currentLocation
@property(readonly, assign) NSString *localPeerID;	// G=0x35d00f2d; @synthesize=_localPeerID
@property(readonly, assign) PFUbiquityBaselineMetadata *metadata;	// G=0x35d00eb5; @synthesize=_metadata
@property(readonly, assign) NSString *modelVersionHash;	// G=0x35d00f05; @synthesize=_modelVersionHash
@property(readonly, assign) NSPersistentStore *store;	// G=0x35d00f41; @synthesize=_store
@property(readonly, assign) NSString *storeFilename;	// G=0x35d00ec9; @synthesize=_storeFilename
@property(readonly, assign) NSDictionary *storeFilenameToData;	// G=0x35d00edd; @synthesize=_storeFilenameToData
@property(readonly, assign) NSString *storeName;	// G=0x35d00ef1; @synthesize=_storeName
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x35d00e51; @synthesize=_ubiquityRootLocation
+ (BOOL)canRollBaselineForStoreMetadata:(id)storeMetadata withStack:(id)stack andManagedObjectModel:(id)model error:(id *)error;	// 0x35cfde89
+ (BOOL)checkPeerReceiptsUnderRootLocation:(id)location forAgreementWithLocalPeerID:(id)localPeerID storeName:(id)name modelVersionHash:(id)hash error:(id *)error;	// 0x35cfe5f9
+ (id)createArchiveWithModel:(id)model metadata:(id)metadata storeFilenameToData:(id)data storeFilename:(id)filename error:(id *)error;	// 0x35d00bb1
+ (id)createBaselineGCModelForStoreName:(id)storeName modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x35d0069d
+ (id)createBaselineOptimizedModelForStoreName:(id)storeName modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x35d00561
+ (id)createModelFromBaselineModelWithStoreMetadata:(id)storeMetadata;	// 0x35d007d9
+ (BOOL)enoughTransactionsHavePassedToRollBaseline:(id)rollBaseline withLocalPeerID:(id)localPeerID error:(id *)error;	// 0x35cfd775
+ (BOOL)logsConsumeEnoughDiskSpaceToRollBaseline:(id)rollBaseline withLocalPeerID:(id)localPeerID andStoreURL:(id)url error:(id *)error;	// 0x35cfda61
+ (id)metadataFromBaselineArchive:(id)baselineArchive;	// 0x35d00b6d
+ (id)metadataFromCurrentBaselineForStoreWithName:(id)name modelVersionHash:(id)hash andUbiquityRootLocation:(id)location withError:(id *)error;	// 0x35d008a1
+ (unsigned)numRequiredTransactionsForBaselineRoll;	// 0x35d00e09
+ (/*unknown-type-(D)*/ void*)requiredFractionOfDiskSpaceUsedForLogs;	// 0x35d00e29
+ (void)setNumRequiredTransactionsForBaselineRoll:(unsigned)baselineRoll;	// 0x35d00e19
+ (void)setRequiredFractionOfDiskSpaceUsedForLogs:(/*unknown-type-(D)*/ void*)logs;	// 0x35d00e3d
- (id)init;	// 0x35cfaed5
- (id)initWithBaselineLocation:(id)baselineLocation andLocalPeerID:(id)anId;	// 0x35cfb1c5
- (id)initWithLocalPeerID:(id)localPeerID ubiquityRootLocation:(id)location forStoreWithName:(id)name andManagedObjectModel:(id)model;	// 0x35cfafe9
// declared property getter: - (id)baselineArchive;	// 0x35d00f19
// declared property getter: - (id)baselineArchiveLocation;	// 0x35d00e65
- (id)baselineMetadataData;	// 0x35d00361
// declared property getter: - (id)baselinePeerArchiveLocation;	// 0x35d00e8d
// declared property getter: - (id)baselineStagingLocation;	// 0x35d00e79
- (BOOL)clearOutStagingLocationWithError:(id *)error;	// 0x35cfb65d
- (BOOL)constructBaselineArchive:(id *)archive;	// 0x35cfc029
- (id)createManagedObjectModel;	// 0x35d00441
// declared property getter: - (id)currentLocation;	// 0x35d00ea1
- (void)dealloc;	// 0x35cfb3c5
- (id)description;	// 0x35cfb55d
- (BOOL)existsInCloud;	// 0x35cfd4d5
- (BOOL)gatherContentsAndConstructArchiveWithError:(id *)error;	// 0x35cfbd15
- (BOOL)gatherContentsFromMigratedBaseline:(id)migratedBaseline withStoreFileURL:(id)storeFileURL error:(id *)error;	// 0x35cfbb29
- (BOOL)importBaselineForStoreAtURL:(id)url ofType:(id)type options:(id)options withLocalPeerID:(id)localPeerID stack:(id)stack andPersistentStoreCoordinator:(id)coordinator error:(id *)error;	// 0x35cfedb9
- (BOOL)initializeBaselineArchiveWithError:(id *)error;	// 0x35cffe75
- (BOOL)isUploaded:(id *)uploaded;	// 0x35cfd5f1
- (BOOL)loadBaselineArchiveWithError:(id *)error;	// 0x35cfc145
// declared property getter: - (id)localPeerID;	// 0x35d00f2d
- (BOOL)makeCurrentBaselineWithError:(id *)error;	// 0x35cff029
// declared property getter: - (id)metadata;	// 0x35d00eb5
- (BOOL)metadataMatchesCurrentMetadata:(id *)metadata;	// 0x35cfd6bd
// declared property getter: - (id)modelVersionHash;	// 0x35d00f05
- (BOOL)moveToPermanentLocation:(id *)permanentLocation;	// 0x35cff9fd
- (id)optimizedModelData;	// 0x35d00395
- (BOOL)prepareForBaselineRollOfPersistentStore:(id)persistentStore withStoreMetadata:(id)storeMetadata andLocalPeerID:(id)anId error:(id *)error;	// 0x35cfb855
- (id)regularModelData;	// 0x35d003c9
- (BOOL)replaceLocalPersistentStoreAtURL:(id)url ofType:(id)type withOptions:(id)options usingPersistentStoreCoordinator:(id)coordinator error:(id *)error;	// 0x35cfd009
- (void)setCurrentLocation:(id)location;	// 0x35cfb619
// declared property getter: - (id)store;	// 0x35d00f41
- (id)storeData;	// 0x35d003fd
// declared property getter: - (id)storeFilename;	// 0x35d00ec9
// declared property getter: - (id)storeFilenameToData;	// 0x35d00edd
// declared property getter: - (id)storeName;	// 0x35d00ef1
// declared property getter: - (id)ubiquityRootLocation;	// 0x35d00e51
- (BOOL)unpackStoreFilesToStagingLocation:(id *)stagingLocation;	// 0x35cfcce5
- (BOOL)writeArchiveContentsToDiskAndMonitorUploadSynchronously:(BOOL)diskAndMonitorUploadSynchronously error:(id *)error;	// 0x35cff31d
@end
