/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DALocalDBGateKeeper.h"

@class NSString, NSMutableDictionary;

@interface DAConcreteLocalDBGateKeeper : DALocalDBGateKeeper {
	NSString *_buildVersion;	// 68 = 0x44
	NSMutableDictionary *_refreshingWaiters;	// 72 = 0x48
	NSMutableDictionary *_failedWaiters;	// 76 = 0x4c
	NSMutableDictionary *_restrictedWaiters;	// 80 = 0x50
}
- (id)init;	// 0x337b7329
- (void)_abortWaiterForWrappers:(id)wrappers;	// 0x337b8381
- (BOOL)_canWakenWaiter:(id)waiter;	// 0x337b7f15
- (void)_decrementRefreshCountForWaiterID:(id)waiterID didFinish:(BOOL)finish;	// 0x337b81b9
- (void)_notifyWaitersForDataclasses:(id)dataclasses;	// 0x337b894d
- (void)_reloadBabysitterProperties;	// 0x337b6b45
- (void)_removeRestrictedWaitersFromAllQueues;	// 0x337b8659
- (void)_sendAllClearNotifications;	// 0x337b9361
- (BOOL)babysitterEnabled;	// 0x337b72f9
- (void)claimedOwnershipOfDataclasses:(int)dataclasses;	// 0x337ba2b5
- (void)dealloc;	// 0x337b74e1
- (void)giveAccountWithIDAnotherChance:(id)idanotherChance;	// 0x337b7a89
- (void)registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x337b8fc9
- (void)relinquishLocksForWaiter:(id)waiter dataclasses:(int)dataclasses moreComing:(BOOL)coming;	// 0x337b9be9
- (void)setBookmarksLockHolder:(id)holder;	// 0x337b7e55
- (void)setContactsLockHolder:(id)holder;	// 0x337b7c15
- (void)setEventsLockHolder:(id)holder;	// 0x337b7cd5
- (void)setNotesLockHolder:(id)holder;	// 0x337b7d95
- (id)stateString;	// 0x337ba355
- (void)unregisterWaiterForDataclassLocks:(id)dataclassLocks;	// 0x337b9835
@end

