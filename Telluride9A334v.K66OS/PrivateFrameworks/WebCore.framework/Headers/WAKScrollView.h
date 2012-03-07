/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WAKView.h"
#import "WebCore-Structs.h"
#import "WebCoreFrameScrollView.h"


@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
@private
	WAKView *_documentView;	// 68 = 0x44
	id _delegate;	// 72 = 0x48
	CGPoint _scrollOrigin;	// 76 = 0x4c
}
@property(retain) id contentView;	// G=0x365846bd; S=0x36c05749; converted property
@property(assign) id delegate;	// G=0x365c06b5; S=0x36532109; converted property
@property(retain) WAKView *documentView;	// G=0x3653dbf9; S=0x3653da81; converted property
@property(assign) BOOL drawsBackground;	// G=0x36c054b9; S=0x36532119; converted property
@property(assign) BOOL hasHorizontalScroller;	// G=0x36c054b5; S=0x36532121; converted property
@property(assign) BOOL hasVerticalScroller;	// G=0x36c054b1; S=0x3653211d; converted property
@property(assign) int horizontalScrollingMode;	// G=0x36c054d9; S=0x36c054cd; converted property
@property(readonly, assign) CGPoint scrollOrigin;	// G=0x365c00e5; converted property
@property(assign) int verticalScrollingMode;	// G=0x36c054dd; S=0x36c054d1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x36531e25
- (CGRect)actualDocumentVisibleRect;	// 0x365bfa59
// converted property getter: - (id)contentView;	// 0x365846bd
- (void)dealloc;	// 0x3671446d
// converted property getter: - (id)delegate;	// 0x365c06b5
- (id)description;	// 0x36c054e5
// converted property getter: - (id)documentView;	// 0x3653dbf9
- (CGRect)documentVisibleRect;	// 0x3658468d
- (void)drawRect:(CGRect)rect;	// 0x36c054c9
// converted property getter: - (BOOL)drawsBackground;	// 0x36c054b9
// converted property getter: - (BOOL)hasHorizontalScroller;	// 0x36c054b5
// converted property getter: - (BOOL)hasVerticalScroller;	// 0x36c054b1
- (float)horizontalLineScroll;	// 0x36c054c1
// converted property getter: - (int)horizontalScrollingMode;	// 0x36c054d9
- (BOOL)inProgrammaticScroll;	// 0x36c054e1
- (void)reflectScrolledClipView:(id)view;	// 0x36c054c5
// converted property getter: - (CGPoint)scrollOrigin;	// 0x365c00e5
- (void)scrollWheel:(id)wheel;	// 0x36c05611
- (void)scrollingModes:(int *)modes vertical:(int *)vertical;	// 0x3653ef29
- (void)setActualScrollPosition:(CGPoint)position;	// 0x3673ee7d
// converted property setter: - (void)setContentView:(id)view;	// 0x36c05749
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x36532109
// converted property setter: - (void)setDocumentView:(id)view;	// 0x3653da81
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x36532119
// converted property setter: - (void)setHasHorizontalScroller:(BOOL)scroller;	// 0x36532121
// converted property setter: - (void)setHasVerticalScroller:(BOOL)scroller;	// 0x3653211d
// converted property setter: - (void)setHorizontalScrollingMode:(int)mode;	// 0x36c054cd
- (void)setLineScroll:(float)scroll;	// 0x3653216d
- (void)setScrollBarsSuppressed:(BOOL)suppressed repaintOnUnsuppress:(BOOL)unsuppress;	// 0x365ed84d
- (void)setScrollOrigin:(CGPoint)origin updatePositionAtAll:(BOOL)all immediately:(BOOL)immediately;	// 0x36c05701
- (void)setScrollingMode:(int)mode;	// 0x36c054d5
- (void)setScrollingModes:(int)modes vertical:(int)vertical andLock:(BOOL)lock;	// 0x3653f151
// converted property setter: - (void)setVerticalScrollingMode:(int)mode;	// 0x36c054d1
- (float)verticalLineScroll;	// 0x36c054bd
// converted property getter: - (int)verticalScrollingMode;	// 0x36c054dd
@end

