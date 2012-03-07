/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIColor, UIBarButtonItem, NSArray;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView {
@private
	id _delegate;	// 48 = 0x30
	UIBarButtonItem *_highlightedBarButtonItem;	// 52 = 0x34
	UIImageView *_highlightedImageView;	// 56 = 0x38
	UIImageView *_backgroundGlow;	// 60 = 0x3c
	NSArray *_passthroughViews;	// 64 = 0x40
	BOOL _ignoresTouches;	// 68 = 0x44
	BOOL _displayed;	// 69 = 0x45
	BOOL _inPassthroughHitTest;	// 70 = 0x46
	UIColor *_dimmingColor;	// 72 = 0x48
}
@property(assign, nonatomic) id delegate;	// G=0x3534e5b1; S=0x3534e5c1; @synthesize=_delegate
@property(retain, nonatomic) UIColor *dimmingColor;	// G=0x3534e645; S=0x3534e655; @synthesize=_dimmingColor
@property(assign, nonatomic) BOOL displayed;	// G=0x3534e625; S=0x3534e635; @synthesize=_displayed
@property(retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;	// G=0x3534dfcd; S=0x3534dc1d; 
@property(assign, nonatomic) BOOL ignoresTouches;	// G=0x3534e605; S=0x3534e615; @synthesize=_ignoresTouches
@property(retain, nonatomic) NSArray *passthroughViews;	// G=0x3534e5d1; S=0x3534e5e1; @synthesize=_passthroughViews
+ (id)defaultDimmingColor;	// 0x3534da65
- (id)initWithFrame:(CGRect)frame;	// 0x3534daad
- (void)dealloc;	// 0x3534db71
// declared property getter: - (id)delegate;	// 0x3534e5b1
// declared property getter: - (id)dimmingColor;	// 0x3534e645
- (void)dimmingRemovalAnimationDidStop;	// 0x3534dc0d
- (void)display:(BOOL)display withAnimationDuration:(float)animationDuration afterDelay:(float)delay;	// 0x3534e005
// declared property getter: - (BOOL)displayed;	// 0x3534e625
// declared property getter: - (id)highlightedBarButtonItem;	// 0x3534dfcd
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3534e371
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3534e189
// declared property getter: - (BOOL)ignoresTouches;	// 0x3534e605
- (void)mouseUp:(GSEventRef)up;	// 0x3534e141
// declared property getter: - (id)passthroughViews;	// 0x3534e5d1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3534e5c1
// declared property setter: - (void)setDimmingColor:(id)color;	// 0x3534e655
// declared property setter: - (void)setDisplayed:(BOOL)displayed;	// 0x3534e635
// declared property setter: - (void)setHighlightedBarButtonItem:(id)item;	// 0x3534dc1d
// declared property setter: - (void)setIgnoresTouches:(BOOL)touches;	// 0x3534e615
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x3534e5e1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3534e559
@end

