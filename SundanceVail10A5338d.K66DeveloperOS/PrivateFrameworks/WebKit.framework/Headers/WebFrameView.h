/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebCoreFrameView.h"
#import <WAKView.h> // Unknown library

@class WebFrameViewPrivate;

@interface WebFrameView : WAKView <WebCoreFrameView> {
	WebFrameViewPrivate *_private;	// 40 = 0x28
}
@property(assign) BOOL allowsScrolling;	// G=0x316a47fd; S=0x31673715; converted property
+ (BOOL)_canShowMIMETypeAsHTML:(id)html;	// 0x31668475
+ (Class)_viewClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x3167008d
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)omission;	// 0x31661c05
- (id)initWithFrame:(CGRect)frame;	// 0x31652959
- (float)_area;	// 0x316a5d41
- (id)_contentView;	// 0x316a604d
- (Class)_customScrollViewClass;	// 0x316a6075
- (BOOL)_firstResponderIsFormControl;	// 0x316a5745
- (void)_forwardMouseEvent:(id)event;	// 0x316a5749
- (void)_frameSizeChanged;	// 0x31669485
- (void)_goBack;	// 0x316a50cd
- (void)_goForward;	// 0x316a50f5
- (BOOL)_hasScrollBars;	// 0x316a5ecd
- (float)_horizontalKeyboardScrollDistance;	// 0x316a522d
- (float)_horizontalPageScrollDistance;	// 0x316a5255
- (void)_install;	// 0x31655709
- (BOOL)_isFlippedDocument;	// 0x316a4c75
- (BOOL)_isScrollable;	// 0x316a5d85
- (BOOL)_isVerticalDocument;	// 0x316a4c31
- (id)_largestChildWithScrollBars;	// 0x316a5f1d
- (id)_largestScrollableChild;	// 0x316a5d9d
- (id)_makeDocumentViewForDataSource:(id)dataSource;	// 0x316a4651
- (BOOL)_pageHorizontally:(BOOL)horizontally;	// 0x316a5371
- (BOOL)_pageInBlockProgressionDirection:(BOOL)blockProgressionDirection;	// 0x316a5415
- (BOOL)_pageVertically:(BOOL)vertically;	// 0x316a52cd
- (BOOL)_scrollHorizontallyBy:(float)by;	// 0x316a51a5
- (BOOL)_scrollLineHorizontally:(BOOL)horizontally;	// 0x316a5541
- (BOOL)_scrollLineVertically:(BOOL)vertically;	// 0x316a549d
- (BOOL)_scrollOverflowInDirection:(int)direction granularity:(int)granularity;	// 0x316a4ba5
- (BOOL)_scrollToBeginningOfDocument;	// 0x316a4cc1
- (BOOL)_scrollToEndOfDocument;	// 0x316a4e05
- (BOOL)_scrollVerticallyBy:(float)by;	// 0x316a511d
- (id)_scrollView;	// 0x316548ad
- (void)_setDocumentView:(id)view;	// 0x31655391
- (void)_setWebFrame:(id)frame;	// 0x316542dd
- (float)_verticalKeyboardScrollDistance;	// 0x316a4629
- (float)_verticalPageScrollDistance;	// 0x316a4725
- (Class)_viewClassForMIMEType:(id)mimetype;	// 0x3166ffa5
- (id)_webView;	// 0x31670061
- (Frame *)_web_frame;	// 0x31669511
- (id)_webcore_effectiveFirstResponder;	// 0x316a5c29
- (BOOL)acceptsFirstResponder;	// 0x316a4851
// converted property getter: - (BOOL)allowsScrolling;	// 0x316a47fd
- (BOOL)becomeFirstResponder;	// 0x316a4855
- (void)dealloc;	// 0x3166f2a9
- (id)documentView;	// 0x31655439
- (BOOL)documentViewShouldHandlePrint;	// 0x316a5c81
- (void)drawRect:(CGRect)rect;	// 0x3165fd2d
- (void)finalize;	// 0x316a479d
- (void)frameSizeChanged;	// 0x3166941d
- (BOOL)isOpaque;	// 0x316a4979
- (void)keyDown:(id)down;	// 0x316a57f1
- (void)mouseDown:(id)down;	// 0x316a57d1
- (void)mouseUp:(id)up;	// 0x316a57e1
- (void)printDocumentView;	// 0x316a5ce1
- (void)scrollLineDown:(id)down;	// 0x316a56ed
- (void)scrollLineUp:(id)up;	// 0x316a5695
- (void)scrollPageDown:(id)down;	// 0x316a563d
- (void)scrollPageUp:(id)up;	// 0x316a55e5
- (void)scrollToBeginningOfDocument:(id)document;	// 0x316a4fdd
- (void)scrollToEndOfDocument:(id)document;	// 0x316a5055
- (BOOL)scrollView:(id)view shouldScrollToPoint:(CGPoint)point;	// 0x31671219
// converted property setter: - (void)setAllowsScrolling:(BOOL)scrolling;	// 0x31673715
- (void)setFrameSize:(CGSize)size;	// 0x316a4b25
- (void)setNextKeyView:(id)view;	// 0x316a4911
- (void)viewDidMoveToWindow;	// 0x31658afd
- (CGRect)visibleRect;	// 0x316a49a1
- (id)webFrame;	// 0x31658b99
@end
