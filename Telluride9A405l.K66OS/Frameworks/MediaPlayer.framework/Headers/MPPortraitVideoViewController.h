/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoViewController.h"
#import "MPSwipableViewDelegate.h"

@class UINavigationBar, MPPortraitInfoOverlay, MPPortraitTransportControls;

@interface MPPortraitVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
	MPPortraitInfoOverlay *_overlayView;	// 280 = 0x118
	UINavigationBar *_navigationBar;	// 284 = 0x11c
	MPPortraitTransportControls *_transportControls;	// 288 = 0x120
	unsigned _ownsTransportControls : 1;	// 292 = 0x124
	unsigned _waitingToShowOverlay : 1;	// 292 = 0x124
}
@property(assign) BOOL allowsDetailScrubbing;	// G=0x33bd4c39; S=0x33bd4c5d; converted property
@property(retain, nonatomic) UINavigationBar *navigationBar;	// G=0x33bd55e5; S=0x33bd55f5; @synthesize=_navigationBar
@property(readonly, assign, nonatomic) BOOL ownsTransportControls;	// G=0x33bd4d35; 
+ (BOOL)supportsFullscreenDisplay;	// 0x33bd3ef5
- (id)init;	// 0x33bd3ef9
- (id)initWithTransportControls:(BOOL)transportControls;	// 0x33bd3f0d
- (void)_handleSwipeRight;	// 0x33bd54f5
- (id)_overlayView;	// 0x33bd5319
- (void)_removeOverlayView;	// 0x33bd5579
- (void)_showOverlayView:(BOOL)view;	// 0x33bd4001
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x33bd4c39
- (CGRect)backgroundViewSnapshotFrame;	// 0x33bd5269
- (BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;	// 0x33bd422d
- (id)copyOverlayViewForTransitionToItem:(id)item;	// 0x33bd427d
- (id)createChapterFlipTransition;	// 0x33bd4361
- (void)dealloc;	// 0x33bd3f65
- (void)displayVideoViewOnScreen;	// 0x33bd4451
- (void)endTransitionOverlayHiddingWithTransferedOverlayView:(id)transferedOverlayView;	// 0x33bd4855
- (BOOL)isStatusBarHidden;	// 0x33bd4095
- (void)loadView;	// 0x33bd4511
// declared property getter: - (id)navigationBar;	// 0x33bd55e5
- (id)newAlternateTracksTransition;	// 0x33bd42e5
- (id)newOverlayViewWithFrame:(CGRect)frame;	// 0x33bd5221
// declared property getter: - (BOOL)ownsTransportControls;	// 0x33bd4d35
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x33bd4c5d
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x33bd4c7d
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x33bd41fd
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x33bd4939
- (void)setDisabledParts:(unsigned)parts;	// 0x33bd49a5
- (void)setItem:(id)item;	// 0x33bd4d49
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0x33bd55f5
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x33bd4dbd
- (void)setPlayer:(id)player;	// 0x33bd4cd5
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x33bd4a01
- (void)showChaptersController;	// 0x33bd4b55
- (void)showOverlayView;	// 0x33bd41cd
- (void)startTicking;	// 0x33bd4a8d
- (int)statusBarStyle;	// 0x33bd4091
- (void)stopTicking;	// 0x33bd4aad
- (void)swipableView:(id)view swipedInDirection:(int)direction;	// 0x33bd4ded
- (void)swipableView:(id)view tappedWithCount:(unsigned)count;	// 0x33bd4e21
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x33bd4eb5
- (void)transportControlsDidResize:(id)transportControls;	// 0x33bd5111
- (id)videoOverlayView;	// 0x33bd54d5
- (id)videoOverlayViewIfLoaded;	// 0x33bd54e5
- (void)viewDidAppear:(BOOL)view;	// 0x33bd4099
- (void)viewDidDisappear:(BOOL)view;	// 0x33bd4b11
- (void)viewWillAppear:(BOOL)view;	// 0x33bd4acd
@end

