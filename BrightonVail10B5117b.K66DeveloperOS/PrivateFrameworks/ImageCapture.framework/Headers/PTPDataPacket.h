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
	unsigned long _transactionID;	// 8 = 0x8
	id _data;	// 12 = 0xc
	NSString *_filepath;	// 16 = 0x10
	int _fd;	// 20 = 0x14
	long long _bufferSize;	// 24 = 0x18
	long long _offsetInBuffer;	// 32 = 0x20
	PTPRange _range;	// 40 = 0x28
	long long _bytesTransferred;	// 56 = 0x38
}
@property(readonly, assign) long long bufferSize;	// G=0x343ecb19; converted property
@property(assign) long long bytesTransferred;	// G=0x343ecc25; S=0x343ecc3d; converted property
@property(retain) id data;	// G=0x343eca5d; S=0x343eca6d; converted property
@property(readonly, retain) NSString *filepath;	// G=0x343ec081; converted property
@property(readonly, assign) long long offsetInBuffer;	// G=0x343ecb31; converted property
@property(assign) unsigned short operationCode;	// G=0x343eca1d; S=0x343eca2d; converted property
@property(readonly, assign) PTPRange range;	// G=0x343ecb49; converted property
@property(assign) unsigned long transactionID;	// G=0x343eca3d; S=0x343eca4d; converted property
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId andData:(id)data;	// 0x343ec091
- (id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId andFilepath:(id)filepath;	// 0x343ec159
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x343ec28d
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x343ec391
// converted property getter: - (long long)bufferSize;	// 0x343ecb19
// converted property getter: - (long long)bytesTransferred;	// 0x343ecc25
- (id)contentForTCP;	// 0x343ec515
- (id)contentForUSB;	// 0x343ec659
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x343ec7b1
- (long long)copyDataToWrappedBytes:(id)wrappedBytes forTransport:(unsigned short)transport fromOffset:(unsigned long long)offset;	// 0x343ecfd9
- (long long)copyFromBuffer:(void *)buffer numBytes:(long long)bytes;	// 0x343ed1d9
- (long long)copyHeaderToWrappedBytes:(id)wrappedBytes forTransport:(unsigned short)transport;	// 0x343ed065
- (long long)copyToBuffer:(void *)buffer numBytes:(long long)bytes;	// 0x343ecc51
- (long long)copyToWrappedBytes:(id)wrappedBytes forTransport:(unsigned short)transport;	// 0x343ecd91
// converted property getter: - (id)data;	// 0x343eca5d
- (void)dealloc;	// 0x343ec49d
- (id)description;	// 0x343ec921
// converted property getter: - (id)filepath;	// 0x343ec081
// converted property getter: - (long long)offsetInBuffer;	// 0x343ecb31
// converted property getter: - (unsigned short)operationCode;	// 0x343eca1d
// converted property getter: - (PTPRange)range;	// 0x343ecb49
// converted property setter: - (void)setBytesTransferred:(long long)transferred;	// 0x343ecc3d
// converted property setter: - (void)setData:(id)data;	// 0x343eca6d
// converted property setter: - (void)setOperationCode:(unsigned short)code;	// 0x343eca2d
- (int)setRange:(PTPRange)range;	// 0x343ecb6d
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x343eca4d
// converted property getter: - (unsigned long)transactionID;	// 0x343eca3d
@end

