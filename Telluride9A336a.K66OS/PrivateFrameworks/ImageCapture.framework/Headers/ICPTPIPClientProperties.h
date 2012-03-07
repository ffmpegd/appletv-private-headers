/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library


@interface ICPTPIPClientProperties : NSObject {
	int _pid;	// 4 = 0x4
	BOOL _registered;	// 8 = 0x8
	CFFileDescriptorRef _fdref;	// 12 = 0xc
	CFMessagePortRef _remotePort;	// 16 = 0x10
	int _remoteAddress;	// 20 = 0x14
	int _serverFD;	// 24 = 0x18
}
@property(assign) CFFileDescriptorRef fdref;	// G=0x301cfdb5; S=0x301cfdc5; @synthesize=_fdref
@property(assign) int pid;	// G=0x301cfdf5; S=0x301cfe05; @synthesize=_pid
@property(assign, getter=didRegister) BOOL registered;	// G=0x301cfdd5; S=0x301cfde5; @synthesize=_registered
@property(assign) int remoteAddress;	// G=0x301cfd75; S=0x301cfd85; @synthesize=_remoteAddress
@property(assign) CFMessagePortRef remotePort;	// G=0x301cfd95; S=0x301cfda5; @synthesize=_remotePort
@property(assign) int serverFD;	// G=0x301cfd55; S=0x301cfd65; @synthesize=_serverFD
- (void)dealloc;	// 0x301d01a9
// declared property getter: - (BOOL)didRegister;	// 0x301cfdd5
// declared property getter: - (CFFileDescriptorRef)fdref;	// 0x301cfdb5
- (void)finalize;	// 0x301d01fd
// declared property getter: - (int)pid;	// 0x301cfdf5
// declared property getter: - (int)remoteAddress;	// 0x301cfd75
// declared property getter: - (CFMessagePortRef)remotePort;	// 0x301cfd95
// declared property getter: - (int)serverFD;	// 0x301cfd55
// declared property setter: - (void)setFdref:(CFFileDescriptorRef)fdref;	// 0x301cfdc5
// declared property setter: - (void)setPid:(int)pid;	// 0x301cfe05
// declared property setter: - (void)setRegistered:(BOOL)registered;	// 0x301cfde5
// declared property setter: - (void)setRemoteAddress:(int)address;	// 0x301cfd85
// declared property setter: - (void)setRemotePort:(CFMessagePortRef)port;	// 0x301cfda5
// declared property setter: - (void)setServerFD:(int)fd;	// 0x301cfd65
@end
