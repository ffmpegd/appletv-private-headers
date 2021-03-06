/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library


@interface SFUZipDeflateOutputStream : NSObject <SFUOutputStream> {
	id<SFUOutputStream> mOutputStream;	// 4 = 0x4
	z_stream_s mDeflateStream;	// 8 = 0x8
	char *mOutBuffer;	// 64 = 0x40
}
- (id)initWithOutputStream:(id)outputStream;	// 0x33c245b9
- (BOOL)canCreateInputStream;	// 0x33c24b51
- (BOOL)canSeek;	// 0x33c24abd
- (void)close;	// 0x33c24939
- (id)closeLocalStream;	// 0x33c24839
- (void)dealloc;	// 0x33c247c9
- (id)inputStream;	// 0x33c24b55
- (long long)offset;	// 0x33c24b3d
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x33c24ac1
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x33c24961
@end

