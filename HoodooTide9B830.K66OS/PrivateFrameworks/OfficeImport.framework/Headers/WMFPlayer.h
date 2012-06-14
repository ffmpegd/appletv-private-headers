/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class MFGraphicsDevice;

__attribute__((visibility("hidden")))
@interface WMFPlayer : NSObject {
@private
	MFGraphicsDevice *m_gdi;	// 4 = 0x4
	int m_records;	// 8 = 0x8
	unsigned short m_windowsVersion;	// 12 = 0xc
	BOOL m_boundsSet;	// 14 = 0xe
	BOOL m_ignoreSetWindowOrg;	// 15 = 0xf
}
+ (CGRect)boundsInPoints:(id)points;	// 0x313ac621
+ (CGRect)placeableBounds:(const char *)bounds;	// 0x312c0565
+ (CGRect)windowBounds:(id)bounds;	// 0x313ac7d1
- (id)initWithGraphicsDevice:(id)graphicsDevice;	// 0x3117b25d
- (void)dealloc;	// 0x31176095
- (void)done;	// 0x311815e9
- (id)parseRegion:(unsigned)region :(const char *)arg2;	// 0x312a48c1
- (int)play:(unsigned)play :(const char *)arg2;	// 0x3117c15d
- (int)playArc:(unsigned)arc :(const char *)arg2;	// 0x312cdcc1
- (int)playBitBlt:(unsigned)blt :(const char *)arg2;	// 0x313acea1
- (int)playChord:(unsigned)chord :(const char *)arg2;	// 0x313acddd
- (int)playCreateBrushIndirect:(unsigned)indirect :(const char *)arg2;	// 0x3117dc7d
- (int)playCreateDIBPatternBrush:(unsigned)brush :(const char *)arg2;	// 0x312a4441
- (int)playCreateFontIndirect:(unsigned)indirect :(const char *)arg2;	// 0x3117ca19
- (int)playCreatePalette:(unsigned)palette :(const char *)arg2;	// 0x3125f2b9
- (int)playCreatePatternBrush:(unsigned)brush :(const char *)arg2;	// 0x313aca5d
- (int)playCreatePenIndirect:(unsigned)indirect :(const char *)arg2;	// 0x3117decd
- (int)playCreateRegion:(unsigned)region :(const char *)arg2;	// 0x312a4871
- (int)playDeleteObject:(unsigned)object :(const char *)arg2;	// 0x3117f6d5
- (int)playDibBitBlt:(unsigned)blt :(const char *)arg2;	// 0x31299f49
- (int)playDibStretchBlt:(unsigned)blt :(const char *)arg2;	// 0x3129bebd
- (int)playEllipse:(unsigned)ellipse :(const char *)arg2;	// 0x3117e03d
- (int)playExcludeClipRect:(unsigned)rect :(const char *)arg2;	// 0x312a4ef5
- (int)playExtTextOut:(unsigned)anOut :(const char *)arg2;	// 0x3117d499
- (int)playFillRegion:(unsigned)region :(const char *)arg2;	// 0x313aca19
- (int)playFrameRegion:(unsigned)region :(const char *)arg2;	// 0x313ac9ad
- (int)playHeader:(unsigned)header :(const char *)arg2;	// 0x3117b4ed
- (int)playIntersectClipRect:(unsigned)rect :(const char *)arg2;	// 0x31180b8d
- (int)playInvertRegion:(unsigned)region :(const char *)arg2;	// 0x313ac96d
- (int)playLineTo:(unsigned)to :(const char *)arg2;	// 0x3129a091
- (int)playMoveTo:(unsigned)to :(const char *)arg2;	// 0x312379f1
- (int)playOffsetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x313accd1
- (int)playOffsetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x313acd1d
- (int)playPaintRegion:(unsigned)region :(const char *)arg2;	// 0x313ac92d
- (int)playPatBlt:(unsigned)blt :(const char *)arg2;	// 0x3117f89d
- (int)playPie:(unsigned)pie :(const char *)arg2;	// 0x312a2b61
- (int)playPolyPolygon:(unsigned)polygon :(const char *)arg2;	// 0x31237a99
- (int)playPolygon:(unsigned)polygon :(const char *)arg2;	// 0x311811ed
- (int)playPolyline:(unsigned)polyline :(const char *)arg2;	// 0x31181459
- (int)playRealizePalette:(unsigned)palette :(const char *)arg2;	// 0x3125f531
- (int)playRectangle:(unsigned)rectangle :(const char *)arg2;	// 0x3118105d
- (int)playResizePalette:(unsigned)palette :(const char *)arg2;	// 0x313acb0d
- (int)playRestoreDC:(unsigned)dc :(const char *)arg2;	// 0x31180c8d
- (int)playRoundRect:(unsigned)rect :(const char *)arg2;	// 0x312e10b5
- (int)playSaveDC:(unsigned)dc :(const char *)arg2;	// 0x3117fd01
- (int)playScaleViewportExt:(unsigned)ext :(const char *)arg2;	// 0x3122f72d
- (int)playScaleWindowExt:(unsigned)ext :(const char *)arg2;	// 0x313acd69
- (int)playSelectClipRegion:(unsigned)region :(const char *)arg2;	// 0x3129a0f5
- (int)playSelectObject:(unsigned)object :(const char *)arg2;	// 0x3117d0bd
- (int)playSelectPalette:(unsigned)palette :(const char *)arg2;	// 0x3125f4d1
- (int)playSetBkColour:(unsigned)colour :(const char *)arg2;	// 0x3122f641
- (int)playSetBkMode:(unsigned)mode :(const char *)arg2;	// 0x3117d2d1
- (int)playSetMapMode:(unsigned)mode :(const char *)arg2;	// 0x3122f6e5
- (int)playSetPaletteEntries:(unsigned)entries :(const char *)arg2;	// 0x313acb51
- (int)playSetPolyFillMode:(unsigned)mode :(const char *)arg2;	// 0x31184819
- (int)playSetROP2:(unsigned)a2 :(const char *)arg2;	// 0x3122f4f5
- (int)playSetStretchBltMode:(unsigned)mode :(const char *)arg2;	// 0x3122f889
- (int)playSetTextAlign:(unsigned)align :(const char *)arg2;	// 0x3122f539
- (int)playSetTextCharExtra:(unsigned)extra :(const char *)arg2;	// 0x312a87f9
- (int)playSetTextColour:(unsigned)colour :(const char *)arg2;	// 0x3117d355
- (int)playSetTextJustification:(unsigned)justification :(const char *)arg2;	// 0x3122f5f9
- (int)playSetViewportExt:(unsigned)ext :(const char *)arg2;	// 0x313acc85
- (int)playSetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x313acc39
- (int)playSetWindowExt:(unsigned)ext :(const char *)arg2;	// 0x3117c879
- (int)playSetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x3117c81d
- (int)playStretchDib:(unsigned)dib :(const char *)arg2;	// 0x3122f8d5
- (int)playTextOut:(unsigned)anOut :(const char *)arg2;	// 0x312a4ab5
- (int)playUnknown:(unsigned)unknown :(unsigned)arg2 :(const char *)arg3;	// 0x313ac61d
- (int)playUnsupported:(unsigned)unsupported :(const char *)arg2 :(const char *)arg3;	// 0x3117c819
- (long)records;	// 0x313ac60d
@end
