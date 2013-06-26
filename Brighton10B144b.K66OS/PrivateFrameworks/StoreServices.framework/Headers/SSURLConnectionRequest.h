/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSURLRequest, SSURLRequestProperties;
@protocol SSURLConnectionRequestDelegate;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {
	SSURLRequestProperties *_requestProperties;	// 28 = 0x1c
	BOOL _shouldMescalSign;	// 32 = 0x20
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x354c1809; 
@property(assign, nonatomic) id<SSURLConnectionRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSURLRequestProperties *requestProperties;	// G=0x354c13fd; 
@property(assign) BOOL shouldMescalSign;	// G=0x354c14b9; S=0x354c1435; 
- (id)init;	// 0x354c1275
- (id)initWithRequestProperties:(id)requestProperties;	// 0x354c1289
- (id)initWithURLRequest:(id)urlrequest;	// 0x354c1315
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354c1af1
// declared property getter: - (id)URLRequest;	// 0x354c1809
- (id)copyXPCEncoding;	// 0x354c1a91
- (void)dealloc;	// 0x354c13b1
// declared property getter: - (id)requestProperties;	// 0x354c13fd
// declared property setter: - (void)setShouldMescalSign:(BOOL)mescalSign;	// 0x354c1435
// declared property getter: - (BOOL)shouldMescalSign;	// 0x354c14b9
- (BOOL)start;	// 0x354c1841
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x354c1a19
- (void)startWithConnectionResponseBlock:(id)connectionResponseBlock;	// 0x354c158d
@end
