/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSData;

@interface PTPEndDataPacket : NSObject {
	unsigned short _operationCode;	// 4 = 0x4
	unsigned long _transactionID;	// 8 = 0x8
	NSData *_data;	// 12 = 0xc
}
@property(retain) NSData *data;	// G=0x328c4cc5; S=0x328c4cd5; converted property
@property(assign) unsigned short operationCode;	// G=0x328c4c85; S=0x328c4c95; converted property
@property(assign) unsigned long transactionID;	// G=0x328c4ca5; S=0x328c4cb5; converted property
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId andData:(id)data;	// 0x328c46d5
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x328c4749
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x328c47f9
- (id)contentForTCP;	// 0x328c48fd
- (id)contentForUSB;	// 0x328c49e1
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x328c4ad9
// converted property getter: - (id)data;	// 0x328c4cc5
- (void)dealloc;	// 0x328c48b1
- (id)description;	// 0x328c4bcd
// converted property getter: - (unsigned short)operationCode;	// 0x328c4c85
// converted property setter: - (void)setData:(id)data;	// 0x328c4cd5
// converted property setter: - (void)setOperationCode:(unsigned short)code;	// 0x328c4c95
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x328c4cb5
// converted property getter: - (unsigned long)transactionID;	// 0x328c4ca5
@end

