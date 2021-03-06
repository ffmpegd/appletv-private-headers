/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WAKView.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebCoreFrameView.h"

@class WebFrameViewPrivate;

@interface WebFrameView : WAKView <WebCoreFrameView> {
@private
	WebFrameViewPrivate *_private;	// 68 = 0x44
}
@property(assign) BOOL allowsScrolling;	// G=0x3400ed0d; S=0x33fe2b55; converted property
+ (BOOL)_canShowMIMETypeAsHTML:(id)html;	// 0x33fd9799
+ (Class)_viewClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x3400d7d9
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)omission;	// 0x33fd19b9
- (id)initWithFrame:(CGRect)frame;	// 0x33fc2e3d
- (float)_area;	// 0x3400eed9
- (id)_contentView;	// 0x3400e199
- (Class)_customScrollViewClass;	// 0x3400e1bd
- (BOOL)_firstResponderIsFormControl;	// 0x3400d749
- (void)_forwardMouseEvent:(id)event;	// 0x3400dde1
- (void)_goBack;	// 0x3400d9e5
- (void)_goForward;	// 0x3400da09
- (BOOL)_hasScrollBars;	// 0x3400e051
- (float)_horizontalKeyboardScrollDistance;	// 0x3400da2d
- (float)_horizontalPageScrollDistance;	// 0x3400e741
- (void)_install;	// 0x33fc5745
- (BOOL)_isScrollable;	// 0x3400df41
- (id)_largestChildWithScrollBars;	// 0x3400e09d
- (id)_largestScrollableChild;	// 0x3400df55
- (id)_makeDocumentViewForDataSource:(id)dataSource;	// 0x3400ede9
- (BOOL)_pageHorizontally:(BOOL)horizontally;	// 0x3400dae9
- (BOOL)_pageVertically:(BOOL)vertically;	// 0x3400da51
- (BOOL)_scrollHorizontallyBy:(float)by;	// 0x3400e7a5
- (BOOL)_scrollLineHorizontally:(BOOL)horizontally;	// 0x3400dc19
- (BOOL)_scrollLineVertically:(BOOL)vertically;	// 0x3400db81
- (BOOL)_scrollOverflowInDirection:(int)direction granularity:(int)granularity;	// 0x3400e9d1
- (BOOL)_scrollToBeginningOfDocument;	// 0x3400e925
- (BOOL)_scrollToEndOfDocument;	// 0x3400e86d
- (BOOL)_scrollVerticallyBy:(float)by;	// 0x3400e809
- (id)_scrollView;	// 0x33fc49fd
- (void)_setDocumentView:(id)view;	// 0x33fc5471
- (void)_setWebFrame:(id)frame;	// 0x33fc4325
- (float)_verticalKeyboardScrollDistance;	// 0x3400d74d
- (float)_verticalPageScrollDistance;	// 0x3400ef09
- (Class)_viewClassForMIMEType:(id)mimetype;	// 0x3400d771
- (id)_webView;	// 0x33fdebd1
- (Frame *)_web_frame;	// 0x3400edc5
- (id)_webcore_effectiveFirstResponder;	// 0x3400e22d
- (BOOL)acceptsFirstResponder;	// 0x3400d745
// converted property getter: - (BOOL)allowsScrolling;	// 0x3400ed0d
- (BOOL)becomeFirstResponder;	// 0x3400d815
- (void)dealloc;	// 0x33fdc595
- (id)documentView;	// 0x33fc5509
- (BOOL)documentViewShouldHandlePrint;	// 0x3400de8d
- (void)drawRect:(CGRect)rect;	// 0x33fcab7d
- (void)finalize;	// 0x3400ed69
- (BOOL)isOpaque;	// 0x3400d8e1
- (void)keyDown:(id)down;	// 0x3400e281
- (void)mouseDown:(id)down;	// 0x3400de65
- (void)mouseUp:(id)up;	// 0x3400de79
- (void)printDocumentView;	// 0x3400dee5
- (void)scrollLineDown:(id)down;	// 0x3400dd95
- (void)scrollLineUp:(id)up;	// 0x3400dd49
- (void)scrollPageDown:(id)down;	// 0x3400dcfd
- (void)scrollPageUp:(id)up;	// 0x3400dcb1
- (void)scrollToBeginningOfDocument:(id)document;	// 0x3400d905
- (void)scrollToEndOfDocument:(id)document;	// 0x3400d975
- (BOOL)scrollView:(id)view shouldScrollToPoint:(CGPoint)point;	// 0x33fdeb69
// converted property setter: - (void)setAllowsScrolling:(BOOL)scrolling;	// 0x33fe2b55
- (void)setFrameSize:(CGSize)size;	// 0x3400ea55
- (void)setNextKeyView:(id)view;	// 0x3400eca5
- (void)viewDidMoveToWindow;	// 0x33fc7f09
- (CGRect)visibleRect;	// 0x3400eb29
- (id)webFrame;	// 0x33fc7f9d
@end

