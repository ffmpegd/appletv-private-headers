/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTumblerControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVTumblerWithTextListHeaderControl : BRControl {
@private
	float _tumblerMaxWidth;	// 48 = 0x30
	BRTumblerControl *_tumbler;	// 52 = 0x34
	BRTextControl *_customText;	// 56 = 0x38
	BOOL _customTextOnTop;	// 60 = 0x3c
}
@property(readonly, assign) BRTextControl *customText;	// G=0x33a0766d; @synthesize=_customText
@property(assign, nonatomic) BOOL customTextOnTop;	// G=0x33a0767d; S=0x33a07041; @synthesize=_customTextOnTop
@property(readonly, assign) BRTumblerControl *tumbler;	// G=0x33a0765d; @synthesize=_tumbler
@property(assign, nonatomic) float tumblerMaxWidth;	// G=0x33a0763d; S=0x33a0764d; @synthesize=_tumblerMaxWidth
- (id)init;	// 0x33a06f29
- (id)accessibilityLabel;	// 0x33a075d9
- (BOOL)brEventAction:(id)action;	// 0x33a07071
// declared property getter: - (id)customText;	// 0x33a0766d
// declared property getter: - (BOOL)customTextOnTop;	// 0x33a0767d
- (void)dealloc;	// 0x33a06fe1
- (void)layoutSubcontrols;	// 0x33a071b9
// declared property setter: - (void)setCustomTextOnTop:(BOOL)top;	// 0x33a07041
// declared property setter: - (void)setTumblerMaxWidth:(float)width;	// 0x33a0764d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33a07095
// declared property getter: - (id)tumbler;	// 0x33a0765d
// declared property getter: - (float)tumblerMaxWidth;	// 0x33a0763d
@end

