/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "SFUInputStream.h"
#import <NSObject.h> // Unknown library

@protocol SFUBufferedInputStream;

@interface SFUZipInflateInputStream : NSObject <SFUInputStream> {
	z_stream_s mStream;	// 4 = 0x4
	long long mOffset;	// 60 = 0x3c
	id<SFUBufferedInputStream> mInput;	// 68 = 0x44
	char *mOutBuffer;	// 72 = 0x48
	unsigned long long mOutBufferSize;	// 76 = 0x4c
	BOOL mReachedEnd;	// 84 = 0x54
	BOOL mIsFromZip;	// 85 = 0x55
	unsigned long mCalculatedCrc;	// 88 = 0x58
	unsigned long mCheckCrc;	// 92 = 0x5c
}
- (id)initWithInput:(id)input;	// 0x35d702ad
- (id)initWithOffset:(long long)offset end:(long long)end uncompressedSize:(unsigned long long)size crc:(unsigned long)crc dataRepresentation:(id)representation;	// 0x35d700ad
- (BOOL)canSeek;	// 0x35d70711
- (void)close;	// 0x35d70769
- (id)closeLocalStream;	// 0x35d707a5
- (void)dealloc;	// 0x35d7044d
- (void)disableSystemCaching;	// 0x35d70729
- (void)enableSystemCaching;	// 0x35d70749
- (long long)offset;	// 0x35d70715
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x35d705d9
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x35d704bd
- (void)seekToOffset:(long long)offset;	// 0x35d7070d
- (void)setupInflateStream;	// 0x35d707c9
- (long long)totalCompressedBytesConsumed;	// 0x35d707b5
@end

