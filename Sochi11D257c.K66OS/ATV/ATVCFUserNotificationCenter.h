/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVUserNotificationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableIndexSet, NSNumber;

__attribute__((visibility("hidden")))
@interface ATVCFUserNotificationCenter : XXUnknownSuperclass <ATVUserNotificationDelegate> {
	id<ATVUserNotificationDelegate> _externalHandler;	// 4 = 0x4
	NSMutableIndexSet *_transactionIdentifiers;	// 8 = 0x8
	unsigned _firstAvailableTransactionIdentifier;	// 12 = 0xc
	NSNumber *_autoSubmittedPasswordAccountIdentifier;	// 16 = 0x10
}
+ (id)sharedInstance;	// 0x35d6d
+ (void)startUserNotificationCenter;	// 0x35b79
- (id)init;	// 0x35d7d
- (void).cxx_destruct;	// 0x36af9
- (void)_handleAccountActivity;	// 0x36979
- (BOOL)_notificationViewController:(id)controller shouldAutoSubmitPasswordForAccount:(id)account;	// 0x36a45
- (void)_notificationViewController:(id)controller willAutoSubmitPasswordForAccount:(id)account;	// 0x36aa5
- (void)_userNotificationDone:(id)done;	// 0x365a1
- (id)beginPurchaseTransaction;	// 0x36689
- (void)commitPurchaseTransaction:(id)transaction;	// 0x367e5
- (void)setNotificationHandler:(id)handler cvvOperaion:(Class)operaion hsaOperation:(Class)operation;	// 0x35de9
- (void)userNotificationCenterDidCancelCFNotification:(id)userNotificationCenter;	// 0x36455
- (void)userNotificationCenterDidReceiveCFNotification:(id)userNotificationCenter;	// 0x35f35
@end

