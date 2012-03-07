/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"

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
@property(readonly, assign) CGFontRef cgFont;	// G=0x31f545bd; converted property
@property(readonly, assign) CGPDFFontRef cgPDFFont;	// G=0x31f536e5; converted property
@property(readonly, retain) NSString *fontName;	// G=0x31f536f5; converted property
- (id)initWith:(CGPDFDictionaryRef)with;	// 0x31f5469d
- (float)ascent;	// 0x31f53771
- (float)avgWidth;	// 0x31f537fd
- (float)capHeight;	// 0x31f537ad
// converted property getter: - (CGFontRef)cgFont;	// 0x31f545bd
// converted property getter: - (CGPDFFontRef)cgPDFFont;	// 0x31f536e5
- (void)dealloc;	// 0x31f545f1
- (float)descent;	// 0x31f53785
- (void)dispose;	// 0x31f5464d
- (void)finalize;	// 0x31f54339
- (unsigned)flags;	// 0x31f53729
- (CGRect)fontBBox;	// 0x31f5373d
// converted property getter: - (id)fontName;	// 0x31f536f5
- (float)fontStretch;	// 0x31f53705
- (float)fontWeight;	// 0x31f53715
- (void)getFontName;	// 0x31f53bc5
- (BOOL)getGlyphs:(unsigned short *)glyphs forCodes:(const unsigned short *)codes count:(unsigned)count;	// 0x31f54409
- (BOOL)isSameFontAs:(id)as;	// 0x31f53875
- (float)italicAngle;	// 0x31f5375d
- (double)kernBetweenUnicode:(unsigned short)unicode andUnicode:(unsigned short)unicode2;	// 0x31f54529
- (float)leading;	// 0x31f53799
- (void)loadEmbeddedFontInfo;	// 0x31f53e2d
- (void)loadExternalFontInfoFor:(id)aFor;	// 0x31f53ce5
- (id)matchingFontName;	// 0x31f538ad
- (float)maxWidth;	// 0x31f53811
- (float)missingWidth;	// 0x31f53825
- (float)spaceWidth;	// 0x31f53839
- (float)stemH;	// 0x31f537e9
- (float)stemV;	// 0x31f537d5
- (float)underlinePosition;	// 0x31f5384d
- (float)underlineThickness;	// 0x31f53861
- (void)uniCharsFor:(unsigned long)aFor count:(unsigned *)count toArray:(unsigned short *)array maxChars:(unsigned)chars;	// 0x31f54379
- (float)xHeight;	// 0x31f537c1
@end
