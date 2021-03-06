/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSArray, SSXPCConnection;
@protocol SSDownloadHandlerDelegate;

@interface SSDownloadHandler : NSObject {
@private
	SSXPCConnection *_controlConnection;	// 4 = 0x4
	id<SSDownloadHandlerDelegate> _delegate;	// 8 = 0x8
	dispatch_queue_s *_dispatchQueue;	// 12 = 0xc
	NSArray *_downloadPhasesToIgnore;	// 16 = 0x10
	long long _handlerID;	// 20 = 0x14
	SSXPCConnection *_observerConnection;	// 28 = 0x1c
	BOOL _sessionsNeedPowerAssertion;	// 32 = 0x20
	BOOL _sessionsShouldBlockOtherDownloads;	// 33 = 0x21
}
@property(assign) id<SSDownloadHandlerDelegate> delegate;	// G=0x33cadd8d; S=0x33cae30d; 
@property(copy) NSArray *downloadPhasesToIgnore;	// G=0x33cadf3d; S=0x33cae3b9; 
@property(readonly, assign) long long handlerIdentifier;	// G=0x33cae0d9; 
@property(assign) BOOL sessionsNeedPowerAssertion;	// G=0x33cae165; S=0x33cae4cd; 
@property(assign) BOOL sessionsShouldBlockOtherDownloads;	// G=0x33cae239; S=0x33cae581; 
- (id)init;	// 0x33cadad9
- (void)_connectToDaemon;	// 0x33cae835
- (id)_controlConnection;	// 0x33caeb51
- (void)_handleMessage:(void *)message fromServerConnection:(xpc_connection_s *)serverConnection;	// 0x33caeced
- (id)_newSessionWithMessage:(void *)message;	// 0x33caef69
- (BOOL)_sendAuthenticationSessionWithMessage:(void *)message;	// 0x33caefd9
- (void)_sendDisconnectMessage;	// 0x33caf0d5
- (BOOL)_sendSessionCancelWithMessage:(void *)message;	// 0x33caf145
- (BOOL)_sendSessionHandleWithMessage:(void *)message;	// 0x33caf1ed
- (BOOL)_sendSessionPauseWithMessage:(void *)message;	// 0x33caf295
- (void)_setValue:(void *)value forProperty:(const char *)property;	// 0x33caf341
- (void)dealloc;	// 0x33cadc69
// declared property getter: - (id)delegate;	// 0x33cadd8d
- (id)description;	// 0x33cae635
// declared property getter: - (id)downloadPhasesToIgnore;	// 0x33cadf3d
// declared property getter: - (long long)handlerIdentifier;	// 0x33cae0d9
- (void)resetDisavowedSessions;	// 0x33cae0f1
// declared property getter: - (BOOL)sessionsNeedPowerAssertion;	// 0x33cae165
// declared property getter: - (BOOL)sessionsShouldBlockOtherDownloads;	// 0x33cae239
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33cae30d
// declared property setter: - (void)setDownloadPhasesToIgnore:(id)ignore;	// 0x33cae3b9
// declared property setter: - (void)setSessionsNeedPowerAssertion:(BOOL)assertion;	// 0x33cae4cd
// declared property setter: - (void)setSessionsShouldBlockOtherDownloads:(BOOL)blockOtherDownloads;	// 0x33cae581
@end

