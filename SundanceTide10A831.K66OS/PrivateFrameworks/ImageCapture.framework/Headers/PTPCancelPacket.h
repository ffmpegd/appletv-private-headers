/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPCancelPacket : NSObject {
	unsigned long _transactionID;	// 4 = 0x4
}
@property(assign) unsigned long transactionID;	// G=0x34000061; S=0x34000071; converted property
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x33ffff41
- (id)initWithTransactionID:(unsigned long)transactionID;	// 0x33ffff01
- (id)contentForTCP;	// 0x33ffff99
- (id)description;	// 0x34000019
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x34000071
// converted property getter: - (unsigned long)transactionID;	// 0x34000061
@end
