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
@property(assign) unsigned long transactionID;	// G=0x3060e061; S=0x3060e071; converted property
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x3060df41
- (id)initWithTransactionID:(unsigned long)transactionID;	// 0x3060df01
- (id)contentForTCP;	// 0x3060df99
- (id)description;	// 0x3060e019
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x3060e071
// converted property getter: - (unsigned long)transactionID;	// 0x3060e061
@end

