/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface Buffer : NSObject {
@private
	char *buf;	// 4 = 0x4
	int index;	// 8 = 0x8
	int bitMask;	// 12 = 0xc
	int length;	// 16 = 0x10
}
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x3373c414
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x3373c440
- (int)getBits:(unsigned)bits;	// 0x3373bfd0
- (int)getByte;	// 0x3373c0c8
- (id)getBytes:(unsigned)bytes;	// 0x3373c17c
- (int)getIndex;	// 0x3373bf6c
- (int)getInt;	// 0x3373c110
- (int)getLength;	// 0x3373bf58
- (long long)getLong;	// 0x3373c3b4
- (id)getNullTerminatedString;	// 0x3373c21c
- (int)getShort;	// 0x3373c070
- (id)getString:(unsigned)string;	// 0x3373c304
- (char *)getUnreadData;	// 0x3373bfa8
- (int)getUnreadLength;	// 0x3373bf80
@end
