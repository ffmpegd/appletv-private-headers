/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface HSFairPlayInfo : NSObject {
@private
	void *_hwInfo;	// 4 = 0x4
	NSArray *_requestsToSign;	// 8 = 0x8
	void *_session;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *deviceGUID;	// G=0x34962e25; 
- (id)init;	// 0x34962ced
- (BOOL)_getHardwareInfo:(FairPlayHWInfo_ *)info;	// 0x349638b5
- (id)_hexStringForData:(id)data;	// 0x3496394d
- (id)beginNegotiation;	// 0x34962ea5
- (id)continueNegotationWithData:(id)data isComplete:(BOOL *)complete;	// 0x34962f25
- (void)dealloc;	// 0x34962dad
// declared property getter: - (id)deviceGUID;	// 0x34962e25
- (void)endMescalSession;	// 0x34963161
- (void)endSecuritySession;	// 0x34962ff5
- (id)processSignedResponseData:(id)data withSignature:(id)signature;	// 0x3496375d
- (id)securityInfoForURL:(id)url;	// 0x3496303d
- (BOOL)setupMescalWithURL:(id)url certificateURL:(id)url2 requestsToSign:(id)sign userAgent:(id)agent;	// 0x34963189
- (BOOL)shouldSignRequestAction:(id)action;	// 0x34963891
- (id)signatureForData:(id)data;	// 0x34963809
@end
