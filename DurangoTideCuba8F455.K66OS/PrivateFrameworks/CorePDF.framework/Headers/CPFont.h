/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CPFont : NSObject <CPDisposable> {
	CGPDFFontRef cgPDFFont;	// 4 = 0x4
	CGFontRef cgFont;	// 8 = 0x8
	NSString *fontName;	// 12 = 0xc
	BOOL exactMatch;	// 16 = 0x10
	XXStruct_FvSZlC descriptor;	// 20 = 0x14
	CFDictionaryRef kernDictionary;	// 104 = 0x68
	double kernUnitsPerEm;	// 108 = 0x6c
	BOOL disposed;	// 116 = 0x74
}
@property(readonly, assign) CGFontRef cgFont;	// G=0x30bb4bc5; converted property
@property(readonly, assign) CGPDFFontRef cgPDFFont;	// G=0x30bb3f41; converted property
@property(readonly, retain) NSString *fontName;	// G=0x30bb3f51; converted property
- (id)initWith:(CGPDFDictionaryRef)with;	// 0x30bb4af9
- (float)ascent;	// 0x30bb3fbd
- (float)avgWidth;	// 0x30bb402d
- (float)capHeight;	// 0x30bb3fed
// converted property getter: - (CGFontRef)cgFont;	// 0x30bb4bc5
// converted property getter: - (CGPDFFontRef)cgPDFFont;	// 0x30bb3f41
- (void)dealloc;	// 0x30bb4a69
- (float)descent;	// 0x30bb3fcd
- (void)dispose;	// 0x30bb4b7d
- (void)finalize;	// 0x30bb4abd
- (unsigned)flags;	// 0x30bb3f81
- (CGRect)fontBBox;	// 0x30bb3f91
// converted property getter: - (id)fontName;	// 0x30bb3f51
- (float)fontStretch;	// 0x30bb3f61
- (float)fontWeight;	// 0x30bb3f71
- (void)getFontName;	// 0x30bb4381
- (BOOL)getGlyphs:(unsigned short *)glyphs forCodes:(const unsigned short *)codes count:(unsigned)count;	// 0x30bb4c89
- (BOOL)isSameFontAs:(id)as;	// 0x30bb408d
- (float)italicAngle;	// 0x30bb3fad
- (double)kernBetweenUnicode:(unsigned short)unicode andUnicode:(unsigned short)unicode2;	// 0x30bb4bfd
- (float)leading;	// 0x30bb3fdd
- (void)loadEmbeddedFontInfo;	// 0x30bb4595
- (void)loadExternalFontInfoFor:(id)aFor;	// 0x30bb4489
- (id)matchingFontName;	// 0x30bb40bd
- (float)maxWidth;	// 0x30bb403d
- (float)missingWidth;	// 0x30bb404d
- (float)spaceWidth;	// 0x30bb405d
- (float)stemH;	// 0x30bb401d
- (float)stemV;	// 0x30bb400d
- (float)underlinePosition;	// 0x30bb406d
- (float)underlineThickness;	// 0x30bb407d
- (void)uniCharsFor:(unsigned long)aFor count:(unsigned *)count toArray:(unsigned short *)array maxChars:(unsigned)chars;	// 0x30bb4d95
- (float)xHeight;	// 0x30bb3ffd
@end
