/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMProperty.h"

@class TSUColor;

@interface CMColorProperty : CMProperty {
	TSUColor *wdValue;	// 8 = 0x8
}
+ (CGColorRef)copyCGColorFromOADColor:(id)oadcolor state:(id)state;	// 0x318a4ad1
+ (CGColorRef)copyCGColorFromOADFill:(id)oadfill state:(id)state;	// 0x318002f9
+ (id)cssStringFromOADColor:(id)oadcolor;	// 0x317d9e31
+ (id)cssStringFromOADGradientFill:(id)oadgradientFill state:(id)state;	// 0x31780591
+ (id)cssStringFromRed:(float)red green:(float)green blue:(float)blue;	// 0x31716b29
+ (id)cssStringFromTSUColor:(id)tsucolor;	// 0x317169bd
+ (id)nsColorFromOADColor:(id)oadcolor state:(id)state;	// 0x31715d5d
+ (id)nsColorFromOADFill:(id)oadfill state:(id)state;	// 0x3171b0dd
+ (id)nsColorFromShading:(id)shading;	// 0x317e4e9d
+ (float)resolveColorValueWithPercentage:(float)percentage foregroundComponent:(float)component backgroundComponent:(float)component3;	// 0x317e5499
+ (id)resolveStyleColorWithPercentage:(float)percentage foregroundColor:(id)color backgroundColor:(id)color3;	// 0x317e5311
+ (id)resolveStyleColorWithPercentage:(float)percentage shading:(id)shading;	// 0x317e5299
+ (float)transformedAlphaFromOADColor:(id)oadcolor;	// 0x31781859
- (id)initWithColor:(id)color;	// 0x31761ec5
- (id)cssString;	// 0x31761f6d
- (id)cssStringForName:(id)name;	// 0x31761f39
- (BOOL)isEqualTo:(id)to;	// 0x318a4b81
- (id)value;	// 0x318a4b6d
@end

