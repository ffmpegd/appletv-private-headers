/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUInputStream.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUFileInputStream : NSObject <SFUInputStream> {
@private
	int mFd;	// 4 = 0x4
	BOOL mIsCachingDisabled;	// 8 = 0x8
	long long mStartOffset;	// 12 = 0xc
	long long mCurrentOffset;	// 20 = 0x14
	long long mEndOffset;	// 28 = 0x1c
}
- (id)initWithFileDescriptor:(int)fileDescriptor offset:(long long)offset length:(long long)length;	// 0x34502f79
- (id)initWithPath:(id)path offset:(long long)offset;	// 0x3464a8dd
- (id)initWithPath:(id)path offset:(long long)offset length:(long long)length;	// 0x3464a9ad
- (BOOL)canSeek;	// 0x34503651
- (void)close;	// 0x34504109
- (id)closeLocalStream;	// 0x3464a8c5
- (void)dealloc;	// 0x345040cd
- (void)disableSystemCaching;	// 0x3464ab5d
- (void)enableSystemCaching;	// 0x3464aafd
- (long long)offset;	// 0x345031d9
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x34503b95
- (void)seekToOffset:(long long)offset;	// 0x34503a5d
@end

