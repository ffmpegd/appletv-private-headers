/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPInitFailPacket : NSObject {
	unsigned _reason;	// 4 = 0x4
}
@property(assign) unsigned long reason;	// G=0x30c26fc5; S=0x30c26fd5; converted property
- (id)initWithReason:(unsigned long)reason;	// 0x30c26fe5
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x30c270f1
- (id)contentForTCP;	// 0x30c27071
- (id)description;	// 0x30c27025
// converted property getter: - (unsigned long)reason;	// 0x30c26fc5
// converted property setter: - (void)setReason:(unsigned long)reason;	// 0x30c26fd5
@end
