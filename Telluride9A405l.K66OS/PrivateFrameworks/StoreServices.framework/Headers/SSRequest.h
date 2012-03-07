/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSString, SSRequestGroup;
@protocol SSRequestDelegate;

@interface SSRequest : NSObject <SSCoding> {
@private
	int _backgroundTaskIdentifier;	// 4 = 0x4
	BOOL _cancelAfterTaskExpiration;	// 8 = 0x8
	id<SSRequestDelegate> _delegate;	// 12 = 0xc
	SSRequestGroup *_group;	// 16 = 0x10
	NSString *_groupIdentifier;	// 20 = 0x14
	NSString *_identifier;	// 24 = 0x18
	NSLock *_lock;	// 28 = 0x1c
	int _state;	// 32 = 0x20
}
@property(assign, nonatomic) id<SSRequestDelegate> delegate;	// G=0x365026f9; S=0x36502709; @synthesize=_delegate
@property(assign, nonatomic) SSRequestGroup *requestGroup;	// G=0x36501de9; S=0x36501e61; 
@property(retain, nonatomic) NSString *requestGroupIdentifier;	// G=0x36502719; S=0x36502729; @synthesize=_groupIdentifier
@property(retain, nonatomic) NSString *requestIdentifier;	// G=0x36501e21; S=0x3650274d; @synthesize=_identifier
@property(readonly, assign) int requestState;	// G=0x36501b15; 
@property(assign, nonatomic) BOOL shouldCancelAfterTaskExpiration;	// G=0x36502771; S=0x36502781; @synthesize=_cancelAfterTaskExpiration
- (id)init;	// 0x365017a5
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3650192d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x365019b9
- (void)_beginBackgroundTask;	// 0x365021e5
- (void)_daemonExited:(id)exited;	// 0x36501f39
- (void)_endBackgroundTask;	// 0x36502381
- (void)_failWithError:(id)error;	// 0x36502451
- (void)_finish;	// 0x3650256d
- (id)_initSSRequest;	// 0x36501725
- (void)_mainThreadDaemonExited:(id)exited;	// 0x36502039
- (id)_newIdentifier;	// 0x36502641
- (void)_requestFailedNotification:(id)notification;	// 0x365020a5
- (void)_requestFinishedNotification:(id)notification;	// 0x36502135
- (void)_setRequestState:(int)state;	// 0x36502665
- (void)awakeFromDaemonInRequestGroup:(id)requestGroup;	// 0x36501c35
- (void)cancel;	// 0x365019f5
- (id)copyPropertyListEncoding;	// 0x36501871
- (void *)copyXPCEncoding;	// 0x365018f9
- (void)dealloc;	// 0x365017b5
// declared property getter: - (id)delegate;	// 0x365026f9
- (void)disconnect;	// 0x36501a85
- (void)handleBackgroundTaskExpiration;	// 0x36501c89
- (void)handleDaemonExit;	// 0x36501c8d
- (id)handleFailureResponse:(id)response;	// 0x36501c91
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x36501cdd
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x36501ce9
- (void)registerForDaemonNotifications;	// 0x36501d0d
// declared property getter: - (id)requestGroup;	// 0x36501de9
// declared property getter: - (id)requestGroupIdentifier;	// 0x36502719
// declared property getter: - (id)requestIdentifier;	// 0x36501e21
// declared property getter: - (int)requestState;	// 0x36501b15
- (void)sendDidFailWithError:(id)send;	// 0x36501e59
- (void)sendDidFinish;	// 0x36501e5d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36502709
// declared property setter: - (void)setRequestGroup:(id)group;	// 0x36501e61
// declared property setter: - (void)setRequestGroupIdentifier:(id)identifier;	// 0x36502729
// declared property setter: - (void)setRequestIdentifier:(id)identifier;	// 0x3650274d
// declared property setter: - (void)setShouldCancelAfterTaskExpiration:(BOOL)cancelAfterTaskExpiration;	// 0x36502781
// declared property getter: - (BOOL)shouldCancelAfterTaskExpiration;	// 0x36502771
- (BOOL)start;	// 0x36501b61
- (void)unregisterForDaemonNotifications;	// 0x36501ea5
@end

