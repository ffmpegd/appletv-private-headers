/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "AVAudioSessionDelegateMediaPlayerOnly.h"
#import <NSObject.h> // Unknown library
#import "MPAVErrorResolverDelegate.h"

@class MPAVItem, NSTimer, NSString, MPAVControllerToAggregateDCommunicator, MPQueuePlayer, MPQueueFeeder, NSArray, MPVideoView, CALayer, MPAVErrorResolver, NSMutableArray, MPAVPlaylistManager, MPAVDestinationBrowser, MPAudioDeviceController, NSDictionary, NSNotification;

@interface MPAVController : NSObject <AVAudioSessionDelegateMediaPlayerOnly, MPAVErrorResolverDelegate> {
	MPAVPlaylistManager *_avPlaylistManager;	// 4 = 0x4
	double _connectionFailTime;	// 8 = 0x8
	BOOL _forceSynchronousQueueFilling;	// 16 = 0x10
	unsigned _valid : 1;	// 17 = 0x11
	int _playbackMode;	// 20 = 0x14
	MPAudioDeviceController *_audioDeviceController;	// 24 = 0x18
	MPQueueFeeder *_feeder;	// 28 = 0x1c
	MPAVErrorResolver *_itemErrorResolver;	// 32 = 0x20
	NSDictionary *_pickedRouteDescription;	// 36 = 0x24
	CALayer *_videoLayer;	// 40 = 0x28
	unsigned _videoLayerUsageCount;	// 44 = 0x2c
	MPVideoView *_videoView;	// 48 = 0x30
	unsigned _tickTimerEnabled;	// 52 = 0x34
	CFRunLoopTimerRef _tickTimer;	// 56 = 0x38
	double _tickInterval;	// 60 = 0x3c
	CFRunLoopTimerRef _currentItemBookkeepingTimer;	// 68 = 0x44
	int _indexChangeDirection;	// 72 = 0x48
	unsigned _itemIndexAtDeath;	// 76 = 0x4c
	int _lastDisconnectReason;	// 80 = 0x50
	double _lastKnownTimeBeforeDeath;	// 84 = 0x54
	double _lastPlaybackIndexChangeTime;	// 92 = 0x5c
	double _lastSetTime;	// 100 = 0x64
	double _lastSetTimeChangeTime;	// 108 = 0x6c
	unsigned _hasDelayedCurrentTimeToSet : 1;	// 116 = 0x74
	unsigned _forceDelayedCurrentTimeToSet : 1;	// 116 = 0x74
	double _delayedCurrentTimeToSet;	// 120 = 0x78
	int _delayedCurrentTimeOptions;	// 128 = 0x80
	unsigned _lastSetTimeMarker;	// 132 = 0x84
	unsigned _autoPlayWhenLikelyToKeepUp : 1;	// 136 = 0x88
	unsigned _autoplayDisabledForCurrentItem : 1;	// 136 = 0x88
	unsigned _closedCaptioningEnabled : 1;	// 136 = 0x88
	int _eqPreset;	// 140 = 0x8c
	double _nextFadeOutDuration;	// 144 = 0x90
	id _boundaryTimeObserver;	// 152 = 0x98
	NSArray *_boundaryTimes;	// 156 = 0x9c
	unsigned _boundaryTimeIndexLastPosted;	// 160 = 0xa0
	float _rateBeforeSeek;	// 164 = 0xa4
	float _inflightSeekRate;	// 168 = 0xa8
	unsigned _scanLevel;	// 172 = 0xac
	int _scanDirection;	// 176 = 0xb0
	int _resetRateAfterSeekingUpdateDisabled;	// 180 = 0xb4
	unsigned _seeklessState;	// 184 = 0xb8
	unsigned _isSeekingOrScrubbing : 1;	// 188 = 0xbc
	unsigned _resetRateAfterSeeking : 1;	// 188 = 0xbc
	unsigned _activeRewindHoldingAtStart : 1;	// 188 = 0xbc
	double _lastSeekableEnd;	// 192 = 0xc0
	double _whenSawSeekableEnd;	// 200 = 0xc8
	double _maxSeekableFwd;	// 208 = 0xd0
	double _seekFwdSlop;	// 216 = 0xd8
	double _lastSeekableStart;	// 224 = 0xe0
	double _whenSawSeekableStart;	// 232 = 0xe8
	double _maxSeekableRev;	// 240 = 0xf0
	double _seekRevSlop;	// 248 = 0xf8
	unsigned _canSeekRev : 1;	// 256 = 0x100
	unsigned _canSeekFwd : 1;	// 256 = 0x100
	unsigned _alwaysPlayWheneverPossible : 1;	// 256 = 0x100
	unsigned _stopAtEnd : 1;	// 256 = 0x100
	unsigned _didReachEnd : 1;	// 256 = 0x100
	unsigned _pausedDuringInterruption : 1;	// 256 = 0x100
	unsigned _useApplicationAudioSession : 1;	// 256 = 0x100
	unsigned _subtitlesEnabled : 1;	// 256 = 0x100
	unsigned _videoFrameDisplayOnResumeDisabled : 1;	// 257 = 0x101
	unsigned _disconnectedVideoLayerOnSuspend : 1;	// 257 = 0x101
	unsigned _playInBackgroundUserDefaultEnabled : 1;	// 257 = 0x101
	unsigned _state;	// 260 = 0x104
	unsigned _displayOverridePlaybackState;	// 264 = 0x108
	unsigned _bufferingState;	// 268 = 0x10c
	NSNotification *_delayedPlaybackStateNotification;	// 272 = 0x110
	dispatch_source_s *_stallTimerSource;	// 276 = 0x114
	NSMutableArray *_queueFeederStateStack;	// 280 = 0x118
	int _feederMode;	// 284 = 0x11c
	MPAVControllerToAggregateDCommunicator *_aggregateDCommunicator;	// 288 = 0x120
	double _itemInitialBookmarkTime;	// 292 = 0x124
	float _rateBeforeResignActive;	// 300 = 0x12c
	int _ubiquitousBookkeepingDisabledCount;	// 304 = 0x130
	double _secondsSinceUbiquitousCheckpoint;	// 308 = 0x134
	NSTimer *_externalProtectionTimer;	// 316 = 0x13c
	BOOL _logContentProtection;	// 320 = 0x140
	BOOL _shouldEnforceHDCP;	// 321 = 0x141
@private
	MPAVDestinationBrowser *_destinationBrowser;	// 324 = 0x144
}
@property(assign, nonatomic) int EQPreset;	// G=0x319d5ea5; S=0x319cd28d; @synthesize=_eqPreset
@property(readonly, assign, nonatomic) unsigned activeRepeatType;	// G=0x319ccdc1; 
@property(readonly, assign, nonatomic) unsigned activeShuffleType;	// G=0x319ccdfd; 
@property(assign, nonatomic) BOOL allowsAirPlayVideo;	// G=0x319cce39; S=0x319cce6d; 
@property(assign, nonatomic) BOOL alwaysPlayWheneverPossible;	// G=0x319cd0dd; S=0x319cd0f1; 
@property(readonly, assign, nonatomic) MPAudioDeviceController *audioDeviceController;	// G=0x319cd711; @synthesize=_audioDeviceController
@property(assign, nonatomic) BOOL autoPlayWhenLikelyToKeepUp;	// G=0x319ccea9; S=0x319cca91; 
@property(readonly, assign, nonatomic) MPQueuePlayer *avPlayer;	// G=0x319cdab1; 
@property(readonly, assign, nonatomic) unsigned bufferingState;	// G=0x319ccebd; @synthesize=_bufferingState
@property(assign, nonatomic) BOOL closedCaptioningEnabled;	// G=0x319ccecd; S=0x319cd225; 
@property(readonly, assign, nonatomic) MPAVItem *currentItem;	// G=0x319ccee1; 
@property(readonly, assign, nonatomic) BOOL currentItemIsRental;	// G=0x319cdb79; 
@property(readonly, assign, nonatomic) double currentMonotonousTime;	// G=0x319cc441; 
@property(assign, nonatomic) double currentTime;	// G=0x319cc34d; S=0x319ccac5; 
@property(readonly, assign, nonatomic) MPAVDestinationBrowser *destinationBrowser;	// G=0x319d5e95; @synthesize=_destinationBrowser
@property(assign, nonatomic, getter=destinationIsTVOut, setter=setDestinationIsTVOut:) BOOL destinationIsTVOut;	// G=0x319ce2ed; S=0x319ce315; 
@property(assign, nonatomic) BOOL disableAirPlayMirroringDuringPlayback;	// G=0x319cd1b5; S=0x319cd1e9; 
@property(readonly, assign, nonatomic) double durationOfCurrentItemIfAvailable;	// G=0x319cea25; 
@property(readonly, assign, nonatomic) MPQueueFeeder *feeder;	// G=0x319d5eb5; @synthesize=_feeder
@property(assign, nonatomic) int feederMode;	// G=0x319d5ec5; S=0x319d5ed5; @synthesize=_feederMode
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x319d5ee5; S=0x319ce1fd; @synthesize=_forceSynchronousQueueFilling
@property(readonly, assign, nonatomic, getter=isFullScreenVideoMode) BOOL fullScreenVideoMode;	// G=0x319cd611; 
@property(readonly, assign, nonatomic) BOOL hasVolumeControl;	// G=0x319cd545; 
@property(readonly, assign, nonatomic) BOOL isAirPlayVideoActive;	// G=0x319ccffd; 
@property(readonly, assign, nonatomic) BOOL isCurrentItemReady;	// G=0x319cd8bd; 
@property(readonly, assign, nonatomic) BOOL isInExtendedMode;	// G=0x319cea21; 
@property(readonly, assign, nonatomic) BOOL muted;	// G=0x319cd5ed; 
@property(assign, nonatomic) double nextFadeOutDuration;	// G=0x319d5ef5; S=0x319cd2cd; @synthesize=_nextFadeOutDuration
@property(readonly, assign, nonatomic) unsigned numberOfItems;	// G=0x319cd109; 
@property(readonly, assign, nonatomic) double playableDurationOfCurrentItemIfAvailable;	// G=0x319cea4d; 
@property(assign, nonatomic) int playbackMode;	// G=0x319cd6a9; S=0x319cd639; 
@property(readonly, assign, nonatomic, getter=isPlaying) BOOL playing;	// G=0x319cd035; 
@property(assign, nonatomic) unsigned repeatType;	// G=0x319cd189; S=0x319cd3d1; 
@property(readonly, assign, nonatomic, getter=isRewindHoldingAtStart) BOOL rewindHoldingAtStart;	// G=0x319cc339; 
@property(readonly, assign, nonatomic) NSString *routeNameForVolumeControl;	// G=0x319cd5f1; 
@property(assign, nonatomic) BOOL shouldEnforceHDCP;	// G=0x319d5f0d; S=0x319d5f1d; @synthesize=_shouldEnforceHDCP
@property(assign, nonatomic) unsigned shuffleType;	// G=0x319cd501; S=0x319cd461; 
@property(readonly, assign, nonatomic, getter=isShuffled) BOOL shuffled;	// G=0x319cd089; 
@property(assign, nonatomic) unsigned state;	// G=0x319d5f2d; S=0x319ce9ad; @synthesize=_state
@property(assign, nonatomic) BOOL stopAtEnd;	// G=0x319cd6b9; S=0x319cd6cd; 
@property(assign, nonatomic) BOOL subtitlesEnabled;	// G=0x319cd531; S=0x319cd4b9; 
@property(assign, nonatomic) BOOL ubiquitousBookkeepingEnabled;	// G=0x319cffd9; S=0x319cffb5; 
@property(assign, nonatomic) BOOL useApplicationAudioSession;	// G=0x319cd739; S=0x319cd74d; 
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x319cd0c9; 
@property(assign, nonatomic) BOOL videoFrameDisplayOnResumeDisabled;	// G=0x319ce9bd; S=0x319ce9d1; 
@property(readonly, assign, nonatomic) CALayer *videoLayer;	// G=0x319ce341; @synthesize=_videoLayer
@property(readonly, assign, nonatomic) MPVideoView *videoView;	// G=0x319ce3e9; 
@property(assign, nonatomic) float volume;	// G=0x319cd599; S=0x319cd5c1; 
+ (id)_controllerKeysToObserve;	// 0x319d231d
+ (id)_itemKeysToObserve;	// 0x319d2395
+ (id)_playerKeysToObserve;	// 0x319d2459
+ (void)initialize;	// 0x319cb0d5
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x319ccd09
+ (BOOL)outputSupportsAC3;	// 0x319cd7ed
+ (id)sharedInstance;	// 0x319cb111
- (id)init;	// 0x319cb1c9
// declared property getter: - (int)EQPreset;	// 0x319d5ea5
- (void)_applicationDidBecomeActive:(id)_application;	// 0x319d12d1
- (void)_applicationDidFinishSuspensionSnapshot:(id)_application;	// 0x319d1629
- (void)_applicationSuspended:(id)suspended;	// 0x319d15bd
- (void)_applicationSuspendedEventsOnly:(id)only;	// 0x319d1499
- (void)_applicationWillResignActive:(id)_application;	// 0x319d1101
- (void)_attemptAutoPlay;	// 0x319d42f5
- (id)_avPlaylistManager;	// 0x319d24ed
- (BOOL)_canPlayItem:(id)item;	// 0x319d5c21
- (void)_cancelStallTimer;	// 0x319d256d
- (void)_cancelUpdateCurrentItemBookkeepingTimer;	// 0x319d4bc5
- (BOOL)_changeChapterTimeMarkerIndexBy:(int)by;	// 0x319d259d
- (void)_checkForBoundaryTimeCrossing;	// 0x319d3919
- (void)_clearResetRateAfterSeeking;	// 0x319d4c35
- (void)_clearSeekingIntervalsForStreaming;	// 0x319d5919
- (void)_clearVideoLayer;	// 0x319d2859
- (void)_closedCaptioningStatusDidChangeNotification:(id)_closedCaptioningStatus;	// 0x319d16e5
- (void)_configureAVPlaylistManager:(id)manager;	// 0x319d28f1
- (void)_configureUpdateCurrentItemBookkeepingTimer;	// 0x319d4bf5
- (BOOL)_connectAVPlaylistManager;	// 0x319d2c29
- (unsigned)_currentIndexInBoundaryCMTimes:(id)boundaryCMTimes;	// 0x319d3855
- (void)_delayedPlaybackIndexChange;	// 0x319d17e1
- (void)_delayedPostPlaybackStateChangedNotification;	// 0x319d4755
- (void)_delayedSetCurrentTime;	// 0x319d5655
- (void)_delayedUpdateScanningRate;	// 0x319d1831
- (void)_delayedUpdateTimeMarker;	// 0x319d1855
- (void)_disconnectAVPlaylistManagerWithReason:(int)reason;	// 0x319d0459
- (unsigned)_displayPlaybackState;	// 0x319d4a85
- (void)_endSeekAndChangeRate:(BOOL)rate;	// 0x319d2e35
- (id)_extractImageFromMetadata:(id)metadata;	// 0x319d5989
- (void)_firstVideoFrameDisplayed:(id)displayed;	// 0x319cf16d
- (void)_isAirPlayVideoActiveDidChange:(id)_isAirPlayVideoActive;	// 0x319cf1b5
- (void)_itemAssetIsLoadedNotification:(id)notification;	// 0x319cf23d
- (void)_itemDidChange:(id)_item;	// 0x319cf319
- (void)_itemFailedToPlayToEnd:(id)end;	// 0x319cf605
- (void)_itemFailedToPlayToEndNotification:(id)endNotification;	// 0x319cf5d5
- (BOOL)_itemIsRestricted:(id)restricted;	// 0x319d5bd1
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x319cf6ed
- (void)_itemReadyToPlay:(id)play;	// 0x319cf9e1
- (void)_itemTimeMarkersAvailableNotification:(id)notification;	// 0x319cf2b1
- (void)_itemWillChange:(id)_item;	// 0x319cfa89
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)_mediaLibraryDynamicProperties;	// 0x319d17d1
- (void)_pauseBookkeepingTimer;	// 0x319d4b55
- (void)_pauseTickTimer;	// 0x319d5a89
- (void)_playbackFailedWithError:(id)error canResolve:(BOOL)resolve;	// 0x319d5af9
- (unsigned)_playbackIndexForDelta:(int)delta fromIndex:(unsigned)index ignoreElapsedTime:(BOOL)time;	// 0x319d3051
- (void)_playerFailedToQueueNotification:(id)queueNotification;	// 0x319cf589
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)item;	// 0x319cf0ad
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)_postMPAVControllerSize;	// 0x319cefed
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(unsigned)originalState newState:(unsigned)state delayable:(BOOL)delayable;	// 0x319d47bd
- (void)_prepareToPlayItem:(id)playItem;	// 0x319d3149
- (void)_protectionStatusTimerCallback:(id)callback;	// 0x319d1aa5
- (void)_rateDidChange:(id)_rate;	// 0x319d0139
- (void)_registerForAVItemNotifications:(id)avitemNotifications;	// 0x319d3bc1
- (void)_registerForAVPlaylistManagerObservation:(id)avplaylistManagerObservation;	// 0x319d3df5
- (void)_reloadTimeMarkerObservationsForItem:(id)item;	// 0x319d3a21
- (void)_resetInternalState;	// 0x319d4039
- (void)_resetQueue:(BOOL)queue videoLayer:(id)layer;	// 0x319d40f1
- (void)_resumeBookkeepingTimer;	// 0x319d4b91
- (void)_resumeTickTimer;	// 0x319d5ac5
- (void)_scheduleExternalProtectionTimerIfNecessary;	// 0x319d1e45
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;	// 0x319d4ab5
- (unsigned)_seeklessStateForState:(unsigned)state;	// 0x319ccf4d
- (void)_serverConnectionDidDie:(id)_serverConnection;	// 0x319d06b9
- (void)_setAVControllerQueueFeeder:(id)feeder startQueueIndex:(unsigned)index;	// 0x319cbe25
- (void)_setActionAtEndAttributeForState:(unsigned)state;	// 0x319d46c5
- (void)_setBufferingState:(unsigned)state;	// 0x319d4431
- (void)_setFeeder:(id)feeder;	// 0x319cdbc1
- (void)_setItemErrorResolver:(id)resolver;	// 0x319d4c5d
- (void)_setState:(unsigned)state;	// 0x319d4ced
- (void)_setValid:(BOOL)valid;	// 0x319d4f6d
- (void)_setVideoLayerOnAVController:(id)controller force:(BOOL)force;	// 0x319d4f49
- (void)_setVideoLayerOnAVController:(id)controller force:(BOOL)force pauseIfNecessary:(BOOL)necessary;	// 0x319d4e39
- (BOOL)_showsPlayingWhenInState:(unsigned)state;	// 0x319ccf01
- (void)_sizeDidChange:(id)_size;	// 0x319d083d
- (void)_stopExternalProtectionTimer;	// 0x319d22b9
- (void)_streamBufferFull:(id)full;	// 0x319d086d
- (void)_streamLikelyToKeepUp:(id)keepUp;	// 0x319d0891
- (void)_streamRanDry:(id)dry;	// 0x319d08b5
- (void)_streamUnlikelyToKeepUp:(id)keepUp;	// 0x319d08d9
- (void)_switchToFeeder:(id)feeder mode:(int)mode index:(unsigned)index play:(BOOL)play configureFeederBlock:(id)block;	// 0x319cdcd1
- (void)_timeHasJumpedNotification:(id)notification;	// 0x319d08fd
- (void)_timedMetadataAvailable:(id)available;	// 0x319d0a75
- (void)_tracksDidChange:(id)_tracks;	// 0x319d0c35
- (void)_unregisterForAVItemNotifications:(id)avitemNotifications;	// 0x319d5049
- (void)_unregisterForAVPlaylistManagerObservation:(id)avplaylistManagerObservation;	// 0x319d51f5
- (void)_updateCurrentItemBookkeeping;	// 0x319cfff1
- (void)_updateCurrentItemBookkeepingForTimerCallback;	// 0x319d00ad
- (void)_updateCurrentTimeToBookmarkTimeForDynamicPropertyChange;	// 0x319d1709
- (void)_updateCurrentTimeToNextStartTimeForQueueFeeder:(id)queueFeeder withItemIndex:(int)itemIndex;	// 0x319cbccd
- (void)_updateProgress:(CFRunLoopTimerRef)progress;	// 0x319d5411
- (void)_updateScanningRate;	// 0x319d5559
- (void)_updateSeekingIntervalsForStreaming;	// 0x319d56ad
- (void)_volumeDidChangeNotification:(id)_volume;	// 0x319d0c9d
// declared property getter: - (unsigned)activeRepeatType;	// 0x319ccdc1
// declared property getter: - (unsigned)activeShuffleType;	// 0x319ccdfd
- (void)airPlayVideoEnded;	// 0x319d0ce5
// declared property getter: - (BOOL)allowsAirPlayVideo;	// 0x319cce39
// declared property getter: - (BOOL)alwaysPlayWheneverPossible;	// 0x319cd0dd
- (void)applicationDidReceiveMemoryWarningAsUrgent:(BOOL)application;	// 0x319cd92d
- (void)applicationWillTerminate;	// 0x319cd979
- (void)applyRepeatSettings;	// 0x319cd9a9
- (void)applyShuffleSettings;	// 0x319cda61
// declared property getter: - (id)audioDeviceController;	// 0x319cd711
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x319cede9
// declared property getter: - (BOOL)autoPlayWhenLikelyToKeepUp;	// 0x319ccea9
- (void)autoclearDisplayOverride;	// 0x319d4971
// declared property getter: - (id)avPlayer;	// 0x319cdab1
- (void)beginInterruption;	// 0x319cfe1d
- (void)beginSeek:(int)seek;	// 0x319cb9f5
- (void)beginTickTimerWithInterval:(double)interval;	// 0x319ccb89
- (void)beginUsingVideoLayer;	// 0x319cdb35
// declared property getter: - (unsigned)bufferingState;	// 0x319ccebd
- (BOOL)canSeekBackwards;	// 0x319cecc9
- (BOOL)canSeekForwards;	// 0x319cecf5
- (void)changePlaybackIndexBy:(int)by;	// 0x319cbf61
- (void)changePlaybackIndexBy:(int)by deltaType:(int)type;	// 0x319cbf81
- (void)changePlaybackIndexBy:(int)by deltaType:(int)type ignoreElapsedTime:(BOOL)time;	// 0x319cbfa5
// declared property getter: - (BOOL)closedCaptioningEnabled;	// 0x319ccecd
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x319cdb09
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x319cdad9
// declared property getter: - (id)currentItem;	// 0x319ccee1
// declared property getter: - (BOOL)currentItemIsRental;	// 0x319cdb79
// declared property getter: - (double)currentMonotonousTime;	// 0x319cc441
// declared property getter: - (double)currentTime;	// 0x319cc34d
- (void)dealloc;	// 0x319cb52d
// declared property getter: - (id)destinationBrowser;	// 0x319d5e95
// declared property getter: - (BOOL)destinationIsTVOut;	// 0x319ce2ed
// declared property getter: - (BOOL)disableAirPlayMirroringDuringPlayback;	// 0x319cd1b5
- (void)disableAutoplayForCurrentItem;	// 0x319cd8fd
// declared property getter: - (double)durationOfCurrentItemIfAvailable;	// 0x319cea25
- (id)embeddedDataTimesForItem:(id)item;	// 0x319d3201
- (void)enableAutoplayForCurrentItem;	// 0x319cd915
- (void)endInterruptionFromInterruptor:(id)interruptor category:(id)category flags:(unsigned)flags;	// 0x319cfe51
- (void)endPlayback;	// 0x319cc4d9
- (void)endSeek;	// 0x319cc2c1
- (void)endTickTimer;	// 0x319ccca9
- (void)endUsingVideoLayer;	// 0x319cdb7d
- (void)ensureFeederIsClass:(Class)aClass;	// 0x319ce6d9
- (void)ensureFeederIsSubclass:(Class)subclass;	// 0x319ce76d
- (void)ensureHasAVPlaylistManager;	// 0x319cdbb1
- (void)errorResolver:(id)resolver didResolveError:(id)error withResolution:(int)resolution;	// 0x319ceecd
- (BOOL)fadeOutForQuit;	// 0x319cc2d5
// declared property getter: - (id)feeder;	// 0x319d5eb5
- (void)feederChangedContents:(id)contents;	// 0x319cde79
// declared property getter: - (int)feederMode;	// 0x319d5ec5
- (void)finalizeBookkeepingNow;	// 0x319ce8c5
- (BOOL)forceRestartPlaybackIfNecessary;	// 0x319ccb29
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x319d5ee5
// declared property getter: - (BOOL)hasVolumeControl;	// 0x319cd545
// declared property getter: - (BOOL)isAirPlayVideoActive;	// 0x319ccffd
// declared property getter: - (BOOL)isCurrentItemReady;	// 0x319cd8bd
// declared property getter: - (BOOL)isFullScreenVideoMode;	// 0x319cd611
// declared property getter: - (BOOL)isInExtendedMode;	// 0x319cea21
- (BOOL)isLiveStreaming;	// 0x319cec85
// declared property getter: - (BOOL)isPlaying;	// 0x319cd035
// declared property getter: - (BOOL)isRewindHoldingAtStart;	// 0x319cc339
- (BOOL)isSeekingOrScrubbing;	// 0x319cc325
// declared property getter: - (BOOL)isShuffled;	// 0x319cd089
- (BOOL)isTickTimerEnabled;	// 0x319cccf1
// declared property getter: - (BOOL)isValid;	// 0x319cd0c9
// declared property getter: - (BOOL)muted;	// 0x319cd5ed
// declared property getter: - (double)nextFadeOutDuration;	// 0x319d5ef5
// declared property getter: - (unsigned)numberOfItems;	// 0x319cd109
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x319d0cf5
- (void)pause;	// 0x319cc609
- (void)pauseWithFadeout:(float)fadeout;	// 0x319cc555
- (void)play;	// 0x319cc751
- (void)playChapterTimeMarkerAtIndex:(unsigned)index;	// 0x319cc9f1
- (void)playItemAtIndex:(unsigned)index;	// 0x319cc945
- (void)playItemAtIndex:(unsigned)index forceRestart:(BOOL)restart;	// 0x319cc959
// declared property getter: - (double)playableDurationOfCurrentItemIfAvailable;	// 0x319cea4d
// declared property getter: - (int)playbackMode;	// 0x319cd6a9
- (float)rate;	// 0x319cd131
- (void)reloadFeederWithStartQueueIndex:(unsigned)startQueueIndex;	// 0x319cdebd
// declared property getter: - (unsigned)repeatType;	// 0x319cd189
- (void)restorePreviousFeederState;	// 0x319ce5f9
// declared property getter: - (id)routeNameForVolumeControl;	// 0x319cd5f1
- (void)saveCurrentFeederState;	// 0x319ce451
// declared property setter: - (void)setAllowsAirPlayVideo:(BOOL)video;	// 0x319cce6d
// declared property setter: - (void)setAlwaysPlayWheneverPossible:(BOOL)possible;	// 0x319cd0f1
// declared property setter: - (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)keepUp;	// 0x319cca91
- (void)setAutoclearingDisplayOverridePlaybackState:(unsigned)state;	// 0x319d4985
// declared property setter: - (void)setClosedCaptioningEnabled:(BOOL)enabled;	// 0x319cd225
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x319ccac5
- (void)setCurrentTime:(double)time options:(int)options;	// 0x319cdf15
// declared property setter: - (void)setDestinationIsTVOut:(BOOL)anOut;	// 0x319ce315
// declared property setter: - (void)setDisableAirPlayMirroringDuringPlayback:(BOOL)playback;	// 0x319cd1e9
- (void)setDisplayOverridePlaybackState:(unsigned)state;	// 0x319d49c9
// declared property setter: - (void)setEQPreset:(int)preset;	// 0x319cd28d
// declared property setter: - (void)setFeederMode:(int)mode;	// 0x319d5ed5
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x319ce1fd
// declared property setter: - (void)setNextFadeOutDuration:(double)duration;	// 0x319cd2cd
- (void)setPlaybackIndex:(int)index;	// 0x319cbf1d
- (void)setPlaybackIndex:(int)index selectionDirection:(int)direction;	// 0x319cbe85
// declared property setter: - (void)setPlaybackMode:(int)mode;	// 0x319cd639
- (BOOL)setRate:(float)rate;	// 0x319cd329
- (void)setRateForScanning:(float)scanning;	// 0x319d54f5
// declared property setter: - (void)setRepeatType:(unsigned)type;	// 0x319cd3d1
// declared property setter: - (void)setShouldEnforceHDCP:(BOOL)enforceHDCP;	// 0x319d5f1d
// declared property setter: - (void)setShuffleType:(unsigned)type;	// 0x319cd461
// declared property setter: - (void)setState:(unsigned)state;	// 0x319ce9ad
// declared property setter: - (void)setStopAtEnd:(BOOL)end;	// 0x319cd6cd
// declared property setter: - (void)setSubtitlesEnabled:(BOOL)enabled;	// 0x319cd4b9
// declared property setter: - (void)setUbiquitousBookkeepingEnabled:(BOOL)enabled;	// 0x319cffb5
// declared property setter: - (void)setUseApplicationAudioSession:(BOOL)session;	// 0x319cd74d
// declared property setter: - (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)disabled;	// 0x319ce9d1
// declared property setter: - (void)setVolume:(float)volume;	// 0x319cd5c1
- (BOOL)shouldDisplayAsPlaying;	// 0x319cd059
// declared property getter: - (BOOL)shouldEnforceHDCP;	// 0x319d5f0d
- (BOOL)shouldHaveNoActionAtEndForState:(unsigned)state;	// 0x319ce9f5
// declared property getter: - (unsigned)shuffleType;	// 0x319cd501
- (void)skipToSeekableEnd;	// 0x319cedad
- (void)skipToSeekableStart;	// 0x319ced41
// declared property getter: - (unsigned)state;	// 0x319d5f2d
// declared property getter: - (BOOL)stopAtEnd;	// 0x319cd6b9
// declared property getter: - (BOOL)subtitlesEnabled;	// 0x319cd531
- (void)switchToAudioPlayback:(BOOL)audioPlayback forItem:(id)item;	// 0x319ce23d
- (void)switchToFeeder:(id)feeder mode:(int)mode index:(unsigned)index play:(BOOL)play;	// 0x319cde4d
- (void)switchToVideoPlayback:(BOOL)videoPlayback forItem:(id)item;	// 0x319ce275
- (double)timeOfPlayableEnd;	// 0x319ceb3d
- (double)timeOfPlayableStart;	// 0x319cea75
- (double)timeOfSeekableEnd;	// 0x319cec5d
- (double)timeOfSeekableStart;	// 0x319cec35
- (void)togglePlayback;	// 0x319ccae9
// declared property getter: - (BOOL)ubiquitousBookkeepingEnabled;	// 0x319cffd9
- (void)updateBookkeepingNow;	// 0x319ce809
// declared property getter: - (BOOL)useApplicationAudioSession;	// 0x319cd739
// declared property getter: - (BOOL)videoFrameDisplayOnResumeDisabled;	// 0x319ce9bd
// declared property getter: - (id)videoLayer;	// 0x319ce341
// declared property getter: - (id)videoView;	// 0x319ce3e9
// declared property getter: - (float)volume;	// 0x319cd599
@end
