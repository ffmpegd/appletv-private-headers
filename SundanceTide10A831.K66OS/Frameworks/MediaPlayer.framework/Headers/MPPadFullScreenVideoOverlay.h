/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoOverlay.h"
#import "UIPopoverControllerDelegate.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"

@class MPNowPlayingItemQueueInfoButton, UINavigationBar, UIPopoverController, UINavigationItem, NSString, MPPadFullScreenTransportControls, UIActivityIndicatorView, UIImageView, UINavigationButton, UILabel;

@interface MPPadFullScreenVideoOverlay : MPVideoOverlay <UIPopoverControllerDelegate, MPNowPlayingItemQueueInfoButtonDelegate> {
	MPPadFullScreenTransportControls *_transportControls;	// 152 = 0x98
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 156 = 0x9c
	UIImageView *_hudImageView;	// 160 = 0xa0
	UINavigationBar *_navigationBar;	// 164 = 0xa4
	UINavigationItem *_navigationItem;	// 168 = 0xa8
	UIImageView *_navigationBarBackgroundShort;	// 172 = 0xac
	UIImageView *_navigationBarBackgroundTall;	// 176 = 0xb0
	UIImageView *_navigationBarShadow;	// 180 = 0xb4
	NSString *_title;	// 184 = 0xb8
	UINavigationButton *_scaleModeButton;	// 188 = 0xbc
	UILabel *_scrubSpeedLabel;	// 192 = 0xc0
	UILabel *_scrubInstructionsLabel;	// 196 = 0xc4
	UIPopoverController *_popoverController;	// 200 = 0xc8
	UILabel *_loadingMovieLabel;	// 204 = 0xcc
	UIActivityIndicatorView *_loadingMovieIndicator;	// 208 = 0xd0
	unsigned _layoutSubviewsActive : 1;	// 212 = 0xd4
}
@property(assign) BOOL allowsWirelessPlayback;	// G=0x36f26365; S=0x36f2639d; converted property
@property(assign) unsigned long long disabledParts;	// G=0x36f2672d; S=0x36f26745; converted property
@property(readonly, retain) UINavigationBar *navigationBar;	// G=0x36f267a9; converted property
@property(copy, nonatomic) NSString *title;	// G=0x36f284dd; S=0x36f26b45; @synthesize=_title
- (id)initWithFrame:(CGRect)frame;	// 0x36f255c1
- (void)_applicationWillResignActive:(id)_application;	// 0x36f26e01
- (void)_configureLinkButtonForCurrentItemTime;	// 0x36f26225
- (unsigned long long)_convertedPartsMask:(unsigned long long)mask;	// 0x36f283c9
- (void)_doneButton:(id)button;	// 0x36f26aad
- (void)_hideScrubInstructions;	// 0x36f28259
- (void)_initSubviews;	// 0x36f26ff5
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;	// 0x36f26ded
- (void)_itemDurationAvailableNotification:(id)notification;	// 0x36f26d69
- (id)_navBarBackgroundImageForProgressControl:(BOOL)progressControl tallStyle:(BOOL)style;	// 0x36f26e21
- (void)_reconfigureNavigationBarAnimated:(BOOL)animated;	// 0x36f27965
- (void)_scaleButton:(id)button;	// 0x36f26af9
- (void)_scheduleHidePopoverTimer;	// 0x36f2841d
- (void)_showScrubInstructions;	// 0x36f28111
- (void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;	// 0x36f26dd9
// converted property getter: - (BOOL)allowsWirelessPlayback;	// 0x36f26365
- (void)crossedTimeMakerWithEvent:(id)event;	// 0x36f2632d
- (void)dealloc;	// 0x36f256c5
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x36f269f5
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x36f267e1
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x36f2693d
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x36f26885
// converted property getter: - (unsigned long long)disabledParts;	// 0x36f2672d
- (void)hideAlternateTracks;	// 0x36f26d49
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x36f26169
- (void)layoutSubviews;	// 0x36f25899
// converted property getter: - (id)navigationBar;	// 0x36f267a9
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x36f26219
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x36f26a41
// converted property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x36f2639d
- (void)setAlpha:(float)alpha;	// 0x36f261a5
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x36f26619
// converted property setter: - (void)setDisabledParts:(unsigned long long)parts;	// 0x36f26745
- (void)setInterfaceOrientation:(int)orientation;	// 0x36f265c1
- (void)setItem:(id)item;	// 0x36f263dd
- (void)setPlayer:(id)player;	// 0x36f26579
// declared property setter: - (void)setTitle:(id)title;	// 0x36f26b45
- (void)setVideoViewController:(id)controller;	// 0x36f264f5
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x36f26699
- (void)showAlternateTracks;	// 0x36f26ba9
// declared property getter: - (id)title;	// 0x36f284dd
@end
