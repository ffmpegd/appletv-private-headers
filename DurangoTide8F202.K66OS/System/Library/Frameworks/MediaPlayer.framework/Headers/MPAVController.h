/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, MPAudioDeviceController, MPAVItem, MPAVErrorResolver, MPAVControllerToAggregateDCommunicator, AVController, MPAVDestinationBrowser, NSNotification, MPQueueFeeder, NSDate, CALayer;
@protocol MPAVDestination;

@interface MPAVController : NSObject {
	AVController *_avController;	// 4 = 0x4
	double _connectionFailTime;	// 8 = 0x8
	unsigned _valid : 1;	// 16 = 0x10
	int _playbackMode;	// 20 = 0x14
	MPAudioDeviceController *_audioDeviceController;	// 24 = 0x18
	MPQueueFeeder *_feeder;	// 28 = 0x1c
	MPAVErrorResolver *_itemErrorResolver;	// 32 = 0x20
	CALayer *_videoLayer;	// 36 = 0x24
	unsigned _videoLayerUsageCount;	// 40 = 0x28
	unsigned _tickTimerEnabled;	// 44 = 0x2c
	CFRunLoopTimerRef _tickTimer;	// 48 = 0x30
	double _tickInterval;	// 52 = 0x34
	CFRunLoopTimerRef _currentItemBookkeepingTimer;	// 60 = 0x3c
	int _indexChangeDirection;	// 64 = 0x40
	unsigned _itemIndexAtDeath;	// 68 = 0x44
	int _lastDisconnectReason;	// 72 = 0x48
	double _lastKnownTimeBeforeDeath;	// 76 = 0x4c
	double _lastPlaybackIndexChangeTime;	// 84 = 0x54
	double _lastSetTime;	// 92 = 0x5c
	double _lastSetTimeChangeTime;	// 100 = 0x64
	unsigned _hasDelayedCurrentTimeToSet : 1;	// 108 = 0x6c
	unsigned _forceDelayedCurrentTimeToSet : 1;	// 108 = 0x6c
	double _delayedCurrentTimeToSet;	// 112 = 0x70
	int _delayedCurrentTimeOptions;	// 120 = 0x78
	unsigned _lastSetTimeMarker;	// 124 = 0x7c
	unsigned _autoPlayWhenLikelyToKeepUp : 1;	// 128 = 0x80
	unsigned _autoPlayWhenLikelyToKeepUpBeforeSeek : 1;	// 128 = 0x80
	unsigned _closedCaptioningEnabled : 1;	// 128 = 0x80
	int _eqPreset;	// 132 = 0x84
	double _nextFadeOutDuration;	// 136 = 0x88
	double _repeatGap;	// 144 = 0x90
	float _rateBeforeSeek;	// 152 = 0x98
	float _inflightSeekRate;	// 156 = 0x9c
	unsigned _scanLevel;	// 160 = 0xa0
	int _scanDirection;	// 164 = 0xa4
	int _resetRateAfterSeekingUpdateDisabled;	// 168 = 0xa8
	unsigned _seeklessState;	// 172 = 0xac
	unsigned _isSeekingOrScrubbing : 1;	// 176 = 0xb0
	unsigned _resetRateAfterSeeking : 1;	// 176 = 0xb0
	unsigned _activeRewindHoldingAtStart : 1;	// 176 = 0xb0
	double _lastSeekableEnd;	// 180 = 0xb4
	double _whenSawSeekableEnd;	// 188 = 0xbc
	double _maxSeekableFwd;	// 196 = 0xc4
	double _seekFwdSlop;	// 204 = 0xcc
	double _lastSeekableStart;	// 212 = 0xd4
	double _whenSawSeekableStart;	// 220 = 0xdc
	double _maxSeekableRev;	// 228 = 0xe4
	double _seekRevSlop;	// 236 = 0xec
	unsigned _canSeekRev : 1;	// 244 = 0xf4
	unsigned _canSeekFwd : 1;	// 244 = 0xf4
	unsigned _alwaysPlayWheneverPossible : 1;	// 244 = 0xf4
	unsigned _stopAtEnd : 1;	// 244 = 0xf4
	unsigned _didReachEnd : 1;	// 244 = 0xf4
	unsigned _pausedDuringInterruption : 1;	// 244 = 0xf4
	unsigned _useApplicationAudioSession : 1;	// 244 = 0xf4
	unsigned _subtitlesEnabled : 1;	// 244 = 0xf4
	unsigned _videoFrameDisplayOnResumeDisabled : 1;	// 245 = 0xf5
	unsigned _disconnectedVideoLayerOnSuspend : 1;	// 245 = 0xf5
	id _subtitlesRecipient;	// 248 = 0xf8
	unsigned _state;	// 252 = 0xfc
	unsigned _displayOverridePlaybackState;	// 256 = 0x100
	unsigned _bufferingState;	// 260 = 0x104
	NSNotification *_delayedPlaybackStateNotification;	// 264 = 0x108
	NSMutableArray *_queueFeederStateStack;	// 268 = 0x10c
	int _feederMode;	// 272 = 0x110
	MPAVControllerToAggregateDCommunicator *_aggregateDCommunicator;	// 276 = 0x114
	MPAVDestinationBrowser *_destinationBrowser;	// 280 = 0x118
	id<MPAVDestination> _destination;	// 284 = 0x11c
	double _currentTimeAtDestinationSwitch;	// 288 = 0x120
	NSDate *_dateAtDestinationSwitch;	// 296 = 0x128
	NSDate *_estimatedDateAtDestinationSwitch;	// 300 = 0x12c
	unsigned _destinationInterrupted : 1;	// 304 = 0x130
	unsigned _ignoreNextDestinationInterruptionForItemReadyToPlay : 1;	// 304 = 0x130
	unsigned _ignoreNextDestinationInterruptionForResume : 1;	// 304 = 0x130
}
@property(assign, nonatomic) int EQPreset;	// G=0x31d7bb15; S=0x31d81051; @synthesize=_eqPreset
@property(readonly, assign, nonatomic) unsigned activeRepeatType;	// G=0x31d813a5; 
@property(readonly, assign, nonatomic) unsigned activeShuffleType;	// G=0x31d81375; 
@property(assign, nonatomic) BOOL alwaysPlayWheneverPossible;	// G=0x31d7b8a1; S=0x31d7b8b5; 
@property(readonly, retain, nonatomic) MPAudioDeviceController *audioDeviceController;	// G=0x31d80bc5; @synthesize=_audioDeviceController
@property(assign, nonatomic) BOOL autoPlayWhenLikelyToKeepUp;	// G=0x31d7b819; S=0x31d81489; 
@property(readonly, retain, nonatomic) AVController *avController;	// G=0x31d808b1; 
@property(readonly, assign, nonatomic) unsigned bufferingState;	// G=0x31d81335; @synthesize=_bufferingState
@property(assign, nonatomic) BOOL closedCaptioningEnabled;	// G=0x31d7b82d; S=0x31d810b9; 
@property(readonly, retain, nonatomic) MPAVItem *currentItem;	// G=0x31d81315; 
@property(readonly, assign, nonatomic) BOOL currentItemIsRental;	// G=0x31d7b919; 
@property(assign, nonatomic) double currentTime;	// G=0x31d81769; S=0x31d81465; 
@property(retain, nonatomic) id<MPAVDestination> destination;	// G=0x31d7bb35; S=0x31d83659; @synthesize=_destination
@property(readonly, assign, nonatomic) MPAVDestinationBrowser *destinationBrowser;	// G=0x31d7bb25; @synthesize=_destinationBrowser
@property(assign, nonatomic, getter=destinationIsTVOut, setter=setDestinationIsTVOut:) BOOL destinationIsTVOut;	// G=0x31d80455; S=0x31d803f9; 
@property(readonly, assign, nonatomic) double durationOfCurrentItemIfAvailable;	// G=0x31d80035; 
@property(retain, nonatomic) MPQueueFeeder *feeder;	// G=0x31d7bb05; S=0x31d8059d; @synthesize=_feeder
@property(assign, nonatomic) int feederMode;	// G=0x31d7bae5; S=0x31d7baf5; @synthesize=_feederMode
@property(readonly, assign, nonatomic, getter=isFullScreenVideoMode) BOOL fullScreenVideoMode;	// G=0x31d80c51; 
@property(readonly, assign, nonatomic) BOOL handlingRemoteEvent;	// G=0x31d7b841; 
@property(readonly, assign, nonatomic) BOOL hasVolumeControl;	// G=0x31d80d25; 
@property(readonly, assign, nonatomic) BOOL isCurrentItemReady;	// G=0x31d809f9; 
@property(readonly, assign, nonatomic) BOOL muted;	// G=0x31d80cb5; 
@property(assign, nonatomic) double nextFadeOutDuration;	// G=0x31d7bad5; S=0x31d80fcd; @synthesize=_nextFadeOutDuration
@property(readonly, assign, nonatomic) unsigned numberOfItems;	// G=0x31d811cd; 
@property(readonly, assign, nonatomic) double playableDurationOfCurrentItemIfAvailable;	// G=0x31d7ffe9; 
@property(assign, nonatomic) int playbackMode;	// G=0x31d7b8e1; S=0x31d80c29; 
@property(readonly, assign, nonatomic, getter=isPlaying) BOOL playing;	// G=0x31d81255; 
@property(assign, nonatomic) double repeatGap;	// G=0x31d7bac5; S=0x31d80f69; @synthesize=_repeatGap
@property(assign, nonatomic) unsigned repeatType;	// G=0x31d81139; S=0x31d80eed; 
@property(readonly, assign, nonatomic, getter=isRewindHoldingAtStart) BOOL rewindHoldingAtStart;	// G=0x31d7b7f1; 
@property(readonly, assign, nonatomic) NSString *routeNameForVolumeControl;	// G=0x31d80c75; 
@property(assign, nonatomic) unsigned shuffleType;	// G=0x31d80dd5; S=0x31d80ea1; 
@property(readonly, assign, nonatomic, getter=isShuffled) BOOL shuffled;	// G=0x31d811f1; 
@property(assign, nonatomic) unsigned state;	// G=0x31d80d85; S=0x31d800e5; @synthesize=_state
@property(assign, nonatomic) BOOL stopAtEnd;	// G=0x31d7b8f1; S=0x31d80be9; 
@property(assign, nonatomic) BOOL subtitlesEnabled;	// G=0x31d7b8d1; S=0x31d80dfd; 
@property(readonly, retain, nonatomic) id subtitlesRecipient;	// G=0x31d80551; @synthesize=_subtitlesRecipient
@property(assign, nonatomic) BOOL useApplicationAudioSession;	// G=0x31d7b905; S=0x31d80b19; 
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x31d7b88d; 
@property(assign, nonatomic) BOOL videoFrameDisplayOnResumeDisabled;	// G=0x31d7b91d; S=0x31d7b931; 
@property(readonly, retain, nonatomic) CALayer *videoLayer;	// G=0x31d80389; @synthesize=_videoLayer
@property(assign, nonatomic) float volume;	// G=0x31d80d01; S=0x31d80cd9; 
+ (void)initialize;	// 0x31d81cb9
+ (BOOL)outputSupportsAC3;	// 0x31d85379
+ (void)purgeSharedInstance;	// 0x31d80979
+ (id)sharedIPCAppInstance;	// 0x31d7fdbd
+ (id)sharedIPCAppInstanceIfAvailable;	// 0x31d7b981
+ (id)sharedInstance;	// 0x31d81c71
- (id)init;	// 0x31d855c9
// declared property getter: - (int)EQPreset;	// 0x31d7bb15
- (void)_attemptAutoPlay;	// 0x31d7cf05
- (id)_avController;	// 0x31d7e051
- (void)_beginDestinationInterruption;	// 0x31d82a45
- (BOOL)_canPlayItem:(id)item;	// 0x31d7bb75
- (void)_cancelUpdateCurrentItemBookkeepingTimer;	// 0x31d8408d
- (BOOL)_changeChapterTimeMarkerIndexBy:(int)by;	// 0x31d7dd9d
- (void)_clearResetRateAfterSeeking;	// 0x31d7ba35
- (void)_clearSeekingIntervalsForStreaming;	// 0x31d7ba59
- (void)_clearVideoLayer;	// 0x31d7dd2d
- (void)_coalesceAndPostMPTimeMarkerCrossedNotification;	// 0x31d7fd61
- (void)_configureAVController:(id)controller;	// 0x31d7d8ad
- (void)_configureUpdateCurrentItemBookkeepingTimer;	// 0x31d7c9b1
- (BOOL)_connectAVController;	// 0x31d82491
- (void)_crossedEmbeddedChapterHREFDidChangeNotification:(id)_crossedEmbeddedChapterHREF;	// 0x31d7fc55
- (void)_crossedEmbeddedChapterImageDidChangeNotification:(id)_crossedEmbeddedChapterImage;	// 0x31d7fc41
- (void)_crossedEmbeddedChapterNameDidChangeNotification:(id)_crossedEmbeddedChapterName;	// 0x31d7fc69
- (void)_delayedPlaybackIndexChange;	// 0x31d7e2a1
- (void)_delayedPostPlaybackStateChangedNotification;	// 0x31d7cccd
- (void)_delayedSetCurrentTime;	// 0x31d7c101
- (void)_delayedUpdateScanningRate;	// 0x31d7e27d
- (void)_delayedUpdateTimeMarker;	// 0x31d7e0f9
- (void)_destinationBufferingStateDidChangeNotification:(id)_destinationBufferingState;	// 0x31d7f889
- (void)_destinationPlaybackStateDidChangeNotification:(id)_destinationPlaybackState;	// 0x31d82e15
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x31d84e69
- (void)_didFinishSuspensionSnapshotNotification:(id)notification;	// 0x31d7f851
- (void)_disconnectAVControllerWithReason:(int)reason;	// 0x31d7e8d9
- (void)_disconnectVideoLayerIfNecessary;	// 0x31d7d86d
- (unsigned)_displayPlaybackState;	// 0x31d7c9e9
- (void)_endDestinationInterruption;	// 0x31d852ad
- (void)_endSeekAndChangeRate:(BOOL)rate;	// 0x31d82b95
- (id)_extractImageFromMetadataPayload:(id)metadataPayload;	// 0x31d84339
- (void)_firstVideoFrameDisplayedNotification:(id)notification;	// 0x31d7f80d
- (void)_itemAttributeAvailableNotification:(id)notification;	// 0x31d7f721
- (void)_itemCompletedDecodeNotification:(id)notification;	// 0x31d7b98d
- (void)_itemDidChangeNotification:(id)_item;	// 0x31d7f465
- (void)_itemFailedToPlayNotification:(id)playNotification;	// 0x31d7f41d
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x31d7f259
- (void)_itemReadyToPlayNotification:(id)playNotification;	// 0x31d7f1b9
- (void)_itemTimeMarkersAvailableNotification:(id)notification;	// 0x31d7f7a1
- (void)_itemTypeAvailableNotification:(id)notification;	// 0x31d84d55
- (void)_itemWillChangeNotification:(id)_item;	// 0x31d7ef79
- (id)_metadataDictionariesFromMetadataPayload:(id)metadataPayload;	// 0x31d7be4d
- (void)_pauseTickTimer;	// 0x31d84f15
- (void)_playbackFailedWithError:(id)error canResolve:(BOOL)resolve;	// 0x31d7bd8d
- (unsigned)_playbackIndexForDelta:(int)delta fromIndex:(unsigned)index ignoreElapsedTime:(BOOL)time;	// 0x31d7d71d
- (void)_playbackInterruptedNotification:(id)notification;	// 0x31d7ef3d
- (void)_playbackInterruptionDidEndNotification:(id)_playbackInterruption;	// 0x31d8219d
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)item;	// 0x31d7f9c1
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)_postMPAVControllerSize;	// 0x31d7fa69
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(unsigned)originalState newState:(unsigned)state delayable:(BOOL)delayable;	// 0x31d7cb21
- (void)_prepareToPlayItem:(id)playItem;	// 0x31d7d689
- (void)_rateDidChangeNotification:(id)_rate;	// 0x31d7ea9d
- (void)_registerForAVItemNotifications:(id)avitemNotifications;	// 0x31d7d5a5
- (void)_registerForAVNotifications:(id)avnotifications;	// 0x31d7d1b1
- (void)_registerForAVSystemNotifications:(id)avsystemNotifications;	// 0x31d7d15d
- (void)_reloadTimeMarkerObservationsForItem:(id)item;	// 0x31d7d609
- (void)_resetInternalState;	// 0x31d7b991
- (void)_resetQueue:(BOOL)queue videoLayer:(id)layer;	// 0x31d7cf85
- (void)_resumeTickTimer;	// 0x31d84ee5
- (void)_resumedEventsOnly:(BOOL)only;	// 0x31d7e325
- (void)_resumedEventsOnlyNotification:(id)notification;	// 0x31d85035
- (void)_resumedNotification:(id)notification;	// 0x31d7e30d
- (void)_routeAudioToDeviceIfNecessary;	// 0x31d7bc89
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;	// 0x31d83f05
- (unsigned)_seeklessStateForState:(unsigned)state;	// 0x31d81279
- (void)_serverConnectionDiedNotification:(id)notification;	// 0x31d820b5
- (void)_setAVControllerQueueFeeder:(id)feeder startQueueIndex:(unsigned)index;	// 0x31d82315
- (void)_setActionAtEndAttributeForState:(unsigned)state;	// 0x31d7cd25
- (void)_setBufferingState:(unsigned)state;	// 0x31d7cdcd
- (void)_setItemErrorResolver:(id)resolver;	// 0x31d7c92d
- (void)_setState:(unsigned)state;	// 0x31d7c7e1
- (void)_setValid:(BOOL)valid;	// 0x31d7c615
- (void)_setVideoLayerOnAVController:(id)controller force:(BOOL)force;	// 0x31d7c789
- (BOOL)_showsPlayingWhenInState:(unsigned)state;	// 0x31d7b845
- (void)_sizeDidChangeNotification:(id)_size;	// 0x31d7e8ad
- (void)_streamBufferFullNotification:(id)notification;	// 0x31d7e885
- (void)_streamLikelyToKeepUpNotification:(id)keepUpNotification;	// 0x31d7e85d
- (void)_streamRanDryNotification:(id)notification;	// 0x31d7e839
- (void)_streamUnlikelyToKeepUpNotification:(id)keepUpNotification;	// 0x31d7e815
- (void)_suspendedEventsOnlyNotification:(id)notification;	// 0x31d84f4d
- (void)_suspendedNotification:(id)notification;	// 0x31d7e2e1
- (void)_systemVolumeDidChangeNotification:(id)_systemVolume;	// 0x31d7e719
- (void)_timeHasJumpedNotification:(id)notification;	// 0x31d7e639
- (void)_timedMetadataAvailableNotification:(id)notification;	// 0x31d7e501
- (void)_unregisterForAVItemNotifications:(id)avitemNotifications;	// 0x31d7c5b1
- (void)_unregisterForAVNotifications:(id)avnotifications;	// 0x31d7c34d
- (void)_unregisterForAVSystemNotifications:(id)avsystemNotifications;	// 0x31d7c305
- (void)_updateCurrentItemBookkeeping;	// 0x31d7ee85
- (void)_updateCurrentTimeToNextStartTimeForQueueFeeder:(id)queueFeeder withItemIndex:(int)itemIndex;	// 0x31d818e9
- (void)_updateDestinationForPickedRoute;	// 0x31d85085
- (void)_updateProgress:(CFRunLoopTimerRef)progress;	// 0x31d7c231
- (void)_updateScanningRate;	// 0x31d7c14d
- (void)_updateSeekingIntervalsForStreaming;	// 0x31d7bec9
- (void)_volumeDidChangeNotification:(id)_volume;	// 0x31d7e4bd
- (void)_volumeMutedDidChangeNotification:(id)_volumeMuted;	// 0x31d7e479
- (BOOL)_wantsVideoLayerWhenSuspended;	// 0x31d7c6ed
// declared property getter: - (unsigned)activeRepeatType;	// 0x31d813a5
// declared property getter: - (unsigned)activeShuffleType;	// 0x31d81375
// declared property getter: - (BOOL)alwaysPlayWheneverPossible;	// 0x31d7b8a1
- (void)applicationDidReceiveMemoryWarningAsUrgent:(BOOL)application;	// 0x31d80939
- (void)applicationWillTerminate;	// 0x31d80911
- (void)applyRepeatSettings;	// 0x31d858e1
- (void)applyShuffleSettings;	// 0x31d808c5
// declared property getter: - (id)audioDeviceController;	// 0x31d80bc5
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x31d84ded
// declared property getter: - (BOOL)autoPlayWhenLikelyToKeepUp;	// 0x31d7b819
- (void)autoclearDisplayOverride;	// 0x31d7cb09
// declared property getter: - (id)avController;	// 0x31d808b1
- (void)beginSeek:(int)seek;	// 0x31d81a21
- (void)beginTickTimerWithInterval:(double)interval;	// 0x31d83f85
- (void)beginUsingVideoLayer;	// 0x31d80875
// declared property getter: - (unsigned)bufferingState;	// 0x31d81335
- (BOOL)canSeekBackwards;	// 0x31d7b955
- (BOOL)canSeekForwards;	// 0x31d7fecd
- (void)changePlaybackIndexBy:(int)by;	// 0x31d818c9
- (void)changePlaybackIndexBy:(int)by deltaType:(int)type;	// 0x31d818a5
- (void)changePlaybackIndexBy:(int)by deltaType:(int)type ignoreElapsedTime:(BOOL)time;	// 0x31d82799
// declared property getter: - (BOOL)closedCaptioningEnabled;	// 0x31d7b82d
- (void)controller:(id)controller crossedTimeMarker:(int)marker forItem:(id)item context:(id)context;	// 0x31d7fc11
- (BOOL)controller:(id)controller shouldBeginPlayingItem:(id)item error:(id *)error;	// 0x31d7fbd1
// declared property getter: - (id)currentItem;	// 0x31d81315
// declared property getter: - (BOOL)currentItemIsRental;	// 0x31d7b919
// declared property getter: - (double)currentTime;	// 0x31d81769
- (void)dealloc;	// 0x31d81ccd
// declared property getter: - (id)destination;	// 0x31d7bb35
// declared property getter: - (id)destinationBrowser;	// 0x31d7bb25
// declared property getter: - (BOOL)destinationIsTVOut;	// 0x31d80455
// declared property getter: - (double)durationOfCurrentItemIfAvailable;	// 0x31d80035
- (id)embeddedDataTimesForItem:(id)item;	// 0x31d8448d
- (void)endPlayback;	// 0x31d816f9
- (void)endSeek;	// 0x31d8188d
- (void)endTickTimer;	// 0x31d840b5
- (void)endUsingVideoLayer;	// 0x31d80829
- (void)ensureFeederIsClass:(Class)aClass;	// 0x31d8023d
- (void)ensureFeederIsSubclass:(Class)subclass;	// 0x31d801cd
- (void)ensureHasAVController;	// 0x31d80815
- (void)errorResolver:(id)resolver didResolveError:(id)error withResolution:(int)resolution;	// 0x31d7fb15
- (BOOL)fadeOutForQuit;	// 0x31d81845
// declared property getter: - (id)feeder;	// 0x31d7bb05
- (void)feederChangedContents:(id)contents;	// 0x31d80711
// declared property getter: - (int)feederMode;	// 0x31d7bae5
- (BOOL)forceRestartPlaybackIfNecessary;	// 0x31d813d5
// declared property getter: - (BOOL)handlingRemoteEvent;	// 0x31d7b841
// declared property getter: - (BOOL)hasVolumeControl;	// 0x31d80d25
- (void)insertAndPostEmbeddedTimeMarkerWithNotification:(id)notification;	// 0x31d7fc7d
// declared property getter: - (BOOL)isCurrentItemReady;	// 0x31d809f9
// declared property getter: - (BOOL)isFullScreenVideoMode;	// 0x31d80c51
- (BOOL)isLiveStreaming;	// 0x31d7ff11
// declared property getter: - (BOOL)isPlaying;	// 0x31d81255
// declared property getter: - (BOOL)isRewindHoldingAtStart;	// 0x31d7b7f1
- (BOOL)isSeekingOrScrubbing;	// 0x31d7b7dd
// declared property getter: - (BOOL)isShuffled;	// 0x31d811f1
- (BOOL)isTickTimerEnabled;	// 0x31d7b805
// declared property getter: - (BOOL)isValid;	// 0x31d7b88d
// declared property getter: - (BOOL)muted;	// 0x31d80cb5
// declared property getter: - (double)nextFadeOutDuration;	// 0x31d7bad5
// declared property getter: - (unsigned)numberOfItems;	// 0x31d811cd
- (void)pause;	// 0x31d815d1
- (void)pauseWithFadeout:(float)fadeout;	// 0x31d834dd
- (void)play;	// 0x31d831e1
- (void)playChapterTimeMarkerAtIndex:(unsigned)index;	// 0x31d814c1
- (void)playItemAtIndex:(unsigned)index;	// 0x31d815b9
- (void)playItemAtIndex:(unsigned)index forceRestart:(BOOL)restart;	// 0x31d8154d
// declared property getter: - (double)playableDurationOfCurrentItemIfAvailable;	// 0x31d7ffe9
// declared property getter: - (int)playbackMode;	// 0x31d7b8e1
- (void)prepareVideoLayerForReuse;	// 0x31d80749
- (float)rate;	// 0x31d81161
- (void)reloadFeederWithStartQueueIndex:(unsigned)startQueueIndex;	// 0x31d80665
// declared property getter: - (double)repeatGap;	// 0x31d7bac5
// declared property getter: - (unsigned)repeatType;	// 0x31d81139
- (void)restorePreviousFeederState;	// 0x31d802a9
// declared property getter: - (id)routeNameForVolumeControl;	// 0x31d80c75
- (void)saveCurrentFeederState;	// 0x31d84bc9
// declared property setter: - (void)setAlwaysPlayWheneverPossible:(BOOL)possible;	// 0x31d7b8b5
// declared property setter: - (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)keepUp;	// 0x31d81489
- (void)setAutoclearingDisplayOverridePlaybackState:(unsigned)state;	// 0x31d7cac9
// declared property setter: - (void)setClosedCaptioningEnabled:(BOOL)enabled;	// 0x31d810b9
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x31d81465
- (void)setCurrentTime:(double)time options:(int)options;	// 0x31d825f5
// declared property setter: - (void)setDestination:(id)destination;	// 0x31d83659
// declared property setter: - (void)setDestinationIsTVOut:(BOOL)anOut;	// 0x31d803f9
- (void)setDisplayOverridePlaybackState:(unsigned)state;	// 0x31d7ca15
// declared property setter: - (void)setEQPreset:(int)preset;	// 0x31d81051
// declared property setter: - (void)setFeeder:(id)feeder;	// 0x31d8059d
// declared property setter: - (void)setFeederMode:(int)mode;	// 0x31d7baf5
// declared property setter: - (void)setNextFadeOutDuration:(double)duration;	// 0x31d80fcd
- (void)setPlaybackIndex:(int)index;	// 0x31d823c9
// declared property setter: - (void)setPlaybackMode:(int)mode;	// 0x31d80c29
- (BOOL)setRate:(float)rate;	// 0x31d83139
- (void)setRateForScanning:(float)scanning;	// 0x31d8205d
// declared property setter: - (void)setRepeatGap:(double)gap;	// 0x31d80f69
// declared property setter: - (void)setRepeatType:(unsigned)type;	// 0x31d80eed
// declared property setter: - (void)setShuffleType:(unsigned)type;	// 0x31d80ea1
// declared property setter: - (void)setState:(unsigned)state;	// 0x31d800e5
// declared property setter: - (void)setStopAtEnd:(BOOL)end;	// 0x31d80be9
// declared property setter: - (void)setSubtitlesEnabled:(BOOL)enabled;	// 0x31d80dfd
// declared property setter: - (void)setUseApplicationAudioSession:(BOOL)session;	// 0x31d80b19
// declared property setter: - (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)disabled;	// 0x31d7b931
// declared property setter: - (void)setVolume:(float)volume;	// 0x31d80cd9
- (BOOL)shouldDisplayAsPlaying;	// 0x31d81229
- (BOOL)shouldHaveNoActionAtEndForState:(unsigned)state;	// 0x31d80091
- (BOOL)shouldRouteAudioToDeviceForCurrentItem;	// 0x31d84a75
// declared property getter: - (unsigned)shuffleType;	// 0x31d80dd5
- (void)skipToSeekableEnd;	// 0x31d7fe05
- (void)skipToSeekableStart;	// 0x31d7fe6d
// declared property getter: - (unsigned)state;	// 0x31d80d85
// declared property getter: - (BOOL)stopAtEnd;	// 0x31d7b8f1
// declared property getter: - (BOOL)subtitlesEnabled;	// 0x31d7b8d1
// declared property getter: - (id)subtitlesRecipient;	// 0x31d80551
- (void)switchToAudioPlayback:(BOOL)audioPlayback;	// 0x31d804fd
- (void)switchToVideoPlayback:(BOOL)videoPlayback;	// 0x31d80495
- (double)timeOfPlayableEnd;	// 0x31d84855
- (double)timeOfPlayableStart;	// 0x31d84969
- (double)timeOfSeekableEnd;	// 0x31d7ff51
- (double)timeOfSeekableStart;	// 0x31d7ff9d
- (void)togglePlayback;	// 0x31d8142d
- (void)updateBookkeepingNow;	// 0x31d800f9
// declared property getter: - (BOOL)useApplicationAudioSession;	// 0x31d7b905
// declared property getter: - (BOOL)videoFrameDisplayOnResumeDisabled;	// 0x31d7b91d
// declared property getter: - (id)videoLayer;	// 0x31d80389
// declared property getter: - (float)volume;	// 0x31d80d01
@end
