/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class TSUColor, MFPen, MFFont, MFPalette, MFTransform, MFPath, MFBrush;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFDeviceContext : NSObject <NSCopying> {
@private
	NSObject<MFDeviceDriver> *m_driver;	// 4 = 0x4
	bool m_textUpdateCP;	// 8 = 0x8
	double m_miterLimit;	// 12 = 0xc
	int m_textHorizontalAlign;	// 20 = 0x14
	int m_textVerticalAlign;	// 24 = 0x18
	int m_textDirection;	// 28 = 0x1c
	MFFont *m_font;	// 32 = 0x20
	TSUColor *m_textColour;	// 36 = 0x24
	int m_textBreakExtra;	// 40 = 0x28
	int m_textBreakCount;	// 44 = 0x2c
	int m_textCharExtra;	// 48 = 0x30
	TSUColor *m_bkColour;	// 52 = 0x34
	int m_bkMode;	// 56 = 0x38
	CGPoint m_brushOrg;	// 60 = 0x3c
	CGPoint m_penPos;	// 68 = 0x44
	int m_arcDirection;	// 76 = 0x4c
	int m_polyFillMode;	// 80 = 0x50
	MFTransform *m_transform;	// 84 = 0x54
	MFPen *m_pen;	// 88 = 0x58
	MFBrush *m_brush;	// 92 = 0x5c
	MFPalette *m_selectedPalette;	// 96 = 0x60
	int m_rop2;	// 100 = 0x64
	int m_stretchMode;	// 104 = 0x68
	MFPath *m_path;	// 108 = 0x6c
}
+ (id)deviceContextWithDriver:(id)driver;	// 0x31265bed
- (id)initWithDriver:(id)driver;	// 0x310ccfe5
- (id).cxx_construct;	// 0x310ccfe1
- (id)copyWithZone:(NSZone *)zone;	// 0x311566dd
- (void)dealloc;	// 0x310d1c09
- (int)getArcDirection;	// 0x31156cf5
- (id)getBkColour;	// 0x31156c5d
- (int)getBkMode;	// 0x31156ca9
- (id)getBrush;	// 0x31155891
- (CGPoint)getBrushOrg;	// 0x31156cb9
- (id)getCurrentTransform;	// 0x310cf351
- (id)getFont;	// 0x31156ce5
- (double)getMiterLimit;	// 0x31156b25
- (id)getPath;	// 0x310d0439
- (id)getPen;	// 0x31155ac1
- (CGPoint)getPenPosition;	// 0x31156ad5
- (int)getPolyFillMode;	// 0x311559cd
- (int)getRop2;	// 0x31155a3d
- (id)getSelectedPalette;	// 0x31157175
- (int)getStretchBltMode;	// 0x31156d15
- (int)getTextBreakCount;	// 0x31156c0d
- (int)getTextBreakExtra;	// 0x31156bfd
- (int)getTextCharExtra;	// 0x31156c3d
- (id)getTextColour;	// 0x31156bb1
- (int)getTextDirection;	// 0x31156b91
- (int)getTextHorizontalAlign;	// 0x31156b51
- (bool)getTextUpdateCP;	// 0x31156b01
- (int)getTextVerticalAlign;	// 0x31156b71
- (void)setArcDirection:(int)direction;	// 0x31156d05
- (void)setBkColour:(id)colour;	// 0x31156c6d
- (void)setBkMode:(int)mode;	// 0x31156585
- (void)setBrush:(id)brush;	// 0x310d136d
- (void)setBrushOrg:(CGPoint)org;	// 0x31156cd1
- (void)setCurrentTransform:(id)transform;	// 0x31157139
- (void)setFont:(id)font;	// 0x311564e1
- (void)setMiterLimit:(double)limit;	// 0x31156b3d
- (void)setPath:(id)path;	// 0x31157255
- (void)setPen:(id)pen;	// 0x310d1311
- (void)setPenPosition:(CGPoint)position;	// 0x31156aed
- (void)setPolyFillMode:(int)mode;	// 0x31155671
- (void)setRop2:(int)a2;	// 0x31157185
- (void)setSelectedPalette:(id)palette;	// 0x310d142d
- (void)setStretchBltMode:(int)mode;	// 0x31156d25
- (void)setTextCharExtra:(int)extra;	// 0x31156c4d
- (void)setTextColour:(id)colour;	// 0x31156bc1
- (void)setTextDirection:(int)direction;	// 0x31156ba1
- (void)setTextHorizontalAlign:(int)align;	// 0x31156b61
- (void)setTextJustification:(int)justification :(int)arg2;	// 0x31156c1d
- (void)setTextUpdateCP:(bool)cp;	// 0x31156b15
- (void)setTextVerticalAlign:(int)align;	// 0x31156b81
@end
