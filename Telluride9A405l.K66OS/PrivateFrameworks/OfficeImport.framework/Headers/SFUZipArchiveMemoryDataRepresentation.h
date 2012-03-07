/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"
#import "SFUZipArchiveDataRepresentation.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
@private
	NSData *mData;	// 12 = 0xc
}
- (id)initWithData:(id)data;	// 0x30dbfd19
- (id)bufferedInputStream;	// 0x30dbfd71
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x30ec578d
- (id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;	// 0x30dbfdd1
- (id)data;	// 0x30ec56f9
- (long long)dataLength;	// 0x30dbfda9
- (void)dealloc;	// 0x30dc9db1
- (BOOL)hasSameLocationAs:(id)as;	// 0x30ec571d
- (id)inputStream;	// 0x30ec57c5
- (id)inputStreamWithOffset:(long long)offset length:(long long)length;	// 0x30ec570d
- (BOOL)isReadable;	// 0x30ec5709
@end

