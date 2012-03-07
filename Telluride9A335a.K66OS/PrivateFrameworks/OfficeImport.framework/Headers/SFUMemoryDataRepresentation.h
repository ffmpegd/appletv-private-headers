/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SFUMemoryDataRepresentation : SFUDataRepresentation {
@private
	NSData *mData;	// 12 = 0xc
}
- (id)initWithData:(id)data;	// 0x35406901
- (id)initWithDataNoCopy:(id)dataNoCopy;	// 0x35406e49
- (id)initWithDataRepresentation:(id)dataRepresentation;	// 0x35406b0d
- (id)bufferedInputStream;	// 0x35406a35
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x35406a25
- (id)data;	// 0x354068ed
- (long long)dataLength;	// 0x35406a99
- (void)dealloc;	// 0x35406ac1
- (BOOL)hasSameLocationAs:(id)as;	// 0x354069b5
- (id)inputStream;	// 0x35406a89
- (BOOL)isReadable;	// 0x354068fd
- (unsigned long)readIntoData:(id)data;	// 0x35406959
@end

