/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "WebPDFViewPlaceholderDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIView.h"

@class NSURL, UIPDFDocument, WebPDFViewPlaceholder, UIColor, NSMutableArray, NSString, UITapGestureRecognizer, NSArray;
@protocol UIWebPDFViewDelegate;

@interface UIWebPDFView : UIView <WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate> {
	NSMutableArray *_backingLayerImageViews;	// 48 = 0x30
@private
	CGPDFDocumentRef _cgPDFDocument;	// 52 = 0x34
	UIPDFDocument *_document;	// 56 = 0x38
	BOOL _hasScheduledCacheUpdate;	// 60 = 0x3c
	CGRect _documentBounds;	// 64 = 0x40
	NSObject<UIWebPDFViewDelegate> *_pdfDelegate;	// 80 = 0x50
	BOOL _delegateRespondsToDidScroll;	// 84 = 0x54
	UITapGestureRecognizer *_tapGestureRecognizer;	// 88 = 0x58
	NSURL *_documentURL;	// 92 = 0x5c
	BOOL _rotating;	// 96 = 0x60
	BOOL _zooming;	// 97 = 0x61
	BOOL _inDidZoom;	// 98 = 0x62
	float _initialZoomScale;	// 100 = 0x64
	CGAffineTransform _documentTransform;	// 104 = 0x68
	float _documentScale;	// 128 = 0x80
	int _ignoreContentOffsetChanges;	// 132 = 0x84
	CGPoint _contentOffsetAtScrollStart;	// 136 = 0x88
	NSMutableArray *_pageViews;	// 144 = 0x90
	IndexPair _installedPageIndices;	// 148 = 0x94
	WebPDFViewPlaceholder *pdfPlaceHolderView;	// 156 = 0x9c
	BOOL hidePageViewsUntilReadyToRender;	// 160 = 0xa0
	UIColor *backgroundColorForUnRenderedContent;	// 164 = 0xa4
	BOOL hideActivityIndicatorForUnRenderedContent;	// 168 = 0xa8
	NSString *documentPassword;	// 172 = 0xac
	NSArray *pageRects;	// 176 = 0xb0
}
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent;	// G=0x33d17dfd; S=0x33d17e0d; @synthesize
@property(readonly, assign, nonatomic) CGPDFDocumentRef cgPDFDocument;	// G=0x33d150ad; 
@property(readonly, assign, nonatomic) UIPDFDocument *document;	// G=0x33d150cd; 
@property(readonly, assign, nonatomic) CGRect documentBounds;	// G=0x33d17cf1; @synthesize=_documentBounds
@property(retain, nonatomic) NSString *documentPassword;	// G=0x33d17e51; S=0x33d17e61; @synthesize
@property(readonly, assign, nonatomic) float documentScale;	// G=0x33d17d9d; @synthesize=_documentScale
@property(assign, nonatomic) CGAffineTransform documentTransform;	// G=0x33d17d35; S=0x33d17d69; @synthesize=_documentTransform
@property(retain, nonatomic) NSURL *documentURL;	// G=0x33d17cad; S=0x33d17cbd; @synthesize=_documentURL
@property(assign, nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;	// G=0x33d17e31; S=0x33d17e41; @synthesize
@property(assign, nonatomic) BOOL hidePageViewsUntilReadyToRender;	// G=0x33d17ddd; S=0x33d17ded; @synthesize
@property(assign, nonatomic) int ignoreContentOffsetChanges;	// G=0x33d17dcd; S=0x33d14fe1; @synthesize=_ignoreContentOffsetChanges
@property(assign, nonatomic) float initialZoomScale;	// G=0x33d17d15; S=0x33d17d25; @synthesize=_initialZoomScale
@property(retain, nonatomic) NSArray *pageRects;	// G=0x33d17e85; S=0x33d17e95; @synthesize
@property(assign, nonatomic) NSObject<UIWebPDFViewDelegate> *pdfDelegate;	// G=0x33d17ce1; S=0x33d1500d; @synthesize=_pdfDelegate
@property(assign) WebPDFViewPlaceholder *pdfPlaceHolderView;	// G=0x33d17dad; S=0x33d17dbd; @synthesize
@property(readonly, assign, nonatomic) unsigned totalPages;	// G=0x33d1505d; 
+ (void)setAsPDFDocRepAndView;	// 0x33a248f1
- (id)initWithWebPDFViewPlaceholder:(id)webPDFViewPlaceholder;	// 0x33d150dd
- (IndexPair)_addBackwardSubViewsInDocCoordsBounds:(CGRect)docCoordsBounds withPageRects:(id)pageRects usingIndices:(IndexPair)indices;	// 0x33d1603d
- (IndexPair)_addForwardSubViewsInDocCoordsBounds:(CGRect)docCoordsBounds withPageRects:(id)pageRects usingIndices:(IndexPair)indices;	// 0x33d15eb9
- (id)_addPageAtIndex:(unsigned)index;	// 0x33d16489
- (void)_addSubViewsInViewCoordsBounds:(CGRect)viewCoordsBounds;	// 0x33d1618d
- (BOOL)_checkIfDocumentNeedsUnlock;	// 0x33d17229
- (void)_define:(id)define;	// 0x33d17a1d
- (void)_didScroll;	// 0x33d16879
- (BOOL)_hasPageRects;	// 0x33d1507d
- (id)_installViewAtIndex:(int)index inFrame:(CGRect)frame;	// 0x33d15b8d
- (id)_pageWithSelection;	// 0x33d17819
- (void)_recreateUIPDFDocument;	// 0x33d17361
- (void)_removeBackgroundImageObserverIfNeeded:(id)needed;	// 0x33d153dd
- (void)_removePageViewsNotInCurrentViewCoordsRect;	// 0x33d166b9
- (void)_removePageViewsNotInViewCoordsRect:(CGRect)viewCoordsRect;	// 0x33d1651d
- (void)_scheduleRemovePageViewsNotInViewCoordsRect;	// 0x33d16705
- (id)_selection;	// 0x33d178fd
- (void)_tapGestureRecognized:(id)recognized;	// 0x33d17c4d
- (BOOL)_tryToUnlockDocumentWithPassword:(id)password;	// 0x33d17185
- (CGRect)_viewCachingBoundsInUIViewCoords;	// 0x33d158f9
- (CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)view;	// 0x33d15839
- (CGRect)_viewportBoundsInUIViewCoords;	// 0x33d158b5
// declared property getter: - (id)backgroundColorForUnRenderedContent;	// 0x33d17dfd
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x33d17935
// declared property getter: - (CGPDFDocumentRef)cgPDFDocument;	// 0x33d150ad
- (void)clearSelection;	// 0x33d177ed
- (void)dealloc;	// 0x33d1548d
- (void)didCompleteLayout;	// 0x33d17475
- (void)didReceiveMemoryWarning:(id)warning;	// 0x33d16915
- (void)didRotate:(id)rotate;	// 0x33d16a0d
- (void)didTouch:(id)touch inRect:(CGRect)rect withAnnotationDictionary:(CGPDFDictionaryRef)annotationDictionary;	// 0x33d17749
- (void)didZoom:(id)zoom;	// 0x33d16b0d
// declared property getter: - (id)document;	// 0x33d150cd
// declared property getter: - (CGRect)documentBounds;	// 0x33d17cf1
// declared property getter: - (id)documentPassword;	// 0x33d17e51
// declared property getter: - (float)documentScale;	// 0x33d17d9d
// declared property getter: - (CGAffineTransform)documentTransform;	// 0x33d17d35
// declared property getter: - (id)documentURL;	// 0x33d17cad
- (void)ensureCorrectPagesAreInstalled;	// 0x33d1677d
- (unsigned)firstVisiblePageNumber;	// 0x33d16b4d
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x33d17c79
// declared property getter: - (BOOL)hideActivityIndicatorForUnRenderedContent;	// 0x33d17e31
// declared property getter: - (BOOL)hidePageViewsUntilReadyToRender;	// 0x33d17ddd
// declared property getter: - (int)ignoreContentOffsetChanges;	// 0x33d17dcd
// declared property getter: - (float)initialZoomScale;	// 0x33d17d15
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33d159e5
// declared property getter: - (id)pageRects;	// 0x33d17e85
// declared property getter: - (id)pdfDelegate;	// 0x33d17ce1
// declared property getter: - (id)pdfPlaceHolderView;	// 0x33d17dad
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x33d17c39
- (void)prepareForSnapshot;	// 0x33d16d51
- (void)resetZoom:(id)zoom;	// 0x33d17701
// declared property setter: - (void)setBackgroundColorForUnRenderedContent:(id)unRenderedContent;	// 0x33d17e0d
// declared property setter: - (void)setDocumentPassword:(id)password;	// 0x33d17e61
// declared property setter: - (void)setDocumentTransform:(CGAffineTransform)transform;	// 0x33d17d69
// declared property setter: - (void)setDocumentURL:(id)url;	// 0x33d17cbd
// declared property setter: - (void)setHideActivityIndicatorForUnRenderedContent:(BOOL)unRenderedContent;	// 0x33d17e41
// declared property setter: - (void)setHidePageViewsUntilReadyToRender:(BOOL)render;	// 0x33d17ded
// declared property setter: - (void)setIgnoreContentOffsetChanges:(int)changes;	// 0x33d14fe1
// declared property setter: - (void)setInitialZoomScale:(float)scale;	// 0x33d17d25
// declared property setter: - (void)setPageRects:(id)rects;	// 0x33d17e95
// declared property setter: - (void)setPdfDelegate:(id)delegate;	// 0x33d1500d
// declared property setter: - (void)setPdfPlaceHolderView:(id)view;	// 0x33d17dbd
- (void)snapshotComplete;	// 0x33d17039
// declared property getter: - (unsigned)totalPages;	// 0x33d1505d
- (id)uiPDFDocument;	// 0x33d150bd
- (id)viewAtIndex:(int)index;	// 0x33d15729
- (void)viewWillClose;	// 0x33d17171
- (id)viewportView;	// 0x33d157e1
- (void)willRotate:(id)rotate;	// 0x33d16975
- (void)willScroll:(id)scroll;	// 0x33d16821
- (void)willZoom:(id)zoom;	// 0x33d16a75
- (void)zoom:(id)zoom to:(CGRect)to kind:(int)kind;	// 0x33d17665
@end
