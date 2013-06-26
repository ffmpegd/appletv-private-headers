/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"
#import "SFUZipArchiveDataRepresentation.h"

@class SFUFileDataRepresentation;

@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
	SFUFileDataRepresentation *mFileRepresentation;	// 20 = 0x14
	int mFd;	// 24 = 0x18
}
- (id)initWithPath:(id)path;	// 0x36a99c39
- (id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;	// 0x36a9c839
- (long long)dataLength;	// 0x36a9a9d1
- (void)dealloc;	// 0x36ad0275
- (BOOL)hasSameLocationAs:(id)as;	// 0x36c95af5
- (id)inputStream;	// 0x36a9a505
- (id)inputStreamWithOffset:(long long)offset length:(long long)length;	// 0x36a9c8ad
- (BOOL)isEncrypted;	// 0x36c95af1
- (BOOL)isReadable;	// 0x36c95acd
- (id)path;	// 0x36c95bbd
@end
