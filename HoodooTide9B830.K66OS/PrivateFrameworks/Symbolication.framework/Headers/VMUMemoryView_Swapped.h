/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <NSObject.h> // Unknown library
#import "VMUMemoryView.h"


@interface VMUMemoryView_Swapped : NSObject <VMUMemoryView> {
	VMURange _addressRange;	// 4 = 0x4
	unsigned long _cursor;	// 20 = 0x14
	char *_data;	// 24 = 0x18
	id _gcKeepAlive;	// 28 = 0x1c
}
@property(readonly, assign) VMURange addressRange;	// G=0x31bc804d; converted property
@property(assign) unsigned long long cursor;	// G=0x31bc8071; S=0x31bca1e5; converted property
- (id)initWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x31bc8099
- (long long)LEB128;	// 0x31bc8bb1
- (unsigned long long)ULEB128;	// 0x31bc8c25
// converted property getter: - (VMURange)addressRange;	// 0x31bc804d
- (void)advanceCursor:(unsigned long long)cursor;	// 0x31bca0f9
- (id)arrayOfInt16:(unsigned long)int16;	// 0x31bc9471
- (id)arrayOfInt32:(unsigned long)int32;	// 0x31bc9309
- (id)arrayOfInt64:(unsigned long)int64;	// 0x31bc9191
- (id)arrayOfInt8:(unsigned long)int8;	// 0x31bc95dd
- (id)arrayOfUInt16:(unsigned long)uint16;	// 0x31bc8f4d
- (id)arrayOfUInt32:(unsigned long)uint32;	// 0x31bc8de5
- (id)arrayOfUInt64:(unsigned long)uint64;	// 0x31bc8c6d
- (id)arrayOfUInt8:(unsigned long)uint8;	// 0x31bc90b9
- (BOOL)charAtOffset:(unsigned long long)offset;	// 0x31bc857d
// converted property getter: - (unsigned long long)cursor;	// 0x31bc8071
- (id)description;	// 0x31bc8129
- (dyld_image_info_64)dyldImageInfo;	// 0x31bc8779
- (dyld_image_info_64)dyldImageInfo64;	// 0x31bc8659
- (short)int16;	// 0x31bc9d81
- (int)int32;	// 0x31bc9c7d
- (long long)int64;	// 0x31bc9b75
- (BOOL)int8;	// 0x31bc9e85
- (BOOL)isCursorPointerAligned;	// 0x31bc9fc9
- (nlist_64)nlist;	// 0x31bc8a35
- (nlist_64)nlist_64;	// 0x31bc88ad
- (void)pointerAlignCursor;	// 0x31bc9f85
- (id)readBytes:(unsigned long)bytes;	// 0x31bc96b5
- (void)rewindCursor:(unsigned long long)cursor;	// 0x31bca00d
// converted property setter: - (void)setCursor:(unsigned long long)cursor;	// 0x31bca1e5
- (id)stringWithEncoding:(unsigned)encoding;	// 0x31bc81cd
- (id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;	// 0x31bc855d
- (id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;	// 0x31bc8389
- (unsigned short)uint16;	// 0x31bc996d
- (unsigned)uint32;	// 0x31bc9869
- (unsigned long long)uint64;	// 0x31bc9761
- (unsigned char)uint8;	// 0x31bc9a75
@end

