/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRStrokeAndFillTextControl : BRControl {
	NSAttributedString *_attributedString;	// 84 = 0x54
	float _strokeWidth;	// 88 = 0x58
	CGColorRef _strokeColor;	// 92 = 0x5c
}
@property(copy) NSAttributedString *attributedString;	// G=0x309769; S=0x309779; @synthesize=_attributedString
@property(retain) CGColorRef strokeColor;	// G=0x309b39; S=0x309b4d; @synthesize=_strokeColor
@property(assign) float strokeWidth;	// G=0x309b0d; S=0x309b21; @synthesize=_strokeWidth
// declared property getter: - (id)attributedString;	// 0x309769
- (void)dealloc;	// 0x309709
- (void)drawRect:(CGRect)rect;	// 0x3097d1
// declared property setter: - (void)setAttributedString:(id)string;	// 0x309779
// declared property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x309b4d
// declared property setter: - (void)setStrokeWidth:(float)width;	// 0x309b21
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3095e1
// declared property getter: - (CGColorRef)strokeColor;	// 0x309b39
// declared property getter: - (float)strokeWidth;	// 0x309b0d
@end

