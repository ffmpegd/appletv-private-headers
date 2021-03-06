/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPGradientBrush.h"

@class TSUColor;

@interface MFPLinearGradientBrush : MFPGradientBrush {
	CGRect mBounds;	// 52 = 0x34
	TSUColor *mStartColor;	// 68 = 0x44
	TSUColor *mEndColor;	// 72 = 0x48
}
@property(retain) id endColor;	// G=0x36cc6109; S=0x36cc60bd; converted property
@property(retain) id startColor;	// G=0x36cc60f9; S=0x36cc6081; converted property
- (id).cxx_construct;	// 0x36cc6385
- (void)createShading;	// 0x36cc6119
- (void)dealloc;	// 0x36cc6001
// converted property getter: - (id)endColor;	// 0x36cc6109
- (void)setBounds:(CGRect)bounds;	// 0x36cc6065
// converted property setter: - (void)setEndColor:(id)color;	// 0x36cc60bd
// converted property setter: - (void)setStartColor:(id)color;	// 0x36cc6081
// converted property getter: - (id)startColor;	// 0x36cc60f9
@end

