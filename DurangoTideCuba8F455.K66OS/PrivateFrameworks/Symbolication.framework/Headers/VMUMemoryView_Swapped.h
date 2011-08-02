/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "VMUMemoryView.h"


@interface VMUMemoryView_Swapped : NSObject <VMUMemoryView> {
	VMURange _addressRange;	// 4 = 0x4
	unsigned long _cursor;	// 20 = 0x14
	char *_data;	// 24 = 0x18
	id _gcKeepAlive;	// 28 = 0x1c
}
@property(readonly, assign) VMURange addressRange;	// G=0x34128771; converted property
@property(assign) unsigned long long cursor;	// G=0x3412878d; S=0x34128b2d; converted property
- (id)initWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x341287b9
- (long long)LEB128;	// 0x34128869
- (unsigned long long)ULEB128;	// 0x341288e5
// converted property getter: - (VMURange)addressRange;	// 0x34128771
- (void)advanceCursor:(unsigned long long)cursor;	// 0x341289a5
- (id)arrayOfInt16:(unsigned long)int16;	// 0x34129b55
- (id)arrayOfInt32:(unsigned long)int32;	// 0x341299d9
- (id)arrayOfInt64:(unsigned long)int64;	// 0x34129851
- (id)arrayOfInt8:(unsigned long)int8;	// 0x34129cd1
- (id)arrayOfUInt16:(unsigned long)uint16;	// 0x341295f9
- (id)arrayOfUInt32:(unsigned long)uint32;	// 0x3412947d
- (id)arrayOfUInt64:(unsigned long)uint64;	// 0x341292f1
- (id)arrayOfUInt8:(unsigned long)uint8;	// 0x34129775
- (BOOL)charAtOffset:(unsigned long long)offset;	// 0x34128c81
// converted property getter: - (unsigned long long)cursor;	// 0x3412878d
- (id)description;	// 0x34128bed
- (dyld_image_info_64)dyldImageInfo;	// 0x34128e8d
- (dyld_image_info_64)dyldImageInfo64;	// 0x34128d59
- (short)int16;	// 0x3412a409
- (int)int32;	// 0x3412a2fd
- (long long)int64;	// 0x3412a1e9
- (BOOL)int8;	// 0x3412a519
- (BOOL)isCursorPointerAligned;	// 0x34128969
- (nlist_64)nlist;	// 0x34129165
- (nlist_64)nlist_64;	// 0x34128fd5
- (void)pointerAlignCursor;	// 0x3412892d
- (id)readBytes:(unsigned long)bytes;	// 0x34128a89
- (void)rewindCursor:(unsigned long long)cursor;	// 0x3412a625
// converted property setter: - (void)setCursor:(unsigned long long)cursor;	// 0x34128b2d
- (id)stringWithEncoding:(unsigned)encoding;	// 0x3412a6f9
- (id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;	// 0x34128839
- (id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;	// 0x3412a8ad
- (unsigned short)uint16;	// 0x34129fcd
- (unsigned)uint32;	// 0x34129ec1
- (unsigned long long)uint64;	// 0x34129dad
- (unsigned char)uint8;	// 0x3412a0dd
@end
