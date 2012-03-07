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
	unsigned _transactionID;	// 8 = 0x8
	NSData *_data;	// 12 = 0xc
}
@property(retain) NSData *data;	// G=0x301c563d; S=0x301c56c1; converted property
@property(assign) unsigned short operationCode;	// G=0x301c55fd; S=0x301c560d; converted property
@property(assign) unsigned long transactionID;	// G=0x301c561d; S=0x301c562d; converted property
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId andData:(id)data;	// 0x301c564d
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x301c5bb1
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x301c5af5
- (id)contentForTCP;	// 0x301c59c1
- (id)contentForUSB;	// 0x301c58c5
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x301c57c5
// converted property getter: - (id)data;	// 0x301c563d
- (void)dealloc;	// 0x301c5aa9
- (id)description;	// 0x301c5709
// converted property getter: - (unsigned short)operationCode;	// 0x301c55fd
// converted property setter: - (void)setData:(id)data;	// 0x301c56c1
// converted property setter: - (void)setOperationCode:(unsigned short)code;	// 0x301c560d
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x301c562d
// converted property getter: - (unsigned long)transactionID;	// 0x301c561d
@end

