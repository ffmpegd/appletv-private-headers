/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

@interface BRStrokeAndFillTextControl : BRControl {
@private
	NSAttributedString *_attributedString;	// 48 = 0x30
	float _strokeWidth;	// 52 = 0x34
	CGColorRef _strokeColor;	// 56 = 0x38
}
@property(copy) NSAttributedString *attributedString;	// G=0x33abaacd; S=0x33abaadd; @synthesize=_attributedString
@property(retain) CGColorRef strokeColor;	// G=0x33abae05; S=0x33abae19; @synthesize=_strokeColor
@property(assign) float strokeWidth;	// G=0x33abade5; S=0x33abadf5; @synthesize=_strokeWidth
// declared property getter: - (id)attributedString;	// 0x33abaacd
- (void)dealloc;	// 0x33abaa6d
- (void)drawInContext:(CGContextRef)context;	// 0x33abab35
// declared property setter: - (void)setAttributedString:(id)string;	// 0x33abaadd
// declared property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x33abae19
// declared property setter: - (void)setStrokeWidth:(float)width;	// 0x33abadf5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33aba95d
// declared property getter: - (CGColorRef)strokeColor;	// 0x33abae05
// declared property getter: - (float)strokeWidth;	// 0x33abade5
@end
