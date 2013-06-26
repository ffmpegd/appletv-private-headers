/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


@interface NSMutableData (NSMutableData)
+ (id)allocWithZone:(NSZone *)zone;	// 0x318b149d
+ (id)dataWithCapacity:(unsigned)capacity;	// 0x31913a3d
+ (id)dataWithLength:(unsigned)length;	// 0x318bdfcd
- (id)initWithCapacity:(unsigned)capacity;	// 0x31913a7d
- (id)initWithLength:(unsigned)length;	// 0x31913aa1
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x3191327d
- (void)appendData:(id)data;	// 0x3191340d
- (Class)classForCoder;	// 0x318bca4d
- (void)increaseLengthBy:(unsigned)by;	// 0x319135d5
- (void *)mutableBytes;	// 0x31912f8d
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;	// 0x319136cd
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes length:(unsigned)length;	// 0x31912fd5
- (void)resetBytesInRange:(NSRange)range;	// 0x319138c9
- (void)setData:(id)data;	// 0x319139d9
- (void)setLength:(unsigned)length;	// 0x31912fb1
@end
