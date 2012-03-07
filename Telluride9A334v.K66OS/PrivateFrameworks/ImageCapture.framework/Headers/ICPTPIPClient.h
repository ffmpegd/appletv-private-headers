/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library


@interface ICPTPIPClient : NSObject {
@private
	id _clientProperties;	// 4 = 0x4
}
@property(assign) CFFileDescriptorRef fdref;	// G=0x32257f89; S=0x32257fa9; converted property
@property(assign) int pid;	// G=0x32257efd; S=0x32257f1d; converted property
@property(assign) BOOL registered;	// G=0x32257f41; S=0x32257f65; converted property
@property(assign) int remoteAddress;	// G=0x32258011; S=0x32258031; converted property
@property(assign) CFMessagePortRef remotePort;	// G=0x32257fcd; S=0x32257fed; converted property
@property(assign) int serverFD;	// G=0x32258055; S=0x32258075; converted property
- (id)init;	// 0x322584c5
// converted property getter: - (CFFileDescriptorRef)fdref;	// 0x32257f89
// converted property getter: - (int)pid;	// 0x32257efd
// converted property getter: - (BOOL)registered;	// 0x32257f41
// converted property getter: - (int)remoteAddress;	// 0x32258011
// converted property getter: - (CFMessagePortRef)remotePort;	// 0x32257fcd
// converted property getter: - (int)serverFD;	// 0x32258055
// converted property setter: - (void)setFdref:(CFFileDescriptorRef)fdref;	// 0x32257fa9
// converted property setter: - (void)setPid:(int)pid;	// 0x32257f1d
// converted property setter: - (void)setRegistered:(BOOL)registered;	// 0x32257f65
// converted property setter: - (void)setRemoteAddress:(int)address;	// 0x32258031
// converted property setter: - (void)setRemotePort:(CFMessagePortRef)port;	// 0x32257fed
// converted property setter: - (void)setServerFD:(int)fd;	// 0x32258075
@end

