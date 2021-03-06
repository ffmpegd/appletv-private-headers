/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <ASAccountActor.h> // Unknown library
#import "DAEAS-Structs.h"
#import "ASAccountActorMessages.h"

@class ASClientAccount;

@interface ASConcreteAccountActor : ASAccountActor <ASAccountActorMessages> {
	ASClientAccount *_account;	// 8 = 0x8
}
+ (CFRunLoopRef)_actorRunLoop;	// 0x339cd94d
+ (void)_runActorThreadWithStartupLock:(id)startupLock;	// 0x339cd861
- (id)initWithDAAccount:(id)daaccount;	// 0x339d25e9
- (oneway void)_accountPasswordChanged;	// 0x339d2539
- (oneway void)_daemonDiedNotification:(id)notification;	// 0x339d2069
- (oneway void)_folderHierarchyChanged;	// 0x339d23e1
- (oneway void)_folderUpdatedNotification:(id)notification;	// 0x339d2115
- (oneway void)_foldersThatExternalClientsCareAboutChanged;	// 0x339d248d
- (oneway void)_newASPolicyKeyNotification:(id)notification;	// 0x339d2281
- (void)_performAsynchronousSerialOnActorQueue:(id)queue;	// 0x339cda75
- (void)_performSynchronousSerialOnActorQueue:(id)queue;	// 0x339cdad5
- (void)_sendFailureToConsumer:(id)consumer;	// 0x339cfc09
- (oneway void)cancelAllSearchQueries;	// 0x339d1031
- (oneway void)cancelSearchQuery:(id)query;	// 0x339d0f55
- (oneway void)cancelTaskWithID:(int)anId;	// 0x339d0d51
- (id)customSignature;	// 0x339ceab5
- (void)dealloc;	// 0x339d2701
- (id)delegateeInvitationICSRepresentationForMetaData:(id)metaData inFolderWithId:(id)anId outSummary:(id *)summary;	// 0x339cf961
- (id)deletedItemsFolder;	// 0x339d1625
- (void)disable;	// 0x339d1e55
- (id)encryptionIdentityPersistentReference;	// 0x339ce801
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)dataclasses withTag:(id *)tag;	// 0x339cf32d
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)tag;	// 0x339cf0cd
- (BOOL)generatesBulletins;	// 0x339ce28d
- (id)inboxFolder;	// 0x339d1275
- (BOOL)isHotmailAccount;	// 0x339d17fd
- (int)mailNumberOfPastDaysToSync;	// 0x339cddd1
- (id)mailboxes;	// 0x339cdbe5
- (oneway void)monitorFoldersForUpdates:(id)updates;	// 0x339cee69
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x339d05cd
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x339d07fd
- (void)performFolderChange:(id)change isUserRequested:(BOOL)requested;	// 0x339d0be5
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag isUserRequested:(BOOL)requested consumer:(id)consumer;	// 0x339cff21
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag isUserRequested:(BOOL)requested consumer:(id)consumer;	// 0x339d017d
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x339d03d9
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x339d09f1
- (oneway void)performSearchQuery:(id)query;	// 0x339d0e01
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x339cf78d
- (BOOL)searchQueriesRunning;	// 0x339d10dd
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 useSmartTasksIfPossible:(BOOL)possible consumer:(id)consumer context:(void *)context;	// 0x339cfc59
- (id)sentItemsFolder;	// 0x339d144d
- (oneway void)setAccount:(id)account;	// 0x339d1ba9
- (oneway void)setCustomSignature:(id)signature;	// 0x339ceca5
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x339ce9d9
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x339cf591
- (oneway void)setGeneratesBulletins:(BOOL)bulletins;	// 0x339ce44d
- (oneway void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x339cedb9
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x339ce725
- (oneway void)shutdown;	// 0x339d1e45
- (id)signingIdentityPersistentReference;	// 0x339ce54d
- (oneway void)startup;	// 0x339d1995
- (oneway void)stopMonitoringAllFolders;	// 0x339cf021
- (oneway void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x339cef45
- (int)supportsEmailFlagging;	// 0x339ce0f9
- (int)supportsMailboxSearch;	// 0x339cdf65
@end

