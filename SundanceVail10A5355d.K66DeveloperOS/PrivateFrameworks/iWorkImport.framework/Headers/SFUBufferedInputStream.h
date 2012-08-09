/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUInputStream.h"
#import "SFUBufferedInputStream.h"
#import <NSObject.h> // Unknown library


@protocol SFUBufferedInputStream <SFUInputStream>
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;
- (BOOL)seekWithinBufferToOffset:(long long)offset;
@end

@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream> {
	id<SFUInputStream> mStream;	// 4 = 0x4
	char *mBuffer;	// 8 = 0x8
	unsigned long mBufferSize;	// 12 = 0xc
	long long mBufferOffset;	// 16 = 0x10
	long long mBufferStart;	// 24 = 0x18
	long long mBufferEnd;	// 32 = 0x20
}
- (id)initWithStream:(id)stream;	// 0x34c57a15
- (id)initWithStream:(id)stream bufferSize:(unsigned long)size;	// 0x34c57a29
- (id)initWithStream:(id)stream dataLength:(long long)length;	// 0x34c57b39
- (BOOL)canSeek;	// 0x34c57e8d
- (void)close;	// 0x34c57fe9
- (id)closeLocalStream;	// 0x34c58009
- (void)dealloc;	// 0x34c57b55
- (void)disableSystemCaching;	// 0x34c57fa9
- (void)enableSystemCaching;	// 0x34c57fc9
- (long long)offset;	// 0x34c57bb5
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x34c57be5
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x34c57c15
- (void)seekToOffset:(long long)offset;	// 0x34c57eb1
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x34c57e09
@end
