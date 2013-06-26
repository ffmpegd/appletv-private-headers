/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUInputStream.h"


@interface SFUOffsetInputStream : NSObject <SFUInputStream> {
	id<SFUInputStream> mInputStream;	// 4 = 0x4
	long long mInitialOffset;	// 8 = 0x8
}
- (id)initWithInputStream:(id)inputStream;	// 0x34acd0a5
- (id)initWithInputStream:(id)inputStream initialOffset:(long long)offset;	// 0x34acd0e1
- (BOOL)canSeek;	// 0x34acd2a5
- (void)close;	// 0x34acd355
- (id)closeLocalStream;	// 0x34acd375
- (void)dealloc;	// 0x34acd159
- (void)disableSystemCaching;	// 0x34acd315
- (void)enableSystemCaching;	// 0x34acd335
- (long long)offset;	// 0x34acd1a5
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x34acd285
- (void)seekToOffset:(long long)offset;	// 0x34acd2c9
@end
