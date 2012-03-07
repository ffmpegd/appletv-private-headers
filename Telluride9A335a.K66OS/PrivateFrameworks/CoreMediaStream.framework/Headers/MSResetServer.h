/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "MSResetServerProtocolDelegate.h"

@class NSString, MSResetServerProtocol, MSMediaStreamDaemon;

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate> {
@private
	NSString *_personID;	// 4 = 0x4
	MSResetServerProtocol *_protocol;	// 8 = 0x8
	MSMediaStreamDaemon *_daemon;	// 12 = 0xc
}
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x322d3271; S=0x322d3281; @synthesize=_daemon
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x322d3261; @synthesize=_personID
+ (id)resetServerObjectWithPersonID:(id)personID baseURL:(id)url;	// 0x322d2f65
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x322d2fa5
// declared property getter: - (id)daemon;	// 0x322d3271
- (void)dealloc;	// 0x322d3031
// declared property getter: - (id)personID;	// 0x322d3261
- (void)resetServer;	// 0x322d3091
- (void)resetServerProtocol:(id)protocol didFinishWithError:(id)error;	// 0x322d3105
- (void)resetServerProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x322d31c1
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x322d3281
@end

