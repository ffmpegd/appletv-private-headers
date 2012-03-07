/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPSwipableViewDelegate.h"
#import "MPVideoViewController.h"


@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
	unsigned _requestExitAfterHidingControls : 1;	// 278 = 0x116
	unsigned _rotateAfterHidingControls : 1;	// 278 = 0x116
	unsigned _showControlsAfterRotate : 1;	// 278 = 0x116
	unsigned _autoHidingForItemChange : 1;	// 278 = 0x116
	unsigned _scheduledAutoHide : 1;	// 278 = 0x116
	unsigned _orientationForStatusBarOverrideActive : 1;	// 278 = 0x116
	int _orientationForStatusBarOverride;	// 280 = 0x118
}
@property(assign) BOOL canShowControlsOverlay;	// G=0x35b5a681; S=0x35b5a635; converted property
@property(assign) BOOL inhibitOverlay;	// G=0x35b59ed5; S=0x35b59ed9; converted property
- (id)init;	// 0x35b59d29
- (void)_autohideControlsOverlay;	// 0x35b5aead
- (void)_hideOverlayWithAnimation:(BOOL)animation;	// 0x35b5aee5
- (void)_hideOverlayWithAnimation:(BOOL)animation shouldUpdateAutohideFlag:(BOOL)flag;	// 0x35b5aef9
- (void)_resumedEventsOnlyNotification:(id)notification;	// 0x35b5ad95
- (void)_setStatusBarVisible:(BOOL)visible duration:(float)duration;	// 0x35b5af5d
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)window parentViewController:(id)controller;	// 0x35b5aa6d
- (void)_stopWatchingAVController;	// 0x35b5b119
- (int)_validInterfaceOrientation;	// 0x35b5b1e5
- (void)bufferingStateChangedNotification:(id)notification;	// 0x35b5ac59
- (BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;	// 0x35b59ee1
- (BOOL)canHideOverlay:(BOOL)overlay;	// 0x35b5a3bd
// converted property getter: - (BOOL)canShowControlsOverlay;	// 0x35b5a681
- (void)cancelControlsOverlayAutohide;	// 0x35b5adf1
- (BOOL)controlsOverlayVisible;	// 0x35b5a445
- (void)dealloc;	// 0x35b59de5
- (void)displayVideoViewOnScreen;	// 0x35b5a2a9
- (BOOL)forceScaleToFitInPortrait;	// 0x35b59edd
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x35b5ade1
// converted property getter: - (BOOL)inhibitOverlay;	// 0x35b59ed5
- (void)loadView;	// 0x35b5a79d
- (id)newAlternateTracksTransition;	// 0x35b5a255
- (int)orientationForStatusBar;	// 0x35b59f7d
- (BOOL)phoneTVOutModeEnabled;	// 0x35b5b191
- (void)playbackStateDidChangeNotification:(id)playbackState;	// 0x35b5ad21
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)delay;	// 0x35b5ae41
// converted property setter: - (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x35b5a635
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x35b5a449
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x35b5a4bd
- (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x35b5a6d5
- (void)setDisabledParts:(unsigned)parts;	// 0x35b5a501
// converted property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x35b59ed9
- (void)setItem:(id)item;	// 0x35b59f09
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x35b59fb9
- (void)setPlayer:(id)player;	// 0x35b5a1fd
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x35b5a5d9
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x35b5a541
- (void)showOverlayAnimated:(BOOL)animated;	// 0x35b5adad
- (void)showOverlayIfNecessary;	// 0x35b59e85
- (int)statusBarStyle;	// 0x35b5af59
- (void)swipableView:(id)view tappedWithCount:(unsigned)count atLocation:(CGPoint)location;	// 0x35b5aa71
- (void)swipableViewHadActivity:(id)activity;	// 0x35b5abed
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x35b5ada9
- (BOOL)transportControls:(id)controls heldButtonPart:(unsigned)part;	// 0x35b5ac21
- (BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned)part;	// 0x35b5ac3d
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x35b5a741
- (void)viewDidAppear:(BOOL)view;	// 0x35b5a90d
- (void)viewWillAppear:(BOOL)view;	// 0x35b5a869
- (void)viewWillDisappear:(BOOL)view;	// 0x35b5a9e9
@end

