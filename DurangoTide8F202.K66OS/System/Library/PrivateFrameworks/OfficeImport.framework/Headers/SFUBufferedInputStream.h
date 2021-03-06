/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUInputStream.h"
#import <NSObject.h> // Unknown library
#import "SFUBufferedInputStream.h"


@protocol SFUBufferedInputStream <SFUInputStream>
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;
- (BOOL)seekWithinBufferToOffset:(long long)offset;
@end

__attribute__((visibility("hidden")))
@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream> {
@private
	id<SFUInputStream> mStream;	// 4 = 0x4
	char *mBuffer;	// 8 = 0x8
	unsigned mBufferSize;	// 12 = 0xc
	unsigned mBufferOffset;	// 16 = 0x10
	long long mBufferStart;	// 20 = 0x14
	long long mBufferEnd;	// 28 = 0x1c
}
- (id)initWithStream:(id)stream;	// 0x31b716cd
- (id)initWithStream:(id)stream bufferSize:(unsigned long)size;	// 0x31a2b0c1
- (id)initWithStream:(id)stream dataLength:(long long)length;	// 0x31a2b08d
- (BOOL)canSeek;	// 0x31a2b62d
- (void)close;	// 0x31a2cd69
- (id)closeLocalStream;	// 0x31b7167d
- (void)dealloc;	// 0x31a2c075
- (void)disableSystemCaching;	// 0x31b716ad
- (void)enableSystemCaching;	// 0x31b7168d
- (long long)offset;	// 0x31b715f9
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x31b716e5
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x31a2b655
- (void)seekToOffset:(long long)offset;	// 0x31a2b571
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x31b71625
@end

