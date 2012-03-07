/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAAccount.h> // Unknown library
#import "DAEAS-Structs.h"

@class ASFolderHierarchy, ASProtocol, ASTaskManager, NSMutableSet, NSLock, NSMutableArray, ASAutodiscoverTask;

@interface ASAccount : DAAccount {
	ASFolderHierarchy *_folderHierarchy;	// 64 = 0x40
	ASTaskManager *_taskManager;	// 68 = 0x44
	ASProtocol *_protocol;	// 72 = 0x48
	NSMutableSet *_searchTaskSet;	// 76 = 0x4c
	NSMutableArray *_autodiscoveryServersToTry;	// 80 = 0x50
	NSLock *_autodiscoverTaskLock;	// 84 = 0x54
	ASAutodiscoverTask *_autodiscoverTask;	// 88 = 0x58
	BOOL _useHTTPForTesting;	// 92 = 0x5c
	BOOL _useLocalhostForAutodiscoveryTesting;	// 93 = 0x5d
	BOOL _isValidating;	// 94 = 0x5e
}
@property(assign, setter=setASAccountVersion:) int asAccountVersion;	// G=0x3155fbe1; S=0x3155fc15; 
@property(retain) id emailAddress;	// G=0x3155fed5; S=0x3155fef1; converted property
@property(retain) id emailAddresses;	// G=0x3155ff6d; S=0x3155ffe9; converted property
@property(retain) id encryptionIdentityPersistentReference;	// G=0x31560575; S=0x31560591; converted property
@property(retain) id host;	// G=0x3155fd7d; S=0x3155fd99; converted property
@property(retain) id lastKnownProtocolVersion;	// G=0x31560369; S=0x315604dd; converted property
@property(assign) int mailNumberOfPastDaysToSync;	// G=0x315602dd; S=0x3156034d; 
@property(readonly, assign) int mailNumberOfPastDaysToSyncUpperLimit;	// G=0x31560231; 
@property(assign) int port;	// G=0x3155fe15; S=0x3155fe31; converted property
@property(readonly, retain) ASProtocol *protocol;	// G=0x31560711; converted property
@property(retain) id savedFolderPathsThatClientsCareAbout;	// G=0x315603f9; S=0x31560415; converted property
@property(retain) id signingIdentityPersistentReference;	// G=0x31560511; S=0x3156052d; converted property
@property(readonly, retain) ASTaskManager *taskManager;	// G=0x3155a351; converted property
@property(assign) BOOL useSSL;	// G=0x3155fe4d; S=0x3155fe6d; converted property
@property(retain) id username;	// G=0x3155fc59; S=0x3155fc75; converted property
+ (Class)accountClass;	// 0x3155a165
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x3155a3dd
+ (Class)clientClass;	// 0x31564e85
+ (id)defaultProperties;	// 0x3155a621
+ (id)supportedDataclasses;	// 0x3155a79d
- (id)initWithProperties:(id)properties;	// 0x3155a099
- (void *)_copyDefaultExchangeEventsCalendar:(BOOL)calendar;	// 0x3155e4c1
- (void *)_copyExchangeCalendarStore:(BOOL)store;	// 0x3155e1bd
- (id)_defaultMailFolderWithDefaultType:(int)defaultType fallbackType:(int)type fallbackName:(id)name;	// 0x3155c031
- (void)_fillOutActionsArray:(id)array responseArray:(id)array2 withTask:(id)task added:(id)added removed:(id)removed modified:(id)modified perserved:(id)perserved addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x3155c3dd
- (id)_folderHierarchy;	// 0x3155b395
- (BOOL)_generateAutodiscoverURLsForEmailAddress:(id)emailAddress;	// 0x3155f025
- (void)_getContextElementsForItemChangeType:(int)itemChangeType dataclass:(int)dataclass nativeContext:(id)context outContext:(id *)context4 outServerId:(id *)anId;	// 0x3155c365
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x3155abe1
- (id)_newPolicyManager;	// 0x3155a095
- (id)_oldURLsForKeychain;	// 0x3155a971
- (void)_removeInvitationsForMailboxFolderID:(id)mailboxFolderID;	// 0x3155cac5
- (BOOL)_shouldSaveLastKnownProtocolVersion;	// 0x315604d9
- (void)_startAutodiscoverTaskWithConsumer:(id)consumer;	// 0x3155f331
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x3155abed
- (id)_visibleASFolders;	// 0x3155b419
- (void)accountDidUpdateProtocolVersion;	// 0x31560819
- (BOOL)accountNeedsUpgrade;	// 0x3155b081
- (id)addressBookConstraintsPath;	// 0x315607f1
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x3155df3d
// declared property getter: - (int)asAccountVersion;	// 0x3155fbe1
- (id)asFolderHierarchyTaskManager:(id)manager;	// 0x3155c295
- (id)asFolderWithId:(id)anId;	// 0x3155c23d
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x3155f4b5
- (void)autodiscoverTask:(id)task completedWithStatus:(int)status accountInfo:(id)info shouldRetryWithEmail:(id)email error:(id)error;	// 0x3155f6ed
- (void)blowAwayFolderCache;	// 0x3155c215
- (id)calendarConstraintsPath;	// 0x315607c9
- (void)cancelAllSearchQueries;	// 0x3155eb71
- (void)cancelAutodiscovery;	// 0x3155f2c1
- (void)cancelSearchQuery:(id)query;	// 0x3155ea29
- (void)cancelTaskWithID:(int)anId;	// 0x3155e191
- (void)checkValidityWithConsumer:(id)consumer;	// 0x3155a3f9
- (void)cleanupAccountFiles;	// 0x3155a311
- (id)contactsFolders;	// 0x3155b9cd
- (void)dealloc;	// 0x3155a181
- (id)defaultContactsFolder;	// 0x3155b82d
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x3155c2f9
- (id)defaultEventsFolder;	// 0x3155bad9
- (id)defaultToDosFolder;	// 0x3155bd85
- (id)deletedItemsFolder;	// 0x3155c1c1
- (id)displayName;	// 0x3155a851
- (id)domainOnly;	// 0x3156081d
// converted property getter: - (id)emailAddress;	// 0x3155fed5
// converted property getter: - (id)emailAddresses;	// 0x3155ff6d
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x3155b179
// converted property getter: - (id)encryptionIdentityPersistentReference;	// 0x31560575
- (id)eventsFolders;	// 0x3155bc79
- (id)existingTaskManager;	// 0x3155a3cd
- (void)fetchAttachmentTask:(id)task completedWithStatus:(int)status dataWasBase64:(BOOL)a64 error:(id)error;	// 0x3155d839
- (void)fetchAttachmentTask:(id)task receivedData:(id)data ofContentType:(id)contentType;	// 0x3155d7cd
- (id)folderIdsThatExternalClientsCareAbout;	// 0x3155c2a5
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x3155c2cd
- (void)folderItemsSyncTask:(id)task completedWithStatus:(int)status error:(id)error newSyncKey:(id)key added:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x3155cc21
- (BOOL)folderItemsSyncTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x3155d361
- (BOOL)folderItemsSyncTask:(id)task hasPartialAdded:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response6 removedResponse:(id)response7 fetchedResponse:(id)response8 moreAvailable:(BOOL)available;	// 0x3155d589
- (id)folderWithId:(id)anId;	// 0x3155c269
- (id)foldersTag;	// 0x3155c1ed
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x3155a4a5
// converted property getter: - (id)host;	// 0x3155fd7d
- (id)inboxFolder;	// 0x3155c169
- (BOOL)isActiveSyncAccount;	// 0x3156088d
- (BOOL)isEqualToAccount:(id)account;	// 0x31560959
- (BOOL)isGoogleAccount;	// 0x315608f5
- (BOOL)isHotmailAccount;	// 0x31560891
- (void)itemOperationsTask:(id)task completedWithStatus:(int)status error:(id)error responses:(id)responses;	// 0x3155d8a5
- (BOOL)itemOperationsTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x3155dab1
- (BOOL)itemOperationsTask:(id)task hasPartialResponses:(id)responses;	// 0x3155dcbd
// converted property getter: - (id)lastKnownProtocolVersion;	// 0x31560369
- (id)localizedIdenticalAccountFailureMessage;	// 0x31560b85
- (id)localizedInvalidPasswordMessage;	// 0x31560c35
// declared property getter: - (int)mailNumberOfPastDaysToSync;	// 0x315602dd
// declared property getter: - (int)mailNumberOfPastDaysToSyncUpperLimit;	// 0x31560231
- (void)moveItemsTask:(id)task completedWithStatus:(int)status error:(id)error movedItems:(id)items;	// 0x3155e65d
- (CFStringRef)passwordChangedNotificationName;	// 0x3155a909
- (CFStringRef)passwordIsKnownGoodNotificationName;	// 0x3155a93d
- (void)performSearchQuery:(id)query;	// 0x3155ec49
- (id)policyManager;	// 0x3155a299
// converted property getter: - (int)port;	// 0x3155fe15
// converted property getter: - (id)protocol;	// 0x31560711
- (void)resetAccountID;	// 0x3155b345
- (void)saveAccountSettings;	// 0x3155a2c1
// converted property getter: - (id)savedFolderPathsThatClientsCareAbout;	// 0x315603f9
- (BOOL)searchQueriesRunning;	// 0x3155ee6d
- (void)searchTask:(id)task finishedWithError:(id)error;	// 0x3155ef45
- (void)searchTask:(id)task returnedResults:(id)results;	// 0x3155ee95
- (void)searchTask:(id)task returnedTotalCount:(id)count;	// 0x3155eedd
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x3155def9
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;	// 0x3155df81
- (id)sentItemsFolder;	// 0x3155c195
// declared property setter: - (void)setASAccountVersion:(int)version;	// 0x3155fc15
// converted property setter: - (void)setEmailAddress:(id)address;	// 0x3155fef1
// converted property setter: - (void)setEmailAddresses:(id)addresses;	// 0x3155ffe9
- (void)setEnabled:(BOOL)enabled forDADataclass:(int)dadataclass changeType:(int)type;	// 0x3155b1c9
// converted property setter: - (void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x31560591
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x3155c361
// converted property setter: - (void)setHost:(id)host;	// 0x3155fd99
// converted property setter: - (void)setLastKnownProtocolVersion:(id)version;	// 0x315604dd
- (void)setLastKnownProtocolVersion:(id)version save:(BOOL)save;	// 0x31560385
// declared property setter: - (void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x3156034d
// converted property setter: - (void)setPort:(int)port;	// 0x3155fe31
- (void)setProtocolVersion:(id)version;	// 0x31560621
// converted property setter: - (void)setSavedFolderPathsThatClientsCareAbout:(id)about;	// 0x31560415
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x3155fb39
// converted property setter: - (void)setSigningIdentityPersistentReference:(id)reference;	// 0x3156052d
- (void)setUseHTTPForTesting:(BOOL)testing;	// 0x3155f2a1
- (void)setUseLocalhostForAutodiscoveryTesting:(BOOL)autodiscoveryTesting;	// 0x3155f2b1
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x3155fe6d
// converted property setter: - (void)setUsername:(id)username;	// 0x3155fc75
- (id)shortTypeString;	// 0x3155a8b5
- (BOOL)shouldFixOnDiskDeviceId;	// 0x3155c3d9
- (BOOL)shouldSavePropertiesForFolderPathsThatClientsCareAbout;	// 0x315603f5
// converted property getter: - (id)signingIdentityPersistentReference;	// 0x31560511
- (int)sniffableTypeForFolder:(id)folder;	// 0x3155b6b1
- (id)stateString;	// 0x3155a59d
- (id)supportedDataclasses;	// 0x3155a7bd
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x3155a57d
- (int)supportsEmailFlagging;	// 0x315607a1
- (int)supportsMailboxSearch;	// 0x31560779
// converted property getter: - (id)taskManager;	// 0x3155a351
- (id)toDosFolders;	// 0x3155bf25
- (id)typeString;	// 0x3155a861
- (BOOL)upgradeAccount;	// 0x3155aff9
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x315605d9
// converted property getter: - (BOOL)useSSL;	// 0x3155fe4d
// converted property getter: - (id)username;	// 0x3155fc59
- (id)usernameWithoutDomain;	// 0x3155fcf1
- (id)visibleFolders;	// 0x3155b3fd
@end

