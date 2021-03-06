/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import "MCSSRequestDelegate.h"
#import "SSPersonalizeOffersDelegate.h"

@class SSPersonalizeOffersResponse, SSPersonalizeOffersRequest;

@interface MCSSPersonalizeOffersDelegate : MCSSRequestDelegate <SSPersonalizeOffersDelegate> {
	SSPersonalizeOffersResponse *_response;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) SSPersonalizeOffersRequest *request;	// @dynamic
+ (id)instanceWithItems:(id)items;	// 0x33998861
- (void).cxx_destruct;	// 0x33998ae5
- (void)personalizeOffersRequest:(id)request didReceiveResponse:(id)response;	// 0x33998a51
- (void)startCompletionBlock:(id)block;	// 0x339988d9
@end

