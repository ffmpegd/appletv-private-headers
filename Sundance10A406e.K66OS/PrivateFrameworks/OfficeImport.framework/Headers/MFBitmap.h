/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface MFBitmap : NSObject {
	int m_width;	// 4 = 0x4
	int m_height;	// 8 = 0x8
	unsigned m_bitsPerPixel;	// 12 = 0xc
	int m_compression;	// 16 = 0x10
	BOOL m_isOS2;	// 20 = 0x14
	unsigned m_infoHeaderSize;	// 24 = 0x18
	unsigned m_paletteSize;	// 28 = 0x1c
	NSMutableData *m_bmpData;	// 32 = 0x20
}
- (id)init;	// 0x350bb221
- (id)initWithBitmap:(id)bitmap :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned)arg7;	// 0x350bb269
- (id)initWithDIBitmap:(id)dibitmap :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x34fad055
- (id)initWithDIBitmap:(id)dibitmap :(const char *)arg2 :(unsigned)arg3 :(const char *)arg4 :(unsigned)arg5 :(int)arg6;	// 0x34f254e9
- (void)appendDIBPalette:(id)palette :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x34f2587d
- (void)dealloc;	// 0x34f27829
- (BOOL)isEmpty;	// 0x34f25a8d
- (BOOL)parseHeader:(const char *)header :(unsigned)arg2;	// 0x34f25719
- (BOOL)processDIBHeader:(id)header :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x34f255c1
- (void)setMonoPalette:(id)palette;	// 0x34fad1e5
- (void)setNull;	// 0x34fe6269
- (void)writeFileHeader;	// 0x34f25aa5
- (void)writeInfoHeader;	// 0x350bb161
- (void)writePaletteEntry:(id)entry :(int)arg2;	// 0x34fad24d
@end

