/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, BRFadeMaskLayer, BRScrollingTextPlane;
@protocol BRMarqueeScrollingDelegate;

@interface BRMarqueeTextControl : BRControl {
@private
	BRScrollingTextPlane *_plane;	// 48 = 0x30
	BRControl *_leftFade;	// 52 = 0x34
	BRControl *_rightFade;	// 56 = 0x38
	BRFadeMaskLayer *_mask;	// 60 = 0x3c
	NSTimer *_scrollTimer;	// 64 = 0x40
	NSTimer *_fadeMaskTimer;	// 68 = 0x44
	float _maskRemovalTime;	// 72 = 0x48
	float _scrollPosition;	// 76 = 0x4c
	BOOL _autoScrolls;	// 80 = 0x50
	BOOL _crossfadeEnabled;	// 81 = 0x51
	BOOL _crossfading;	// 82 = 0x52
	BOOL _useAlphaFadeMask;	// 83 = 0x53
	id<BRMarqueeScrollingDelegate> _scrollingDelegate;	// 84 = 0x54
}
@property(retain) id attributedString;	// G=0x3321b989; S=0x3321b7a1; converted property
@property(assign) BOOL autoScrolls;	// G=0x3321bacd; S=0x3321ba4d; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x3321baf9; S=0x3321badd; converted property
@property(assign) float scrollPosition;	// G=0x3321bbe5; S=0x3321bba9; converted property
@property(assign) id scrollingDelegate;	// G=0x3321bbf5; S=0x3321bc05; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x3321bc25; S=0x3321bc15; converted property
- (id)init;	// 0x3321b5e1
- (BOOL)_autoscrollInProgress;	// 0x3321d075
- (void)_beginScroll:(id)scroll;	// 0x3321c825
- (void)_clearFadeMaskTimer;	// 0x3321cf09
- (void)_clearScrollTimer;	// 0x3321ced9
- (void)_realignCenteredTextToLeftJustified;	// 0x3321c6ed
- (void)_removeFadeMask:(id)mask;	// 0x3321cd51
- (void)_resetScrollTimer;	// 0x3321cde5
- (void)_scrollDidStart:(id)_scroll;	// 0x3321cf39
- (void)_scrollDidStop:(id)_scroll;	// 0x3321d021
- (void)_scrollDidStop:(id)_scroll finished:(BOOL)finished;	// 0x3321cfc9
- (void)_updateEdgeMaskingIfScrollingNeeded:(BOOL)needed;	// 0x3321c495
- (id)accessibilityLabel;	// 0x3321c46d
// converted property getter: - (id)attributedString;	// 0x3321b989
// converted property getter: - (BOOL)autoScrolls;	// 0x3321bacd
- (void)controlWasActivated;	// 0x3321c42d
- (void)controlWasDeactivated;	// 0x3321c3b1
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x3321baf9
- (void)dealloc;	// 0x3321b6a1
- (void)layoutSubcontrols;	// 0x3321bd99
- (float)maxScrollPosition;	// 0x3321b945
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x3321bb09
- (CGSize)pixelBounds;	// 0x3321b9a9
- (id)preferredActionForKey:(id)key;	// 0x3321bc95
- (CGSize)renderedSize;	// 0x3321b9d9
// converted property getter: - (float)scrollPosition;	// 0x3321bbe5
// converted property getter: - (id)scrollingDelegate;	// 0x3321bbf5
// converted property setter: - (void)setAttributedString:(id)string;	// 0x3321b7a1
// converted property setter: - (void)setAutoScrolls:(BOOL)scrolls;	// 0x3321ba4d
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x3321badd
// converted property setter: - (void)setScrollPosition:(float)position;	// 0x3321bba9
// converted property setter: - (void)setScrollingDelegate:(id)delegate;	// 0x3321bc05
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x3321b729
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x3321bc15
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3321bc35
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x3321bc25
@end

