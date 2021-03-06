/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class MFFont, MFBrush, MFPalette, MFPath, MFPen, MFTransform, NSColorStub;
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
	NSColorStub *m_textColour;	// 36 = 0x24
	int m_textBreakExtra;	// 40 = 0x28
	int m_textBreakCount;	// 44 = 0x2c
	int m_textCharExtra;	// 48 = 0x30
	NSColorStub *m_bkColour;	// 52 = 0x34
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
+ (id)deviceContextWithDriver:(id)driver;	// 0x3463b6ad
- (id)initWithDriver:(id)driver;	// 0x3440a0bd
- (id)copyWithZone:(NSZone *)zone;	// 0x3440fe75
- (void)dealloc;	// 0x344061f1
- (int)getArcDirection;	// 0x34410439
- (id)getBkColour;	// 0x344103ad
- (int)getBkMode;	// 0x344103fd
- (id)getBrush;	// 0x3440ee4d
- (CGPoint)getBrushOrg;	// 0x3441040d
- (id)getCurrentTransform;	// 0x3440b759
- (id)getFont;	// 0x3440d755
- (double)getMiterLimit;	// 0x344102d1
- (id)getPath;	// 0x3440ee25
- (id)getPen;	// 0x3440f1e5
- (CGPoint)getPenPosition;	// 0x34410295
- (int)getPolyFillMode;	// 0x3440ef11
- (int)getRop2;	// 0x3440f049
- (id)getSelectedPalette;	// 0x3441082d
- (int)getStretchBltMode;	// 0x34410469
- (int)getTextBreakCount;	// 0x3441034d
- (int)getTextBreakExtra;	// 0x3441035d
- (int)getTextCharExtra;	// 0x3441038d
- (id)getTextColour;	// 0x3440da79
- (int)getTextDirection;	// 0x3441032d
- (int)getTextHorizontalAlign;	// 0x344102fd
- (bool)getTextUpdateCP;	// 0x3440dc6d
- (int)getTextVerticalAlign;	// 0x3440da69
- (void)setArcDirection:(int)direction;	// 0x34410449
- (void)setBkColour:(id)colour;	// 0x344103bd
- (void)setBkMode:(int)mode;	// 0x3440d345
- (void)setBrush:(id)brush;	// 0x3440de8d
- (void)setBrushOrg:(CGPoint)org;	// 0x34410425
- (void)setCurrentTransform:(id)transform;	// 0x344107ed
- (void)setFont:(id)font;	// 0x3440d291
- (void)setMiterLimit:(double)limit;	// 0x344102e9
- (void)setPath:(id)path;	// 0x34410b4d
- (void)setPen:(id)pen;	// 0x3440dffd
- (void)setPenPosition:(CGPoint)position;	// 0x344102ad
- (void)setPolyFillMode:(int)mode;	// 0x34410459
- (void)setRop2:(int)a2;	// 0x3440fabd
- (void)setSelectedPalette:(id)palette;	// 0x3441083d
- (void)setStretchBltMode:(int)mode;	// 0x34410479
- (void)setTextCharExtra:(int)extra;	// 0x3441039d
- (void)setTextColour:(id)colour;	// 0x3440d459
- (void)setTextDirection:(int)direction;	// 0x3441033d
- (void)setTextHorizontalAlign:(int)align;	// 0x3441030d
- (void)setTextJustification:(int)justification :(int)arg2;	// 0x3441036d
- (void)setTextUpdateCP:(bool)cp;	// 0x344102c1
- (void)setTextVerticalAlign:(int)align;	// 0x3441031d
@end

