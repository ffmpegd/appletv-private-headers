/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIViewController.h> // Unknown library
#import "QLPreviewItemInteractionDelegate.h"
#import "UIDocumentPasswordViewDelegate.h"
#import "QLProgressViewDelegate.h"
#import "QuickLook-Structs.h"

@class QLProgressView, QLDisplayBundle, NSTimer, UIDocumentPasswordView, NSString;
@protocol QLPreviewItem;

@interface QLPreviewViewController : UIViewController <QLPreviewItemInteractionDelegate, UIDocumentPasswordViewDelegate, QLProgressViewDelegate> {
	id<QLPreviewItemInteractionDelegate> _displayBundleDelegate;	// 192 = 0xc0
	id<QLPreviewItem> _previewItem;	// 196 = 0xc4
	int _index;	// 200 = 0xc8
	XXStruct_3Bq0WB _clientContext;	// 204 = 0xcc
	int _previewMode;	// 256 = 0x100
	BOOL _needsReload;	// 260 = 0x104
	BOOL _swiping;	// 261 = 0x105
	BOOL _shouldSwapDisplayBundles;	// 262 = 0x106
	QLDisplayBundle *_displayBundle;	// 264 = 0x108
	QLDisplayBundle *_newDisplayBundle;	// 268 = 0x10c
	NSTimer *_progressTimer;	// 272 = 0x110
	QLProgressView *_progressView;	// 276 = 0x114
	BOOL _loadingProgressVisible;	// 280 = 0x118
	NSString *_loadintTextForMissingFiles;	// 284 = 0x11c
	BOOL _overlayHidden;	// 288 = 0x120
	UIDocumentPasswordView *_documentPasswordView;	// 292 = 0x124
	BOOL _loadedWithPassword;	// 296 = 0x128
}
@property(assign) XXStruct_3Bq0WB clientContext;	// G=0x341ef0b9; S=0x341eefb1; 
@property(readonly, assign) QLDisplayBundle *displayBundle;	// G=0x341eef3d; 
@property(assign) id<QLPreviewItemInteractionDelegate> displayBundleDelegate;	// G=0x341f0c59; S=0x341f0c6d; @synthesize=_displayBundleDelegate
@property(assign) int index;	// G=0x341f0c85; S=0x341f0c99; @synthesize=_index
@property(retain) id<QLPreviewItem> previewItem;	// G=0x341eef05; S=0x341eeea9; 
@property(assign) int previewMode;	// G=0x341ef169; S=0x341ef10d; 
- (id)init;	// 0x341eec31
- (void)_adjustContentOffsetForKeyboardIfNeeded;	// 0x341ef959
- (void)_cancelScheduledShowProgressiveUI;	// 0x341efd1d
- (void)_hidePasswordView;	// 0x341ef7e1
- (void)_hideProgressiveUI;	// 0x341f0021
- (void)_keyboardDidShow:(id)_keyboard;	// 0x341efce1
- (void)_prepareDisplayBundle:(id)bundle preload:(BOOL)preload withHints:(id)hints;	// 0x341f0169
- (void)_refreshPreviewItem:(BOOL)item withPassword:(id)password;	// 0x341f0429
- (void)_removeDisplayBundles;	// 0x341ef399
- (void)_removeProgressiveUIAnimation:(id)animation finished:(id)finished context:(void *)context;	// 0x341f00f1
- (void)_scheduleShowProgressiveUI;	// 0x341efd59
- (void)_showGenericDisplayBundleForPreviewItem:(id)previewItem;	// 0x341ef491
- (void)_showPasswordView;	// 0x341ef651
- (void)_showProgressUI;	// 0x341efde1
- (void)_swapDisplayBundles;	// 0x341ef1e9
- (void)cancelLoadIfNeeded;	// 0x341f0701
// declared property getter: - (XXStruct_3Bq0WB)clientContext;	// 0x341ef0b9
- (id)clientProcessAlertViewForPreviewItem:(id)previewItem;	// 0x341f0c19
- (void)dealloc;	// 0x341eec71
- (id)description;	// 0x341eed59
- (void)didBeginEditingPassword:(id)password inView:(id)view;	// 0x341ef831
- (void)didEndEditingPassword:(id)password inView:(id)view;	// 0x341ef89d
- (void)didFinishSwiping;	// 0x341f0759
// declared property getter: - (id)displayBundle;	// 0x341eef3d
// declared property getter: - (id)displayBundleDelegate;	// 0x341f0c59
// declared property getter: - (int)index;	// 0x341f0c85
- (void)overlayWasInteractedWithOnPreviewItem:(id)onPreviewItem;	// 0x341f07ad
- (void)preloadIfNeeded;	// 0x341f068d
// declared property getter: - (id)previewItem;	// 0x341eef05
- (void)previewItem:(id)item receivedTapOnURL:(id)url;	// 0x341f0bf9
- (void)previewItem:(id)item requiresDisplayBundle:(id)bundle withHints:(id)hints;	// 0x341f0865
- (void)previewItem:(id)item setAVState:(id)state;	// 0x341f0c39
- (void)previewItem:(id)item willHideOverlayWithDuration:(double)duration;	// 0x341f0801
- (id)previewItem:(id)item willSendRequest:(id)request;	// 0x341f0bd9
- (void)previewItem:(id)item willShowOverlayWithDuration:(double)duration;	// 0x341f07cd
- (void)previewItemDidLoad:(id)previewItem atIndex:(int)index withError:(id)error;	// 0x341f0985
- (void)previewItemWillLoad:(id)previewItem;	// 0x341f0835
// declared property getter: - (int)previewMode;	// 0x341ef169
- (void)progressViewWasTapped:(id)tapped;	// 0x341f012d
- (void)refreshPreviewItem;	// 0x341f0405
// declared property setter: - (void)setClientContext:(XXStruct_3Bq0WB)context;	// 0x341eefb1
// declared property setter: - (void)setDisplayBundleDelegate:(id)delegate;	// 0x341f0c6d
// declared property setter: - (void)setIndex:(int)index;	// 0x341f0c99
- (void)setLoadintTextForMissingFiles:(id)missingFiles;	// 0x341eef4d
- (void)setOverlayHidden:(BOOL)hidden duration:(double)duration;	// 0x341ef179
// declared property setter: - (void)setPreviewItem:(id)item;	// 0x341eeea9
// declared property setter: - (void)setPreviewMode:(int)mode;	// 0x341ef10d
- (void)userDidEnterPassword:(id)user forPasswordView:(id)passwordView;	// 0x341ef81d
- (void)viewDidLoad;	// 0x341eedf9
- (void)viewWasTappedOnPreviewItem:(id)item;	// 0x341f078d
- (void)willMoveToParentViewController:(id)parentViewController;	// 0x341eee51
- (void)willStartSwiping;	// 0x341f0745
@end

