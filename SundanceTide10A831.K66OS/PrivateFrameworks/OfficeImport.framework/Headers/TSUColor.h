/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


@interface TSUColor : NSObject <NSCopying> {
	CGColorRef mCGColor;	// 4 = 0x4
}
@property(readonly, assign) CGColorRef CGColor;	// G=0x36a415c5; @synthesize=mCGColor
+ (id)blackColor;	// 0x36a477e9
+ (id)blueColor;	// 0x36c9abe5
+ (id)brownColor;	// 0x36c9adb5
+ (id)clearColor;	// 0x36a9fad5
+ (id)colorWithBGR:(unsigned long)bgr;	// 0x36bc15a1
+ (id)colorWithBGRValue:(long)bgrvalue;	// 0x36a5ba91
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue;	// 0x36bc14ad
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue alpha:(int)alpha;	// 0x36bc14d1
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x36a4f709
+ (id)colorWithCalibratedHue:(float)calibratedHue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x36bc5b55
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x36a41009
+ (id)colorWithCsColour:(const CsColour *)csColour;	// 0x36aedfe9
+ (id)colorWithDeviceRed:(float)deviceRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x36b19aa9
+ (id)colorWithEshColor:(const EshColor *)eshColor;	// 0x36c1e145
+ (id)colorWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x36c9a9fd
+ (id)colorWithPatternImage:(id)patternImage;	// 0x36b6ef91
+ (id)colorWithRGBBytes:(unsigned char)rgbbytes :(unsigned char)arg2 :(unsigned char)arg3;	// 0x36a935b1
+ (id)colorWithRGBValue:(long)rgbvalue;	// 0x36b6d7d1
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x36a41025
+ (id)colorWithSystemColorID:(int)systemColorID;	// 0x36a640d1
+ (id)colorWithUIColor:(id)uicolor;	// 0x36c9aa55
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x36c9a9bd
+ (id)cyanColor;	// 0x36c9ac2d
+ (id)grayColor;	// 0x36c9aac9
+ (id)greenColor;	// 0x36c9ab99
+ (id)lightGrayColor;	// 0x36c9ab09
+ (id)magentaColor;	// 0x36c9acc9
+ (id)orangeColor;	// 0x36c9ad15
+ (id)purpleColor;	// 0x36c9ad65
+ (id)randomColor;	// 0x36c9aa91
+ (id)redColor;	// 0x36c9ab4d
+ (id)stringForColor:(id)color;	// 0x36bc1849
+ (id)stringForSystemColorID:(int)systemColorID;	// 0x36bc1621
+ (id)whiteColor;	// 0x36a8feb9
+ (id)yellowColor;	// 0x36c9ac79
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x36a41109
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x36c9ae15
- (id)initWithPatternImage:(id)patternImage;	// 0x36b6efd9
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x36a41081
- (id)initWithUIColor:(id)uicolor;	// 0x36c9ae4d
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x36a4782d
// declared property getter: - (CGColorRef)CGColor;	// 0x36a415c5
- (id)UIColor;	// 0x36c9aead
- (float)alphaComponent;	// 0x36a41601
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x36b0b7d1
- (float)blueComponent;	// 0x36a415ed
- (CGColorRef)cgColorRef;	// 0x36b466dd
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x36a4f6c1
- (id)colorWithShadeValue:(double)shadeValue;	// 0x36b0b749
- (id)colorWithTintValue:(double)tintValue;	// 0x36b5ca2d
- (id)copy;	// 0x36a933e1
- (id)copyWithZone:(NSZone *)zone;	// 0x36c9ae7d
- (CsColour)csColour;	// 0x36c1e0fd
- (void)dealloc;	// 0x36a4604d
- (EshColor)eshColor;	// 0x36c1e1d9
- (void)getRGBBytes:(char *)bytes :(char *)arg2 :(char *)arg3;	// 0x36b1d2f9
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x36cbb6a1
- (id)grayscaleColor;	// 0x36c9aee9
- (float)greenComponent;	// 0x36a415d9
- (unsigned)hash;	// 0x36b87ffd
- (id)invertedColor;	// 0x36c9afa1
- (BOOL)isBlack;	// 0x36a48079
- (BOOL)isEqual:(id)equal;	// 0x36a8f041
- (BOOL)isEqualToColor:(id)color;	// 0x36a8f025
- (BOOL)isOpaque;	// 0x36c9b0a1
- (float)luminance;	// 0x36c9b015
- (id)newSolidColoredBitmap:(CGSize)bitmap;	// 0x36bc14a5
- (float)p_rgbComponentWithIndex:(unsigned char)index;	// 0x36a41521
- (void)paintPath:(CGPathRef)path inContext:(CGContextRef)context;	// 0x36c9b121
- (void)paintRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x36c9b0d5
- (float)redComponent;	// 0x36a4150d
- (void)set;	// 0x36b1b3b5
- (id)solidColoredPngImage;	// 0x36bc14a9
- (unsigned long)toBGR;	// 0x36bc1559
- (tagRgbQuad)ttColor;	// 0x36a4e4d9
@end

