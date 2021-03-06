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
@property(assign) id<SSErrorHandlerDelegate> delegate;	// G=0x35886035; S=0x358863a9; 
@property(copy) NSArray *failureTypes;	// G=0x358861f9; S=0x35886455; 
- (id)init;	// 0x35885e0d
- (void)_dispatchToDelegate:(id)delegate;	// 0x35886899
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x358868ad
- (void)_openSessionWithMessage:(id)message;	// 0x358869ad
- (void)_reconnectToDaemonWithCompletionBlock:(id)completionBlock;	// 0x35886b9d
- (void)_sendDisconnectMessage;	// 0x35886ea5
- (void)_tearDownConnections;	// 0x35886f8d
- (void)dealloc;	// 0x35885f91
// declared property getter: - (id)delegate;	// 0x35886035
// declared property getter: - (id)failureTypes;	// 0x358861f9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x358863a9
// declared property setter: - (void)setFailureTypes:(id)types;	// 0x35886455
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x35886535
- (void)stopWithCompletionBlock:(id)completionBlock;	// 0x358867c9
@end

