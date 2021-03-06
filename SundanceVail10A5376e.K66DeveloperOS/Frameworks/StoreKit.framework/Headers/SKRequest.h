/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library

@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequest : NSObject {
	id _requestInternal;	// 4 = 0x4
}
@property(assign, nonatomic) id<SKRequestDelegate> delegate;	// G=0x35f95c51; S=0x35f95c71; 
@property(copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;	// G=0x35f95cf5; S=0x35f95d39; 
- (id)init;	// 0x35f95af1
- (void)_beginBackgroundTask;	// 0x35f95ed5
- (void)_endBackgroundTask;	// 0x35f95fa5
- (void)_sendXPCMessage;	// 0x35f95d89
- (void)_shutdownRequest;	// 0x35f95d8d
- (void)_startWithMessage:(id)message replyBlock:(id)block;	// 0x35f95df9
- (void)cancel;	// 0x35f95bc1
- (void)dealloc;	// 0x35f95b75
// declared property getter: - (id)delegate;	// 0x35f95c51
// declared property getter: - (id)paymentQueueClient;	// 0x35f95cf5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35f95c71
// declared property setter: - (void)setPaymentQueueClient:(id)client;	// 0x35f95d39
- (void)start;	// 0x35f95c91
@end

