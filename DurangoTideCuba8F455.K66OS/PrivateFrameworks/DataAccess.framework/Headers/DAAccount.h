/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "AccountCreationProtocol.h"
#import "BasicAccountSyncing.h"
#import "AccountFullAccountProtocol.h"
#import <BasicAccount.h> // Unknown library
#import "DataAccess-Structs.h"

@class DASettingsTemplate, NSMutableDictionary, DAStatusReport, NSString, NSURL, NSArray, NSData;

@interface DAAccount : BasicAccount <AccountFullAccountProtocol, AccountCreationProtocol, BasicAccountSyncing> {
	int _dataclasses;	// 20 = 0x14
	BOOL _hasDirtyBits;	// 24 = 0x18
	BOOL _hasInitted;	// 25 = 0x19
	BOOL _shouldAutodiscoverPrincipalURL;	// 26 = 0x1a
	BOOL _shouldPromptForPassword;	// 27 = 0x1b
	BOOL _shouldFailAllTasks;	// 28 = 0x1c
	int _originalDataclasses;	// 32 = 0x20
	CFDictionaryRef _changeTypesByDataclass;	// 36 = 0x24
	NSMutableDictionary *_haveWarnedAboutCertDict;	// 40 = 0x28
	DASettingsTemplate *_settingsTemplate;	// 44 = 0x2c
	DAStatusReport *_statusReport;	// 48 = 0x30
	NSString *_embargoedPassword;	// 52 = 0x34
	NSURL *_urlToRemoveFromKeychain;	// 56 = 0x38
	CFDictionaryRef _consumers;	// 60 = 0x3c
}
@property(copy) NSString *accountDescription;	// G=0x340abc99; S=0x340ace99; 
@property(assign, setter=setDAAccountVersion:) int daAccountVersion;	// G=0x340ab909; S=0x340ac5d9; 
@property(copy) NSString *emailAddress;	// G=0x340ad649; S=0x340ad60d; 
@property(copy) NSArray *emailAddresses;	// G=0x340aca11; S=0x340ad5d1; 
@property(readonly, assign) int enabledDataclassesBitmask;	// G=0x340ac1b9; @synthesize=_dataclasses
@property(readonly, assign) BOOL hasDirtyBits;	// G=0x340ac135; converted property
@property(copy) NSString *host;	// G=0x340ad739; S=0x340ad6fd; 
@property(copy) NSData *identityPersist;	// G=0x340ac91d; S=0x340ac901; 
@property(readonly, assign) BOOL isChildAccount;	// G=0x340ac14d; 
@property(copy) NSString *password;	// G=0x340acb15; S=0x340aca6d; 
@property(readonly, copy) NSString *persistentUUID;	// G=0x340ab779; 
@property(assign) int port;	// G=0x340ad595; S=0x340ad559; 
@property(copy) NSURL *principalURL;	// G=0x340ad469; S=0x340ad42d; 
@property(readonly, retain, nonatomic) NSString *scheduleIdentifier;	// G=0x340acee9; 
@property(copy) NSString *scheme;	// G=0x340ad4e1; S=0x340ad4a5; 
@property(retain) DASettingsTemplate *settingsTemplate;	// G=0x340ae195; S=0x340ae1ad; @synthesize=_settingsTemplate
@property(assign) BOOL shouldAutodiscoverPrincipalURL;	// G=0x340ac199; S=0x340ac1a9; @synthesize=_shouldAutodiscoverPrincipalURL
@property(assign) BOOL shouldFailAllTasks;	// G=0x340ac169; S=0x340ac179; @synthesize=_shouldFailAllTasks
@property(assign) BOOL shouldPromptForPassword;	// G=0x340ac111; S=0x340ac121; 
@property(readonly, assign) DAStatusReport *statusReport;	// G=0x340ac189; @synthesize=_statusReport
@property(readonly, copy) NSString *tag;	// G=0x340aced5; 
@property(assign) BOOL useSSL;	// G=0x340ad6c1; S=0x340ad685; 
@property(copy) NSString *user;	// G=0x340aca59; S=0x340aca45; 
@property(copy) NSString *username;	// G=0x340ad7b1; S=0x340ad775; 
@property(retain) id version;	// G=0x340ad829; S=0x340ad7ed; converted property
+ (Class)accountClass;	// 0x340acefd
+ (Class)accountClassWithProperties:(id)properties;	// 0x340ae2ad
+ (id)basicAccountProperties;	// 0x340ae1d9
+ (Class)classForAccountType:(id)accountType;	// 0x340ace69
+ (Class)clientClass;	// 0x340adbd5
+ (Class)daemonClass;	// 0x340adb99
+ (id)defaultProperties;	// 0x340ac151
+ (id)newAccountOfAccountType:(id)accountType;	// 0x340ac615
- (id)init;	// 0x340acf1d
- (id)initWithProperties:(id)properties;	// 0x340ab425
- (int)_actionForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x340ae50d
- (id)_exceptionsDict;	// 0x340ac8e5
- (void)_handlePasswordNotification:(CFUserNotificationRef)notification response:(unsigned long)response callback:(id)callback;	// 0x340aee69
- (void)_removeHostsToTrust;	// 0x340adfc5
- (void)_removePasswordFromKeychainKeepCache:(BOOL)keychainKeepCache;	// 0x340acb9d
- (void)_setPersistentUUID:(id)uuid;	// 0x340aceb9
- (void)_setProperties:(id)properties;	// 0x340ac9d1
- (BOOL)_upgradeSelfFromPreKirkwood;	// 0x340ad865
- (BOOL)accountBoolPropertyForKey:(id)key;	// 0x340ace45
- (int)accountChangeTypeForDataclass:(int)dataclass;	// 0x340adf65
- (BOOL)accountContainsEmailAddress:(id)address;	// 0x340adff1
// declared property getter: - (id)accountDescription;	// 0x340abc99
- (id)accountID;	// 0x340ab6d1
- (int)accountIntPropertyForKey:(id)key;	// 0x340acde5
- (BOOL)accountNeedsUpgrade;	// 0x340ad9cd
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x340ac109
- (void)cancelAllSearchQueries;	// 0x340b50f9
- (void)cancelAutodiscovery;	// 0x340ac10d
- (void)cancelSearchQuery:(id)query;	// 0x340b50f5
- (void)checkValidityWithConsumer:(id)consumer;	// 0x340ada89
- (void)cleanupAccountFiles;	// 0x340ac749
- (id)consumerForTask:(id)task;	// 0x340adf8d
- (id)contactsFolders;	// 0x340aefdd
// declared property getter: - (int)daAccountVersion;	// 0x340ab909
- (void)dealloc;	// 0x340ab831
- (id)defaultContactsFolder;	// 0x340aefd9
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x340ac149
- (id)defaultEventsFolder;	// 0x340aefa9
- (id)defaultNotesFolder;	// 0x340c3cdd
- (id)deletedItemsFolder;	// 0x340af02d
- (id)description;	// 0x340acfb1
- (id)domainOnly;	// 0x340ac105
// declared property getter: - (id)emailAddress;	// 0x340ad649
// declared property getter: - (id)emailAddresses;	// 0x340aca11
// declared property getter: - (int)enabledDataclassesBitmask;	// 0x340ac1b9
- (BOOL)enabledForDataclass:(int)dataclass;	// 0x340ac0d5
- (id)eventsFolders;	// 0x340aefad
- (CFDataRef)exceptionsForDigest:(id)digest;	// 0x340ac8a9
- (void)getRootFolderWithConsumer:(id)consumer;	// 0x340c9155
- (void)handleTrust:(SecTrust *)trust forHost:(id)host withCompletionBlock:(id)completionBlock;	// 0x340ae5ed
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x340ac31d
// converted property getter: - (BOOL)hasDirtyBits;	// 0x340ac135
- (BOOL)haveWarnedAboutCert:(id)cert;	// 0x340ac5a9
// declared property getter: - (id)host;	// 0x340ad739
// declared property getter: - (id)identityPersist;	// 0x340ac91d
- (id)inboxFolder;	// 0x340af025
- (BOOL)isActiveSyncAccount;	// 0x340ac155
- (BOOL)isCalDAVAccount;	// 0x340ac15d
- (BOOL)isCalDAVChildAccount;	// 0x340ac165
- (BOOL)isCardDAVAccount;	// 0x340ac161
// declared property getter: - (BOOL)isChildAccount;	// 0x340ac14d
- (BOOL)isDisabled;	// 0x340abc05
- (BOOL)isEqualToAccount:(id)account;	// 0x340ac3b5
- (BOOL)isLDAPAccount;	// 0x340ac159
- (int)keychainAccessibilityType;	// 0x340ac131
- (id)localizedIdenticalAccountFailureMessage;	// 0x340ac289
- (id)localizedInvalidPasswordMessage;	// 0x340ac1f5
- (BOOL)monitorFolderWithID:(id)anId;	// 0x340ac999
- (BOOL)monitorFoldersWithIDs:(id)ids;	// 0x340ac145
- (id)notesFolders;	// 0x340c3ce1
- (BOOL)originallyEnabledForDataclass:(int)dataclass;	// 0x340ac0ed
// declared property getter: - (id)password;	// 0x340acb15
- (void)performSearchQuery:(id)query consumer:(id)consumer;	// 0x340b5105
// declared property getter: - (id)persistentUUID;	// 0x340ab779
// declared property getter: - (int)port;	// 0x340ad595
// declared property getter: - (id)principalURL;	// 0x340ad469
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x340af031
- (void)removeClientCertificateData;	// 0x340ae165
- (void)removeConsumerForTask:(id)task;	// 0x340adfa9
- (void)removePasswordFromKeychain;	// 0x340acb85
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x340ae9a9
- (void)resetAccountID;	// 0x340adeb5
- (BOOL)resetCertWarnings;	// 0x340ac501
- (void)resetStatusReport;	// 0x340ac449
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x340adb5d
- (void)saveAccountProperties;	// 0x340ac939
- (void)saveAccountSettings;	// 0x340ac661
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x340ad309
// declared property getter: - (id)scheduleIdentifier;	// 0x340acee9
// declared property getter: - (id)scheme;	// 0x340ad4e1
- (BOOL)searchQueriesRunning;	// 0x340b50fd
- (BOOL)sendEmailsForCalEvents:(id)calEvents consumer:(id)consumer;	// 0x340aefb5
- (id)sentItemsFolder;	// 0x340af029
- (void)setAccountBoolProperty:(BOOL)property forKey:(id)key;	// 0x340ace09
// declared property setter: - (void)setAccountDescription:(id)description;	// 0x340ace99
- (void)setAccountIntProperty:(int)property forKey:(id)key;	// 0x340acdad
- (void)setConsumer:(id)consumer forTask:(id)task;	// 0x340ad039
// declared property setter: - (void)setDAAccountVersion:(int)version;	// 0x340ac5d9
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x340ad60d
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x340ad5d1
- (void)setEmbargoedPassword:(id)password;	// 0x340ad281
- (void)setEnabled:(BOOL)enabled forDataclass:(int)dataclass changeType:(int)type;	// 0x340adc11
- (void)setExceptions:(CFDataRef)exceptions forDigest:(id)digest;	// 0x340ac795
- (void)setHaveWarnedAboutCert:(id)cert;	// 0x340ac52d
// declared property setter: - (void)setHost:(id)host;	// 0x340ad6fd
// declared property setter: - (void)setIdentityPersist:(id)persist;	// 0x340ac901
- (void)setP12Data:(id)data password:(id)password;	// 0x340ae0b1
// declared property setter: - (void)setPassword:(id)password;	// 0x340aca6d
// declared property setter: - (void)setPort:(int)port;	// 0x340ad559
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x340ad42d
// declared property setter: - (void)setScheme:(id)scheme;	// 0x340ad4a5
// declared property setter: - (void)setSettingsTemplate:(id)aTemplate;	// 0x340ae1ad
// declared property setter: - (void)setShouldAutodiscoverPrincipalURL:(BOOL)autodiscoverPrincipalURL;	// 0x340ac1a9
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x340ac179
// declared property setter: - (void)setShouldPromptForPassword:(BOOL)promptForPassword;	// 0x340ac121
// declared property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x340ad685
// declared property setter: - (void)setUser:(id)user;	// 0x340aca45
// declared property setter: - (void)setUsername:(id)username;	// 0x340ad775
// converted property setter: - (void)setVersion:(id)version;	// 0x340ad7ed
// declared property getter: - (id)settingsTemplate;	// 0x340ae195
- (BOOL)shouldAllowTrust:(SecTrust *)trust forHost:(id)host;	// 0x340ae2d5
// declared property getter: - (BOOL)shouldAutodiscoverPrincipalURL;	// 0x340ac199
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x340ac169
// declared property getter: - (BOOL)shouldPromptForPassword;	// 0x340ac111
- (id)stateString;	// 0x340acd45
// declared property getter: - (id)statusReport;	// 0x340ac189
- (void)stopMonitoringFolderWithID:(id)anId;	// 0x340adac5
- (void)stopMonitoringFolders;	// 0x340ad349
- (void)stopMonitoringFoldersWithIDs:(id)ids;	// 0x340ad395
- (BOOL)supportsDataclass:(int)dataclass;	// 0x340ade79
- (int)supportsMailboxSearch;	// 0x340b5101
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x340adb11
- (id)syncStoreIdentifier;	// 0x340ab81d
- (void)synchronizeBookmarkTreeWithConsumer:(id)consumer hasRemoteChanges:(BOOL)changes;	// 0x340c9159
- (void)synchronizeContactsFolder:(id)folder previousTag:(id)tag previousSyncToken:(id)token actions:(id)actions highestIdContext:(XXStruct_K5nmsA *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x340aefe1
- (void)synchronizeEventsFolder:(id)folder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x340aefb1
- (void)synchronizeNotesFolder:(id)folder noteContext:(id)context previousTag:(id)tag actions:(id)actions changeSet:(id)set notesToDeleteAfterSync:(id)deleteAfterSync isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x340c3ce5
// declared property getter: - (id)tag;	// 0x340aced5
- (void)takeValuesFromAccount:(id)account;	// 0x340acc79
- (void)tearDown;	// 0x340ad3e1
- (BOOL)upgradeAccount;	// 0x340acc19
- (id)urlForKeychain;	// 0x340ad51d
// declared property getter: - (BOOL)useSSL;	// 0x340ad6c1
// declared property getter: - (id)user;	// 0x340aca59
// declared property getter: - (id)username;	// 0x340ad7b1
- (id)usernameWithoutDomain;	// 0x340acc65
// converted property getter: - (id)version;	// 0x340ad829
@end

