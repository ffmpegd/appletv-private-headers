/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <ASAccountActor.h> // Unknown library
#import "ASAccountActorMessages.h"

@class ASClientAccount;

@interface ASConcreteAccountActor : ASAccountActor <ASAccountActorMessages> {
	ASClientAccount *_account;	// 8 = 0x8
}
- (id)initWithDAAccount:(id)daaccount;	// 0x30a1fcfd
- (oneway void)_accountPasswordChanged;	// 0x30a1fbd1
- (oneway void)_daemonDiedNotification:(id)notification;	// 0x30a1f9f9
- (void)_findScheduler;	// 0x30a1fbf1
- (oneway void)_folderHierarchyChanged;	// 0x30a1fb91
- (oneway void)_folderUpdatedNotification:(id)notification;	// 0x30a1fa19
- (oneway void)_foldersThatExternalClientsCareAboutChanged;	// 0x30a1fbb1
- (oneway void)_newASPolicyKeyNotification:(id)notification;	// 0x30a1fad5
- (oneway void)cancelAllSearchQueries;	// 0x30a1f315
- (oneway void)cancelSearchQuery:(id)query;	// 0x30a1f2f5
- (oneway void)cancelTaskWithID:(int)anId;	// 0x30a1f2b5
- (void)dealloc;	// 0x30a1fe59
- (id)deletedItemsFolder;	// 0x30a1f399
- (id)encryptionIdentityPersistentReference;	// 0x30a1efdd
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)dataclasses withTag:(id *)tag;	// 0x30a1f109
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)tag;	// 0x30a1f0bd
- (id)foldersTag;	// 0x30a1f09d
- (BOOL)generatesBulletins;	// 0x30a1eee1
- (id)inboxFolder;	// 0x30a1f359
- (BOOL)isHotmailAccount;	// 0x30a1f3b9
- (int)mailNumberOfPastDaysToSync;	// 0x30a1ee81
- (id)mailboxes;	// 0x30a1ee61
- (oneway void)monitorFoldersForUpdates:(id)updates;	// 0x30a1f03d
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x30a1f235
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x30a1f255
- (void)performFolderChange:(id)change;	// 0x30a1f295
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x30a1f1d5
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x30a1f1f5
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x30a1f215
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x30a1f275
- (oneway void)performSearchQuery:(id)query;	// 0x30a1f2d5
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x30a1f18d
- (BOOL)searchQueriesRunning;	// 0x30a1f335
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;	// 0x30a1f1b5
- (id)sentItemsFolder;	// 0x30a1f379
- (oneway void)setAccount:(id)account;	// 0x30a1f5f1
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x30a1effd
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x30a1f159
- (oneway void)setGeneratesBulletins:(BOOL)bulletins;	// 0x30a1ef29
- (oneway void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x30a1f01d
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x30a1efbd
- (oneway void)shutdown;	// 0x30a1f7f5
- (id)signingIdentityPersistentReference;	// 0x30a1ef9d
- (oneway void)startup;	// 0x30a1f3dd
- (oneway void)stopMonitoringAllFolders;	// 0x30a1f07d
- (oneway void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x30a1f05d
- (int)supportsEmailFlagging;	// 0x30a1eec1
- (int)supportsMailboxSearch;	// 0x30a1eea1
@end
