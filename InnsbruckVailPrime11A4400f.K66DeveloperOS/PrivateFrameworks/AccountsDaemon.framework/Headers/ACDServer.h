/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import "NSXPCListenerDelegate.h"
#import "ACDAccountStoreDelegate.h"
#import </libobjc.A.h>

@class ACDAccessPluginManager, ACDDataclassOwnersManager, NSXPCListener, ACDAuthenticationPluginManager, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ACDServer : NSObject <NSXPCListenerDelegate, ACDAccountStoreDelegate> {
	NSXPCListener *_accountStoreListener;	// 4 = 0x4
	NSXPCListener *_oauthSignerListener;	// 8 = 0x8
	NSMutableArray *_accountStoreClients;	// 12 = 0xc
	NSMutableArray *_oauthSignerClients;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_deferredConnectionResumeQueue;	// 20 = 0x14
	NSObject<OS_dispatch_semaphore> *_deferredConnectionResumeQueueSemaphore;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_performMigrationQueue;	// 28 = 0x1c
	BOOL _shouldExit;	// 32 = 0x20
	ACDAuthenticationPluginManager *_authenticationPluginManager;	// 36 = 0x24
	ACDAccessPluginManager *_accessPluginManager;	// 40 = 0x28
	ACDDataclassOwnersManager *_dataclassOwnersManager;	// 44 = 0x2c
}
@property(retain, nonatomic) ACDAccessPluginManager *accessPluginManager;	// G=0x2fe9bda1; S=0x2fe9d879; @synthesize=_accessPluginManager
@property(retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager;	// G=0x2fe9bd49; S=0x2fe9d851; @synthesize=_authenticationPluginManager
@property(retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager;	// G=0x2fe9bdf9; S=0x2fe9d8a1; @synthesize=_dataclassOwnersManager
@property(assign, nonatomic) BOOL shouldExit;	// G=0x2fe9d8c9; S=0x2fe9d8d9; @synthesize=_shouldExit
+ (id)sharedServer;	// 0x2fe9b339
- (id)init;	// 0x2fe9b3bd
- (void).cxx_destruct;	// 0x2fe9d8e9
- (void)_beginObservingLanguageChangeNotfication;	// 0x2fe9d419
- (id)_newDaemonAccountStoreFilterForClient:(id)client;	// 0x2fe9d1e1
- (id)_newOAuthSignerForClient:(id)client;	// 0x2fe9d339
- (void)_signalDeferredConnectionResumeQueueSemaphore;	// 0x2fe9d385
- (void)_stopObservingLanguageChangeNotification;	// 0x2fe9d4cd
// declared property getter: - (id)accessPluginManager;	// 0x2fe9bda1
- (void)accountStoreDidSaveAccounts;	// 0x2fe9d4ed
// declared property getter: - (id)authenticationPluginManager;	// 0x2fe9bd49
- (id)clientForConnection:(id)connection;	// 0x2fe9d191
- (void)credentialsDidChangeForAccountWithIdentifier:(id)credentials;	// 0x2fe9d555
// declared property getter: - (id)dataclassOwnersManager;	// 0x2fe9bdf9
- (void)dealloc;	// 0x2fe9b8c9
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;	// 0x2fe9be51
// declared property setter: - (void)setAccessPluginManager:(id)manager;	// 0x2fe9d879
// declared property setter: - (void)setAuthenticationPluginManager:(id)manager;	// 0x2fe9d851
// declared property setter: - (void)setDataclassOwnersManager:(id)manager;	// 0x2fe9d8a1
// declared property setter: - (void)setShouldExit:(BOOL)exit;	// 0x2fe9d8d9
- (void)setUpWithAccountStoreConnectionListener:(id)accountStoreConnectionListener oauthSignerConnectionListener:(id)listener;	// 0x2fe9b941
// declared property getter: - (BOOL)shouldExit;	// 0x2fe9d8c9
- (void)shutdown;	// 0x2fe9ba31
@end

