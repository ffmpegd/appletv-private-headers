/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSData.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSSubrangeData : NSData {
	unsigned _reserved : 3;	// 4 = 0x4
	unsigned _retainCount : 29;	// 4 = 0x4
	NSRange _range;	// 8 = 0x8
	NSData *_data;	// 16 = 0x10
}
- (id)init;	// 0x32569385
- (id)initWithData:(id)data range:(NSRange)range;	// 0x325368bd
- (BOOL)_bytesAreVM;	// 0x32569065
- (const void *)bytes;	// 0x325377d9
- (id)copyWithZone:(NSZone *)zone;	// 0x32569055
- (void)dealloc;	// 0x32537825
- (void)getBytes:(void *)bytes;	// 0x32569089
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x32569115
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x325691ad
- (unsigned)length;	// 0x32537811
@end

