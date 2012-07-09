/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQZEntryInputStream.h"

@protocol GQZArchiveInputStream;

@interface GQZEntryUncompressedInputStream : NSObject <GQZEntryInputStream> {
	long long mOffset;	// 4 = 0x4
	long long mEnd;	// 12 = 0xc
	id<GQZArchiveInputStream> mInput;	// 20 = 0x14
}
- (id)initWithOffset:(long long)offset end:(long long)end input:(id)input;	// 0x350ba0f5
- (void)dealloc;	// 0x350ba179
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x350ba251
- (void)readToOwnBuffer:(const char **)ownBuffer size:(unsigned *)size;	// 0x350ba1c5
@end
