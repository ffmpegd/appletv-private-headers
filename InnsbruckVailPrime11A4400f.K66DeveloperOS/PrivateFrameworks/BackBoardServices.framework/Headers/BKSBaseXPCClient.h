/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import </libobjc.A.h>

@class BKSSignal, NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BKSBaseXPCClient : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
	BKSSignal *_invalidationSignal;	// 12 = 0xc
	NSObject<OS_xpc_object> *_serverEndpoint;	// 16 = 0x10
	NSString *_serviceName;	// 20 = 0x14
}
- (id)initWithEndpoint:(id)endpoint;	// 0x301ce471
- (id)initWithServiceName:(id)serviceName;	// 0x301ce3b9
- (id)initWithServiceName:(id)serviceName endpoint:(id)endpoint;	// 0x301ce3cd
- (id)_connection;	// 0x301cea69
- (id)_errorFromMessageIfAny:(id)messageIfAny;	// 0x301ce665
- (id)_getStringFromMessage:(id)message key:(char *)key;	// 0x301ce6e5
- (BOOL)_isServerRegistered;	// 0x301ceb91
- (id)_notifyTokenName;	// 0x301cea29
- (void)_sendMessage:(id)message withReplyHandler:(id)replyHandler waitForReply:(BOOL)reply waitDuration:(double)duration;	// 0x301ce719
- (void)_setEndpoint:(id)endpoint;	// 0x301ceb69
- (void)dealloc;	// 0x301ce48d
- (void)invalidate;	// 0x301ce5e9
- (void)queue_connectionWasCreated;	// 0x301cec01
- (void)queue_connectionWasInvalidated;	// 0x301cf171
- (void)queue_handleMessage:(id)message;	// 0x301cebfd
- (void)queue_invalidate;	// 0x301cf0bd
- (void)queue_registerWithServerIfNecessary;	// 0x301cec05
- (void)queue_reregister;	// 0x301cf08d
- (void)reconnectIfNecessary;	// 0x301ce56d
@end
