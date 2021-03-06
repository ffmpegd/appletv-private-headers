/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSArray, ClientIdentity;
@protocol StorePurchaseBatchOperationDelegate;

__attribute__((visibility("hidden")))
@interface StorePurchaseBatchOperation : ISOperation {
@private
	ClientIdentity *_clientIdentity;	// 60 = 0x3c
	BOOL _isBackgroundRequest;	// 64 = 0x40
	BOOL _needsAuthentication;	// 65 = 0x41
	NSArray *_purchases;	// 68 = 0x44
}
@property(assign, getter=isBackgroundRequest) BOOL backgroundRequest;	// G=0x33371be1; S=0x33371c91; 
@property(retain) ClientIdentity *clientIdentity;	// G=0x333729d9; S=0x333729ed; @synthesize=_clientIdentity
@property(assign) id<StorePurchaseBatchOperationDelegate> delegate;	// @dynamic
@property(assign) BOOL needsAuthentication;	// G=0x33371c1d; S=0x33371cd1; 
@property(readonly, assign) NSArray *purchases;	// G=0x33371c59; 
- (id)initWithPurchases:(id)purchases;	// 0x33371b45
- (BOOL)_authenticateReturningError:(id *)error;	// 0x33371e2d
- (void)_cancelPurchasesWithError:(id)error;	// 0x33372041
- (void)_checkUpdateQueueIfNecessary;	// 0x33372175
- (id)_clientIdentifierForPurchases:(id)purchases;	// 0x33372099
- (id)_copyRingtonePurchasesForPurchases:(id)purchases;	// 0x33372179
- (void)_notePurchasesFailed:(id)failed;	// 0x33372279
- (void)_notePurchasesFinished:(id)finished withDownloads:(id)downloads;	// 0x3337227d
- (void)_runPurchaseOperations;	// 0x33372281
- (void)_sendDelegatePurchaseCompleteWithPurchase:(id)purchase error:(id)error;	// 0x33372631
- (void)_sendError:(id)error forPurchase:(id)purchase;	// 0x33372691
- (void)_sendPurchaseFailed:(id)failed withError:(id)error;	// 0x3337279d
- (void)_sendPurchaseFinished:(id)finished;	// 0x3337283d
- (id)_userAgentForPurchases:(id)purchases;	// 0x333728dd
// declared property getter: - (id)clientIdentity;	// 0x333729d9
- (void)dealloc;	// 0x33371b95
// declared property getter: - (BOOL)isBackgroundRequest;	// 0x33371be1
// declared property getter: - (BOOL)needsAuthentication;	// 0x33371c1d
// declared property getter: - (id)purchases;	// 0x33371c59
- (void)run;	// 0x33371d11
// declared property setter: - (void)setBackgroundRequest:(BOOL)request;	// 0x33371c91
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x333729ed
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x33371cd1
@end

