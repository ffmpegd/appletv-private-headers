/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library


@interface ICPTPIPClient : NSObject {
	id _clientProperties;	// 4 = 0x4
}
@property(assign) CFFileDescriptorRef fdref;	// G=0x34b342ad; S=0x34b342cd; converted property
@property(assign) int pid;	// G=0x34b34229; S=0x34b34249; converted property
@property(assign) BOOL registered;	// G=0x34b34269; S=0x34b3428d; converted property
@property(assign) int remoteAddress;	// G=0x34b3432d; S=0x34b3434d; converted property
@property(assign) CFMessagePortRef remotePort;	// G=0x34b342ed; S=0x34b3430d; converted property
@property(assign) int serverFD;	// G=0x34b3436d; S=0x34b3438d; converted property
- (id)init;	// 0x34b341c5
// converted property getter: - (CFFileDescriptorRef)fdref;	// 0x34b342ad
// converted property getter: - (int)pid;	// 0x34b34229
// converted property getter: - (BOOL)registered;	// 0x34b34269
// converted property getter: - (int)remoteAddress;	// 0x34b3432d
// converted property getter: - (CFMessagePortRef)remotePort;	// 0x34b342ed
// converted property getter: - (int)serverFD;	// 0x34b3436d
// converted property setter: - (void)setFdref:(CFFileDescriptorRef)fdref;	// 0x34b342cd
// converted property setter: - (void)setPid:(int)pid;	// 0x34b34249
// converted property setter: - (void)setRegistered:(BOOL)registered;	// 0x34b3428d
// converted property setter: - (void)setRemoteAddress:(int)address;	// 0x34b3434d
// converted property setter: - (void)setRemotePort:(CFMessagePortRef)port;	// 0x34b3430d
// converted property setter: - (void)setServerFD:(int)fd;	// 0x34b3438d
@end
