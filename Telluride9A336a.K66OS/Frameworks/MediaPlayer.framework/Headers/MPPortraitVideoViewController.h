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
@property(assign) BOOL allowsDetailScrubbing;	// G=0x35b5ed45; S=0x35b5ed69; converted property
@property(retain, nonatomic) UINavigationBar *navigationBar;	// G=0x35b5f6f1; S=0x35b5f701; @synthesize=_navigationBar
@property(readonly, assign, nonatomic) BOOL ownsTransportControls;	// G=0x35b5ee41; 
+ (BOOL)supportsFullscreenDisplay;	// 0x35b5e001
- (id)init;	// 0x35b5e005
- (id)initWithTransportControls:(BOOL)transportControls;	// 0x35b5e019
- (void)_handleSwipeRight;	// 0x35b5f601
- (id)_overlayView;	// 0x35b5f425
- (void)_removeOverlayView;	// 0x35b5f685
- (void)_showOverlayView:(BOOL)view;	// 0x35b5e10d
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x35b5ed45
- (CGRect)backgroundViewSnapshotFrame;	// 0x35b5f375
- (BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;	// 0x35b5e339
- (id)copyOverlayViewForTransitionToItem:(id)item;	// 0x35b5e389
- (id)createChapterFlipTransition;	// 0x35b5e46d
- (void)dealloc;	// 0x35b5e071
- (void)displayVideoViewOnScreen;	// 0x35b5e55d
- (void)endTransitionOverlayHiddingWithTransferedOverlayView:(id)transferedOverlayView;	// 0x35b5e961
- (BOOL)isStatusBarHidden;	// 0x35b5e1a1
- (void)loadView;	// 0x35b5e61d
// declared property getter: - (id)navigationBar;	// 0x35b5f6f1
- (id)newAlternateTracksTransition;	// 0x35b5e3f1
- (id)newOverlayViewWithFrame:(CGRect)frame;	// 0x35b5f32d
// declared property getter: - (BOOL)ownsTransportControls;	// 0x35b5ee41
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x35b5ed69
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x35b5ed89
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x35b5e309
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x35b5ea45
- (void)setDisabledParts:(unsigned)parts;	// 0x35b5eab1
- (void)setItem:(id)item;	// 0x35b5ee55
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0x35b5f701
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x35b5eec9
- (void)setPlayer:(id)player;	// 0x35b5ede1
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x35b5eb0d
- (void)showChaptersController;	// 0x35b5ec61
- (void)showOverlayView;	// 0x35b5e2d9
- (void)startTicking;	// 0x35b5eb99
- (int)statusBarStyle;	// 0x35b5e19d
- (void)stopTicking;	// 0x35b5ebb9
- (void)swipableView:(id)view swipedInDirection:(int)direction;	// 0x35b5eef9
- (void)swipableView:(id)view tappedWithCount:(unsigned)count;	// 0x35b5ef2d
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x35b5efc1
- (void)transportControlsDidResize:(id)transportControls;	// 0x35b5f21d
- (id)videoOverlayView;	// 0x35b5f5e1
- (id)videoOverlayViewIfLoaded;	// 0x35b5f5f1
- (void)viewDidAppear:(BOOL)view;	// 0x35b5e1a5
- (void)viewDidDisappear:(BOOL)view;	// 0x35b5ec1d
- (void)viewWillAppear:(BOOL)view;	// 0x35b5ebd9
@end

