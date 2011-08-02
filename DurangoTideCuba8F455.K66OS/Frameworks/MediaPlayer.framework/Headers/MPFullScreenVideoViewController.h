/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPAbstractFullScreenVideoViewController.h"

@class MPFullScreenVideoOverlay;

@interface MPFullScreenVideoViewController : MPAbstractFullScreenVideoViewController {
@private
	MPFullScreenVideoOverlay *_overlayView;	// 228 = 0xe4
	int _autorotationState;	// 232 = 0xe8
	BOOL _inhibitOverlay;	// 236 = 0xec
}
@property(assign) BOOL allowsDetailScrubbing;	// G=0x335e7931; S=0x335e790d; converted property
@property(assign, nonatomic) int autorotationState;	// G=0x335e62a5; S=0x335e62b5; @synthesize=_autorotationState
@property(assign, nonatomic) BOOL inhibitOverlay;	// G=0x335e62c5; S=0x335e62d5; @synthesize=_inhibitOverlay
@property(readonly, retain) MPFullScreenVideoOverlay *overlayView;	// G=0x335e94c5; converted property
- (id)init;	// 0x335e7ff1
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x335e71f1
- (void)_reallyRemoveOverlay;	// 0x335e70bd
- (void)_rotationAnimationFinished:(id)finished;	// 0x335e7119
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x335e7931
// declared property getter: - (int)autorotationState;	// 0x335e62a5
- (BOOL)controlsOverlayVisible;	// 0x335e7955
- (id)createChapterFlipTransition;	// 0x335e79f9
- (void)dealloc;	// 0x335e7f69
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x335e77f9
// declared property getter: - (BOOL)inhibitOverlay;	// 0x335e62c5
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x335e7d81
- (void)overlayTappedBackButton:(id)button;	// 0x335e7329
- (void)overlayTappedScaleModeButton:(id)button;	// 0x335e7305
// converted property getter: - (id)overlayView;	// 0x335e94c5
- (void)playbackStateDidChangeNotification:(id)playbackState;	// 0x335e7705
- (void)removeChildViewController:(id)controller;	// 0x335e7cc9
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x335e790d
// declared property setter: - (void)setAutorotationState:(int)state;	// 0x335e62b5
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x335e7be9
- (void)setDisabledParts:(unsigned)parts;	// 0x335e7b0d
// declared property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x335e62d5
- (void)setItem:(id)item;	// 0x335e7c51
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x335e7a9d
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x335e7b75
- (void)showChaptersController;	// 0x335e797d
- (void)showOverlayAnimated:(BOOL)animated;	// 0x335e93a5
- (void)startTicking;	// 0x335e7e5d
- (void)stopTicking;	// 0x335e7e3d
- (id)swipableView:(id)view overrideHitTest:(CGPoint)test withEvent:(id)event;	// 0x335e92fd
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x335e9839
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x335e7435
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x335e7669
- (void)viewDidAppear:(BOOL)view;	// 0x335e7ed5
- (void)viewDidDisappear:(BOOL)view;	// 0x335e7e95
@end
