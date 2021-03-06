/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSAttributedString, BRMarqueeTextControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRAutoScrollingTextControl : BRControl {
	NSAttributedString *_text;	// 84 = 0x54
	BRMarqueeTextControl *_scrollingTextControl;	// 88 = 0x58
	BRTextControl *_textControl;	// 92 = 0x5c
	BOOL _crossfadeEnabled;	// 96 = 0x60
	BOOL _autoScrollEnabled;	// 97 = 0x61
	BOOL _displaysText;	// 98 = 0x62
	BOOL _useAlphaFadeMask;	// 99 = 0x63
	BOOL _animationUsesDelay;	// 100 = 0x64
	BOOL _animateOnEnter;	// 101 = 0x65
}
@property(assign, nonatomic) BOOL animateOnEnter;	// G=0x34861d; S=0x34862d; @synthesize=_animateOnEnter
@property(assign) BOOL animationUsesDelay;	// G=0x3480a1; S=0x348091; converted property
@property(retain) id attributedString;	// G=0x347f79; S=0x347ec1; converted property
@property(assign) BOOL autoScrollEnabled;	// G=0x347fd5; S=0x347fa9; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x347f99; S=0x347f89; converted property
@property(assign) BOOL displaysText;	// G=0x348081; S=0x347fe5; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x3480c1; S=0x3480b1; converted property
- (id)init;	// 0x347d81
- (void)_removeMarqueeControl;	// 0x348681
- (void)_removeTextControl;	// 0x34863d
// declared property getter: - (BOOL)animateOnEnter;	// 0x34861d
// converted property getter: - (BOOL)animationUsesDelay;	// 0x3480a1
// converted property getter: - (id)attributedString;	// 0x347f79
// converted property getter: - (BOOL)autoScrollEnabled;	// 0x347fd5
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x347f99
- (void)dealloc;	// 0x347dd9
// converted property getter: - (BOOL)displaysText;	// 0x348081
- (void)layoutSubcontrols;	// 0x3480d1
- (id)preferredActionForKey:(id)key;	// 0x348519
// declared property setter: - (void)setAnimateOnEnter:(BOOL)enter;	// 0x34862d
// converted property setter: - (void)setAnimationUsesDelay:(BOOL)delay;	// 0x348091
// converted property setter: - (void)setAttributedString:(id)string;	// 0x347ec1
// converted property setter: - (void)setAutoScrollEnabled:(BOOL)enabled;	// 0x347fa9
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x347f89
// converted property setter: - (void)setDisplaysText:(BOOL)text;	// 0x347fe5
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x347e51
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x3480b1
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x3480c1
@end

