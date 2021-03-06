/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSecureResource.h"
#import "ATVVideoCacheManagerDelegate.h"
#import "BRController.h"

@class BRResumeMenuControl, BRTransportControl, BRDescriptionOverlayControl, BRAudioVisualizerControl, NSTimer, BRMediaPlayer, BRMediaPlayerEventHandler, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerController : BRController <ATVVideoCacheManagerDelegate, BRSecureResource> {
	long _state;	// 100 = 0x64
	BRControl *_content;	// 104 = 0x68
	BRAudioVisualizerControl *_audioVisualizer;	// 108 = 0x6c
	BRMediaPlayer *_player;	// 112 = 0x70
	BRMediaPlayerEventHandler *_eventHandler;	// 116 = 0x74
	BRResumeMenuControl *_resumeMenu;	// 120 = 0x78
	BRTransportControl *_transport;	// 124 = 0x7c
	BRControl *_javascriptOverlay;	// 128 = 0x80
	BRDescriptionOverlayControl *_descriptionOverlay;	// 132 = 0x84
	BRTextControl *_explanatoryTextControl;	// 136 = 0x88
	id _delegate;	// 140 = 0x8c
	id _transitionAnimationDelegate;	// 144 = 0x90
	NSTimer *_suppressBackgroundProcessTimer;	// 148 = 0x94
	NSTimer *_explanatoryTextFadeTimer;	// 152 = 0x98
	NSTimer *_readyToPlayTimer;	// 156 = 0x9c
	NSTimer *_readyToPlayUpdateMinsTimer;	// 160 = 0xa0
	NSTimer *_readyToPlayBandwidthHintTimer;	// 164 = 0xa4
	NSTimer *_loadingSpinnerDelayTimer;	// 168 = 0xa8
	float _lastBufferingProgress;	// 172 = 0xac
	unsigned _startChapterIndex;	// 176 = 0xb0
	float _startPosition;	// 180 = 0xb4
	double _bandwidthHintReadyToPlayMaxTimeInSeconds;	// 184 = 0xb8
	BOOL _drmAttempted;	// 192 = 0xc0
	BOOL _authenticationAttempted;	// 193 = 0xc1
	BOOL _playbackInitiated;	// 194 = 0xc2
	BOOL _shouldBeginPlaybackImmediately;	// 195 = 0xc3
	BOOL _shouldRestoreVoiceOver;	// 196 = 0xc4
	BOOL _alwaysStopOnPop;	// 197 = 0xc5
	BOOL _transportDisabled;	// 198 = 0xc6
	BOOL _resumeMenuDisabled;	// 199 = 0xc7
	BOOL _waitingForTransition;	// 200 = 0xc8
	BOOL _visualsHidden;	// 201 = 0xc9
	BOOL _inChapterMode;	// 202 = 0xca
	BOOL _digitalExtrasMenuItemDisabled;	// 203 = 0xcb
	BOOL _itemReadyToPlay;	// 204 = 0xcc
	BOOL _supportsBandwidthHints;	// 205 = 0xcd
	BOOL _supportsPreviewBandwidthHints;	// 206 = 0xce
}
@property(assign) BOOL alwaysStopPlaybackWhenPopped;	// G=0x280ae1; S=0x280ad1; converted property
@property(assign) BOOL digitalExtrasMenuItemDisabled;	// G=0x2809d1; S=0x2809c1; converted property
@property(readonly, retain) BRControl *javascriptOverlay;	// G=0x281695; converted property
@property(readonly, retain) BRMediaPlayer *player;	// G=0x280811; converted property
@property(assign) id playerDelegate;	// G=0x280921; S=0x2808e5; converted property
@property(assign) int repeatMode;	// G=0x280ab1; S=0x280a91; converted property
@property(assign) BOOL resumeMenuDisabled;	// G=0x280941; S=0x280931; converted property
@property(assign) BOOL shouldBeginPlaybackImmediately;	// G=0x2816f5; S=0x2816e5; converted property
@property(assign) unsigned startChapterIndex;	// G=0x2809f1; S=0x2809e1; converted property
@property(assign) float startPosition;	// G=0x280a41; S=0x280a01; converted property
@property(assign) BOOL transportControlDisabled;	// G=0x2809b1; S=0x280951; converted property
@property(assign) BOOL visualsHidden;	// G=0x280bdd; S=0x280bcd; converted property
+ (id)controllerForPlayer:(id)player;	// 0x280821
- (id)initWithPlayer:(id)player;	// 0x28019d
- (id)_audioVisualizerForMediaAsset:(id)mediaAsset;	// 0x283f99
- (void)_authenticationCancelled:(id)cancelled;	// 0x28504d
- (void)_authenticationFailed:(id)failed;	// 0x284fc9
- (void)_authenticationSucceeded:(id)succeeded;	// 0x284f59
- (void)_authorizationAttemptComplete:(id)complete;	// 0x284ca5
- (id)_bandwidthHintReadyToPlayMaxTimeInSeconds;	// 0x285a2d
- (BOOL)_cycleInfoDisplay:(id)display;	// 0x284105
- (id)_descriptionOverlayForType:(id)type;	// 0x283f29
- (void)_dismissResumeMenu;	// 0x285189
- (BOOL)_enterAudioSubtitleChapterPicker;	// 0x284015
- (void)_enterAuthenticationState;	// 0x2832dd
- (void)_enterChaptersSubtitlesAndAlternateAudioPickingState;	// 0x282ba5
- (void)_enterDRMSyncState;	// 0x282e95
- (void)_enterDownloadWaitStateWithTime:(double)time;	// 0x282429
- (void)_enterErrorStateWithError:(id)error;	// 0x283041
- (void)_enterMediaCueingState;	// 0x282a2d
- (void)_enterMediaResolutionState;	// 0x281b39
- (void)_enterPINEntryState;	// 0x281905
- (void)_enterPlaybackStatePlaying:(BOOL)playing;	// 0x282e35
- (void)_enterPostResumeMenuStateAtTime:(double)time;	// 0x2820e9
- (void)_enterResumeMenuState;	// 0x281d41
- (void)_exitChaptersSubtitlesAndAlternateAudioPickingState;	// 0x282d61
- (void)_explanatoryTextTimerFired:(id)fired;	// 0x2859fd
- (BOOL)_handleContextMenuEvent:(id)event;	// 0x2855d5
- (void)_handleContextMenuSelection:(id)selection;	// 0x285805
- (BOOL)_handleDownEvent:(id)event;	// 0x285679
- (BOOL)_handleDownloadStateEvent:(id)event;	// 0x285881
- (void)_handleHideChapterMarkers;	// 0x283e89
- (BOOL)_handleMenuButtonEvent:(id)event;	// 0x285289
- (void)_handleShowChapterMarkers;	// 0x283e3d
- (BOOL)_handleUpDownCommandsForInfoDisplay:(id)infoDisplay;	// 0x285779
- (BOOL)_handleUpEvent:(id)event;	// 0x285621
- (void)_initiatePlayback;	// 0x283449
- (id)_javascriptOverlay;	// 0x283dfd
- (id)_photoSet;	// 0x28452d
- (void)_playerAssetChanged:(id)changed;	// 0x284b55
- (void)_playerError:(id)error;	// 0x284b05
- (void)_playerIsReadyToPlay:(id)play;	// 0x284e41
- (void)_playerMediaCued:(id)cued;	// 0x284ec5
- (void)_playerPlaybackEnded:(id)ended;	// 0x284941
- (void)_playerStateChanged:(id)changed;	// 0x284995
- (void)_playerTimeSkipped:(id)skipped;	// 0x284b79
- (void)_playerVisualsChanged:(id)changed;	// 0x284ac1
- (id)_previewBandwidthHintPromptTime;	// 0x283581
- (void)_readyToPlayBandwidthHintTimerFired:(id)playBandwidthHintTimerFired;	// 0x28290d
- (void)_readyToPlayTimerFired:(id)playTimerFired;	// 0x2827b1
- (void)_readyToPlayUpdateMinsTimerFired:(id)playUpdateMinsTimerFired;	// 0x282889
- (BOOL)_requiresLeaseForAsset:(id)asset;	// 0x28355d
- (void)_restoreVoiceOverIfNeeded;	// 0x2844bd
- (void)_resumeItemSelected:(id)selected;	// 0x2851e5
- (double)_resumeTime;	// 0x285131
- (BOOL)_shouldShowResumeMenu;	// 0x2845c5
- (BOOL)_shouldUseMusicContextMenu;	// 0x284759
- (void)_showLoadingSpinner;	// 0x284311
- (void)_showTransport:(id)transport;	// 0x283ef5
- (void)_spinnerDelayTimerFired:(id)fired;	// 0x28450d
- (void)_startFromBeginningItemSelected:(id)beginningItemSelected;	// 0x285239
- (void)_suppressBackgroundProcesses:(id)processes;	// 0x285921
- (void)_transitionAnimationFinished;	// 0x2850d1
- (id)_transportControlForType:(id)type;	// 0x283c99
- (void)_updateExplantoryText;	// 0x2839d1
- (void)_updatePlaybackControls;	// 0x283619
- (void)_updateReadyToPlayTime:(id)playTime;	// 0x2826e1
- (void)_updateVoiceOverDisabling;	// 0x2843e9
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x28143d
// converted property getter: - (BOOL)alwaysStopPlaybackWhenPopped;	// 0x280ae1
- (BOOL)brEventAction:(id)action;	// 0x281061
- (BOOL)canBeScreenSaver;	// 0x280bed
- (id)cancelProviderForContextMenu;	// 0x281691
- (void)clearPlayer;	// 0x28086d
- (void)controlWasActivated;	// 0x280c1d
- (void)controlWasDeactivated;	// 0x280df1
- (void)dealloc;	// 0x280689
// converted property getter: - (BOOL)digitalExtrasMenuItemDisabled;	// 0x2809d1
- (BOOL)handleAssetFailedToLoad:(id)load;	// 0x2817e1
- (BOOL)handleAssetReadyToPlay:(id)play;	// 0x281705
- (BOOL)isErrorPresented;	// 0x2818ed
// converted property getter: - (id)javascriptOverlay;	// 0x281695
- (void)layoutSubcontrols;	// 0x2811ed
// converted property getter: - (id)player;	// 0x280811
// converted property getter: - (id)playerDelegate;	// 0x280921
- (id)providersForContextMenu;	// 0x2815b5
// converted property getter: - (int)repeatMode;	// 0x280ab1
// converted property getter: - (BOOL)resumeMenuDisabled;	// 0x280941
- (id)secureResourceAuthenticator;	// 0x281885
// converted property setter: - (void)setAlwaysStopPlaybackWhenPopped:(BOOL)popped;	// 0x280ad1
// converted property setter: - (void)setDigitalExtrasMenuItemDisabled:(BOOL)disabled;	// 0x2809c1
- (void)setFailedURLDelegate:(id)delegate;	// 0x281595
- (void)setForwardPlaybackEndTime:(double)time;	// 0x2816a5
// converted property setter: - (void)setPlayerDelegate:(id)delegate;	// 0x2808e5
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x280a91
// converted property setter: - (void)setResumeMenuDisabled:(BOOL)disabled;	// 0x280931
- (void)setReversePlaybackEndTime:(double)time;	// 0x2816c5
// converted property setter: - (void)setShouldBeginPlaybackImmediately:(BOOL)beginPlaybackImmediately;	// 0x2816e5
// converted property setter: - (void)setStartChapterIndex:(unsigned)index;	// 0x2809e1
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x280a51
// converted property setter: - (void)setStartPosition:(float)position;	// 0x280a01
// converted property setter: - (void)setTransportControlDisabled:(BOOL)disabled;	// 0x280951
// converted property setter: - (void)setVisualsHidden:(BOOL)hidden;	// 0x280bcd
// converted property getter: - (BOOL)shouldBeginPlaybackImmediately;	// 0x2816f5
- (BOOL)shouldShowTrackPopup;	// 0x281441
- (BOOL)shouldTransitionIn;	// 0x2814ed
// converted property getter: - (unsigned)startChapterIndex;	// 0x2809f1
- (id)startDate;	// 0x280a71
// converted property getter: - (float)startPosition;	// 0x280a41
// converted property getter: - (BOOL)transportControlDisabled;	// 0x2809b1
// converted property getter: - (BOOL)visualsHidden;	// 0x280bdd
- (void)wasPopped;	// 0x280f0d
- (void)wasPushed;	// 0x280ea1
@end

