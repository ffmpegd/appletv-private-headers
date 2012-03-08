/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

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
@property(assign) BOOL animationUsesDelay;	// G=0x30278c21; S=0x30278c11; converted property
@property(retain) id attributedString;	// G=0x30278af5; S=0x30278a39; converted property
@property(assign) BOOL autoScrollEnabled;	// G=0x30278b55; S=0x30278b25; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x30278b15; S=0x30278b05; converted property
@property(assign) BOOL displaysText;	// G=0x30278c01; S=0x30278b65; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x30278c41; S=0x30278c31; converted property
- (id)init;	// 0x3027890d
- (void)_removeMarqueeControl;	// 0x302792f9
- (void)_removeTextControl;	// 0x302792b1
// converted property getter: - (BOOL)animationUsesDelay;	// 0x30278c21
// converted property getter: - (id)attributedString;	// 0x30278af5
// converted property getter: - (BOOL)autoScrollEnabled;	// 0x30278b55
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x30278b15
- (void)dealloc;	// 0x30278951
// converted property getter: - (BOOL)displaysText;	// 0x30278c01
- (void)layoutSubcontrols;	// 0x30278c51
- (id)preferredActionForKey:(id)key;	// 0x302791ad
// converted property setter: - (void)setAnimationUsesDelay:(BOOL)delay;	// 0x30278c11
// converted property setter: - (void)setAttributedString:(id)string;	// 0x30278a39
// converted property setter: - (void)setAutoScrollEnabled:(BOOL)enabled;	// 0x30278b25
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x30278b05
// converted property setter: - (void)setDisplaysText:(BOOL)text;	// 0x30278b65
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x302789c5
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x30278c31
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x30278c41
@end
