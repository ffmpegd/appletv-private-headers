/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUZipArchiveDataRepresentation.h"
#import "SFUDataRepresentation.h"

@class SFUFileDataRepresentation;

@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
	SFUFileDataRepresentation *mFileRepresentation;	// 20 = 0x14
	int mFd;	// 24 = 0x18
}
- (id)initWithPath:(id)path;	// 0x3692fbb9
- (id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;	// 0x36930085
- (long long)dataLength;	// 0x3692fdd9
- (void)dealloc;	// 0x3692fd51
- (BOOL)hasSameLocationAs:(id)as;	// 0x3692fe1d
- (id)inputStream;	// 0x3692fdfd
- (id)inputStreamWithOffset:(long long)offset length:(long long)length;	// 0x3692ff05
- (BOOL)isEncrypted;	// 0x3692fdf9
- (BOOL)isReadable;	// 0x3692fdb5
- (id)path;	// 0x3692fee5
@end
