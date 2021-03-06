/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, PFUbiquitySaveSnapshot, NSMutableDictionary, NSRecursiveLock, PFUbiquityLocation, NSNumber, PFUbiquityKnowledgeVector;

@interface PFUbiquityTransactionLog : NSObject {
	NSMutableDictionary *_contents;	// 4 = 0x4
	int _transactionLogType;	// 8 = 0x8
	BOOL _useTemporaryLogLocation;	// 12 = 0xc
	PFUbiquityLocation *_transactionLogLocation;	// 16 = 0x10
	PFUbiquityLocation *_temporaryTransactionLogLocation;	// 20 = 0x14
	PFUbiquityLocation *_stagingTransactionLogLocation;	// 24 = 0x18
	NSString *_fileProtectionOption;	// 28 = 0x1c
	NSNumber *_transactionNumber;	// 32 = 0x20
	BOOL _inTemporaryLocation;	// 36 = 0x24
	BOOL _inStagingLocation;	// 37 = 0x25
	BOOL _inPermanentLocation;	// 38 = 0x26
	PFUbiquityKnowledgeVector *_knowledgeVector;	// 40 = 0x28
	PFUbiquitySaveSnapshot *_saveSnapshot;	// 44 = 0x2c
	NSString *_localPeerID;	// 48 = 0x30
	BOOL _loadUsingRetry;	// 52 = 0x34
	BOOL _loadedComparisonMetadata;	// 53 = 0x35
	BOOL _loadedImportMetadata;	// 54 = 0x36
	BOOL _loadedContents;	// 55 = 0x37
	NSRecursiveLock *_contentsLock;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) PFUbiquityLocation *currentLocation;	// G=0x310188c5; 
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x3101884d; 
@property(readonly, assign, nonatomic) NSString *fileProtectionOption;	// G=0x3101dfbd; @synthesize=_fileProtectionOption
@property(readonly, assign, nonatomic) BOOL inPermanentLocation;	// G=0x3101df8d; @synthesize=_inPermanentLocation
@property(readonly, assign, nonatomic) BOOL inStagingLocation;	// G=0x3101df9d; @synthesize=_inStagingLocation
@property(readonly, assign, nonatomic) BOOL inTemporaryLocation;	// G=0x3101df7d; @synthesize=_inTemporaryLocation
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x3101e01d; @synthesize=_knowledgeVector
@property(assign, nonatomic) BOOL loadUsingRetry;	// G=0x3101e03d; S=0x3101e04d; @synthesize=_loadUsingRetry
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x3101e02d; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x31018875; 
@property(readonly, assign, nonatomic) PFUbiquitySaveSnapshot *saveSnapshot;	// G=0x3101dfcd; @synthesize=_saveSnapshot
@property(readonly, assign, nonatomic) PFUbiquityLocation *stagingTransactionLogLocation;	// G=0x3101dfed; @synthesize=_stagingTransactionLogLocation
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x31018825; 
@property(readonly, assign, nonatomic) PFUbiquityLocation *temporaryTransactionLogLocation;	// G=0x3101dffd; @synthesize=_temporaryTransactionLogLocation
@property(readonly, assign, nonatomic) NSString *transactionLogFilename;	// G=0x3101889d; 
@property(readonly, assign, nonatomic) PFUbiquityLocation *transactionLogLocation;	// G=0x3101dfdd; @synthesize=_transactionLogLocation
@property(readonly, assign, nonatomic) int transactionLogType;	// G=0x3101e00d; @synthesize=_transactionLogType
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x3101dfad; @synthesize=_transactionNumber
@property(assign, nonatomic) BOOL useTemporaryLogLocation;	// G=0x3101df5d; S=0x3101df6d; @synthesize=_useTemporaryLogLocation
+ (id)createTransactionLogFilenameForLogType:(int)logType;	// 0x3101d701
+ (id)generateTransactionLogFilename;	// 0x3101d7e9
+ (void)pruneStagingDirectoryForLocalPeerID:(id)localPeerID andStoreName:(id)name andModelVersionHash:(id)hash withStack:(id)stack andStoreTransactionNumber:(id)number;	// 0x3101bd61
+ (BOOL)pruneTemporaryLogDirectoryForPeerRootLocation:(id)peerRootLocation error:(id *)error;	// 0x3101d375
+ (id)transactionLogFilenameUUID;	// 0x3101d6e5
+ (int)transactionLogTypeFromLocation:(id)location;	// 0x3101d76d
+ (void)truncateLogFilesBeforeBaselineMetadata:(id)metadata withLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x3101c5b9
+ (void)updateModificationTimesForLocation:(id)location;	// 0x3101de09
- (id)init;	// 0x31017f3d
- (id)initWithStoreName:(id)storeName andSaveSnapshot:(id)snapshot;	// 0x310183fd
- (id)initWithTransactionLogLocation:(id)transactionLogLocation andLocalPeerID:(id)anId;	// 0x31018059
- (id)initWithTransactionLogURL:(id)transactionLogURL ubiquityRootLocation:(id)location andLocalPeerID:(id)anId;	// 0x31017ffd
- (void)cleanupExternalDataReferences;	// 0x3101a065
// declared property getter: - (id)currentLocation;	// 0x310188c5
- (void)dealloc;	// 0x31018675
- (BOOL)deleteLogFileWithError:(id *)error;	// 0x3101a2e5
- (id)description;	// 0x31018795
// declared property getter: - (id)exportingPeerID;	// 0x3101884d
// declared property getter: - (id)fileProtectionOption;	// 0x3101dfbd
- (id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)managedObjectContext;	// 0x3101bac1
// declared property getter: - (BOOL)inPermanentLocation;	// 0x3101df8d
// declared property getter: - (BOOL)inStagingLocation;	// 0x3101df9d
// declared property getter: - (BOOL)inTemporaryLocation;	// 0x3101df7d
// declared property getter: - (id)knowledgeVector;	// 0x3101e01d
- (BOOL)loadComparisonMetadataWithError:(id *)error;	// 0x31018ec9
- (BOOL)loadContents:(id *)contents;	// 0x31018b2d
- (BOOL)loadDeletedObjectsDataWithError:(id *)error;	// 0x3101964d
- (BOOL)loadImportMetadataWithError:(id *)error;	// 0x31019371
- (BOOL)loadInsertedObjectsDataWithError:(id *)error;	// 0x310194fd
- (id)loadPlistAtLocation:(id)location withError:(id *)error;	// 0x310196f5
- (BOOL)loadUpdatedObjectsDataWithError:(id *)error;	// 0x310195a5
// declared property getter: - (BOOL)loadUsingRetry;	// 0x3101e03d
// declared property getter: - (id)localPeerID;	// 0x3101e02d
// declared property getter: - (id)modelVersionHash;	// 0x31018875
- (BOOL)moveFileToPermanentLocationWithError:(id *)error;	// 0x3101a591
- (void)populateContents;	// 0x3101d815
- (BOOL)releaseContents:(id *)contents;	// 0x31018945
// declared property getter: - (id)saveSnapshot;	// 0x3101dfcd
// declared property setter: - (void)setLoadUsingRetry:(BOOL)retry;	// 0x3101e04d
// declared property setter: - (void)setUseTemporaryLogLocation:(BOOL)location;	// 0x3101df6d
// declared property getter: - (id)stagingTransactionLogLocation;	// 0x3101dfed
// declared property getter: - (id)storeName;	// 0x31018825
// declared property getter: - (id)temporaryTransactionLogLocation;	// 0x3101dffd
// declared property getter: - (id)transactionLogFilename;	// 0x3101889d
// declared property getter: - (id)transactionLogLocation;	// 0x3101dfdd
// declared property getter: - (int)transactionLogType;	// 0x3101e00d
// declared property getter: - (id)transactionNumber;	// 0x3101dfad
// declared property getter: - (BOOL)useTemporaryLogLocation;	// 0x3101df5d
- (BOOL)writeToDiskWithError:(id *)error andUpdateFilenameInTransactionEntries:(id)transactionEntries;	// 0x3101ae5d
@end

