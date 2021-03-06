/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIViewController.h> // Unknown library
#import "XPCProxyTarget.h"
#import "QLPreviewContentDataSource.h"
#import "QLPreviewContentDelegate.h"
#import "QuickLook-Structs.h"
#import "QLRemotePreviewContentControllerProtocol.h"

@class XPCProxy, NSMutableDictionary, _UIHostedWindow, QLPreviewContentController, QLRemotePrintPageHelper;
@protocol QLRemotePreviewContentProxyProtocol;

@interface QLServicePreviewContentController : UIViewController <XPCProxyTarget, QLRemotePreviewContentControllerProtocol, QLPreviewContentDataSource, QLPreviewContentDelegate> {
	NSMutableDictionary *_previewItemCache;	// 196 = 0xc4
	QLPreviewContentController *_previewContentController;	// 200 = 0xc8
	XPCProxy<QLRemotePreviewContentProxyProtocol> *_previewContentProxy;	// 204 = 0xcc
	int _numberOfPreviewItems;	// 208 = 0xd0
	int _previewMode;	// 212 = 0xd4
	BOOL _remoteInstantiationFinished;	// 216 = 0xd8
	BOOL _blockRemoteImages;	// 217 = 0xd9
	QLRemotePrintPageHelper *_printPageHelper;	// 220 = 0xdc
	int _clientInterfaceOrientation;	// 224 = 0xe0
	_UIHostedWindow *_hostedWindow;	// 228 = 0xe4
}
@property(assign) int currentPreviewItemIndex;	// G=0x32bf183d; S=0x32bf1695; converted property
@property(assign) id<QLPreviewContentDataSource> dataSource;	// G=0x32bf164d; S=0x32bf1649; 
@property(assign) id<QLPreviewContentDelegate> delegate;	// G=0x32bf1655; S=0x32bf1651; 
@property(readonly, assign) int numberOfPreviewItems;	// G=0x32bf182d; converted property
@property(assign) int previewMode;	// G=0x32bf1685; S=0x32bf1659; 
@property(readonly, retain) QLRemotePrintPageHelper *printPageHelper;	// G=0x32bf202d; converted property
- (id)init;	// 0x32bf117d
- (void)_getNumberOfPagesForSize:(id)size withHandler:(id)handler;	// 0x32bf207d
- (void)_getPDFPageAtIndex:(int)index size:(id)size handler:(id)handler;	// 0x32bf2161
- (void)_getPDFPreviewDataWithHandler:(id)handler;	// 0x32bf2005
- (void)_prepareForDrawingPages:(id)drawingPages;	// 0x32bf210d
- (void)_setContentFrame:(id)frame;	// 0x32bf1e65
- (void)_setNumberOfPreviewItems:(int)previewItems;	// 0x32bf1721
- (void)_setPreviewItems:(id)items;	// 0x32bf1731
- (void)_updateHostedWindowFrame;	// 0x32bf1eb5
- (void)_willAnimateRotationTo:(int)to;	// 0x32bf1f51
- (void)beginScrubbing;	// 0x32bf2269
- (id)clientProcessAlertViewForPreviewContentController:(id)previewContentController;	// 0x32bf2b15
- (void)configureWithParameters:(id)parameters;	// 0x32bf1891
- (void)contentWasTappedInPreviewContentController:(id)previewContentController;	// 0x32bf2869
// converted property getter: - (int)currentPreviewItemIndex;	// 0x32bf183d
// declared property getter: - (id)dataSource;	// 0x32bf164d
- (void)dealloc;	// 0x32bf11ed
// declared property getter: - (id)delegate;	// 0x32bf1655
- (void)endScrubbing;	// 0x32bf22a9
- (void)enterBackground;	// 0x32bf1fa5
- (void)forceResignFirstResponder;	// 0x32bf1fc5
// converted property getter: - (int)numberOfPreviewItems;	// 0x32bf182d
- (int)numberOfPreviewItemsInPreviewContentController:(id)previewContentController;	// 0x32bf22e9
- (void)overlayWasTappedInPreviewContentController:(id)previewContentController;	// 0x32bf2849
- (id)pdfPreviewData;	// 0x32bf1fe5
- (void)previewContentController:(id)controller didFailWithError:(id)error;	// 0x32bf27f5
- (void)previewContentController:(id)controller didLoadItem:(id)item atIndex:(int)index withError:(id)error;	// 0x32bf273d
- (void)previewContentController:(id)controller didMoveToItem:(id)item atIndex:(int)index;	// 0x32bf26f1
- (void)previewContentController:(id)controller didUnloadItem:(id)item;	// 0x32bf27a9
- (id)previewContentController:(id)controller previewItemAtIndex:(int)index;	// 0x32bf22f9
- (void)previewContentController:(id)controller receivedTapOnURL:(id)url;	// 0x32bf2889
- (void)previewContentController:(id)controller setAVState:(id)state forPreviewItem:(id)previewItem;	// 0x32bf28a9
- (void)previewContentController:(id)controller willEnterFullScreenWithHostedWindow:(id)hostedWindow;	// 0x32bf28f9
- (void)previewContentController:(id)controller willHideOverlayWithDuration:(double)duration;	// 0x32bf2821
- (void)previewContentController:(id)controller willMoveToItemAtIndex:(int)index;	// 0x32bf26d1
- (void)previewContentController:(id)controller willShowOverlayWithDuration:(double)duration;	// 0x32bf27f9
- (void)previewContentControllerDidExitFullScreen:(id)previewContentController;	// 0x32bf2acd
// declared property getter: - (int)previewMode;	// 0x32bf1685
// converted property getter: - (id)printPageHelper;	// 0x32bf202d
- (id)printPageRenderer;	// 0x32bf2029
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x32bf1269
- (void)refreshCurrentPreviewItem;	// 0x32bf1dad
- (void)reloadData;	// 0x32bf1cf9
- (void)scrubToValue:(double)value;	// 0x32bf2289
- (void)setBlockRemoteImages:(BOOL)images;	// 0x32bf1845
- (void)setContentFrame:(CGRect)frame;	// 0x32bf1e35
// converted property setter: - (void)setCurrentPreviewItemIndex:(int)index;	// 0x32bf1695
// declared property setter: - (void)setDataSource:(id)source;	// 0x32bf1649
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32bf1651
- (void)setLoadintTextForMissingFiles:(id)missingFiles;	// 0x32bf1871
- (void)setOverlayHidden:(BOOL)hidden duration:(double)duration;	// 0x32bf1f71
// declared property setter: - (void)setPreviewMode:(int)mode;	// 0x32bf1659
- (void)togglePlayState;	// 0x32bf22c9
- (void)willAppearInRemoteViewController:(id)remoteViewController;	// 0x32bf1569
@end

