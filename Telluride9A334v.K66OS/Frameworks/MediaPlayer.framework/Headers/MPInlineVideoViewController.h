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

@class NSTimer, NSString, MPInlineAudioOverlay, MPAudioVideoRoutingPopoverController, UIView, UITapGestureRecognizer, UIWindow, MPInlineVideoOverlay, UIPinchGestureRecognizer;
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
@property(assign, nonatomic) int audioOverlayStyle;	// G=0x34e3b045; S=0x34e374b5; @synthesize=_audioOverlayStyle
@property(readonly, assign, nonatomic) UIView *fullscreenView;	// G=0x34e37565; 
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x34e3b055; S=0x34e374fd; @synthesize=_playbackErrorDescription
@property(assign, nonatomic) int videoOverlayStyle;	// G=0x34e3b065; S=0x34e373b1; @synthesize=_videoOverlayStyle
- (id)init;	// 0x34e35419
- (void)_bufferingStateDidChangeNotification:(id)_bufferingState;	// 0x34e37301
- (BOOL)_canHideOverlay:(BOOL)overlay;	// 0x34e381a5
- (void)_cancelOverlayIdleTimer;	// 0x34e38c41
- (unsigned)_effectiveItemType;	// 0x34e3af6d
- (void)_fireOverlayIdleTimer:(id)timer;	// 0x34e38a59
- (void)_hideOverlayAnimated:(BOOL)animated;	// 0x34e386a9
- (void)_hideOverlayDidEnd:(id)_hideOverlay finished:(id)finished;	// 0x34e38995
- (void)_layoutForItemTypeAvailable;	// 0x34e37695
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x34e371fd
- (void)_removeCoverView;	// 0x34e3b009
- (void)_resetOverlayIdleTimer;	// 0x34e38b89
- (void)_showOverlayAnimated:(BOOL)animated;	// 0x34e38215
- (void)_showOverlayDidEnd;	// 0x34e38621
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x34e3a281
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated fromDoneButton:(BOOL)doneButton;	// 0x34e3a295
- (void)_transitionFromFullscreenDidEnd;	// 0x34e3aab9
- (void)_transitionToFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x34e38e9d
- (void)_transitionToFullscreenDidEnd;	// 0x34e39f7d
- (void)_updateForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x34e38ca5
- (BOOL)_useInlineControls;	// 0x34e3afd9
- (id)_viewControllerForRotationForViewController:(id)viewController;	// 0x34e3afa9
- (void)_viewWasPinched:(id)pinched;	// 0x34e370a1
- (void)_viewWasTapped:(id)tapped;	// 0x34e36f05
// declared property getter: - (int)audioOverlayStyle;	// 0x34e3b045
- (id)audioOverlayViewIfLoaded;	// 0x34e38195
- (id)backgroundView;	// 0x34e35d95
- (BOOL)canShowQTAudioOnlyUI;	// 0x34e36759
- (BOOL)controlsOverlayVisible;	// 0x34e35ff5
- (id)createChapterFlipTransition;	// 0x34e37575
- (void)dealloc;	// 0x34e3552d
- (void)displayVideoViewOnScreen;	// 0x34e36289
// declared property getter: - (id)fullscreenView;	// 0x34e37565
- (BOOL)isFullscreen;	// 0x34e36669
- (BOOL)isTransitioningFromFullscreen;	// 0x34e38e71
- (BOOL)isTransitioningToFullscreen;	// 0x34e38e41
- (void)loadView;	// 0x34e35871
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x34e36ef5
- (void)overlayTappedBackButton:(id)button;	// 0x34e36e45
- (void)overlayTappedScaleModeButton:(id)button;	// 0x34e36ec9
// declared property getter: - (id)playbackErrorDescription;	// 0x34e3b055
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x34e37619
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x34e36dcd
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x34e35ad9
// declared property setter: - (void)setAudioOverlayStyle:(int)style;	// 0x34e374b5
- (void)setControlsNeedLayout;	// 0x34e36405
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x34e36005
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x34e35c05
- (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x34e366c1
- (void)setDisabledParts:(unsigned)parts;	// 0x34e35d49
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x34e3667d
- (void)setItem:(id)item;	// 0x34e35b39
- (void)setItemTypeOverride:(unsigned)override;	// 0x34e36719
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x34e36035
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x34e374fd
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x34e359ed
// declared property setter: - (void)setVideoOverlayStyle:(int)style;	// 0x34e373b1
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x34e35c65
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x34e36031
- (void)startTicking;	// 0x34e3599d
- (void)stopTicking;	// 0x34e359c5
- (void)swipableViewHadActivity:(id)activity;	// 0x34e3598d
- (BOOL)transportControls:(id)controls heldButtonPart:(unsigned)part;	// 0x34e367b5
- (BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned)part;	// 0x34e367d1
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x34e367ed
// declared property getter: - (int)videoOverlayStyle;	// 0x34e3b065
- (id)videoOverlayView;	// 0x34e37cc9
- (id)videoOverlayViewIfLoaded;	// 0x34e38159
- (void)videoView_firstVideoFrameDisplayedNotification:(id)notification;	// 0x34e37371
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x34e37291
- (void)viewDidAppear:(BOOL)view;	// 0x34e3590d
- (void)viewDidDisappear:(BOOL)view;	// 0x34e3594d
@end
