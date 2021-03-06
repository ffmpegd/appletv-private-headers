/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface SFUMemoryOutputStream : NSObject <SFUOutputStream> {
@private
	NSMutableData *mData;	// 4 = 0x4
}
- (id)initWithData:(id)data;	// 0x34e5efcd
- (BOOL)canCreateInputStream;	// 0x34e5efbd
- (BOOL)canSeek;	// 0x34e5efb9
- (void)close;	// 0x34e5efc5
- (id)closeLocalStream;	// 0x34e5efc9
- (void)dealloc;	// 0x34e5f0e9
- (id)inputStream;	// 0x34e5efc1
- (long long)offset;	// 0x34e5f0c1
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x34e5f039
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x34e5f00d
@end

