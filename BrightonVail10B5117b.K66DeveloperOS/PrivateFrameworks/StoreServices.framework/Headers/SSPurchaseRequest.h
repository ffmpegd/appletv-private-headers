/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSArray;
@protocol SSPurchaseRequestDelegate;

@interface SSPurchaseRequest : SSRequest <SSXPCCoding> {
	BOOL _isBackgroundRequest;	// 28 = 0x1c
	NSArray *_purchases;	// 32 = 0x20
	BOOL _shouldValidatePurchases;	// 36 = 0x24
	BOOL _createsDownloads;	// 37 = 0x25
	BOOL _needsAuthentication;	// 38 = 0x26
}
@property(assign, nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest;	// G=0x35697a95; S=0x35697aa5; @synthesize=_isBackgroundRequest
@property(assign, nonatomic) BOOL createsDownloads;	// G=0x35697ab5; S=0x35697ac5; @synthesize=_createsDownloads
@property(assign, nonatomic) id<SSPurchaseRequestDelegate> delegate;	// @dynamic
@property(assign, nonatomic) BOOL needsAuthentication;	// G=0x35697ad5; S=0x35697ae5; @synthesize=_needsAuthentication
@property(readonly, assign) NSArray *purchases;	// G=0x35696c59; 
@property(assign, nonatomic) BOOL shouldValidatePurchases;	// G=0x35697af5; S=0x35697b05; @synthesize=_shouldValidatePurchases
- (id)init;	// 0x35696b21
- (id)initWithPurchases:(id)purchases;	// 0x35696b35
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x356977bd
- (id)_purchaseForUniqueIdentifier:(id)uniqueIdentifier;	// 0x356979ad
- (id)copyXPCEncoding;	// 0x356975bd
// declared property getter: - (BOOL)createsDownloads;	// 0x35697ab5
- (void)dealloc;	// 0x35696bb5
// declared property getter: - (BOOL)isBackgroundRequest;	// 0x35697a95
// declared property getter: - (BOOL)needsAuthentication;	// 0x35697ad5
// declared property getter: - (id)purchases;	// 0x35696c59
// declared property setter: - (void)setBackgroundRequest:(BOOL)request;	// 0x35697aa5
// declared property setter: - (void)setCreatesDownloads:(BOOL)downloads;	// 0x35697ac5
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x35697ae5
// declared property setter: - (void)setShouldValidatePurchases:(BOOL)validatePurchases;	// 0x35697b05
// declared property getter: - (BOOL)shouldValidatePurchases;	// 0x35697af5
- (BOOL)start;	// 0x35697259
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x35697549
- (void)startWithPurchaseBlock:(id)purchaseBlock completionBlock:(id)block;	// 0x35696c91
- (void)startWithPurchaseResponseBlock:(id)purchaseResponseBlock completionBlock:(id)block;	// 0x35696d89
@end

