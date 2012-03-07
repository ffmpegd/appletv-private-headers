/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMarqueeTextControl, BRTextControl, NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRAutoScrollingTextControl : BRControl {
@private
	NSAttributedString *_text;	// 48 = 0x30
	BRMarqueeTextControl *_scrollingTextControl;	// 52 = 0x34
	BRTextControl *_textControl;	// 56 = 0x38
	BOOL _crossfadeEnabled;	// 60 = 0x3c
	BOOL _autoScrollEnabled;	// 61 = 0x3d
	BOOL _displaysText;	// 62 = 0x3e
	BOOL _useAlphaFadeMask;	// 63 = 0x3f
	BOOL _animationUsesDelay;	// 64 = 0x40
}
@property(assign) BOOL animationUsesDelay;	// G=0x35ddd28d; S=0x35ddd27d; converted property
@property(retain) id attributedString;	// G=0x35ddd161; S=0x35ddd0a5; converted property
@property(assign) BOOL autoScrollEnabled;	// G=0x35ddd1c1; S=0x35ddd191; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x35ddd181; S=0x35ddd171; converted property
@property(assign) BOOL displaysText;	// G=0x35ddd26d; S=0x35ddd1d1; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x35ddd2ad; S=0x35ddd29d; converted property
- (id)init;	// 0x35ddcf79
- (void)_removeMarqueeControl;	// 0x35ddd965
- (void)_removeTextControl;	// 0x35ddd91d
// converted property getter: - (BOOL)animationUsesDelay;	// 0x35ddd28d
// converted property getter: - (id)attributedString;	// 0x35ddd161
// converted property getter: - (BOOL)autoScrollEnabled;	// 0x35ddd1c1
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x35ddd181
- (void)dealloc;	// 0x35ddcfbd
// converted property getter: - (BOOL)displaysText;	// 0x35ddd26d
- (void)layoutSubcontrols;	// 0x35ddd2bd
- (id)preferredActionForKey:(id)key;	// 0x35ddd819
// converted property setter: - (void)setAnimationUsesDelay:(BOOL)delay;	// 0x35ddd27d
// converted property setter: - (void)setAttributedString:(id)string;	// 0x35ddd0a5
// converted property setter: - (void)setAutoScrollEnabled:(BOOL)enabled;	// 0x35ddd191
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x35ddd171
// converted property setter: - (void)setDisplaysText:(BOOL)text;	// 0x35ddd1d1
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x35ddd031
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x35ddd29d
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x35ddd2ad
@end

