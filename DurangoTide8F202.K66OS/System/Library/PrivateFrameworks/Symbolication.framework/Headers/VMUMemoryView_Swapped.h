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
@property(readonly, assign) VMURange addressRange;	// G=0x30172771; converted property
@property(assign) unsigned long long cursor;	// G=0x3017278d; S=0x30172b2d; converted property
- (id)initWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x301727b9
- (long long)LEB128;	// 0x30172869
- (unsigned long long)ULEB128;	// 0x301728e5
// converted property getter: - (VMURange)addressRange;	// 0x30172771
- (void)advanceCursor:(unsigned long long)cursor;	// 0x301729a5
- (id)arrayOfInt16:(unsigned long)int16;	// 0x30173b55
- (id)arrayOfInt32:(unsigned long)int32;	// 0x301739d9
- (id)arrayOfInt64:(unsigned long)int64;	// 0x30173851
- (id)arrayOfInt8:(unsigned long)int8;	// 0x30173cd1
- (id)arrayOfUInt16:(unsigned long)uint16;	// 0x301735f9
- (id)arrayOfUInt32:(unsigned long)uint32;	// 0x3017347d
- (id)arrayOfUInt64:(unsigned long)uint64;	// 0x301732f1
- (id)arrayOfUInt8:(unsigned long)uint8;	// 0x30173775
- (BOOL)charAtOffset:(unsigned long long)offset;	// 0x30172c81
// converted property getter: - (unsigned long long)cursor;	// 0x3017278d
- (id)description;	// 0x30172bed
- (dyld_image_info_64)dyldImageInfo;	// 0x30172e8d
- (dyld_image_info_64)dyldImageInfo64;	// 0x30172d59
- (short)int16;	// 0x30174409
- (int)int32;	// 0x301742fd
- (long long)int64;	// 0x301741e9
- (BOOL)int8;	// 0x30174519
- (BOOL)isCursorPointerAligned;	// 0x30172969
- (nlist_64)nlist;	// 0x30173165
- (nlist_64)nlist_64;	// 0x30172fd5
- (void)pointerAlignCursor;	// 0x3017292d
- (id)readBytes:(unsigned long)bytes;	// 0x30172a89
- (void)rewindCursor:(unsigned long long)cursor;	// 0x30174625
// converted property setter: - (void)setCursor:(unsigned long long)cursor;	// 0x30172b2d
- (id)stringWithEncoding:(unsigned)encoding;	// 0x301746f9
- (id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;	// 0x30172839
- (id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;	// 0x301748ad
- (unsigned short)uint16;	// 0x30173fcd
- (unsigned)uint32;	// 0x30173ec1
- (unsigned long long)uint64;	// 0x30173dad
- (unsigned char)uint8;	// 0x301740dd
@end

