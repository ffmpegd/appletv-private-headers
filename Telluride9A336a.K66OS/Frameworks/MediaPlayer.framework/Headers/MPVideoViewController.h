/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPSwipableViewDelegate.h"
#import "MPVideoTransferViewController.h"
#import "UIModalViewDelegate.h"
#import "MPViewController.h"

@class MPTVOutWindow, UIImage, UIAlertView, UIColor, MPVideoBackgroundView, UIActivityIndicatorView, UIView, MPClosedCaptionDisplay, MPVideoView, MPImageCache, MPImageCacheRequest, MPSwipableView;
@protocol MPVideoOverlay;

@interface MPVideoViewController : MPViewController <MPSwipableViewDelegate, MPVideoTransferViewController, UIModalViewDelegate> {
	MPVideoBackgroundView *_backgroundView;	// 196 = 0xc4
	MPSwipableView *_backstopView;	// 200 = 0xc8
	BOOL _batteryMonitoringWasEnabled;	// 204 = 0xcc
	MPClosedCaptionDisplay *_captionView;	// 208 = 0xd0
	unsigned _desiredParts;	// 212 = 0xd4
	unsigned _disabledParts;	// 216 = 0xd8
	unsigned _visibleParts;	// 220 = 0xdc
	unsigned _tvOutEnabled : 1;	// 224 = 0xe0
	unsigned _allowsTVOutInBackground : 1;	// 224 = 0xe0
	unsigned _itemTypeOverride;	// 228 = 0xe4
	unsigned _scaleMode;	// 232 = 0xe8
	unsigned _scaleModeOverride;	// 236 = 0xec
@private
	UIAlertView *_alertSheet;	// 240 = 0xf0
	MPImageCache *_artworkImageCache;	// 244 = 0xf4
	MPImageCacheRequest *_artworkImageRequest;	// 248 = 0xf8
	UIColor *_backstopColor;	// 252 = 0xfc
	UIActivityIndicatorView *_loadingIndicator;	// 256 = 0x100
	MPTVOutWindow *_tvOutWindow;	// 260 = 0x104
	int _extendedModeNotifyToken;	// 264 = 0x108
	int _artworkImageStyle;	// 268 = 0x10c
	UIImage *_posterImage;	// 272 = 0x110
	unsigned _canAnimateControlsOverlay : 1;	// 276 = 0x114
	unsigned _canShowControlsOverlay : 1;	// 276 = 0x114
	unsigned _disableControlsAutohide : 1;	// 276 = 0x114
	unsigned _ownsStatusBar : 1;	// 276 = 0x114
	unsigned _playAfterPop : 1;	// 276 = 0x114
	unsigned _scheduledLoadingIndicator : 1;	// 276 = 0x114
	unsigned _displayPlaybackErrorAlerts : 1;	// 276 = 0x114
	unsigned _allowsDetailScrubbing : 1;	// 276 = 0x114
	unsigned _attemptAutoPlayWhenControlsHidden : 1;	// 277 = 0x115
	unsigned _alwaysAllowHidingControlsOverlay : 1;	// 277 = 0x115
	unsigned _hasShownFirstVideoFrame : 1;	// 277 = 0x115
	unsigned _allowsWirelessPlayback : 1;	// 277 = 0x115
	unsigned _disableAutoRotation : 1;	// 277 = 0x115
	unsigned _inlinePlaybackUsesTVOut : 1;	// 277 = 0x115
}
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x35b628dd; S=0x35b6283d; 
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x35b62095; S=0x35b620a9; 
@property(assign, nonatomic) BOOL allowsTVOutInBackground;	// G=0x35b62959; S=0x35b628f1; 
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x35b620d1; S=0x35b620e5; 
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;	// G=0x35b642e9; S=0x35b642fd; 
@property(assign, nonatomic) int artworkImageStyle;	// G=0x35b64805; S=0x35b64815; @synthesize=_artworkImageStyle
@property(readonly, assign, nonatomic) UIView *artworkImageView;	// G=0x35b62229; 
@property(assign, nonatomic) BOOL attemptAutoPlayWhenControlsHidden;	// G=0x35b62131; S=0x35b62145; 
@property(readonly, assign, nonatomic) UIView *backgroundView;	// G=0x35b61931; 
@property(readonly, assign) CGRect backgroundViewSnapshotFrame;	// G=0x35b61b31; 
@property(retain, nonatomic) UIColor *backstopColor;	// G=0x35b647e5; S=0x35b64391; @synthesize=_backstopColor
@property(assign, nonatomic) BOOL canAnimateControlsOverlay;	// G=0x35b63da9; S=0x35b64221; 
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;	// G=0x35b61b71; 
@property(assign, nonatomic) BOOL canShowControlsOverlay;	// G=0x35b63dbd; S=0x35b64245; 
@property(readonly, assign, nonatomic) BOOL canShowQTAudioOnlyUI;	// G=0x35b629fd; 
@property(assign, nonatomic) BOOL controlsOverlayVisible;	// G=0x35b6429d; S=0x35b642a1; 
@property(assign, nonatomic) unsigned desiredParts;	// G=0x35b647b5; S=0x35b61e79; @synthesize=_desiredParts
@property(assign, nonatomic) BOOL disableAutoRotation;	// G=0x35b621a1; S=0x35b621b5; 
@property(assign, nonatomic) BOOL disableControlsAutohide;	// G=0x35b61bad; S=0x35b61ed5; 
@property(assign, nonatomic) unsigned disabledParts;	// G=0x35b647c5; S=0x35b61ea5; @synthesize=_disabledParts
@property(assign, nonatomic) BOOL displayPlaybackErrorAlerts;	// G=0x35b6299d; S=0x35b629b1; 
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x35b629d1; S=0x35b629d5; 
@property(assign, nonatomic) BOOL inhibitOverlay;
@property(assign, nonatomic) BOOL inlinePlaybackUsesTVOut;	// G=0x35b621e1; S=0x35b621f5; 
@property(assign, nonatomic) unsigned itemTypeOverride;	// G=0x35b647f5; S=0x35b629ed; @synthesize=_itemTypeOverride
@property(assign, nonatomic) BOOL ownsStatusBar;	// G=0x35b61c21; S=0x35b61eed; 
@property(retain, nonatomic) UIImage *posterImage;	// G=0x35b64825; S=0x35b617d9; @synthesize=_posterImage
@property(assign, nonatomic) unsigned scaleMode;	// G=0x35b61f81; S=0x35b61f15; @synthesize=_scaleMode
@property(readonly, assign, nonatomic) BOOL showArtworkForTVOut;	// G=0x35b62225; 
@property(readonly, assign, nonatomic) BOOL showArtworkInImageView;	// G=0x35b61185; 
@property(readonly, assign, nonatomic, getter=isTransitioningFromFullscreen) BOOL transitioningFromFullscreen;	// G=0x35b629cd; 
@property(readonly, assign, nonatomic, getter=isTransitioningToFullscreen) BOOL transitioningToFullscreen;	// G=0x35b629c9; 
@property(readonly, assign, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;	// G=0x35b62995; 
@property(readonly, assign, nonatomic) UIView<MPVideoOverlay> *videoOverlayViewIfLoaded;	// G=0x35b62999; 
@property(readonly, assign, nonatomic) MPVideoView *videoView;	// G=0x35b6296d; 
@property(readonly, assign, nonatomic) BOOL viewControllerWillRequestExit;	// G=0x35b62bdd; 
@property(assign, nonatomic) unsigned visibleParts;	// G=0x35b647d5; S=0x35b61fed; @synthesize=_visibleParts
+ (CGRect)calculateArtworkImageViewFrameInRect:(CGRect)rect;	// 0x35b61055
+ (BOOL)supportsFullscreenDisplay;	// 0x35b60059
- (id)init;	// 0x35b5f725
// declared property getter: - (BOOL)TVOutEnabled;	// 0x35b628dd
- (BOOL)_canEnableAirPlayVideoRoutes;	// 0x35b646bd
- (void)_cancelArtworkImageRequest;	// 0x35b64401
- (void)_delayedPopForTimeJump;	// 0x35b63a65
- (void)_delayedShowLoading;	// 0x35b63ab1
- (void)_delayedUpdateBackgroundView;	// 0x35b63731
- (void)_exitPlayerForPlaybackError;	// 0x35b6331d
- (void)_fixupViewHierarchyIfNecessary;	// 0x35b618c9
- (void)_hideLoadingIndicator;	// 0x35b64459
- (void)_itemDurationDidChange:(id)_itemDuration;	// 0x35b63a35
- (unsigned)_itemTypeWithActualTypePreference;	// 0x35b61141
- (void)_popForTimeJump:(id)timeJump;	// 0x35b63921
- (void)_scheduleLoadingIndicatorIfNeeded;	// 0x35b640f1
- (void)_screenDidConnect:(id)_screen;	// 0x35b639ad
- (void)_screenDidDisconnect:(id)_screen;	// 0x35b639f1
- (BOOL)_showDestinationPlaceholder;	// 0x35b64515
- (void)_showStillFrameIfNotAlreadyPlaying;	// 0x35b64041
- (void)_updateAlwaysPlayWheneverPossible;	// 0x35b61c35
- (void)_updateBackgroundView:(BOOL)view;	// 0x35b63771
- (void)_updateClosedCaptionDisplay;	// 0x35b60609
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned)playbackState;	// 0x35b60a9d
- (void)_updateProgressControlForItem:(id)item;	// 0x35b64609
- (void)_videoView_applicationSuspendedNotification:(id)notification;	// 0x35b62d5d
- (void)_videoView_applicationWillEnterForegroundNotification:(id)_videoView_application;	// 0x35b62df1
- (void)_videoView_batteryStateDidChangeNotification:(id)_videoView_batteryState;	// 0x35b62e01
- (void)_videoView_effectiveScaleModeChangedNotification:(id)notification;	// 0x35b62e41
- (void)_videoView_isAirPlayVideoActiveDidChangeNotification:(id)_videoView_isAirPlayVideoActive;	// 0x35b62e95
- (void)_videoView_playbackErrorNotification:(id)notification;	// 0x35b62f89
- (void)_videoView_playbackStateChangedNotification:(id)notification;	// 0x35b63399
- (void)_videoView_resumeEventsOnlyNotification:(id)notification;	// 0x35b6342d
- (void)_videoView_scaleModeChangedNotification:(id)notification;	// 0x35b6346d
- (void)_videoView_sizeChangedNotification:(id)notification;	// 0x35b63505
- (void)_videoView_timedImageMetadataAvailableNotification:(id)notification;	// 0x35b6356d
- (void)_videoView_tvOutCapabilityDidChangeNotification:(id)_videoView_tvOutCapability;	// 0x35b635f9
- (void)_videoView_validityChangedNotification:(id)notification;	// 0x35b63635
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x35b62c6d
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x35b62095
// declared property getter: - (BOOL)allowsTVOutInBackground;	// 0x35b62959
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x35b620d1
// declared property getter: - (BOOL)alwaysAllowHidingControlsOverlay;	// 0x35b642e9
// declared property getter: - (int)artworkImageStyle;	// 0x35b64805
// declared property getter: - (id)artworkImageView;	// 0x35b62229
// declared property getter: - (BOOL)attemptAutoPlayWhenControlsHidden;	// 0x35b62131
// declared property getter: - (id)backgroundView;	// 0x35b61931
- (void)backgroundViewDidUpdate;	// 0x35b643f9
// declared property getter: - (CGRect)backgroundViewSnapshotFrame;	// 0x35b61b31
// declared property getter: - (id)backstopColor;	// 0x35b647e5
- (void)bufferingStateChangedNotification:(id)notification;	// 0x35b638bd
- (CGRect)calculateArtworkImageViewFrame;	// 0x35b60f79
- (CGRect)calculateFullScreenArtworkImageViewFrame;	// 0x35b60d09
// declared property getter: - (BOOL)canAnimateControlsOverlay;	// 0x35b63da9
// declared property getter: - (BOOL)canChangeScaleMode;	// 0x35b61b71
- (BOOL)canHideOverlay:(BOOL)overlay;	// 0x35b602d9
// declared property getter: - (BOOL)canShowControlsOverlay;	// 0x35b63dbd
// declared property getter: - (BOOL)canShowQTAudioOnlyUI;	// 0x35b629fd
- (void)chapterList:(id)list selectedChapter:(unsigned)chapter;	// 0x35b62ab9
- (void)chapterListDidDisappear:(id)chapterList;	// 0x35b62bcd
// declared property getter: - (BOOL)controlsOverlayVisible;	// 0x35b6429d
- (id)createChapterFlipTransition;	// 0x35b6435d
- (void)crossedArtworkTimeMarker:(id)marker;	// 0x35b60b81
- (void)crossedClosedCaptionTimeMarker:(id)marker;	// 0x35b60bdd
- (void)dealloc;	// 0x35b5fbc5
// declared property getter: - (unsigned)desiredParts;	// 0x35b647b5
// declared property getter: - (BOOL)disableAutoRotation;	// 0x35b621a1
// declared property getter: - (BOOL)disableControlsAutohide;	// 0x35b61bad
// declared property getter: - (unsigned)disabledParts;	// 0x35b647c5
- (unsigned)disabledPartsForProposedParts:(unsigned)proposedParts;	// 0x35b643fd
- (int)displayArtworkImageStyle;	// 0x35b60cb9
// declared property getter: - (BOOL)displayPlaybackErrorAlerts;	// 0x35b6299d
- (void)displayVideoView;	// 0x35b63dd1
- (void)displayVideoViewOnScreen;	// 0x35b63e89
- (void)displayVideoViewOnTV;	// 0x35b63e8d
- (void)enableAirPlayVideoRoutesIfNecessary;	// 0x35b61831
- (void)handleScaleModeChange;	// 0x35b63fe1
- (BOOL)infoOverlayShouldDisplayQueuePositionUI:(id)infoOverlay;	// 0x35b62a39
// declared property getter: - (BOOL)inlinePlaybackUsesTVOut;	// 0x35b621e1
// declared property getter: - (BOOL)isFullscreen;	// 0x35b629d1
- (BOOL)isFullscreenForLayoutPurposes;	// 0x35b60c5d
- (BOOL)isStatusBarHidden;	// 0x35b60061
// declared property getter: - (BOOL)isTransitioningFromFullscreen;	// 0x35b629cd
// declared property getter: - (BOOL)isTransitioningToFullscreen;	// 0x35b629c9
// declared property getter: - (unsigned)itemTypeOverride;	// 0x35b647f5
- (void)loadView;	// 0x35b62249
- (id)newAlternateTracksTransition;	// 0x35b64329
- (id)newArtworkImageView;	// 0x35b6125d
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x35b623a5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35b61875
// declared property getter: - (BOOL)ownsStatusBar;	// 0x35b61c21
// declared property getter: - (id)posterImage;	// 0x35b64825
- (void)prepareToDisplayVideo;	// 0x35b6245d
- (void)reloadArtworkImageView;	// 0x35b6131d
- (void)removeChildViewController:(id)controller;	// 0x35b623ed
// declared property getter: - (unsigned)scaleMode;	// 0x35b61f81
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x35b620a9
// declared property setter: - (void)setAllowsTVOutInBackground:(BOOL)background;	// 0x35b628f1
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x35b620e5
// declared property setter: - (void)setAlwaysAllowHidingControlsOverlay:(BOOL)overlay;	// 0x35b642fd
// declared property setter: - (void)setArtworkImageStyle:(int)style;	// 0x35b64815
// declared property setter: - (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;	// 0x35b62145
// declared property setter: - (void)setBackstopColor:(id)color;	// 0x35b64391
// declared property setter: - (void)setCanAnimateControlsOverlay:(BOOL)overlay;	// 0x35b64221
// declared property setter: - (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x35b64245
- (void)setClosedCaptions:(id)captions;	// 0x35b60085
- (void)setControlsNeedLayout;	// 0x35b62221
// declared property setter: - (void)setControlsOverlayVisible:(BOOL)visible;	// 0x35b642a1
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate;	// 0x35b642c1
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x35b642e5
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x35b61e79
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x35b61e8d
// declared property setter: - (void)setDisableAutoRotation:(BOOL)rotation;	// 0x35b621b5
// declared property setter: - (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x35b61ed5
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x35b61ea5
// declared property setter: - (void)setDisplayPlaybackErrorAlerts:(BOOL)alerts;	// 0x35b629b1
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x35b629d5
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x35b629e9
// declared property setter: - (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x35b621f5
- (void)setItem:(id)item;	// 0x35b61cad
// declared property setter: - (void)setItemTypeOverride:(unsigned)override;	// 0x35b629ed
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x35b6121d
// declared property setter: - (void)setOwnsStatusBar:(BOOL)bar;	// 0x35b61eed
- (void)setPlayer:(id)player;	// 0x35b6277d
// declared property setter: - (void)setPosterImage:(id)image;	// 0x35b617d9
// declared property setter: - (void)setScaleMode:(unsigned)mode;	// 0x35b61f15
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x35b61f29
- (void)setScaleModeOverride:(unsigned)override animated:(BOOL)animated;	// 0x35b61fa9
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x35b6283d
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x35b61fed
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x35b6201d
- (void)showAlternateTracksController:(id)controller;	// 0x35b60435
// declared property getter: - (BOOL)showArtworkForTVOut;	// 0x35b62225
// declared property getter: - (BOOL)showArtworkInImageView;	// 0x35b61185
- (void)showChaptersController;	// 0x35b60a89
- (void)showChaptersControllerAndFadeViews:(id)views;	// 0x35b60735
- (int)statusBarStyle;	// 0x35b6005d
- (void)tearDownTVOutWindow;	// 0x35b63d41
- (void)toggleScaleMode:(BOOL)mode;	// 0x35b62069
// declared property getter: - (id)videoOverlayView;	// 0x35b62995
// declared property getter: - (id)videoOverlayViewIfLoaded;	// 0x35b62999
// declared property getter: - (id)videoView;	// 0x35b6296d
- (void)videoView_firstVideoFrameDisplayedNotification:(id)notification;	// 0x35b636dd
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x35b63695
// declared property getter: - (BOOL)viewControllerWillRequestExit;	// 0x35b62bdd
- (void)viewDidAppear:(BOOL)view;	// 0x35b626a5
- (void)viewDidUnload;	// 0x35b6233d
- (void)viewWillDisappear:(BOOL)view;	// 0x35b626f5
// declared property getter: - (unsigned)visibleParts;	// 0x35b647d5
- (unsigned)visiblePartsForProposedParts:(unsigned)proposedParts;	// 0x35b62065
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x35b605b9
@end

