/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GEODirectionsProvider.h> // Unknown library
#import "PBRequesterDelegate.h"

@class GMMRequester;

@interface GMMGEODirectionsProvider : GEODirectionsProvider <PBRequesterDelegate> {
	GMMRequester *_gmmRequester;	// 20 = 0x14
}
@property(retain, nonatomic) GMMRequester *gmmRequester;	// G=0x30b897b1; S=0x30b897c1; @synthesize=_gmmRequester
+ (id)providerHostname;	// 0x30b88df1
+ (unsigned short)providerID;	// 0x30b88ded
- (void)_cleanupRequester;	// 0x30b895a5
- (void)_sendGMMDirectionsRequest:(id)request;	// 0x30b894fd
- (void)cancelProviderRequest;	// 0x30b89585
- (void)dealloc;	// 0x30b88da9
// declared property getter: - (id)gmmRequester;	// 0x30b897b1
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x30b896b1
- (void)requesterDidCancel:(id)requester;	// 0x30b89781
- (void)requesterDidFinish:(id)requester;	// 0x30b895e9
// declared property setter: - (void)setGmmRequester:(id)requester;	// 0x30b897c1
- (void)startProviderWithRequest:(id)request;	// 0x30b88e0d
@end

