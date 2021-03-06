/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface SFUFileOutputStream : NSObject <SFUOutputStream> {
	FILE *mFile;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
}
- (id)initWithPath:(id)path;	// 0x3512191d
- (BOOL)canCreateInputStream;	// 0x35121d71
- (BOOL)canSeek;	// 0x35121c91
- (void)close;	// 0x35121d79
- (id)closeLocalStream;	// 0x35121d9d
- (void)dealloc;	// 0x35121a61
- (id)inputStream;	// 0x35121d75
- (long long)offset;	// 0x35121bb1
- (id)path;	// 0x35121ac5
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x35121c95
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x35121ad5
@end

