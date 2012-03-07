/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUFileOutputStream : NSObject <SFUOutputStream> {
@private
	FILE *mFile;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
}
- (id)initWithPath:(id)path;	// 0x357c00b1
- (BOOL)canCreateInputStream;	// 0x357c0091
- (BOOL)canSeek;	// 0x357c008d
- (void)close;	// 0x357c01fd
- (id)closeLocalStream;	// 0x357c0099
- (void)dealloc;	// 0x357c0225
- (id)inputStream;	// 0x357c0095
- (long long)offset;	// 0x357c0379
- (id)path;	// 0x357c007d
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x357c0289
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x357c0459
@end
