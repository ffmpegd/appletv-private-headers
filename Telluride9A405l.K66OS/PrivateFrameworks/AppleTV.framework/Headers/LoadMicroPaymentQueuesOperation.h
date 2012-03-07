/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class ClientIdentity, NSArray, MicroPaymentQueueResponse;

__attribute__((visibility("hidden")))
@interface LoadMicroPaymentQueuesOperation : ISOperation {
@private
	ClientIdentity *_clientIdentity;	// 60 = 0x3c
	int _expectedRefundCount;	// 64 = 0x40
	int _reason;	// 68 = 0x44
	MicroPaymentQueueResponse *_paymentsResponse;	// 72 = 0x48
	MicroPaymentQueueResponse *_refundsResponse;	// 76 = 0x4c
	NSArray *_userDSIDs;	// 80 = 0x50
}
@property(retain) ClientIdentity *clientIdentity;	// G=0x35f5eba9; S=0x35f5ebbd; @synthesize=_clientIdentity
@property(assign) int expectedRefundCount;	// G=0x35f5ebe1; S=0x35f5ebf1; @synthesize=_expectedRefundCount
@property(retain) MicroPaymentQueueResponse *paymentsResponse;	// G=0x35f5ec01; S=0x35f5ec15; @synthesize=_paymentsResponse
@property(assign) int reason;	// G=0x35f5ec39; S=0x35f5ec49; @synthesize=_reason
@property(retain) MicroPaymentQueueResponse *refundsResponse;	// G=0x35f5ec59; S=0x35f5ec6d; @synthesize=_refundsResponse
@property(retain) NSArray *userDSIDs;	// G=0x35f5ec91; S=0x35f5eca5; @synthesize=_userDSIDs
- (id)_URLBagContext;	// 0x35f5eb59
- (BOOL)_appendAutoRenewQueueToResponse:(id)response error:(id *)error;	// 0x35f5e445
- (BOOL)_appendNormalQueueToResponse:(id)response error:(id *)error;	// 0x35f5e565
- (BOOL)_appendToResponse:(id)response usingOperation:(id)operation error:(id *)error;	// 0x35f5e699
- (BOOL)_checkRefundsQueue:(id *)queue;	// 0x35f5e905
- (BOOL)_shouldCheckAutoRenewQueue;	// 0x35f5eae9
- (BOOL)_shouldCheckRefundsQueue;	// 0x35f5eb55
// declared property getter: - (id)clientIdentity;	// 0x35f5eba9
- (void)dealloc;	// 0x35f5e225
// declared property getter: - (int)expectedRefundCount;	// 0x35f5ebe1
// declared property getter: - (id)paymentsResponse;	// 0x35f5ec01
// declared property getter: - (int)reason;	// 0x35f5ec39
// declared property getter: - (id)refundsResponse;	// 0x35f5ec59
- (void)run;	// 0x35f5e2ad
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x35f5ebbd
// declared property setter: - (void)setExpectedRefundCount:(int)count;	// 0x35f5ebf1
// declared property setter: - (void)setPaymentsResponse:(id)response;	// 0x35f5ec15
// declared property setter: - (void)setReason:(int)reason;	// 0x35f5ec49
// declared property setter: - (void)setRefundsResponse:(id)response;	// 0x35f5ec6d
// declared property setter: - (void)setUserDSIDs:(id)dsids;	// 0x35f5eca5
// declared property getter: - (id)userDSIDs;	// 0x35f5ec91
@end

