/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOProblemProvider.h"
#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireProblemProvider : GEOProblemProvider <PBRequesterDelegate> {
	GEORequester *_requester;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	id _finishedHandler;	// 12 = 0xc
}
+ (void)_resetURL;	// 0x339aead5
+ (unsigned short)providerID;	// 0x339aeca1
+ (void)setUsePersistentConnection:(BOOL)connection;	// 0x339aeb01
- (id)init;	// 0x339aeb11
- (void)cancelRequest;	// 0x339aede1
- (void)dealloc;	// 0x339aec15
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x339aee01
- (void)requesterDidCancel:(id)requester;	// 0x339aeecd
- (void)requesterDidFinish:(id)requester;	// 0x339aef35
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x339aeca9
@end
