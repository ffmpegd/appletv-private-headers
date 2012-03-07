/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ImageCapture-Structs.h"

@class NSString;

@interface PTPDataPacket : NSObject {
	unsigned short _operationCode;	// 4 = 0x4
	unsigned _transactionID;	// 8 = 0x8
	id _data;	// 12 = 0xc
	NSString *_filepath;	// 16 = 0x10
	int _fd;	// 20 = 0x14
	long long _bufferSize;	// 24 = 0x18
	long long _offsetInBuffer;	// 32 = 0x20
	PTPRange _range;	// 40 = 0x28
	long long _bytesTransferred;	// 56 = 0x38
}
@property(readonly, assign) long long bufferSize;	// G=0x301c08c5; converted property
@property(assign) long long bytesTransferred;	// G=0x301c09d9; S=0x301c09f1; converted property
@property(retain) id data;	// G=0x301c08b5; S=0x301c13e5; converted property
@property(readonly, retain) NSString *filepath;	// G=0x301c0865; converted property
@property(readonly, assign) long long offsetInBuffer;	// G=0x301c08dd; converted property
@property(assign) unsigned short operationCode;	// G=0x301c0875; S=0x301c0885; converted property
@property(readonly, assign) PTPRange range;	// G=0x301c08f5; converted property
@property(assign) unsigned long transactionID;	// G=0x301c0895; S=0x301c08a5; converted property
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId andData:(id)data;	// 0x301c0a05
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId andFilepath:(id)filepath;	// 0x301c1c8d
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x301c1b79
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x301c1a5d
// converted property getter: - (long long)bufferSize;	// 0x301c08c5
// converted property getter: - (long long)bytesTransferred;	// 0x301c09d9
- (id)contentForTCP;	// 0x301c188d
- (id)contentForUSB;	// 0x301c1721
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x301c159d
- (long long)copyDataToWrappedBytes:(id)wrappedBytes forTransport:(unsigned short)transport fromOffset:(unsigned long long)offset;	// 0x301c0f25
- (long long)copyFromBuffer:(void *)buffer numBytes:(long long)bytes;	// 0x301c0add
- (long long)copyHeaderToWrappedBytes:(id)wrappedBytes forTransport:(unsigned short)transport;	// 0x301c0d65
- (long long)copyToBuffer:(void *)buffer numBytes:(long long)bytes;	// 0x301c1291
- (long long)copyToWrappedBytes:(id)wrappedBytes forTransport:(unsigned short)transport;	// 0x301c0fb5
// converted property getter: - (id)data;	// 0x301c08b5
- (void)dealloc;	// 0x301c19e5
- (id)description;	// 0x301c14a1
// converted property getter: - (id)filepath;	// 0x301c0865
// converted property getter: - (long long)offsetInBuffer;	// 0x301c08dd
// converted property getter: - (unsigned short)operationCode;	// 0x301c0875
// converted property getter: - (PTPRange)range;	// 0x301c08f5
// converted property setter: - (void)setBytesTransferred:(long long)transferred;	// 0x301c09f1
// converted property setter: - (void)setData:(id)data;	// 0x301c13e5
// converted property setter: - (void)setOperationCode:(unsigned short)code;	// 0x301c0885
- (int)setRange:(PTPRange)range;	// 0x301c0919
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x301c08a5
// converted property getter: - (unsigned long)transactionID;	// 0x301c0895
@end

