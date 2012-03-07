/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface IndexData : NSObject {
@private
	int flags;	// 4 = 0x4
	int ivSize;	// 8 = 0x8
	NSArray *chunkList;	// 12 = 0xc
}
- (id)initWithBuffer:(id)buffer length:(unsigned)length;	// 0x33c5f928
- (void)dealloc;	// 0x33c5faf4
- (id)getChunks;	// 0x33c5f914
- (int)getFlags;	// 0x33c5f8ec
- (int)getIVSize;	// 0x33c5f900
@end

