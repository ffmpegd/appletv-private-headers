/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <NSData.h> // Unknown library


@interface PLXPCShMemData : NSData {
	void *_buffer;	// 4 = 0x4
	unsigned long _dataLength;	// 8 = 0x8
	unsigned long _bufferLength;	// 12 = 0xc
}
- (id)initWithXPCShmem:(id)xpcshmem;	// 0x314e22d5
- (id)initWithXPCShmem:(id)xpcshmem length:(long long)length;	// 0x314e2359
- (const void *)bytes;	// 0x314e2479
- (void)dealloc;	// 0x314e2385
- (id)description;	// 0x314e240d
- (unsigned)length;	// 0x314e2489
@end

