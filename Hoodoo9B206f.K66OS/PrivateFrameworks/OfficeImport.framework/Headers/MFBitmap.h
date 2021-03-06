/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface MFBitmap : NSObject {
@private
	int m_width;	// 4 = 0x4
	int m_height;	// 8 = 0x8
	unsigned m_bitsPerPixel;	// 12 = 0xc
	int m_compression;	// 16 = 0x10
	BOOL m_isOS2;	// 20 = 0x14
	unsigned m_infoHeaderSize;	// 24 = 0x18
	unsigned m_paletteSize;	// 28 = 0x1c
	NSMutableData *m_bmpData;	// 32 = 0x20
}
- (id)init;	// 0x3463ab0d
- (id)initWithBitmap:(id)bitmap :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned)arg7;	// 0x3463ab55
- (id)initWithDIBitmap:(id)dibitmap :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x344bfab9
- (id)initWithDIBitmap:(id)dibitmap :(const char *)arg2 :(unsigned)arg3 :(const char *)arg4 :(unsigned)arg5 :(int)arg6;	// 0x344f4131
- (void)appendDIBPalette:(id)palette :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x344bfe31
- (void)dealloc;	// 0x344c2419
- (BOOL)isEmpty;	// 0x344c0031
- (BOOL)parseHeader:(const char *)header :(unsigned)arg2;	// 0x344bfcd1
- (BOOL)processDIBHeader:(id)header :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x344bfbb1
- (void)setMonoPalette:(id)palette;	// 0x344c018d
- (void)setNull;	// 0x34529b99
- (void)writeFileHeader;	// 0x344c0049
- (void)writeInfoHeader;	// 0x3463aa4d
- (void)writePaletteEntry:(id)entry :(int)arg2;	// 0x345346f9
@end

