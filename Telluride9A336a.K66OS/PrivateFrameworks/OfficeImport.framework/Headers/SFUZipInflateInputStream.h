/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "SFUInputStream.h"
#import <NSObject.h> // Unknown library

@protocol SFUBufferedInputStream;

__attribute__((visibility("hidden")))
@interface SFUZipInflateInputStream : NSObject <SFUInputStream> {
@private
	z_stream_s mStream;	// 4 = 0x4
	long long mOffset;	// 60 = 0x3c
	id<SFUBufferedInputStream> mInput;	// 68 = 0x44
	char *mOutBuffer;	// 72 = 0x48
	unsigned mOutBufferSize;	// 76 = 0x4c
	BOOL mReachedEnd;	// 80 = 0x50
	BOOL mIsFromZip;	// 81 = 0x51
	unsigned mCalculatedCrc;	// 84 = 0x54
	unsigned mCheckCrc;	// 88 = 0x58
}
- (id)initWithInput:(id)input;	// 0x34e662c9
- (id)initWithOffset:(long long)offset end:(long long)end uncompressedSize:(unsigned long long)size crc:(unsigned long)crc dataRepresentation:(id)representation;	// 0x34d026b5
- (BOOL)canSeek;	// 0x34e661e9
- (void)close;	// 0x34d02a5d
- (id)closeLocalStream;	// 0x34d02a95
- (void)dealloc;	// 0x34d02aa5
- (void)disableSystemCaching;	// 0x34e66289
- (void)enableSystemCaching;	// 0x34e662a9
- (long long)offset;	// 0x34d02939
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x34d0294d
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x34e66465
- (void)seekToOffset:(long long)offset;	// 0x34e66201
- (void)setupInflateStream;	// 0x34d028b5
- (long long)totalCompressedBytesConsumed;	// 0x34e661ed
@end
