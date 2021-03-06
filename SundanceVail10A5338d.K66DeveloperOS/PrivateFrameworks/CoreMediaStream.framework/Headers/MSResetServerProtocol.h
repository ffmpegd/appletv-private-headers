/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSStreamsProtocol.h"
#import "CoreMediaStream-Structs.h"


@interface MSResetServerProtocol : MSStreamsProtocol {
	MSRSPCContext _context;	// 12 = 0xc
}
@property(assign) id delegate;	// G=0x33757151; S=0x3375717d; converted property
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x337571a9
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x33757401
- (void)_coreProtocolDidFinishError:(id)_coreProtocol;	// 0x3375732d
- (void)dealloc;	// 0x33757295
// converted property getter: - (id)delegate;	// 0x33757151
- (void)resetServerState;	// 0x337572dd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3375717d
@end

