/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <BasicAccount.h> // Unknown library
#import "DataAccess-Structs.h"
#import "AccountCreationProtocol.h"
#import "BasicAccountSyncing.h"
#import "AccountFullAccountProtocol.h"

@class NSMutableDictionary, DAStatusReport, NSString, NSData, NSURL, NSArray, DASettingsTemplate;

@interface DAAccount : BasicAccount <AccountFullAccountProtocol, AccountCreationProtocol, BasicAccountSyncing> {
	int _dataclasses;	// 24 = 0x18
	BOOL _hasDirtyBits;	// 28 = 0x1c
	BOOL _hasInitted;	// 29 = 0x1d
	BOOL _shouldAutodiscoverPrincipalURL;	// 30 = 0x1e
	BOOL _shouldPromptForPassword;	// 31 = 0x1f
	BOOL _shouldFailAllTasks;	// 32 = 0x20
	BOOL _shouldUseOpportunisticSockets;	// 33 = 0x21
	int _originalDataclasses;	// 36 = 0x24
	CFDictionaryRef _changeTypesByDataclass;	// 40 = 0x28
	NSMutableDictionary *_haveWarnedAboutCertDict;	// 44 = 0x2c
	DASettingsTemplate *_settingsTemplate;	// 48 = 0x30
	DAStatusReport *_statusReport;	// 52 = 0x34
	CFDictionaryRef _consumers;	// 56 = 0x38
	CFURLStorageSessionRef _storageSession;	// 60 = 0x3c
}
@property(copy) NSString *accountDescription;	// G=0x33798b79; S=0x33799279; 
@property(assign, setter=setDAAccountVersion:) int daAccountVersion;	// G=0x337987ed; S=0x3379ad91; 
@property(copy) NSString *emailAddress;	// G=0x3379a245; S=0x3379a291; 
@property(copy) NSArray *emailAddresses;	// G=0x3379a2d9; S=0x3379a311; 
@property(readonly, assign) int enabledDataclassesBitmask;	// G=0x3379b2c1; @synthesize=_dataclasses
@property(retain) NSData *encryptionIdentityPersistentReference;	// G=0x3379a4ad; 
@property(readonly, assign) BOOL hasDirtyBits;	// G=0x3379a791; converted property
@property(copy) NSString *host;	// G=0x3379a11d; S=0x3379a169; 
@property(readonly, assign) NSData *identityPersist;	// G=0x3379aa09; 
@property(readonly, assign) BOOL isChildAccount;	// G=0x3379ad35; 
@property(copy) NSString *password;	// G=0x33799e59; S=0x33799fa1; 
@property(readonly, assign) NSString *persistentUUID;	// G=0x3379864d; 
@property(assign) int port;	// G=0x3379a541; S=0x3379a58d; 
@property(copy) NSURL *principalURL;	// G=0x3379a6b5; S=0x3379a701; 
@property(readonly, assign, nonatomic) NSString *scheduleIdentifier;	// G=0x3379923d; 
@property(copy) NSString *scheme;	// G=0x3379a621; S=0x3379a66d; 
@property(retain) DASettingsTemplate *settingsTemplate;	// G=0x3379b2f1; S=0x3379b305; @synthesize=_settingsTemplate
@property(assign) BOOL shouldAutodiscoverPrincipalURL;	// G=0x3379b2d1; S=0x3379b2e1; @synthesize=_shouldAutodiscoverPrincipalURL
@property(assign) BOOL shouldFailAllTasks;	// G=0x3379b339; S=0x3379b349; @synthesize=_shouldFailAllTasks
@property(assign) BOOL shouldPromptForPassword;	// G=0x33799e39; S=0x33799e49; 
@property(assign) BOOL shouldUseOpportunisticSockets;	// G=0x3379b359; S=0x3379b369; @synthesize=_shouldUseOpportunisticSockets
@property(retain) NSData *signingIdentityPersistentReference;	// G=0x3379a419; 
@property(readonly, assign) DAStatusReport *statusReport;	// G=0x3379b329; @synthesize=_statusReport
@property(readonly, assign) NSString *tag;	// G=0x3379924d; 
@property(assign) int toDosNumberOfPastDaysToSync;	// G=0x337a68c9; S=0x337a68cd; converted property
@property(assign) BOOL useSSL;	// G=0x3379a1b1; S=0x3379a1fd; 
@property(copy) NSString *user;	// G=0x3379a0fd; S=0x3379a10d; 
@property(copy) NSString *username;	// G=0x3379a069; S=0x3379a0b5; 
@property(retain) id version;	// G=0x33799fd5; S=0x3379a021; converted property
+ (Class)accountClass;	// 0x3379915d
+ (Class)accountClassWithProperties:(id)properties;	// 0x33799639
+ (id)basicAccountProperties;	// 0x33798fd9
+ (Class)classForAccountType:(id)accountType;	// 0x33799701
+ (Class)clientClass;	// 0x33799669
+ (Class)daemonClass;	// 0x337996b5
+ (id)defaultProperties;	// 0x3379ad39
+ (id)newAccountOfAccountType:(id)accountType;	// 0x3379ad3d
- (id)init;	// 0x337990b5
- (id)initWithProperties:(id)properties;	// 0x33798291
- (int)_actionForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x3379b379
- (id)_exceptionsDict;	// 0x3379ab45
- (void)_handlePasswordNotification:(CFUserNotificationRef)notification response:(unsigned long)response callback:(id)callback;	// 0x3379c82d
- (BOOL)_isIdentityManagedByProfile;	// 0x3379ab05
- (void)_removeHostsToTrust;	// 0x33799b85
- (id)_serverSuffixesToAlwaysFail;	// 0x3379b479
- (void)_setPersistentUUID:(id)uuid;	// 0x3379925d
- (void)_setProperties:(id)properties;	// 0x3379a749
- (BOOL)_upgradeSelfFromPreKirkwood;	// 0x33799c8d
- (BOOL)accountBoolPropertyForKey:(id)key;	// 0x33799739
- (int)accountChangeTypeForDataclass:(int)dataclass;	// 0x337995c1
- (BOOL)accountContainsEmailAddress:(id)address;	// 0x3379a359
// declared property getter: - (id)accountDescription;	// 0x33798b79
- (id)accountID;	// 0x33798591
- (int)accountIntPropertyForKey:(id)key;	// 0x337997a1
- (BOOL)accountNeedsUpgrade;	// 0x33799bb5
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x33799b7d
- (id)beginDownloadingAttachmentWithUUID:(id)uuid consumer:(id)consumer;	// 0x3379c9d5
- (void)cancelAllSearchQueries;	// 0x337a4d69
- (void)cancelAutodiscovery;	// 0x33799b81
- (void)cancelDownloadingInstance:(id)instance error:(id)error;	// 0x3379ca75
- (void)cancelSearchQuery:(id)query;	// 0x337a4d65
- (void)checkValidityWithConsumer:(id)consumer;	// 0x33799b35
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x3379b0a1
- (BOOL)childKeyIsSharedForWriting:(id)writing;	// 0x3379b149
- (void)cleanupAccountFiles;	// 0x3379acd9
- (id)consumerForTask:(id)task;	// 0x33799af1
- (id)contactsFolders;	// 0x3379caa5
- (CFURLStorageSessionRef)copyStorageSession;	// 0x3379b14d
// declared property getter: - (int)daAccountVersion;	// 0x337987ed
- (void)dealloc;	// 0x33798715
- (id)defaultContactsFolder;	// 0x3379caa1
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x3379a8f1
- (id)defaultEventsFolder;	// 0x3379c9c5
- (id)defaultNotesFolder;	// 0x337b485d
- (id)defaultToDosFolder;	// 0x337a68bd
- (id)deletedItemsFolder;	// 0x3379cb05
- (id)description;	// 0x3379bfad
- (id)domainOnly;	// 0x33799a95
// declared property getter: - (id)emailAddress;	// 0x3379a245
// declared property getter: - (id)emailAddresses;	// 0x3379a2d9
// declared property getter: - (int)enabledDataclassesBitmask;	// 0x3379b2c1
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x337992e1
// declared property getter: - (id)encryptionIdentityPersistentReference;	// 0x3379a4ad
- (id)eventsFolders;	// 0x3379c9c9
- (CFDataRef)exceptionsForDigest:(id)digest;	// 0x3379ab61
- (void)getRootFolderWithConsumer:(id)consumer;	// 0x337bab55
- (void)handleTrust:(SecTrust *)trust forHost:(id)host withCompletionBlock:(id)completionBlock;	// 0x3379b501
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x3379bc79
// converted property getter: - (BOOL)hasDirtyBits;	// 0x3379a791
- (BOOL)haveWarnedAboutCert:(id)cert forHost:(id)host;	// 0x3379add5
// declared property getter: - (id)host;	// 0x3379a11d
// declared property getter: - (id)identityPersist;	// 0x3379aa09
- (id)inboxFolder;	// 0x3379cafd
- (BOOL)isActiveSyncAccount;	// 0x3379b089
- (BOOL)isCalDAVAccount;	// 0x3379b091
- (BOOL)isCalDAVChildAccount;	// 0x3379b099
- (BOOL)isCardDAVAccount;	// 0x3379b095
// declared property getter: - (BOOL)isChildAccount;	// 0x3379ad35
- (BOOL)isDisabled;	// 0x33798ad1
- (BOOL)isEqualToAccount:(id)account;	// 0x3379afe9
- (BOOL)isHotmailAccount;	// 0x3379b09d
- (BOOL)isLDAPAccount;	// 0x3379b08d
- (int)keychainAccessibilityType;	// 0x33799f09
- (id)localizedIdenticalAccountFailureMessage;	// 0x3379c03d
- (id)localizedInvalidPasswordMessage;	// 0x3379c0dd
- (BOOL)monitorFolderWithID:(id)anId;	// 0x3379a801
- (BOOL)monitorFoldersWithIDs:(id)ids;	// 0x3379a7fd
- (id)notesFolders;	// 0x337b4861
- (BOOL)originallyEnabledForDADataclass:(int)dadataclass;	// 0x337995a9
// declared property getter: - (id)password;	// 0x33799e59
- (void)performSearchQuery:(id)query;	// 0x337a4cc1
// declared property getter: - (id)persistentUUID;	// 0x3379864d
// declared property getter: - (int)port;	// 0x3379a541
// declared property getter: - (id)principalURL;	// 0x3379a6b5
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x3379cb09
- (void)removeClientCertificateData;	// 0x3379a8f5
- (void)removeConsumerForTask:(id)task;	// 0x33799b15
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x3379c17d
- (void)resetAccountID;	// 0x33799179
- (BOOL)resetCertWarnings;	// 0x3379aee9
- (void)resetStatusReport;	// 0x3379af19
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x33799809
- (void)saveAccountProperties;	// 0x3379a94d
- (void)saveAccountSettings;	// 0x3379ad21
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x3379a9bd
// declared property getter: - (id)scheduleIdentifier;	// 0x3379923d
// declared property getter: - (id)scheme;	// 0x3379a621
- (BOOL)searchQueriesRunning;	// 0x337a4d6d
- (BOOL)sendEmailsForCalEvents:(id)calEvents consumer:(id)consumer;	// 0x3379c9d1
- (id)sentItemsFolder;	// 0x3379cb01
- (void)setAccountBoolProperty:(BOOL)property forKey:(id)key;	// 0x33799761
// declared property setter: - (void)setAccountDescription:(id)description;	// 0x33799279
- (void)setAccountIntProperty:(int)property forKey:(id)key;	// 0x337997c9
- (void)setConsumer:(id)consumer forTask:(id)task;	// 0x33799a99
// declared property setter: - (void)setDAAccountVersion:(int)version;	// 0x3379ad91
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3379a291
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x3379a311
- (void)setEnabled:(BOOL)enabled forDADataclass:(int)dadataclass changeType:(int)type;	// 0x337992f9
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x3379a4f9
- (void)setExceptions:(CFDataRef)exceptions forDigest:(id)digest;	// 0x3379aba5
- (void)setHaveWarnedAboutCert:(id)cert forHost:(id)host;	// 0x3379ae21
// declared property setter: - (void)setHost:(id)host;	// 0x3379a169
- (void)setIdentityCertificatePersistentID:(id)anId managedByProfile:(BOOL)profile;	// 0x3379aa25
// declared property setter: - (void)setPassword:(id)password;	// 0x33799fa1
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x33799f0d
// declared property setter: - (void)setPort:(int)port;	// 0x3379a58d
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3379a701
// declared property setter: - (void)setScheme:(id)scheme;	// 0x3379a66d
// declared property setter: - (void)setSettingsTemplate:(id)aTemplate;	// 0x3379b305
// declared property setter: - (void)setShouldAutodiscoverPrincipalURL:(BOOL)autodiscoverPrincipalURL;	// 0x3379b2e1
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x3379b349
// declared property setter: - (void)setShouldPromptForPassword:(BOOL)promptForPassword;	// 0x33799e49
// declared property setter: - (void)setShouldUseOpportunisticSockets:(BOOL)useOpportunisticSockets;	// 0x3379b369
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x3379a465
// converted property setter: - (void)setToDosNumberOfPastDaysToSync:(int)sync;	// 0x337a68cd
// declared property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x3379a1fd
// declared property setter: - (void)setUser:(id)user;	// 0x3379a10d
// declared property setter: - (void)setUsername:(id)username;	// 0x3379a0b5
// converted property setter: - (void)setVersion:(id)version;	// 0x3379a021
// declared property getter: - (id)settingsTemplate;	// 0x3379b2f1
// declared property getter: - (BOOL)shouldAutodiscoverPrincipalURL;	// 0x3379b2d1
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x3379b339
// declared property getter: - (BOOL)shouldPromptForPassword;	// 0x33799e39
// declared property getter: - (BOOL)shouldUseOpportunisticSockets;	// 0x3379b359
// declared property getter: - (id)signingIdentityPersistentReference;	// 0x3379a419
- (id)spinnerIdentifiers;	// 0x337995ed
- (id)stateString;	// 0x33799909
// declared property getter: - (id)statusReport;	// 0x3379b329
- (void)stopMonitoringFolderWithID:(id)anId;	// 0x337998ad
- (void)stopMonitoringFolders;	// 0x3379a895
- (void)stopMonitoringFoldersWithIDs:(id)ids;	// 0x3379a839
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x33799299
- (int)supportsEmailFlagging;	// 0x337a4d75
- (int)supportsMailboxSearch;	// 0x337a4d71
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x33799851
- (id)syncStoreIdentifier;	// 0x33798705
- (void)synchronizeBookmarkTreeWithConsumer:(id)consumer hasRemoteChanges:(BOOL)changes;	// 0x337bab59
- (void)synchronizeContactsFolder:(id)folder previousTag:(id)tag previousSyncToken:(id)token actions:(id)actions highestIdContext:(XXStruct_K5nmsA *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed previousTagIsSuspect:(BOOL)suspect consumer:(id)consumer;	// 0x3379caa9
- (void)synchronizeEventsFolder:(id)folder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x3379c9cd
- (void)synchronizeNotesFolder:(id)folder noteContext:(id)context previousTag:(id)tag actions:(id)actions changeSet:(id)set notesToDeleteAfterSync:(id)deleteAfterSync isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x337b4865
- (void)synchronizeToDosFolder:(id)dosFolder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x337a68c5
// declared property getter: - (id)tag;	// 0x3379924d
- (void)takeValuesFromAccount:(id)account;	// 0x33799989
- (void)tearDown;	// 0x3379a7a1
- (id)toDosFolders;	// 0x337a68c1
// converted property getter: - (int)toDosNumberOfPastDaysToSync;	// 0x337a68c9
- (BOOL)upgradeAccount;	// 0x33799de1
- (id)urlForKeychain;	// 0x3379a5d5
// declared property getter: - (BOOL)useSSL;	// 0x3379a1b1
// declared property getter: - (id)user;	// 0x3379a0fd
// declared property getter: - (id)username;	// 0x3379a069
- (id)usernameWithoutDomain;	// 0x33799a85
// converted property getter: - (id)version;	// 0x33799fd5
@end

