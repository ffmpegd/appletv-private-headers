/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, PFUbiquityLocation, NSManagedObjectModel, NSPersistentStore, PFUbiquityBaselineMetadata, _PFZipFileArchive, NSMutableDictionary;

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
@property(readonly, assign) _PFZipFileArchive *baselineArchive;	// G=0x3359e629; @synthesize=_baselineArchive
@property(readonly, assign) PFUbiquityLocation *baselineArchiveLocation;	// G=0x3359e575; @synthesize=_baselineArchiveLocation
@property(readonly, assign) PFUbiquityLocation *baselinePeerArchiveLocation;	// G=0x3359e59d; @synthesize=_baselinePeerArchiveLocation
@property(readonly, assign) PFUbiquityLocation *baselineStagingLocation;	// G=0x3359e589; @synthesize=_baselineStagingLocation
@property(readonly, assign) PFUbiquityLocation *currentLocation;	// G=0x3359e5b1; @synthesize=_currentLocation
@property(readonly, assign) NSString *localPeerID;	// G=0x3359e63d; @synthesize=_localPeerID
@property(readonly, assign) PFUbiquityBaselineMetadata *metadata;	// G=0x3359e5c5; @synthesize=_metadata
@property(readonly, assign) NSString *modelVersionHash;	// G=0x3359e615; @synthesize=_modelVersionHash
@property(readonly, assign) NSPersistentStore *store;	// G=0x3359e651; @synthesize=_store
@property(readonly, assign) NSString *storeFilename;	// G=0x3359e5d9; @synthesize=_storeFilename
@property(readonly, assign) NSDictionary *storeFilenameToData;	// G=0x3359e5ed; @synthesize=_storeFilenameToData
@property(readonly, assign) NSString *storeName;	// G=0x3359e601; @synthesize=_storeName
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x3359e561; @synthesize=_ubiquityRootLocation
+ (BOOL)canRollBaselineForStoreMetadata:(id)storeMetadata withStack:(id)stack andManagedObjectModel:(id)model error:(id *)error;	// 0x3359b5f1
+ (BOOL)checkPeerReceiptsUnderRootLocation:(id)location forAgreementWithLocalPeerID:(id)localPeerID storeName:(id)name modelVersionHash:(id)hash error:(id *)error;	// 0x3359bd61
+ (id)createArchiveWithModel:(id)model metadata:(id)metadata storeFilenameToData:(id)data storeFilename:(id)filename error:(id *)error;	// 0x3359e2c1
+ (id)createBaselineGCModelForStoreName:(id)storeName modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x3359ddad
+ (id)createBaselineOptimizedModelForStoreName:(id)storeName modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x3359dc71
+ (id)createModelFromBaselineModelWithStoreMetadata:(id)storeMetadata;	// 0x3359dee9
+ (BOOL)enoughTransactionsHavePassedToRollBaseline:(id)rollBaseline withLocalPeerID:(id)localPeerID error:(id *)error;	// 0x3359aedd
+ (BOOL)logsConsumeEnoughDiskSpaceToRollBaseline:(id)rollBaseline withLocalPeerID:(id)localPeerID andStoreURL:(id)url error:(id *)error;	// 0x3359b1c9
+ (id)metadataFromBaselineArchive:(id)baselineArchive;	// 0x3359e27d
+ (id)metadataFromCurrentBaselineForStoreWithName:(id)name modelVersionHash:(id)hash andUbiquityRootLocation:(id)location withError:(id *)error;	// 0x3359dfb1
+ (unsigned)numRequiredTransactionsForBaselineRoll;	// 0x3359e519
+ (/*unknown-type-(D)*/ void*)requiredFractionOfDiskSpaceUsedForLogs;	// 0x3359e539
+ (void)setNumRequiredTransactionsForBaselineRoll:(unsigned)baselineRoll;	// 0x3359e529
+ (void)setRequiredFractionOfDiskSpaceUsedForLogs:(/*unknown-type-(D)*/ void*)logs;	// 0x3359e54d
- (id)init;	// 0x335986a9
- (id)initWithBaselineLocation:(id)baselineLocation andLocalPeerID:(id)anId;	// 0x33598999
- (id)initWithLocalPeerID:(id)localPeerID ubiquityRootLocation:(id)location forStoreWithName:(id)name andManagedObjectModel:(id)model;	// 0x335987bd
// declared property getter: - (id)baselineArchive;	// 0x3359e629
// declared property getter: - (id)baselineArchiveLocation;	// 0x3359e575
- (id)baselineMetadataData;	// 0x3359da71
// declared property getter: - (id)baselinePeerArchiveLocation;	// 0x3359e59d
// declared property getter: - (id)baselineStagingLocation;	// 0x3359e589
- (BOOL)clearOutStagingLocationWithError:(id *)error;	// 0x33598dd1
- (BOOL)constructBaselineArchive:(id *)archive;	// 0x3359979d
- (id)createManagedObjectModel;	// 0x3359db51
// declared property getter: - (id)currentLocation;	// 0x3359e5b1
- (void)dealloc;	// 0x33598b39
- (id)description;	// 0x33598cd1
- (BOOL)existsInCloud;	// 0x3359ac3d
- (BOOL)gatherContentsAndConstructArchiveWithError:(id *)error;	// 0x33599489
- (BOOL)gatherContentsFromMigratedBaseline:(id)migratedBaseline withStoreFileURL:(id)storeFileURL error:(id *)error;	// 0x3359929d
- (BOOL)importBaselineWithLocalPeerID:(id)localPeerID stack:(id)stack andPersistentStoreCoordinator:(id)coordinator error:(id *)error;	// 0x3359c4d1
- (BOOL)initializeBaselineArchiveWithError:(id *)error;	// 0x3359d585
- (BOOL)isUploaded:(id *)uploaded;	// 0x3359ad59
- (BOOL)loadBaselineArchiveWithError:(id *)error;	// 0x335998b9
// declared property getter: - (id)localPeerID;	// 0x3359e63d
- (BOOL)makeCurrentBaselineWithError:(id *)error;	// 0x3359c739
// declared property getter: - (id)metadata;	// 0x3359e5c5
- (BOOL)metadataMatchesCurrentMetadata:(id *)metadata;	// 0x3359ae25
// declared property getter: - (id)modelVersionHash;	// 0x3359e615
- (BOOL)moveToPermanentLocation:(id *)permanentLocation;	// 0x3359d10d
- (id)optimizedModelData;	// 0x3359daa5
- (BOOL)prepareForBaselineRollOfPersistentStore:(id)persistentStore withStoreMetadata:(id)storeMetadata andLocalPeerID:(id)anId error:(id *)error;	// 0x33598fc9
- (id)regularModelData;	// 0x3359dad9
- (BOOL)replaceLocalPersistentStoreDescribedByStoreMetadata:(id)metadata usingPersistentStoreCoordinator:(id)coordinator error:(id *)error;	// 0x3359a77d
- (void)setCurrentLocation:(id)location;	// 0x33598d8d
// declared property getter: - (id)store;	// 0x3359e651
- (id)storeData;	// 0x3359db0d
// declared property getter: - (id)storeFilename;	// 0x3359e5d9
// declared property getter: - (id)storeFilenameToData;	// 0x3359e5ed
// declared property getter: - (id)storeName;	// 0x3359e601
// declared property getter: - (id)ubiquityRootLocation;	// 0x3359e561
- (BOOL)unpackStoreFilesToStagingLocation:(id *)stagingLocation;	// 0x3359a459
- (BOOL)writeArchiveContentsToDiskAndMonitorUploadSynchronously:(BOOL)diskAndMonitorUploadSynchronously error:(id *)error;	// 0x3359ca2d
@end
