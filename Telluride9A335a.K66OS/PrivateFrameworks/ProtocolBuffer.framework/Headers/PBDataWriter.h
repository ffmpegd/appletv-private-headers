/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface PBDataWriter : NSObject {
	NSMutableData *_data;	// 4 = 0x4
}
@property(readonly, retain) NSMutableData *data;	// G=0x305bf7d9; converted property
- (id)init;	// 0x305bf729
// converted property getter: - (id)data;	// 0x305bf7d9
- (void)dealloc;	// 0x305bf78d
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x305bfded
- (void)writeBOOL:(BOOL)aBool forTag:(unsigned short)tag;	// 0x305bfcc9
- (void)writeBareVarint:(long long)varint;	// 0x305bf951
- (void)writeBigEndianFixed16:(unsigned short)a16;	// 0x305bf7e9
- (void)writeBigEndianFixed32:(unsigned)a32;	// 0x305bf811
- (void)writeBigEndianShortThenString:(id)string;	// 0x305bf835
- (BOOL)writeData:(id)data;	// 0x305bfd9d
- (void)writeData:(id)data forTag:(unsigned short)tag;	// 0x305bfd39
- (void)writeDouble:(double)aDouble forTag:(unsigned short)tag;	// 0x305bf9d5
- (void)writeFixed32:(unsigned)a32 forTag:(unsigned short)tag;	// 0x305bfbc1
- (void)writeFixed64:(unsigned long long)a64 forTag:(unsigned short)tag;	// 0x305bfbfd
- (void)writeFloat:(float)aFloat forTag:(unsigned short)tag;	// 0x305bfa1d
- (void)writeInt32:(int)a32 forTag:(unsigned short)tag;	// 0x305bfa59
- (void)writeInt64:(long long)a64 forTag:(unsigned short)tag;	// 0x305bfa91
- (void)writeInt8:(BOOL)a8;	// 0x305bf92d
- (void)writeProtoBuffer:(id)buffer;	// 0x305bf8b9
- (void)writeSfixed32:(int)a32 forTag:(unsigned short)tag;	// 0x305bfc45
- (void)writeSfixed64:(long long)a64 forTag:(unsigned short)tag;	// 0x305bfc81
- (void)writeSint32:(int)a32 forTag:(unsigned short)tag;	// 0x305bfb41
- (void)writeSint64:(long long)a64 forTag:(unsigned short)tag;	// 0x305bfb7d
- (void)writeString:(id)string forTag:(unsigned short)tag;	// 0x305bfd01
- (void)writeTag:(unsigned short)tag andType:(unsigned char)type;	// 0x305bf9a9
- (void)writeUint32:(unsigned)a32 forTag:(unsigned)tag;	// 0x305bfacd
- (void)writeUint64:(unsigned long long)a64 forTag:(unsigned long long)tag;	// 0x305bfb05
@end

