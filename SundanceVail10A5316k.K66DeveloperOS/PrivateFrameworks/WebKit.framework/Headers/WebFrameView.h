/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <WAKView.h> // Unknown library
#import "WebCoreFrameView.h"

@class WebFrameViewPrivate;

@interface WebFrameView : WAKView <WebCoreFrameView> {
@private
	WebFrameViewPrivate *_private;	// 40 = 0x28
}
@property(assign) BOOL allowsScrolling;	// G=0x35053c35; S=0x3502306d; converted property
+ (BOOL)_canShowMIMETypeAsHTML:(id)html;	// 0x35017ddd
+ (Class)_viewClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x3501f9ed
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)omission;	// 0x35011571
- (id)initWithFrame:(CGRect)frame;	// 0x350024d9
- (float)_area;	// 0x35055179
- (id)_contentView;	// 0x35055485
- (Class)_customScrollViewClass;	// 0x350554ad
- (BOOL)_firstResponderIsFormControl;	// 0x35054b7d
- (void)_forwardMouseEvent:(id)event;	// 0x35054b81
- (void)_frameSizeChanged;	// 0x35018de5
- (void)_goBack;	// 0x35054505
- (void)_goForward;	// 0x3505452d
- (BOOL)_hasScrollBars;	// 0x35055305
- (float)_horizontalKeyboardScrollDistance;	// 0x35054665
- (float)_horizontalPageScrollDistance;	// 0x3505468d
- (void)_install;	// 0x35005289
- (BOOL)_isFlippedDocument;	// 0x350540ad
- (BOOL)_isScrollable;	// 0x350551bd
- (BOOL)_isVerticalDocument;	// 0x35054069
- (id)_largestChildWithScrollBars;	// 0x35055355
- (id)_largestScrollableChild;	// 0x350551d5
- (id)_makeDocumentViewForDataSource:(id)dataSource;	// 0x35053a89
- (BOOL)_pageHorizontally:(BOOL)horizontally;	// 0x350547a9
- (BOOL)_pageInBlockProgressionDirection:(BOOL)blockProgressionDirection;	// 0x3505484d
- (BOOL)_pageVertically:(BOOL)vertically;	// 0x35054705
- (BOOL)_scrollHorizontallyBy:(float)by;	// 0x350545dd
- (BOOL)_scrollLineHorizontally:(BOOL)horizontally;	// 0x35054979
- (BOOL)_scrollLineVertically:(BOOL)vertically;	// 0x350548d5
- (BOOL)_scrollOverflowInDirection:(int)direction granularity:(int)granularity;	// 0x35053fdd
- (BOOL)_scrollToBeginningOfDocument;	// 0x350540f9
- (BOOL)_scrollToEndOfDocument;	// 0x3505423d
- (BOOL)_scrollVerticallyBy:(float)by;	// 0x35054555
- (id)_scrollView;	// 0x3500442d
- (void)_setDocumentView:(id)view;	// 0x35004f11
- (void)_setWebFrame:(id)frame;	// 0x35003e5d
- (float)_verticalKeyboardScrollDistance;	// 0x35053a61
- (float)_verticalPageScrollDistance;	// 0x35053b5d
- (Class)_viewClassForMIMEType:(id)mimetype;	// 0x3501f905
- (id)_webView;	// 0x3501f9c1
- (Frame *)_web_frame;	// 0x35018e71
- (id)_webcore_effectiveFirstResponder;	// 0x35055061
- (BOOL)acceptsFirstResponder;	// 0x35053c89
// converted property getter: - (BOOL)allowsScrolling;	// 0x35053c35
- (BOOL)becomeFirstResponder;	// 0x35053c8d
- (void)dealloc;	// 0x3501ec09
- (id)documentView;	// 0x35004fb9
- (BOOL)documentViewShouldHandlePrint;	// 0x350550b9
- (void)drawRect:(CGRect)rect;	// 0x3500f6a5
- (void)finalize;	// 0x35053bd5
- (void)frameSizeChanged;	// 0x35018d7d
- (BOOL)isOpaque;	// 0x35053db1
- (void)keyDown:(id)down;	// 0x35054c29
- (void)mouseDown:(id)down;	// 0x35054c09
- (void)mouseUp:(id)up;	// 0x35054c19
- (void)printDocumentView;	// 0x35055119
- (void)scrollLineDown:(id)down;	// 0x35054b25
- (void)scrollLineUp:(id)up;	// 0x35054acd
- (void)scrollPageDown:(id)down;	// 0x35054a75
- (void)scrollPageUp:(id)up;	// 0x35054a1d
- (void)scrollToBeginningOfDocument:(id)document;	// 0x35054415
- (void)scrollToEndOfDocument:(id)document;	// 0x3505448d
- (BOOL)scrollView:(id)view shouldScrollToPoint:(CGPoint)point;	// 0x35020b79
// converted property setter: - (void)setAllowsScrolling:(BOOL)scrolling;	// 0x3502306d
- (void)setFrameSize:(CGSize)size;	// 0x35053f5d
- (void)setNextKeyView:(id)view;	// 0x35053d49
- (void)viewDidMoveToWindow;	// 0x3500867d
- (CGRect)visibleRect;	// 0x35053dd9
- (id)webFrame;	// 0x35008719
@end

