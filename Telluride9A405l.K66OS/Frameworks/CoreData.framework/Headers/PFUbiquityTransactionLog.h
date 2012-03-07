/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSNumber, PFUbiquityKnowledgeVector, PFUbiquitySaveSnapshot, NSMutableDictionary, NSString, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionLog : NSObject {
@private
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
}
@property(readonly, assign, nonatomic) PFUbiquityLocation *currentLocation;	// G=0x34073279; 
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x34073349; 
@property(readonly, assign, nonatomic) NSString *fileProtectionOption;	// G=0x3406f625; @synthesize=_fileProtectionOption
@property(readonly, assign, nonatomic) BOOL inPermanentLocation;	// G=0x3406f655; @synthesize=_inPermanentLocation
@property(readonly, assign, nonatomic) BOOL inStagingLocation;	// G=0x3406f645; @synthesize=_inStagingLocation
@property(readonly, assign, nonatomic) BOOL inTemporaryLocation;	// G=0x3406f665; @synthesize=_inTemporaryLocation
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x3406f5c5; @synthesize=_knowledgeVector
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x34073321; 
@property(readonly, assign, nonatomic) PFUbiquitySaveSnapshot *saveSnapshot;	// G=0x3406f615; @synthesize=_saveSnapshot
@property(readonly, assign, nonatomic) PFUbiquityLocation *stagingTransactionLogLocation;	// G=0x3406f5f5; @synthesize=_stagingTransactionLogLocation
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x34073371; 
@property(readonly, assign, nonatomic) PFUbiquityLocation *temporaryTransactionLogLocation;	// G=0x3406f5e5; @synthesize=_temporaryTransactionLogLocation
@property(readonly, assign, nonatomic) NSString *transactionLogFilename;	// G=0x340732f9; 
@property(readonly, assign, nonatomic) PFUbiquityLocation *transactionLogLocation;	// G=0x3406f605; @synthesize=_transactionLogLocation
@property(readonly, assign, nonatomic) int transactionLogType;	// G=0x3406f5d5; @synthesize=_transactionLogType
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x3406f635; @synthesize=_transactionNumber
@property(assign, nonatomic) BOOL useTemporaryLogLocation;	// G=0x3406f675; S=0x3406f685; @synthesize=_useTemporaryLogLocation
+ (id)createTransactionLogFilenameForLogType:(int)logType;	// 0x3406fb61
+ (id)generateTransactionLogFilename;	// 0x3406fabd
+ (id)loadPlistAtLocation:(id)location withError:(id *)error;	// 0x34070c51
+ (void)pruneStagingDirectoryForLocalPeerID:(id)localPeerID andStoreName:(id)name andModelVersionHash:(id)hash withStack:(id)stack andStoreTransactionNumber:(id)number;	// 0x340705b1
+ (id)transactionLogFilenameUUID;	// 0x3406fbc5
+ (int)transactionLogTypeFromLocation:(id)location;	// 0x3406fae9
+ (void)truncateLogFilesBeforeBaselineMetadata:(id)metadata withLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x3406fbe1
+ (void)updateModificationTimesForLocation:(id)location;	// 0x3406f971
- (id)initWithStoreName:(id)storeName andSaveSnapshot:(id)snapshot;	// 0x3406f6ed
- (id)initWithTransactionLogLocation:(id)transactionLogLocation;	// 0x34073509
- (id)initWithTransactionLogURL:(id)transactionLogURL andUbiquityRootLocation:(id)location;	// 0x3406f695
- (void)cleanupExternalDataReferences;	// 0x34072b49
// declared property getter: - (id)currentLocation;	// 0x34073279
- (void)dealloc;	// 0x34073429
- (BOOL)deleteLogFileWithError:(id *)error;	// 0x34072925
- (id)description;	// 0x34073399
// declared property getter: - (id)exportingPeerID;	// 0x34073349
// declared property getter: - (id)fileProtectionOption;	// 0x3406f625
- (id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)managedObjectContext;	// 0x340718d9
// declared property getter: - (BOOL)inPermanentLocation;	// 0x3406f655
// declared property getter: - (BOOL)inStagingLocation;	// 0x3406f645
// declared property getter: - (BOOL)inTemporaryLocation;	// 0x3406f665
// declared property getter: - (id)knowledgeVector;	// 0x3406f5c5
- (BOOL)loadComparisonMetadataWithError:(id *)error;	// 0x34072f89
- (BOOL)loadDeletedObjectsDataWithError:(id *)error;	// 0x34072ce1
- (BOOL)loadImportMetadataWithError:(id *)error;	// 0x34072e91
- (BOOL)loadInsertedObjectsDataWithError:(id *)error;	// 0x34072e01
- (BOOL)loadUpdatedObjectsDataWithError:(id *)error;	// 0x34072d71
// declared property getter: - (id)modelVersionHash;	// 0x34073321
- (BOOL)moveFileToPermanentLocationWithError:(id *)error;	// 0x340722cd
- (void)populateContents;	// 0x34071269
// declared property getter: - (id)saveSnapshot;	// 0x3406f615
// declared property setter: - (void)setUseTemporaryLogLocation:(BOOL)location;	// 0x3406f685
// declared property getter: - (id)stagingTransactionLogLocation;	// 0x3406f5f5
// declared property getter: - (id)storeName;	// 0x34073371
// declared property getter: - (id)temporaryTransactionLogLocation;	// 0x3406f5e5
// declared property getter: - (id)transactionLogFilename;	// 0x340732f9
// declared property getter: - (id)transactionLogLocation;	// 0x3406f605
// declared property getter: - (int)transactionLogType;	// 0x3406f5d5
// declared property getter: - (id)transactionNumber;	// 0x3406f635
// declared property getter: - (BOOL)useTemporaryLogLocation;	// 0x3406f675
- (BOOL)writeToDiskWithError:(id *)error andUpdateFilenameInTransactionEntries:(id)transactionEntries;	// 0x34071b75
@end

