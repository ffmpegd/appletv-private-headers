/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSPurchaseValidationContext;

@interface SSPurchaseValidator : NSObject {
@private
	SSPurchaseValidationContext *_context;	// 4 = 0x4
}
@property(readonly, assign) SSPurchaseValidationContext *purchaseValidationContext;	// G=0x30ebbf7d; 
- (id)init;	// 0x30ebbe49
- (id)initWithPurchaseValidationContext:(id)purchaseValidationContext;	// 0x30ebbe5d
- (BOOL)_checkDiskSpaceForPurchases:(id)purchases response:(id)response;	// 0x30ebc1ad
- (BOOL)_checkNetworkConstraintsForPurchases:(id)purchases response:(id)response;	// 0x30ebc519
- (BOOL)_checkSoftwareCapabilitiesForPurchase:(id)purchase response:(id)response;	// 0x30ebc795
- (BOOL)_checkSystemVersionForPurchase:(id)purchase response:(id)response;	// 0x30ebc845
- (void)dealloc;	// 0x30ebbf31
// declared property getter: - (id)purchaseValidationContext;	// 0x30ebbf7d
- (id)validatePurchases:(id)purchases;	// 0x30ebbfb5
@end

