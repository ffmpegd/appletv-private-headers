/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@protocol SKRequestDelegate;

__attribute__((visibility("hidden")))
@interface SKRequest : NSObject {
@private
	id _requestInternal;	// 4 = 0x4
}
@property(assign, nonatomic) id<SKRequestDelegate> delegate;	// G=0x30435415; S=0x30435435; 
- (id)init;	// 0x30435151
- (void)_beginBackgroundTask;	// 0x30435841
- (void)_daemonExited:(id)exited;	// 0x30435491
- (void)_endBackgroundTask;	// 0x30435845
- (void)_mainThreadDaemonExited:(id)exited;	// 0x304354bd
- (id)_newIdentifier;	// 0x30435849
- (void)_registerForNotifications;	// 0x3043586d
- (void)_requestFailedNotification:(id)notification;	// 0x3043555d
- (void)_requestFinishedNotification:(id)notification;	// 0x304356f9
- (void)_sendErrorToDelegate:(id)delegate;	// 0x30435949
- (void)_sendFinishToDelegate;	// 0x304359cd
- (void)_unregisterForNotifications;	// 0x30435a45
- (void)cancel;	// 0x30435219
- (void)dealloc;	// 0x304351b5
// declared property getter: - (id)delegate;	// 0x30435415
- (BOOL)handleFinishResponse:(id)response returningError:(id *)error;	// 0x30435455
- (void)issueRequestForIdentifier:(id)identifier;	// 0x30435461
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30435435
- (void)start;	// 0x304352f5
@end

