/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "SKRequest.h"

@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest {
	id _productsRequestInternal;	// 8 = 0x8
}
@property(assign, nonatomic) id<SKProductsRequestDelegate> delegate;	// @dynamic
- (id)init;	// 0x36db5f59
- (id)initWithProductIdentifiers:(id)productIdentifiers;	// 0x36db5fbd
- (void)_handleReply:(id)reply;	// 0x36db6059
- (void)_sendXPCMessage;	// 0x36db62c1
- (void)dealloc;	// 0x36db6009
@end

