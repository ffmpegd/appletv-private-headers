/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class SSPlayInfoRequestContext, SSPlayInfoResponse;
@protocol SSPlayInfoRequestDelegate;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {
	SSPlayInfoRequestContext *_context;	// 28 = 0x1c
	SSPlayInfoResponse *_response;	// 32 = 0x20
}
@property(assign, nonatomic) id<SSPlayInfoRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSPlayInfoRequestContext *playInfoContext;	// G=0x354df7a5; 
@property(readonly, assign) SSPlayInfoResponse *playInfoResponse;	// G=0x354df7dd; 
- (id)init;	// 0x354df669
- (id)initWithPlayInfoContext:(id)playInfoContext;	// 0x354df67d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354e016d
- (id)copyXPCEncoding;	// 0x354e0079
- (void)dealloc;	// 0x354df741
// declared property getter: - (id)playInfoContext;	// 0x354df7a5
// declared property getter: - (id)playInfoResponse;	// 0x354df7dd
- (BOOL)start;	// 0x354dfdd5
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x354e0001
- (void)startWithPlayInfoResponseBlock:(id)playInfoResponseBlock;	// 0x354df9a1
@end

