/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebPDFViewPrivateDelegate.h"
#import "UIDocumentPasswordViewDelegate.h"
#import "UIWebPDFViewDelegate.h"
#import <NSObject.h> // Unknown library

@class UIWebPDFSearchController, UIColor, WebPDFNSNumberFormatter, UIWebPDFView, UIHighlightView, UIWebPDFLabelView, UIDocumentPasswordView, UIView;
@protocol UIWebPDFViewHandlerDelegate;

@interface UIWebPDFViewHandler : NSObject <UIWebPDFViewPrivateDelegate, UIDocumentPasswordViewDelegate, UIWebPDFViewDelegate> {
@private
	UIWebPDFView *_pdfView;	// 4 = 0x4
	BOOL _scalesPageToFit;	// 8 = 0x8
	float _initialZoomScale;	// 12 = 0xc
	NSObject<UIWebPDFViewHandlerDelegate> *_pdfHandlerDelegate;	// 16 = 0x10
	UIHighlightView *_linkHighlightView;	// 20 = 0x14
	UIWebPDFLabelView *_pageLabelView;	// 24 = 0x18
	BOOL _showPageLabels;	// 28 = 0x1c
	BOOL _showsShadowsForHTMLContent;	// 29 = 0x1d
	BOOL _cachedScrollViewShadowsState;	// 30 = 0x1e
	UIDocumentPasswordView *_passwordEntryView;	// 32 = 0x20
	UIWebPDFSearchController *_searchController;	// 36 = 0x24
	UIColor *_backgroundColorForUnRenderedContent;	// 40 = 0x28
	BOOL _hideActivityIndicatorForUnRenderedContent;	// 44 = 0x2c
	BOOL _hidePageViewsUntilReadyToRender;	// 45 = 0x2d
	WebPDFNSNumberFormatter *_labelViewFormatter;	// 48 = 0x30
	PDFHistoryItem _pendingHistoryItemRestore;	// 52 = 0x34
}
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent;	// G=0x303c9eb5; S=0x300d5515; @synthesize=_backgroundColorForUnRenderedContent
@property(readonly, assign, nonatomic) UIView *frontView;	// G=0x300d5995; 
@property(assign, nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;	// G=0x303c9ec5; S=0x303c6eed; @synthesize=_hideActivityIndicatorForUnRenderedContent
@property(assign, nonatomic) BOOL hidePageViewsUntilReadyToRender;	// G=0x303c9ea5; S=0x303c6eb9; @synthesize=_hidePageViewsUntilReadyToRender
@property(assign, nonatomic) NSObject<UIWebPDFViewHandlerDelegate> *pdfHandlerDelegate;	// G=0x303c9e95; S=0x300d5579; @synthesize=_pdfHandlerDelegate
@property(readonly, assign, nonatomic) UIWebPDFView *pdfView;	// G=0x300d59c5; 
@property(assign, nonatomic) BOOL scalesPageToFit;	// G=0x303c9e85; S=0x301d1715; @synthesize=_scalesPageToFit
@property(readonly, assign, nonatomic) UIWebPDFSearchController *searchController;	// G=0x303c6fe9; 
@property(assign, nonatomic) BOOL showPageLabels;	// G=0x303c9e75; S=0x300d5589; @synthesize=_showPageLabels
- (id)init;	// 0x300d5385
- (void)_adjustContentOffsetForKeyboardIfNeeded;	// 0x303c8839
- (void)_adjustZoomScalesForScrollViewInternal:(id)scrollViewInternal;	// 0x303c7aa9
- (void)_createPDFViewIfNeeded:(id)needed;	// 0x303c737d
- (void)_ensurePDFViewInHierarchyForWebDocView:(id)webDocView;	// 0x303c756d
- (CGRect)_frameForDocumentBounds:(CGRect)documentBounds;	// 0x303c7149
- (id)_getLabelViewFormatter;	// 0x303c9401
- (id)_getPDFDocumentViewForWebView:(id)webView;	// 0x30176891
- (BOOL)_handleAnnotationClick:(CGPDFDictionaryRef)click;	// 0x303c8611
- (BOOL)_handleDestinationActionClick:(CGPDFDictionaryRef)click destinationKey:(const char *)key;	// 0x303c833d
- (BOOL)_handleLinkActionClick:(CGPDFDictionaryRef)click;	// 0x303c8585
- (BOOL)_handleURIActionClick:(CGPDFDictionaryRef)click uriKey:(const char *)key;	// 0x303c8519
- (void)_keyboardDidShow:(id)_keyboard;	// 0x303c8b89
- (void)_notifyDelegateOfLinkClick:(id)linkClick;	// 0x303c82d9
- (void)_postdidDetermineDocumentBounds;	// 0x303c8e01
- (CGRect)_rectForPasswordView:(id)passwordView;	// 0x303c7245
- (CGRect)_rectForPdfView:(CGRect)pdfView;	// 0x303c70b9
- (void)_removePDFViewIfWebDocViewIsNotPDF:(id)pdf;	// 0x30177671
- (void)_removePDFViewIfWebDocViewIsNotSamePDF:(id)pdf;	// 0x303c72f1
- (void)_replacePDFViewIfPresentWithWebDocView:(id)webDocView;	// 0x301776a9
- (void)_resultRects:(id)rects andResultViews:(id)views forSearchResult:(id)searchResult inViewCoordinates:(id)viewCoordinates;	// 0x303c97c1
- (id)_scroller:(id)scroller;	// 0x3017685d
- (void)_setSearchControllerDocumentToSearch;	// 0x303c6f21
- (void)_showPasswordEntryViewForFile:(id)file;	// 0x303c8d09
- (void)_showPasswordErrorAlert;	// 0x303c86e1
- (void)_updateViewHierarchyForDocumentView:(id)documentView ignoreIfSame:(BOOL)same;	// 0x303c76e9
- (void)adjustZoomScalesForScrollView;	// 0x303c7d55
// declared property getter: - (id)backgroundColorForUnRenderedContent;	// 0x303c9eb5
- (void)clearAllViews;	// 0x301d3579
- (void)clearLinkHighlight;	// 0x301d3695
- (void)clearPageLabel;	// 0x301d36d5
- (id)createLinkHighlight;	// 0x303c7e9d
- (id)createPageLabel;	// 0x303c866d
- (void)dealloc;	// 0x301d34f5
- (void)didBeginEditingPassword:(id)password inView:(id)view;	// 0x303c8bbd
- (void)didDetermineDocumentBounds:(id)bounds;	// 0x303c8ec5
- (void)didEndEditingPassword:(id)password inView:(id)view;	// 0x303c8c29
- (void)didReceiveMemoryWarning:(id)warning;	// 0x303c707d
- (void)didScroll:(id)scroll;	// 0x303c9235
- (void)ensureCorrectPagesAreInstalled;	// 0x301d1fe9
// declared property getter: - (id)frontView;	// 0x300d5995
- (void)handleScrollToAnchor:(id)anchor;	// 0x303c9719
// declared property getter: - (BOOL)hideActivityIndicatorForUnRenderedContent;	// 0x303c9ec5
// declared property getter: - (BOOL)hidePageViewsUntilReadyToRender;	// 0x303c9ea5
- (void)highlightRect:(CGRect)rect;	// 0x303c7f89
- (id)passwordForPDFView:(id)pdfview;	// 0x303c9199
// declared property getter: - (id)pdfHandlerDelegate;	// 0x303c9e95
// declared property getter: - (id)pdfView;	// 0x300d59c5
- (void)pdfView:(id)view shouldZoomToRect:(CGRect)rect;	// 0x303c90c9
- (void)pdfView:(id)view willClickAnnotation:(CGPDFDictionaryRef)annotation inRect:(CGRect)rect;	// 0x303c9155
- (void)removeViewFromSuperview;	// 0x303c9285
- (void)restoreStateFromHistoryItem:(id)historyItem forWebView:(id)webView;	// 0x30182829
- (void)restoreStateFromPendingHistoryItem;	// 0x303c9dad
- (void)revealSearchResult:(id)result andZoomIn:(BOOL)anIn;	// 0x303c9a21
- (void)saveStateToHistoryItem:(id)historyItem forWebView:(id)webView;	// 0x301796f5
// declared property getter: - (BOOL)scalesPageToFit;	// 0x303c9e85
- (void)scrollToPageNumber:(int)pageNumber animate:(BOOL)animate;	// 0x303c80fd
// declared property getter: - (id)searchController;	// 0x303c6fe9
// declared property setter: - (void)setBackgroundColorForUnRenderedContent:(id)unRenderedContent;	// 0x300d5515
// declared property setter: - (void)setHideActivityIndicatorForUnRenderedContent:(BOOL)unRenderedContent;	// 0x303c6eed
// declared property setter: - (void)setHidePageViewsUntilReadyToRender:(BOOL)render;	// 0x303c6eb9
// declared property setter: - (void)setPdfHandlerDelegate:(id)delegate;	// 0x300d5579
// declared property setter: - (void)setScalesPageToFit:(BOOL)fit;	// 0x301d1715
// declared property setter: - (void)setShowPageLabels:(BOOL)labels;	// 0x300d5589
- (void)shouldResetZoom:(id)zoom;	// 0x303c9111
// declared property getter: - (BOOL)showPageLabels;	// 0x303c9e75
- (void)updatePageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;	// 0x303c9441
- (void)updateViewHierarchyForDocumentViewLoadComplete:(id)documentViewLoadComplete;	// 0x301794c5
- (void)updateViewHierarchyForDocumentViewNewLoad:(id)documentViewNewLoad;	// 0x301767c9
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)documentViewTabSwitch;	// 0x303c93cd
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)documentViewTabSwitch restoringZoomScale:(float)scale andScrollPt:(CGPoint)pt;	// 0x303c92d5
- (void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)frame;	// 0x30177661
- (void)updateViewSettings;	// 0x303c7769
- (void)userDidEnterPassword:(id)user forPasswordView:(id)passwordView;	// 0x303c8781
@end

