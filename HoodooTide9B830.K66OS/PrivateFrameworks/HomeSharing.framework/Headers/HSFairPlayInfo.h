/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSArray, NSString;

@interface HSFairPlayInfo : NSObject {
@private
	void *_hwInfo;	// 4 = 0x4
	NSArray *_requestsToSign;	// 8 = 0x8
	void *_session;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *deviceGUID;	// G=0x35164879; 
- (id)init;	// 0x35164741
- (BOOL)_getHardwareInfo:(FairPlayHWInfo_ *)info;	// 0x3516549d
- (id)_hexStringForData:(id)data;	// 0x35165535
- (id)beginNegotiation;	// 0x351648f9
- (id)continueNegotationWithData:(id)data isComplete:(BOOL *)complete;	// 0x35164979
- (void)dealloc;	// 0x35164801
// declared property getter: - (id)deviceGUID;	// 0x35164879
- (void)endMescalSession;	// 0x35164bb5
- (void)endSecuritySession;	// 0x35164a49
- (id)processSignedResponseData:(id)data withSignature:(id)signature;	// 0x35165345
- (id)securityInfoForURL:(id)url;	// 0x35164a91
- (BOOL)setupMescalWithURL:(id)url certificateURL:(id)url2 requestsToSign:(id)sign userAgent:(id)agent;	// 0x35164bdd
- (BOOL)shouldSignRequestAction:(id)action;	// 0x35165479
- (id)signatureForData:(id)data;	// 0x351653f1
@end
