/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCoreFrameScrollView.h"
#import "WebCore-Structs.h"
#import "WAKView.h"

@class WAKClipView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
	WAKView *_documentView;	// 40 = 0x28
	WAKClipView *_contentView;	// 44 = 0x2c
	id _delegate;	// 48 = 0x30
	CGPoint _scrollOrigin;	// 52 = 0x34
}
@property(readonly, retain) WAKClipView *contentView;	// G=0x30ab71f9; converted property
@property(assign) id delegate;	// G=0x30ae55e9; S=0x30a881c9; converted property
@property(retain) WAKView *documentView;	// G=0x30a935d1; S=0x30a934ed; converted property
@property(assign) BOOL drawsBackground;	// G=0x312b7d85; S=0x30a881d9; converted property
@property(assign) BOOL hasHorizontalScroller;	// G=0x312b7d7d; S=0x30a881e9; converted property
@property(assign) BOOL hasVerticalScroller;	// G=0x312b7d75; S=0x30a881e1; converted property
@property(assign) int horizontalScrollingMode;	// G=0x312b7da9; S=0x312b7d9d; converted property
@property(readonly, assign) CGPoint scrollOrigin;	// G=0x30ae51c1; converted property
@property(assign) int verticalScrollingMode;	// G=0x312b7dad; S=0x312b7da1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x30a87fe9
- (id).cxx_construct;	// 0x312b82f1
- (void)_adjustScrollers;	// 0x312b81ad
- (BOOL)_selfHandleEvent:(id)event;	// 0x312b7d35
- (CGRect)actualDocumentVisibleRect;	// 0x30ae4b15
// converted property getter: - (id)contentView;	// 0x30ab71f9
- (void)dealloc;	// 0x30bc5a71
// converted property getter: - (id)delegate;	// 0x30ae55e9
- (id)description;	// 0x312b7ff1
// converted property getter: - (id)documentView;	// 0x30a935d1
- (CGRect)documentVisibleRect;	// 0x30ab71c1
- (void)drawRect:(CGRect)rect;	// 0x312b7d99
// converted property getter: - (BOOL)drawsBackground;	// 0x312b7d85
// converted property getter: - (BOOL)hasHorizontalScroller;	// 0x312b7d7d
// converted property getter: - (BOOL)hasVerticalScroller;	// 0x312b7d75
- (float)horizontalLineScroll;	// 0x312b7d91
// converted property getter: - (int)horizontalScrollingMode;	// 0x312b7da9
- (BOOL)inProgrammaticScroll;	// 0x312b81a9
- (void)reflectScrolledClipView:(id)view;	// 0x312b7d95
// converted property getter: - (CGPoint)scrollOrigin;	// 0x30ae51c1
- (void)scrollPoint:(CGPoint)point;	// 0x312b7df1
- (void)scrollWheel:(id)wheel;	// 0x312b7f19
- (void)scrollingModes:(int *)modes vertical:(int *)vertical;	// 0x30a945cd
- (void)setActualScrollPosition:(CGPoint)position;	// 0x30be2a49
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x30a881c9
// converted property setter: - (void)setDocumentView:(id)view;	// 0x30a934ed
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x30a881d9
// converted property setter: - (void)setHasHorizontalScroller:(BOOL)scroller;	// 0x30a881e9
// converted property setter: - (void)setHasVerticalScroller:(BOOL)scroller;	// 0x30a881e1
// converted property setter: - (void)setHorizontalScrollingMode:(int)mode;	// 0x312b7d9d
- (void)setLineScroll:(float)scroll;	// 0x30a88239
- (void)setScrollBarsSuppressed:(BOOL)suppressed repaintOnUnsuppress:(BOOL)unsuppress;	// 0x30b06709
- (void)setScrollOrigin:(CGPoint)origin updatePositionAtAll:(BOOL)all immediately:(BOOL)immediately;	// 0x312b7db5
- (void)setScrollingMode:(int)mode;	// 0x312b7da5
- (void)setScrollingModes:(int)modes vertical:(int)vertical andLock:(BOOL)lock;	// 0x30a947e1
// converted property setter: - (void)setVerticalScrollingMode:(int)mode;	// 0x312b7da1
- (float)verticalLineScroll;	// 0x312b7d8d
// converted property getter: - (int)verticalScrollingMode;	// 0x312b7dad
@end
