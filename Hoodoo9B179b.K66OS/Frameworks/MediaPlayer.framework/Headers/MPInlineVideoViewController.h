/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPVideoViewController.h"
#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class UIPinchGestureRecognizer, NSString, NSTimer, MPInlineAudioOverlay, MPAudioVideoRoutingPopoverController, UIView, UITapGestureRecognizer, UIWindow, MPInlineVideoOverlay;
@protocol MPVideoOverlay;

@interface MPInlineVideoViewController : MPVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
@private
	int _videoOverlayStyle;	// 280 = 0x118
	MPInlineVideoOverlay *_inlineOverlayView;	// 284 = 0x11c
	UIView<MPVideoOverlay> *_fullscreenOverlayView;	// 288 = 0x120
	MPInlineAudioOverlay *_audioOverlayView;	// 292 = 0x124
	int _audioOverlayStyle;	// 296 = 0x128
	UIView *_overlayViewBeingHidden;	// 300 = 0x12c
	BOOL _overlayViewIsVisible;	// 304 = 0x130
	NSString *_playbackErrorDescription;	// 308 = 0x134
	UITapGestureRecognizer *_tapGestureRecognizer;	// 312 = 0x138
	UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 316 = 0x13c
	UITapGestureRecognizer *_fullscreenTapGestureRecognizer;	// 320 = 0x140
	UITapGestureRecognizer *_fullscreenDoubleTapGestureRecognizer;	// 324 = 0x144
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 328 = 0x148
	UIPinchGestureRecognizer *_fullscreenPinchGestureRecognizer;	// 332 = 0x14c
	NSTimer *_idleTimer;	// 336 = 0x150
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 340 = 0x154
	UIWindow *_windowForDisablingAutorotation;	// 344 = 0x158
	unsigned _wantsOverlayVisibleWhenItemIsAvailable : 1;	// 348 = 0x15c
	unsigned _wantsOverlayVisibleWhenItemIsAvailableAnimated : 1;	// 348 = 0x15c
	unsigned _animatingOverlay : 1;	// 348 = 0x15c
	unsigned _inCloneMirrorMode : 1;	// 348 = 0x15c
	UIView *_fullscreenView;	// 352 = 0x160
	UIView *_superviewBeforeFullscreen;	// 356 = 0x164
	UIViewController *_parentViewControllerBeforeFullscreen;	// 360 = 0x168
	unsigned _indexInSuperviewBeforeFullscreen;	// 364 = 0x16c
	CGRect _nonFullscreenDestinationFrame;	// 368 = 0x170
	int _desiredInterfaceOrientation;	// 384 = 0x180
	int _previousStatusBarStyle;	// 388 = 0x184
	unsigned _statusBarWasHidden : 1;	// 392 = 0x188
	unsigned _isFullscreen : 1;	// 392 = 0x188
	unsigned _animatingFullscreenTransition : 1;	// 392 = 0x188
	unsigned _animatingFullscreenTransitionToInline : 1;	// 392 = 0x188
	unsigned _contentViewDidClipToBounds : 1;	// 392 = 0x188
	unsigned _fullscreenViewSizeIsExternallyManaged : 1;	// 392 = 0x188
	unsigned _swallowNextTapGesture : 1;	// 392 = 0x188
	unsigned _exited : 1;	// 392 = 0x188
}
@property(assign, nonatomic) int audioOverlayStyle;	// G=0x309a1665; S=0x3099dad5; @synthesize=_audioOverlayStyle
@property(readonly, assign, nonatomic) UIView *fullscreenView;	// G=0x3099db85; 
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x309a1675; S=0x3099db1d; @synthesize=_playbackErrorDescription
@property(assign, nonatomic) int videoOverlayStyle;	// G=0x309a1685; S=0x3099d9d1; @synthesize=_videoOverlayStyle
- (id)init;	// 0x3099ba39
- (void)_bufferingStateDidChangeNotification:(id)_bufferingState;	// 0x3099d921
- (BOOL)_canHideOverlay:(BOOL)overlay;	// 0x3099e7c5
- (void)_cancelOverlayIdleTimer;	// 0x3099f261
- (unsigned)_effectiveItemType;	// 0x309a158d
- (void)_fireOverlayIdleTimer:(id)timer;	// 0x3099f079
- (void)_hideOverlayAnimated:(BOOL)animated;	// 0x3099ecc9
- (void)_hideOverlayDidEnd:(id)_hideOverlay finished:(id)finished;	// 0x3099efb5
- (void)_layoutForItemTypeAvailable;	// 0x3099dcb5
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x3099d81d
- (void)_removeCoverView;	// 0x309a1629
- (void)_resetOverlayIdleTimer;	// 0x3099f1a9
- (void)_showOverlayAnimated:(BOOL)animated;	// 0x3099e835
- (void)_showOverlayDidEnd;	// 0x3099ec41
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x309a08a1
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated fromDoneButton:(BOOL)doneButton;	// 0x309a08b5
- (void)_transitionFromFullscreenDidEnd;	// 0x309a10d9
- (void)_transitionToFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x3099f4bd
- (void)_transitionToFullscreenDidEnd;	// 0x309a059d
- (void)_updateForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x3099f2c5
- (BOOL)_useInlineControls;	// 0x309a15f9
- (id)_viewControllerForRotationForViewController:(id)viewController;	// 0x309a15c9
- (void)_viewWasPinched:(id)pinched;	// 0x3099d6c1
- (void)_viewWasTapped:(id)tapped;	// 0x3099d525
// declared property getter: - (int)audioOverlayStyle;	// 0x309a1665
- (id)audioOverlayViewIfLoaded;	// 0x3099e7b5
- (id)backgroundView;	// 0x3099c3b5
- (BOOL)canShowQTAudioOnlyUI;	// 0x3099cd79
- (BOOL)controlsOverlayVisible;	// 0x3099c615
- (id)createChapterFlipTransition;	// 0x3099db95
- (void)dealloc;	// 0x3099bb4d
- (void)displayVideoViewOnScreen;	// 0x3099c8a9
// declared property getter: - (id)fullscreenView;	// 0x3099db85
- (BOOL)isFullscreen;	// 0x3099cc89
- (BOOL)isTransitioningFromFullscreen;	// 0x3099f491
- (BOOL)isTransitioningToFullscreen;	// 0x3099f461
- (void)loadView;	// 0x3099be91
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x3099d515
- (void)overlayTappedBackButton:(id)button;	// 0x3099d465
- (void)overlayTappedScaleModeButton:(id)button;	// 0x3099d4e9
// declared property getter: - (id)playbackErrorDescription;	// 0x309a1675
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x3099dc39
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x3099d3ed
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x3099c0f9
// declared property setter: - (void)setAudioOverlayStyle:(int)style;	// 0x3099dad5
- (void)setControlsNeedLayout;	// 0x3099ca25
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x3099c625
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x3099c225
- (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x3099cce1
- (void)setDisabledParts:(unsigned)parts;	// 0x3099c369
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x3099cc9d
- (void)setItem:(id)item;	// 0x3099c159
- (void)setItemTypeOverride:(unsigned)override;	// 0x3099cd39
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x3099c655
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x3099db1d
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x3099c00d
// declared property setter: - (void)setVideoOverlayStyle:(int)style;	// 0x3099d9d1
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x3099c285
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3099c651
- (void)startTicking;	// 0x3099bfbd
- (void)stopTicking;	// 0x3099bfe5
- (void)swipableViewHadActivity:(id)activity;	// 0x3099bfad
- (BOOL)transportControls:(id)controls heldButtonPart:(unsigned)part;	// 0x3099cdd5
- (BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned)part;	// 0x3099cdf1
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x3099ce0d
// declared property getter: - (int)videoOverlayStyle;	// 0x309a1685
- (id)videoOverlayView;	// 0x3099e2e9
- (id)videoOverlayViewIfLoaded;	// 0x3099e779
- (void)videoView_firstVideoFrameDisplayedNotification:(id)notification;	// 0x3099d991
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x3099d8b1
- (void)viewDidAppear:(BOOL)view;	// 0x3099bf2d
- (void)viewDidDisappear:(BOOL)view;	// 0x3099bf6d
@end
