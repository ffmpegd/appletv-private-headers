/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "SSURLConnectionRequestDelegate.h"
#import <NSObject.h> // Unknown library

@class SSURLConnectionRequest, NSString;

@interface _HomeSharingGroupIDResolver : NSObject <SSURLConnectionRequestDelegate> {
@private
	NSString *_appleID;	// 4 = 0x4
	NSString *_password;	// 8 = 0x8
	SSURLConnectionRequest *_request;	// 12 = 0xc
	id _completionHandler;	// 16 = 0x10
	BOOL _success;	// 20 = 0x14
}
- (id)initWithAppleID:(id)appleID password:(id)password completionHandler:(id)handler;	// 0x34e753ad
- (void)dealloc;	// 0x34e7543d
- (void)request:(id)request didFailWithError:(id)error;	// 0x34e75699
- (void)requestDidFinish:(id)request;	// 0x34e756cd
- (void)start;	// 0x34e754dd
- (void)urlConnectionRequest:(id)request didReceiveResponse:(id)response;	// 0x34e7570d
@end

