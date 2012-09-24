/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {
	UIColor *embossHighlightColor;	// 4 = 0x4
	UIColor *embossShadowColor;	// 8 = 0x8
	float embossSize;	// 12 = 0xc
	UIColor *innerShadowColor;	// 16 = 0x10
	CGPoint innerShadowOffset;	// 20 = 0x14
	float innerShadowBlur;	// 28 = 0x1c
	int innerShadowBlendMode;	// 32 = 0x20
	UIColor *outerShadowColor;	// 36 = 0x24
	CGPoint outerShadowOffset;	// 40 = 0x28
	float outerShadowBlur;	// 48 = 0x30
	int outerShadowBlendMode;	// 52 = 0x34
	UIColor *topGradientColor;	// 56 = 0x38
	UIColor *bottomGradientColor;	// 60 = 0x3c
	float innerOpacity;	// 64 = 0x40
}
@property(retain, nonatomic) UIColor *bottomGradientColor;	// G=0x30a44e49; S=0x30a43c09; @synthesize
@property(readonly, assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0x30a857b1; 
@property(retain, nonatomic) UIColor *embossHighlightColor;	// G=0x30a44c19; S=0x30a524d9; @synthesize
@property(retain, nonatomic) UIColor *embossShadowColor;	// G=0x30a44d91; S=0x30a524e9; @synthesize
@property(assign, nonatomic) float embossSize;	// G=0x30a44da1; S=0x30a524f9; @synthesize
@property(assign, nonatomic) float innerOpacity;	// G=0x30a44e59; S=0x30a43c19; @synthesize
@property(assign, nonatomic) int innerShadowBlendMode;	// G=0x30a85a4d; S=0x30a5250d; @synthesize
@property(assign, nonatomic) float innerShadowBlur;	// G=0x30a44e0d; S=0x30a43b95; @synthesize
@property(retain, nonatomic) UIColor *innerShadowColor;	// G=0x30a44c29; S=0x30a43b81; @synthesize
@property(assign, nonatomic) CGPoint innerShadowOffset;	// G=0x30a44df1; S=0x30a43ba9; @synthesize
@property(assign, nonatomic) int outerShadowBlendMode;	// G=0x30a85a61; S=0x30a52521; @synthesize
@property(assign, nonatomic) float outerShadowBlur;	// G=0x30a44e39; S=0x30a43bd1; @synthesize
@property(retain, nonatomic) UIColor *outerShadowColor;	// G=0x30a44c3d; S=0x30a43bbd; @synthesize
@property(assign, nonatomic) CGPoint outerShadowOffset;	// G=0x30a44e1d; S=0x30a43be5; @synthesize
@property(retain, nonatomic) UIColor *topGradientColor;	// G=0x30a44c09; S=0x30a43bf9; @synthesize
+ (id)defaultLetterpressStyle;	// 0x30a524a9
+ (id)old2xLetterpressStyle;	// 0x30a850b9
// declared property getter: - (id)bottomGradientColor;	// 0x30a44e49
- (id)copyWithZone:(NSZone *)zone;	// 0x30a852cd
- (void)dealloc;	// 0x30a44e69
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0x30a857b1
// declared property getter: - (id)embossHighlightColor;	// 0x30a44c19
// declared property getter: - (id)embossShadowColor;	// 0x30a44d91
// declared property getter: - (float)embossSize;	// 0x30a44da1
// declared property getter: - (float)innerOpacity;	// 0x30a44e59
// declared property getter: - (int)innerShadowBlendMode;	// 0x30a85a4d
// declared property getter: - (float)innerShadowBlur;	// 0x30a44e0d
// declared property getter: - (id)innerShadowColor;	// 0x30a44c29
// declared property getter: - (CGPoint)innerShadowOffset;	// 0x30a44df1
- (BOOL)isEqual:(id)equal;	// 0x30a85465
// declared property getter: - (int)outerShadowBlendMode;	// 0x30a85a61
// declared property getter: - (float)outerShadowBlur;	// 0x30a44e39
// declared property getter: - (id)outerShadowColor;	// 0x30a44c3d
// declared property getter: - (CGPoint)outerShadowOffset;	// 0x30a44e1d
// declared property setter: - (void)setBottomGradientColor:(id)color;	// 0x30a43c09
// declared property setter: - (void)setEmbossHighlightColor:(id)color;	// 0x30a524d9
// declared property setter: - (void)setEmbossShadowColor:(id)color;	// 0x30a524e9
// declared property setter: - (void)setEmbossSize:(float)size;	// 0x30a524f9
// declared property setter: - (void)setInnerOpacity:(float)opacity;	// 0x30a43c19
// declared property setter: - (void)setInnerShadowBlendMode:(int)mode;	// 0x30a5250d
// declared property setter: - (void)setInnerShadowBlur:(float)blur;	// 0x30a43b95
// declared property setter: - (void)setInnerShadowColor:(id)color;	// 0x30a43b81
// declared property setter: - (void)setInnerShadowOffset:(CGPoint)offset;	// 0x30a43ba9
// declared property setter: - (void)setOuterShadowBlendMode:(int)mode;	// 0x30a52521
// declared property setter: - (void)setOuterShadowBlur:(float)blur;	// 0x30a43bd1
// declared property setter: - (void)setOuterShadowColor:(id)color;	// 0x30a43bbd
// declared property setter: - (void)setOuterShadowOffset:(CGPoint)offset;	// 0x30a43be5
// declared property setter: - (void)setTopGradientColor:(id)color;	// 0x30a43bf9
// declared property getter: - (id)topGradientColor;	// 0x30a44c09
@end
