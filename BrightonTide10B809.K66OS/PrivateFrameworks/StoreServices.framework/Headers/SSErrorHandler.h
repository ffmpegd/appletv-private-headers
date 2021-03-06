/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection, NSArray;
@protocol SSErrorHandlerDelegate, OS_dispatch_queue;

@interface SSErrorHandler : NSObject {
	SSXPCConnection *_controlConnection;	// 4 = 0x4
	id<SSErrorHandlerDelegate> _delegate;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_delegateQueue;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
	NSArray *_failureTypes;	// 20 = 0x14
	SSXPCConnection *_observerConnection;	// 24 = 0x18
}
@property(assign) id<SSErrorHandlerDelegate> delegate;	// G=0x355068f1; S=0x35506c65; 
@property(copy) NSArray *failureTypes;	// G=0x35506ab5; S=0x35506d11; 
- (id)init;	// 0x355066c9
- (void)_dispatchToDelegate:(id)delegate;	// 0x35507155
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x35507169
- (void)_openSessionWithMessage:(id)message;	// 0x35507269
- (void)_reconnectToDaemonWithCompletionBlock:(id)completionBlock;	// 0x35507459
- (void)_sendDisconnectMessage;	// 0x35507761
- (void)_tearDownConnections;	// 0x35507849
- (void)dealloc;	// 0x3550684d
// declared property getter: - (id)delegate;	// 0x355068f1
// declared property getter: - (id)failureTypes;	// 0x35506ab5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35506c65
// declared property setter: - (void)setFailureTypes:(id)types;	// 0x35506d11
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x35506df1
- (void)stopWithCompletionBlock:(id)completionBlock;	// 0x35507085
@end

