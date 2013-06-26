/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSPurchaseValidationContext;

@interface SSPurchaseValidator : NSObject {
	SSPurchaseValidationContext *_context;	// 4 = 0x4
}
@property(readonly, assign) SSPurchaseValidationContext *purchaseValidationContext;	// G=0x354cfbe5; 
- (id)init;	// 0x354cfab1
- (id)initWithPurchaseValidationContext:(id)purchaseValidationContext;	// 0x354cfac5
- (BOOL)_checkDiskSpaceForPurchases:(id)purchases response:(id)response;	// 0x354cfe15
- (BOOL)_checkNetworkConstraintsForPurchases:(id)purchases response:(id)response;	// 0x354d0205
- (BOOL)_checkSoftwareCapabilitiesForPurchase:(id)purchase response:(id)response;	// 0x354d048d
- (BOOL)_checkSystemVersionForPurchase:(id)purchase response:(id)response;	// 0x354d053d
- (void)dealloc;	// 0x354cfb99
// declared property getter: - (id)purchaseValidationContext;	// 0x354cfbe5
- (id)validatePurchases:(id)purchases;	// 0x354cfc1d
@end
