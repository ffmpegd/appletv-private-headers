/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class ClientIdentity, NSArray;
@protocol StorePurchaseBatchOperationDelegate;

__attribute__((visibility("hidden")))
@interface StorePurchaseBatchOperation : ISOperation {
@private
	ClientIdentity *_clientIdentity;	// 60 = 0x3c
	BOOL _isBackgroundRequest;	// 64 = 0x40
	BOOL _needsAuthentication;	// 65 = 0x41
	NSArray *_purchases;	// 68 = 0x44
}
@property(assign, getter=isBackgroundRequest) BOOL backgroundRequest;	// G=0x331e2c71; S=0x331e2d21; 
@property(retain) ClientIdentity *clientIdentity;	// G=0x331e3a69; S=0x331e3a7d; @synthesize=_clientIdentity
@property(assign) id<StorePurchaseBatchOperationDelegate> delegate;	// @dynamic
@property(assign) BOOL needsAuthentication;	// G=0x331e2cad; S=0x331e2d61; 
@property(readonly, assign) NSArray *purchases;	// G=0x331e2ce9; 
- (id)initWithPurchases:(id)purchases;	// 0x331e2bd5
- (BOOL)_authenticateReturningError:(id *)error;	// 0x331e2ebd
- (void)_cancelPurchasesWithError:(id)error;	// 0x331e30d1
- (void)_checkUpdateQueueIfNecessary;	// 0x331e3205
- (id)_clientIdentifierForPurchases:(id)purchases;	// 0x331e3129
- (id)_copyRingtonePurchasesForPurchases:(id)purchases;	// 0x331e3209
- (void)_notePurchasesFailed:(id)failed;	// 0x331e3309
- (void)_notePurchasesFinished:(id)finished withDownloads:(id)downloads;	// 0x331e330d
- (void)_runPurchaseOperations;	// 0x331e3311
- (void)_sendDelegatePurchaseCompleteWithPurchase:(id)purchase error:(id)error;	// 0x331e36c1
- (void)_sendError:(id)error forPurchase:(id)purchase;	// 0x331e3721
- (void)_sendPurchaseFailed:(id)failed withError:(id)error;	// 0x331e382d
- (void)_sendPurchaseFinished:(id)finished;	// 0x331e38cd
- (id)_userAgentForPurchases:(id)purchases;	// 0x331e396d
// declared property getter: - (id)clientIdentity;	// 0x331e3a69
- (void)dealloc;	// 0x331e2c25
// declared property getter: - (BOOL)isBackgroundRequest;	// 0x331e2c71
// declared property getter: - (BOOL)needsAuthentication;	// 0x331e2cad
// declared property getter: - (id)purchases;	// 0x331e2ce9
- (void)run;	// 0x331e2da1
// declared property setter: - (void)setBackgroundRequest:(BOOL)request;	// 0x331e2d21
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x331e3a7d
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x331e2d61
@end
