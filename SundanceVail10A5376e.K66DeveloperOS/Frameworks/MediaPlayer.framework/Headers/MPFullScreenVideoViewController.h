/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"
#import "MPAbstractFullScreenVideoViewController.h"

@class MPFullScreenVideoOverlay;

@interface MPFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate> {
	MPFullScreenVideoOverlay *_overlayView;	// 340 = 0x154
	int _autorotationState;	// 344 = 0x158
	BOOL _inhibitOverlay;	// 348 = 0x15c
}
@property(assign) BOOL allowsDetailScrubbing;	// G=0x36cb2af5; S=0x36cb2b19; converted property
@property(assign, nonatomic) int autorotationState;	// G=0x36cb3ead; S=0x36cb3ebd; @synthesize=_autorotationState
@property(assign) BOOL inhibitOverlay;	// G=0x36cb3e9d; S=0x36cb36fd; converted property
@property(readonly, assign, nonatomic) MPFullScreenVideoOverlay *overlayView;	// G=0x36cb3089; 
- (id)init;	// 0x36cb22a1
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x36cb3c11
- (void)_reallyRemoveOverlay;	// 0x36cb3e35
- (void)_rotationAnimationFinished:(id)finished;	// 0x36cb3d45
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x36cb2af5
// declared property getter: - (int)autorotationState;	// 0x36cb3ead
- (BOOL)controlsOverlayVisible;	// 0x36cb2ac9
- (id)createChapterFlipTransition;	// 0x36cb2905
- (void)dealloc;	// 0x36cb22fd
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x36cb3401
// converted property getter: - (BOOL)inhibitOverlay;	// 0x36cb3e9d
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x36cb24d1
- (void)overlayTappedBackButton:(id)button;	// 0x36cb3a5d
- (void)overlayTappedScaleModeButton:(id)button;	// 0x36cb3b39
// declared property getter: - (id)overlayView;	// 0x36cb3089
- (void)removeChildViewController:(id)controller;	// 0x36cb2599
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x36cb2b19
// declared property setter: - (void)setAutorotationState:(int)state;	// 0x36cb3ebd
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x36cb26e5
- (void)setDisabledParts:(unsigned long long)parts;	// 0x36cb27fd
// converted property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x36cb36fd
- (void)setItem:(id)item;	// 0x36cb2661
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x36cb2885
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x36cb2769
- (void)showChaptersController;	// 0x36cb2a49
- (void)showOverlayAnimated:(BOOL)animated;	// 0x36cb32c1
- (void)startTicking;	// 0x36cb2471
- (void)stopTicking;	// 0x36cb24b1
- (id)swipableView:(id)view overrideHitTest:(CGPoint)test withEvent:(id)event;	// 0x36cb3b65
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x36cb2b39
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x36cb3765
- (id)videoOverlayView;	// 0x36cb32a1
- (id)videoOverlayViewIfLoaded;	// 0x36cb32b1
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x36cb3655
- (void)videoView_playbackStateChangedNotification:(id)notification;	// 0x36cb3541
- (void)viewDidAppear:(BOOL)view;	// 0x36cb2389
- (void)viewDidDisappear:(BOOL)view;	// 0x36cb242d
@end

