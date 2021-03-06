/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPVideoOverlayDelegate.h"
#import "MPTransportControlsTarget.h"
#import "MPSwipableViewDelegate.h"
#import "MediaPlayer-Structs.h"
#import <UIKit/UIViewController.h>

@class MPSwipableView, UITapGestureRecognizer, MPInlineVideoController, MPVideoPlaybackOverlayView, MPAVItem, UIPinchGestureRecognizer, UIActivityIndicatorView, NSTimer;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget> {
	BOOL _disableTaps;	// 306 = 0x132
	UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 308 = 0x134
	NSTimer *_idleTimer;	// 312 = 0x138
	BOOL _isAnimatingOverlay;	// 316 = 0x13c
	MPAVItem *_item;	// 320 = 0x140
	UIActivityIndicatorView *_loadingIndicator;	// 324 = 0x144
	MPInlineVideoController *_masterController;	// 328 = 0x148
	MPVideoPlaybackOverlayView *_overlayView;	// 332 = 0x14c
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 336 = 0x150
	float _savedWindowLevel;	// 340 = 0x154
	BOOL _shouldForwardRotationEvents;	// 344 = 0x158
	MPSwipableView *_swipableView;	// 348 = 0x15c
	UITapGestureRecognizer *_tapGestureRecognizer;	// 352 = 0x160
	int _activeOverlayUserEvents;	// 356 = 0x164
}
@property(retain, nonatomic) MPAVItem *item;	// G=0x2e379539; S=0x2e3786c9; @synthesize=_item
@property(assign, nonatomic) __weak MPInlineVideoController *masterController;	// G=0x2e379519; S=0x2e378711; @synthesize=_masterController
- (id)init;	// 0x2e3774a1
- (void).cxx_destruct;	// 0x2e379549
- (void)_hideOverlayAnimated:(BOOL)animated;	// 0x2e378d61
- (void)_hideOverlayDidEnd;	// 0x2e378f59
- (void)_overlayIdleTimerFired:(id)fired;	// 0x2e378fb9
- (void)_showOverlayDidEnd;	// 0x2e379151
- (void)_viewWasPinched:(id)pinched;	// 0x2e3793d9
- (void)_viewWasTapped:(id)tapped;	// 0x2e3791b1
- (void)_windowWillRotate:(id)_window;	// 0x2e37835d
- (void)cancelOverlayIdleTimer;	// 0x2e3785b9
- (void)dealloc;	// 0x2e3775c9
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x2e377719
- (void)hideLoadingIndicator;	// 0x2e3785ed
// declared property getter: - (id)item;	// 0x2e379539
- (void)loadView;	// 0x2e37785d
// declared property getter: - (id)masterController;	// 0x2e379519
- (void)overlay:(id)overlay didBeginUserEvent:(int)event;	// 0x2e3781b1
- (void)overlay:(id)overlay didCancelUserEvent:(int)event;	// 0x2e378231
- (void)overlay:(id)overlay didEndUserEvent:(int)event;	// 0x2e3782a9
- (void)overlayTappedBackButton:(id)button;	// 0x2e378321
- (void)prepareForTransitionFromFullscreen;	// 0x2e378639
- (void)resetOverlayIdleTimer;	// 0x2e37864d
// declared property setter: - (void)setItem:(id)item;	// 0x2e3786c9
// declared property setter: - (void)setMasterController:(id)controller;	// 0x2e378711
- (BOOL)shouldAutorotate;	// 0x2e377e79
- (void)showAlternateTracks;	// 0x2e3787b5
- (void)showLoadingIndicator;	// 0x2e3787d5
- (void)showOverlayAnimated:(BOOL)animated;	// 0x2e3789dd
- (unsigned)supportedInterfaceOrientations;	// 0x2e377ef9
- (void)swipableViewHadActivity:(id)activity;	// 0x2e37813d
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x2e37814d
- (void)updateOverlayView;	// 0x2e378c71
- (void)viewWillAppear:(BOOL)view;	// 0x2e377f45
- (void)viewWillDisappear:(BOOL)view;	// 0x2e378001
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x2e37805d
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x2e3780cd
@end

