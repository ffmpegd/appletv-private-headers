/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WAKResponder.h"
#import "WebCore-Structs.h"

@class NSMutableSet;

@interface WAKView : WAKResponder {
@private
	WKViewContext viewContext;	// 4 = 0x4
	WKView *viewRef;	// 60 = 0x3c
	NSMutableSet *subviewReferences;	// 64 = 0x40
}
@property(assign) unsigned autoresizingMask;	// G=0x338527ad; S=0x331772a1; converted property
@property(assign) CGRect frame;	// G=0x331e2f5d; S=0x331ba27d; converted property
@property(assign) BOOL needsDisplay;	// G=0x338524cd; S=0x33234945; converted property
@property(retain) id nextKeyView;	// G=0x33232429; S=0x331773a1; converted property
@property(assign) float scale;	// G=0x33312de1; S=0x33233551; converted property
+ (id)_wrapperForViewRef:(WKView *)viewRef;	// 0x331ba71d
+ (id)focusView;	// 0x33852509
- (id)init;	// 0x332d9b45
- (id)initWithFrame:(CGRect)frame;	// 0x33176801
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x3385253d
- (void)_handleEvent:(id)event;	// 0x333be339
- (BOOL)_handleResponderCall:(int)call;	// 0x331d76ed
- (id)_initWithViewRef:(WKView *)viewRef;	// 0x33176979
- (void)_setDrawsOwnDescendants:(BOOL)descendants;	// 0x33182bb9
- (id)_subviewReferences;	// 0x33177355
- (WKView *)_viewRef;	// 0x33177345
- (BOOL)accessibilityIsIgnored;	// 0x333ee4d5
- (void)addSubview:(id)subview;	// 0x331772ed
// converted property getter: - (unsigned)autoresizingMask;	// 0x338527ad
- (CGRect)bounds;	// 0x33182b49
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x33335525
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x33387605
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x33206741
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x33207329
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x338527e9
- (void)dealloc;	// 0x331c5ded
- (id)description;	// 0x338526c5
- (void)display;	// 0x338528ed
- (void)displayIfNeeded;	// 0x338524d1
- (void)displayRect:(CGRect)rect;	// 0x33852875
- (void)displayRectIgnoringOpacity:(CGRect)opacity;	// 0x33313ee9
- (void)displayRectIgnoringOpacity:(CGRect)opacity inContext:(CGContextRef)context;	// 0x33852845
- (void)drawRect:(CGRect)rect;	// 0x331e2f59
// converted property getter: - (CGRect)frame;	// 0x331e2f5d
- (void)frameSizeChanged;	// 0x331d4bd9
- (id)hitTest:(CGPoint)test;	// 0x333be0e9
- (BOOL)inLiveResize;	// 0x338524e9
- (void)invalidateGState;	// 0x331d5389
- (BOOL)isDescendantOf:(id)of;	// 0x331ecb2d
- (id)lastScrollableAncestor;	// 0x33852901
- (void)layout;	// 0x338524f1
- (void)layoutIfNeeded;	// 0x338524f5
- (void)lockFocus;	// 0x338527d5
- (BOOL)mouse:(CGPoint)mouse inRect:(CGRect)rect;	// 0x333be23d
// converted property getter: - (BOOL)needsDisplay;	// 0x338524cd
- (BOOL)needsPanelToBecomeKey;	// 0x338524d5
// converted property getter: - (id)nextKeyView;	// 0x33232429
- (id)nextResponder;	// 0x338524f9
- (id)nextValidKeyView;	// 0x338524dd
- (id)previousKeyView;	// 0x338524e1
- (id)previousValidKeyView;	// 0x338524d9
- (void)releaseGState;	// 0x338524e5
- (void)removeFromSuperview;	// 0x3330ce75
// converted property getter: - (float)scale;	// 0x33312de1
- (void)scrollPoint:(CGPoint)point;	// 0x33206b61
- (BOOL)scrollRectToVisible:(CGRect)visible;	// 0x3385277d
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x331772a1
- (void)setBoundsOrigin:(CGPoint)origin;	// 0x338528a5
- (void)setBoundsSize:(CGSize)size;	// 0x331d4acd
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x331ba27d
- (void)setFrameOrigin:(CGPoint)origin;	// 0x338528d5
- (void)setFrameSize:(CGSize)size;	// 0x338528bd
- (void)setHidden:(BOOL)hidden;	// 0x33301331
// converted property setter: - (void)setNeedsDisplay:(BOOL)display;	// 0x33234945
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x331d6c15
- (void)setNeedsLayout:(BOOL)layout;	// 0x338524ed
// converted property setter: - (void)setNextKeyView:(id)view;	// 0x331773a1
// converted property setter: - (void)setScale:(float)scale;	// 0x33233551
- (id)subviews;	// 0x331e2459
- (id)superview;	// 0x331ba6a5
- (void)unlockFocus;	// 0x338527c1
- (void)viewDidMoveToWindow;	// 0x331ba985
- (void)viewWillDraw;	// 0x331e2425
- (CGRect)visibleRect;	// 0x3385282d
- (void)willRemoveSubview:(id)subview;	// 0x3330d021
- (id)window;	// 0x33182cdd
@end

