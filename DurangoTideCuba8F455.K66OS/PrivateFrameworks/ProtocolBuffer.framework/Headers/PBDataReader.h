/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSData;

@interface PBDataReader : NSObject {
	NSData *_data;	// 4 = 0x4
	unsigned _pos;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	BOOL _error;	// 16 = 0x10
}
@property(readonly, retain) NSData *data;	// G=0x3156feb9; converted property
@property(assign) unsigned length;	// G=0x3156ff61; S=0x3156ff71; @synthesize=_length
@property(assign) unsigned position;	// G=0x3156ff41; S=0x3156ff51; @synthesize=_pos
- (id)initWithData:(id)data;	// 0x31570611
// converted property getter: - (id)data;	// 0x3156feb9
- (void)dealloc;	// 0x315705c9
- (BOOL)hasError;	// 0x3156feed
- (BOOL)hasMoreData;	// 0x315705a9
- (BOOL)isAtEnd;	// 0x3156fec9
// declared property getter: - (unsigned)length;	// 0x3156ff61
- (unsigned)offset;	// 0x3156fefd
// declared property getter: - (unsigned)position;	// 0x3156ff41
- (int)read:(const char *)read maxLength:(unsigned)length;	// 0x315707b1
- (BOOL)readBOOL;	// 0x31570079
- (unsigned short)readBigEndianFixed16;	// 0x31570759
- (unsigned)readBigEndianFixed32;	// 0x31570705
- (unsigned long long)readBigEndianFixed64;	// 0x315706a1
- (id)readBytes:(unsigned)bytes;	// 0x3156ff81
- (id)readData;	// 0x3156ffed
- (double)readDouble;	// 0x315702d9
- (unsigned)readFixed32;	// 0x31570199
- (unsigned long long)readFixed64;	// 0x31570141
- (float)readFloat;	// 0x31570289
- (int)readInt32;	// 0x31570275
- (long long)readInt64;	// 0x31570261
- (BOOL)readInt8;	// 0x315703cd
- (id)readProtoBuffer;	// 0x31570425
- (int)readSfixed32;	// 0x315700f1
- (long long)readSfixed64;	// 0x31570099
- (int)readSint32;	// 0x31570215
- (long long)readSint64;	// 0x315701e9
- (id)readString;	// 0x31570029
- (void)readTag:(unsigned short *)tag andType:(char *)type;	// 0x31570581
- (unsigned)readUint32;	// 0x3157024d
- (unsigned long long)readUint64;	// 0x31570239
- (long long)readVarInt;	// 0x31570331
- (BOOL)seekToOffset:(unsigned)offset;	// 0x3156ff0d
// declared property setter: - (void)setLength:(unsigned)length;	// 0x3156ff71
// declared property setter: - (void)setPosition:(unsigned)position;	// 0x3156ff51
- (BOOL)skipValueWithTag:(unsigned short)tag andType:(unsigned char)type;	// 0x31570481
@end

