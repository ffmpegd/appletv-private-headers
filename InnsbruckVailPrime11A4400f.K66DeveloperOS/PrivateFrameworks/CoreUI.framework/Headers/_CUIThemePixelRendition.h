/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import "CoreUI-Structs.h"
#import "CUIThemeRendition.h"

@class CUIRenditionMetrics, CUIRenditionSliceInformation, _CSIRenditionBlockData;

@interface _CUIThemePixelRendition : CUIThemeRendition {
	unsigned nimages;	// 116 = 0x74
	CGImageRef image[16];	// 120 = 0x78
	CGImageRef unslicedImage;	// 184 = 0xb8
	CUIRenditionMetrics *_renditionMetrics;	// 188 = 0xbc
	CUIRenditionSliceInformation *_sliceInformation;	// 192 = 0xc0
	_CSIRenditionBlockData *_cachedBlockData;	// 196 = 0xc4
}
@property(readonly, retain) CUIRenditionSliceInformation *sliceInformation;	// G=0x307928e9; converted property
@property(readonly, assign) CGImageRef unslicedImage;	// G=0x30792775; converted property
- (id)initWithCSIData:(id)csidata forKey:(const renditionkeytoken *)key artworkStatus:(int)status;	// 0x30791ca5
- (id)_initWithCSIHeader:(const csiheader *)csiheader;	// 0x307920a1
- (id)copySharedBlockData;	// 0x30792575
- (void)dealloc;	// 0x30792655
- (id)imageForSliceIndex:(int)sliceIndex;	// 0x30792785
- (BOOL)isScaled;	// 0x30792ab9
- (BOOL)isTiled;	// 0x30792a51
- (id)maskForSliceIndex:(int)sliceIndex;	// 0x307927e9
- (id)metrics;	// 0x307928d9
- (CGImageRef)newImageFromCSIDataSlice:(slice)csidataSlice ofBitmap:(csibitmap *)bitmap usingColorspace:(CGColorSpaceRef)colorspace;	// 0x30791cb5
- (void)setSharedBlockData:(id)data;	// 0x30792595
// converted property getter: - (id)sliceInformation;	// 0x307928e9
// converted property getter: - (CGImageRef)unslicedImage;	// 0x30792775
@end
