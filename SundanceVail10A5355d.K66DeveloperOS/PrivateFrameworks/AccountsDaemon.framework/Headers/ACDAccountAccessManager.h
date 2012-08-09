/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library
#import "AccountsDaemon-Structs.h"

@class NSSet;

@interface ACDAccountAccessManager : NSObject {
	NSSet *_accessPlugins;	// 4 = 0x4
	dispatch_queue_s *_accessPluginQueue;	// 8 = 0x8
	dispatch_semaphore_s *_accessPluginQueueSemaphore;	// 12 = 0xc
	id _authorizationCompletionHandler;	// 16 = 0x10
}
- (id)init;	// 0x37642361
- (void).cxx_destruct;	// 0x376437b5
- (id)_authorizationPluginForAccountType:(id)accountType;	// 0x376432e5
- (void)_presentAccessAlertforClient:(id)client onAccountType:(id)type withHandler:(id)handler;	// 0x37643519
- (void)authorizeAccessToAccounts:(id)accounts forClient:(id)client completion:(id)completion;	// 0x3764242d
- (void)dealloc;	// 0x376423d9
- (void)revokeAccessToAccounts:(id)accounts forClient:(id)client completion:(id)completion;	// 0x3764294d
- (void)revokeAllAccessToAccounts:(id)accounts withCompletion:(id)completion;	// 0x37642e49
@end
