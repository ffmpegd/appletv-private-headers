/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableData.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSConcreteMutableData : NSMutableData {
	unsigned _reserved : 1;	// 4 = 0x4
	unsigned _needToZero : 1;	// 4 = 0x4
	unsigned _hasVM : 1;	// 4 = 0x4
	unsigned _retainCount : 29;	// 4 = 0x4
	unsigned _length;	// 8 = 0x8
	unsigned _capacity;	// 12 = 0xc
	void *_bytes;	// 16 = 0x10
}
@property(assign) unsigned length;	// G=0x35504f51; S=0x35504e39; converted property
- (id)init;	// 0x35510129
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x35510b19
- (id)initWithCapacity:(unsigned)capacity;	// 0x3551013d
- (id)initWithLength:(unsigned)length;	// 0x35504cdd
- (BOOL)_bytesAreVM;	// 0x355672c9
- (void)_freeBytes;	// 0x355077b1
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x3550e9b9
- (void)appendData:(id)data;	// 0x355110e9
- (const void *)bytes;	// 0x35504f41
- (void)dealloc;	// 0x35507771
- (void)finalize;	// 0x3556774d
- (void)increaseLengthBy:(unsigned)by;	// 0x355672dd
// converted property getter: - (unsigned)length;	// 0x35504f51
- (void *)mutableBytes;	// 0x35504f31
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;	// 0x35567419
- (void)resetBytesInRange:(NSRange)range;	// 0x35567621
// converted property setter: - (void)setLength:(unsigned)length;	// 0x35504e39
@end

