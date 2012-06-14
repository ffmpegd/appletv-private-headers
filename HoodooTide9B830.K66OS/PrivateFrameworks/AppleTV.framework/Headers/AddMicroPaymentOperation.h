/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"
#import "ISOperationDelegate.h"

@class NSManagedObjectID, MicroPaymentQueueResponse, ClientIdentity, NSString;
@protocol AddMicroPaymentDelegate;

__attribute__((visibility("hidden")))
@interface AddMicroPaymentOperation : ISOperation <ISOperationDelegate> {
@private
	NSString *_buyParameters;	// 60 = 0x3c
	ClientIdentity *_clientIdentity;	// 64 = 0x40
	BOOL _needsConfirmation;	// 68 = 0x44
	NSManagedObjectID *_objectID;	// 72 = 0x48
	MicroPaymentQueueResponse *_response;	// 76 = 0x4c
}
@property(retain) NSString *buyParameters;	// G=0x32b3aa51; S=0x32b3aa65; @synthesize=_buyParameters
@property(retain) ClientIdentity *clientIdentity;	// G=0x32b3aa89; S=0x32b3aa9d; @synthesize=_clientIdentity
@property(assign) id<AddMicroPaymentDelegate> delegate;	// @dynamic
@property(assign) BOOL needsConfirmation;	// G=0x32b3aac1; S=0x32b3aad1; @synthesize=_needsConfirmation
@property(retain) NSManagedObjectID *objectID;	// G=0x32b3aae1; S=0x32b3aaf5; @synthesize=_objectID
@property(retain) MicroPaymentQueueResponse *response;	// G=0x32b3ab19; S=0x32b3ab2d; @synthesize=_response
- (id)initWithObjectID:(id)objectID;	// 0x32b3a445
- (id)_copyBuyOperationForPayment:(id)payment;	// 0x32b3a68d
- (id)_copyConfirmOperationForPayment:(id)payment;	// 0x32b3a739
- (void)_runForPayment:(id)payment;	// 0x32b3a845
- (void)_sendStateToDelegate:(int)delegate;	// 0x32b3aa1d
// declared property getter: - (id)buyParameters;	// 0x32b3aa51
// declared property getter: - (id)clientIdentity;	// 0x32b3aa89
- (void)dealloc;	// 0x32b3a479
// declared property getter: - (BOOL)needsConfirmation;	// 0x32b3aac1
// declared property getter: - (id)objectID;	// 0x32b3aae1
// declared property getter: - (id)response;	// 0x32b3ab19
- (void)run;	// 0x32b3a525
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x32b3aa65
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x32b3aa9d
// declared property setter: - (void)setNeedsConfirmation:(BOOL)confirmation;	// 0x32b3aad1
// declared property setter: - (void)setObjectID:(id)anId;	// 0x32b3aaf5
// declared property setter: - (void)setResponse:(id)response;	// 0x32b3ab2d
@end
