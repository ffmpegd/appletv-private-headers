/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, MFObjectTable, NSDictionary, MFDeviceContext;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFGraphicsDevice : NSObject {
@private
	MFDeviceContext *m_currentDC;	// 4 = 0x4
	NSMutableArray *m_savedDC;	// 8 = 0x8
	NSObject<MFDeviceDriver> *m_deviceDriver;	// 12 = 0xc
	MFObjectTable *m_objectTable;	// 16 = 0x10
	MFObjectTable *m_stockObjects;	// 20 = 0x14
	NSDictionary *m_colorMap;	// 24 = 0x18
	NSDictionary *m_fillMap;	// 28 = 0x1c
}
- (id)initWithCanvas:(CGRect)canvas;	// 0x35576e91
- (int)abortPath;	// 0x357a8a21
- (int)angleArc:(int)arc :(int)arg2 :(unsigned long)arg3 :(double)arg4 :(double)arg5;	// 0x357a876d
- (int)arc:(int)arc :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x356cad85
- (int)arcTo:(int)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x357a87c1
- (int)beginPath;	// 0x3563e941
- (int)bezier:(int)bezier :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x356b72e9
- (int)bezierTo:(int)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6;	// 0x3563ec59
- (int)bitBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(unsigned long)arg8 :(CGAffineTransform *)arg9 :(unsigned long)arg10;	// 0x35696be5
- (int)chord:(int)chord :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x357a8821
- (int)closeCurrentPath:(bool)path;	// 0x3563f139
- (int)comment:(id)comment;	// 0x357a8765
- (id)createBitmap:(unsigned)bitmap :(unsigned)arg2 :(unsigned)arg3 :(unsigned)arg4 :(const char *)arg5 :(unsigned)arg6;	// 0x357a8e65
- (int)createBrush:(int)brush :(id)arg2 :(int)arg3 :(unsigned)arg4;	// 0x3557ad81
- (id)createColorWithRGBBytes:(unsigned char)rgbbytes :(unsigned char)arg2 :(unsigned char)arg3 :(unsigned char)arg4;	// 0x3557ad19
- (id)createDIBitmap:(const char *)bitmap :(unsigned)arg2 :(int)arg3;	// 0x3562ca1d
- (id)createDIBitmap:(const char *)bitmap :(unsigned)arg2 :(const char *)arg3 :(unsigned)arg4 :(int)arg5;	// 0x3566107d
- (int)createFontIndirect:(long)indirect :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x35579c7d
- (int)createFontIndirectW:(long)w :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22 :(unsigned)arg23;	// 0x35695605
- (int)createPalette:(id)palette :(unsigned)arg2;	// 0x3565c38d
- (int)createPatternBrush:(id)brush :(unsigned)arg2 usePaletteForBilevel:(BOOL)bilevel;	// 0x356a14b5
- (int)createPen:(int)pen :(long)arg2 :(id)arg3 :(double *)arg4 :(unsigned)arg5;	// 0x3557af59
- (int)createRegion:(id)region;	// 0x356a1a39
- (void)createStockObjects;	// 0x35661301
- (void)dealloc;	// 0x355730e1
- (int)deleteObject:(int)object;	// 0x3557c715
- (int)description:(id)description;	// 0x3563e3e1
- (void)done;	// 0x3557e609
- (int)ellipse:(int)ellipse :(int)arg2 :(int)arg3 :(int)arg4;	// 0x3557b0b1
- (int)endPath;	// 0x3563f271
- (int)excludeClipRect:(CGRect)rect;	// 0x35696d69
- (int)extTextOut:(int)anOut :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int *)arg9 :(int)arg10;	// 0x3557a775
- (int)extTextOutEncoded:(int)encoded :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int *)arg9 :(int)arg10;	// 0x3557a645
- (int)fillRgn:(unsigned)rgn :(unsigned)arg2;	// 0x357a8c91
- (int)fillRgnWithRects:(id)rects :(unsigned)arg2;	// 0x357a8c09
- (int)frameRegion:(unsigned)region :(unsigned)arg2 :(int)arg3 :(int)arg4;	// 0x357a8df1
- (int)frameRegionWithRects:(id)rects :(unsigned)arg2 :(int)arg3 :(int)arg4;	// 0x357a8d69
- (int)getStockObject:(unsigned)object;	// 0x35661279
- (int)intersectClipRect:(CGRect)rect;	// 0x3557dc2d
- (int)invertRgn:(unsigned)rgn;	// 0x357a8bbd
- (int)invertRgnWithRects:(id)rects;	// 0x357a8b69
- (int)lineTo:(double)to :(double)arg2;	// 0x35694fc5
- (int)maskBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(unsigned long)arg11 :(CGAffineTransform *)arg12 :(unsigned long)arg13;	// 0x357a8eb9
- (int)modifyWorldTransform:(const CGAffineTransform *)transform :(int)arg2;	// 0x356a3d35
- (int)moveTo:(double)to :(double)arg2;	// 0x35634a55
- (int)offsetViewportOrg:(int)org :(int)arg2;	// 0x357a89a1
- (int)offsetWindowOrg:(int)org :(int)arg2;	// 0x357a8961
- (int)paintRgn:(unsigned)rgn;	// 0x357a8b01
- (int)paintRgnWithRects:(id)rects;	// 0x357a8a95
- (int)patBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(unsigned long)arg5;	// 0x3557c929
- (int)pie:(int)pie :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;	// 0x3569ec3d
- (int)plgBlt:(CGPoint *)blt :(id)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(id)arg7 :(int)arg8 :(int)arg9 :(CGAffineTransform *)arg10 :(unsigned long)arg11;	// 0x357a8f61
- (int)polyPolygon:(CGPoint *)polygon :(int *)arg2 :(int)arg3;	// 0x35634be5
- (int)polyPolyline:(CGPoint *)polyline :(int *)arg2 :(int)arg3;	// 0x356d1e39
- (int)polygon:(CGPoint *)polygon :(int)arg2;	// 0x3557e2b5
- (int)polyline:(CGPoint *)polyline :(int)arg2;	// 0x3557e521
- (int)realizePalette;	// 0x3565c561
- (id)recolor:(unsigned char)recolor :(unsigned char)arg2 :(unsigned char)arg3 fill:(BOOL)fill;	// 0x356617cd
- (id)recolor:(id)recolor fill:(BOOL)fill;	// 0x3557a3f9
- (int)rectangle:(int)rectangle :(int)arg2 :(int)arg3 :(int)arg4;	// 0x3557e0d1
- (int)resizePalette:(unsigned)palette :(unsigned)arg2;	// 0x357a88fd
- (int)restoreDC:(int)dc;	// 0x3557dccd
- (int)roundRect:(int)rect :(int)arg2 :(int)arg3 :(int)arg4 :(double)arg5 :(double)arg6;	// 0x356de169
- (int)saveDC;	// 0x3557cd31
- (int)scaleViewportExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x3562c7a1
- (int)scaleWindowExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x357a89e1
- (int)selectClipPath:(int)path;	// 0x356a2581
- (int)selectClipRegion:(unsigned)region :(int)arg2;	// 0x35697135
- (int)selectClipRegionWithRects:(id)rects :(int)arg2;	// 0x35661b05
- (int)selectObject:(int)object;	// 0x3557a0fd
- (int)setArcDirection:(int)direction;	// 0x357a8769
- (int)setBkColour:(id)colour;	// 0x3562c6a1
- (int)setBkMode:(int)mode;	// 0x3557a319
- (int)setBrushOrg:(double)org :(double)arg2;	// 0x3569f229
- (void)setColorMap:(id)map fillMap:(id)map2;	// 0x3557812d
- (int)setMapMode:(int)mode;	// 0x3557871d
- (int)setMetaRgn;	// 0x356d0249
- (int)setMiterLimit:(double)limit;	// 0x356b60b9
- (int)setPaletteEntries:(unsigned)entries :(id)arg2 :(unsigned)arg3;	// 0x357a8881
- (int)setPolyFillMode:(int)mode;	// 0x35581861
- (int)setRop2:(int)a2;	// 0x3562c535
- (int)setStretchBltMode:(int)mode;	// 0x3562c8d1
- (int)setTextAlign:(bool)align :(int)arg2 :(int)arg3 :(int)arg4;	// 0x3562c58d
- (int)setTextCharExtra:(int)extra;	// 0x356a5839
- (int)setTextColour:(const id)colour;	// 0x3557a3b5
- (int)setTextJustification:(int)justification :(int)arg2;	// 0x3562c63d
- (int)setViewBox:(double)box :(double)arg2 :(double)arg3 :(double)arg4;	// 0x35578db5
- (int)setViewportExt:(int)ext :(int)arg2;	// 0x35578d05
- (int)setViewportOrg:(int)org :(int)arg2;	// 0x35578c89
- (int)setWindowExt:(int)ext :(int)arg2;	// 0x35578bd9
- (int)setWindowOrg:(int)org :(int)arg2;	// 0x35578855
- (int)setWorldTransform:(const CGAffineTransform *)transform;	// 0x356d0325
- (int)stretchBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned long)arg10 :(CGAffineTransform *)arg11 :(unsigned long)arg12;	// 0x3562d0f1
- (int)stretchBlt:(int)blt :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned long)arg10 :(CGAffineTransform *)arg11 :(unsigned long)arg12 usePaletteForBilevel:(BOOL)bilevel;	// 0x35661209
- (int)strokeAndFillPath:(bool)path :(bool)arg2;	// 0x3563f31d
- (int)textOut:(int)anOut :(int)arg2 :(id)arg3;	// 0x356a1c75
- (int)textOutEncoded:(int)encoded :(int)arg2 :(id)arg3;	// 0x356a1b4d
- (int)widenPath;	// 0x357a8a59
@end

