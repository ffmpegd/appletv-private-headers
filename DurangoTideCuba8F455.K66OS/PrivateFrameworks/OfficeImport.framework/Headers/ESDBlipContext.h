/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OCDDelayedMediaContext.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface ESDBlipContext : NSObject <OCDDelayedMediaContext> {
@private
	SsrwOOStream *mStream;	// 4 = 0x4
	unsigned mStreamID;	// 8 = 0x8
	unsigned mStartOffset;	// 12 = 0xc
	unsigned mByteCount;	// 16 = 0x10
}
- (id)initWithOffset:(unsigned)offset byteCount:(unsigned)count stream:(SsrwOOStream *)stream streamID:(unsigned)anId;	// 0x32bf1929
- (bool)loadDelayedNode:(id)node;	// 0x32b83a85
- (bool)saveDelayedMedia:(id)media toFile:(id)file;	// 0x32ce0e11
- (SsrwOOStream *)stream;	// 0x32ce0e15
@end
