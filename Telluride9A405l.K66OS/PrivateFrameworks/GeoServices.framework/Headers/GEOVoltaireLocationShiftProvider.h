/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOLocationShiftProvider.h"
#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireLocationShiftProvider : GEOLocationShiftProvider <PBRequesterDelegate> {
	GEORequester *_requester;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
	id _finishedHandler;	// 12 = 0xc
}
+ (void)_resetURL;	// 0x3145e83d
+ (unsigned short)providerID;	// 0x3145e835
- (id)init;	// 0x3145e869
- (void)cancelRequest;	// 0x3145eb59
- (void)dealloc;	// 0x3145e96d
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x3145eb79
- (void)requesterDidCancel:(id)requester;	// 0x3145ec2d
- (void)requesterDidFinish:(id)requester;	// 0x3145ec7d
- (void)startRequest:(id)request finished:(id)finished error:(id)error;	// 0x3145e9f9
@end

