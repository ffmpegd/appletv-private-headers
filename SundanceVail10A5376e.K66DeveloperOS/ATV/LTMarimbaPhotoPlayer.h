/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MPAssetKeyDelegate.h"
#import "AppleTV-Structs.h"
#import "BRMediaPlayer.h"

@class NSMutableDictionary, NSTimer, BRImageManager, ATVDataServer, NSArray, ATVDataQuery, ATVDataCollection, BRMarimbaSlideshowControl, NSString, NSDictionary, BRControl, BRAsyncTask;

__attribute__((visibility("hidden")))
@interface LTMarimbaPhotoPlayer : BRMediaPlayer <MPAssetKeyDelegate> {
	BRControl *_tempVisuals;	// 8 = 0x8
	NSTimer *_spinnerTimer;	// 12 = 0xc
	BRAsyncTask *_preloadImageTask;	// 16 = 0x10
	NSString *_assetIDBeingLoaded;	// 20 = 0x14
	BRMarimbaSlideshowControl *_visuals;	// 24 = 0x18
	NSArray *_assets;	// 28 = 0x1c
	BRMediaPlayer *_audioPlayer;	// 32 = 0x20
	id _musicServerID;	// 36 = 0x24
	id _musicPlaylistID;	// 40 = 0x28
	ATVDataServer *_musicServerRef;	// 44 = 0x2c
	ATVDataCollection *_musicPlaylistRef;	// 48 = 0x30
	ATVDataQuery *_playlistsQuery;	// 52 = 0x34
	ATVDataQuery *_songsQuery;	// 56 = 0x38
	NSDictionary *_slideshowPlaybackOptions;	// 60 = 0x3c
	NSArray *_orderedPhotoAssets;	// 64 = 0x40
	NSTimer *_screensaverTickleTimer;	// 68 = 0x44
	int _state;	// 72 = 0x48
	int _numPreloadAttemptsToMake;	// 76 = 0x4c
	int _numPreloadSuccesses;	// 80 = 0x50
	int _indexOfNextImageToPreload;	// 84 = 0x54
	long _startIndex;	// 88 = 0x58
	int _imageSizeToLoad;	// 92 = 0x5c
	BOOL _initialImagePrefetchInProgress;	// 96 = 0x60
	BOOL _playbackInitiated;	// 97 = 0x61
	BOOL _shuffleSet;	// 98 = 0x62
	BOOL _shuffle;	// 99 = 0x63
	BOOL _repeatModeSet;	// 100 = 0x64
	int _repeatMode;	// 104 = 0x68
	BOOL _muted;	// 108 = 0x6c
	BOOL _weOwnMusicPlayback;	// 109 = 0x6d
	BOOL _musicPlaybackOnwershipPermanentlyRelinquished;	// 110 = 0x6e
	BRImageManager *_preferredImageManager;	// 112 = 0x70
	BOOL _preloadingDisabled;	// 116 = 0x74
	BOOL _substitute;	// 117 = 0x75
	int _substituteIndex;	// 120 = 0x78
	BOOL _preloadingComplete;	// 124 = 0x7c
	BOOL _marimbaVisualsOnDisplay;	// 125 = 0x7d
	BOOL _musicPrefetchInProgress;	// 126 = 0x7e
	BOOL _documentSetupComplete;	// 127 = 0x7f
	float _lastRemovedEffectsTime;	// 128 = 0x80
	NSArray *_pendingAssets;	// 132 = 0x84
	NSString *_uniqueIDForPlayPauseRegistration;	// 136 = 0x88
	int _marimbaDidAddEffectsVisitCounter;	// 140 = 0x8c
	NSMutableDictionary *_assetKeyToAssetMap;	// 144 = 0x90
	id _musicQueryToRun;	// 148 = 0x94
	int _imageManagerPruneCountToRestore;	// 152 = 0x98
	int _imageLoadBatchCounter;	// 156 = 0x9c
}
@property(assign, nonatomic) int imageLoadBatchCounter;	// G=0x4410d; S=0x4411d; @synthesize=_imageLoadBatchCounter
@property(assign, nonatomic) int imageManagerPruneCountToRestore;	// G=0x440ed; S=0x440fd; @synthesize=_imageManagerPruneCountToRestore
@property(copy, nonatomic) id musicQueryToRun;	// G=0x440c9; S=0x440dd; @synthesize=_musicQueryToRun
@property(assign) BOOL muted;	// G=0x43b55; S=0x43af9; converted property
@property(retain) id playerSpecificOptions;	// G=0x43705; S=0x4354d; converted property
@property(assign) int repeatMode;	// G=0x437c9; S=0x437a5; converted property
@property(assign) BOOL shufflePlayback;	// G=0x4373d; S=0x43719; converted property
@property(readonly, retain) BRMarimbaSlideshowControl *visuals;	// G=0x434c9; converted property
@property(assign) float volume;	// G=0x43a59; S=0x439f1; converted property
+ (id)contentTypes;	// 0x42b29
- (id)init;	// 0x42bbd
- (void).cxx_destruct;	// 0x4412d
- (void)_applyDocumentChangesAfterTransition:(id)transition;	// 0x46d59
- (void)_applyPlayerSpecificOptions;	// 0x46479
- (void)_authorizationAttemptComplete:(id)complete;	// 0x49845
- (void)_authorizeMedia;	// 0x4833d
- (void)_beginMusicPrefetch;	// 0x450dd
- (void)_beginMusicPrefetchFromDefaults;	// 0x44db1
- (void)_beginMusicPrefetchFromPlayerOptions;	// 0x44a99
- (void)_cancelMusicPrefetch;	// 0x452bd
- (void)_configureImageManagerPruneCount;	// 0x442dd
- (void)_cueMedia;	// 0x48431
- (id)_dataClient;	// 0x47b79
- (void)_dataClientStatusChanged:(id)changed;	// 0x49b41
- (BOOL)_handlePauseActionWithError:(id *)error;	// 0x48d29
- (BOOL)_handlePlayActionWithError:(id *)error;	// 0x48e3d
- (BOOL)_handleStopActionWithError:(id *)error;	// 0x48a29
- (void)_imageWritten:(id)written;	// 0x490c9
- (int)_indexOfAssetPathInOrderedAssets:(id)orderedAssets;	// 0x48785
- (void)_loadFailed:(id)failed;	// 0x49229
- (void)_marimbaDidAddEffects:(id)_marimba;	// 0x49761
- (void)_marimbaSlideshowPlaybackFinished:(id)finished;	// 0x493e9
- (void)_marimbaSlideshowWillRepeat:(id)_marimbaSlideshow;	// 0x493fd
- (void)_needPathsNotification:(id)notification;	// 0x49341
- (void)_newPhotoPlayerPlaying:(id)playing;	// 0x49375
- (id)_pathForLocalAssetID:(id)localAssetID;	// 0x48711
- (void)_playerError:(id)error;	// 0x49a3d
- (void)_playerMediaCued:(id)cued;	// 0x49969
- (void)_playlistsQueryComplete;	// 0x47c25
- (void)_preloadNextImage;	// 0x443a1
- (int)_preloadSuccessThresholdForStyle:(id)style;	// 0x4882d
- (void)_reorderImages;	// 0x4532d
- (void)_restoreImageManagerPruneCount;	// 0x44361
- (void)_runPlaylistsQuery;	// 0x4796d
- (void)_runSongsQuery;	// 0x47ded
- (void)_setMusic;	// 0x477c5
- (void)_setNewMedia:(id)media;	// 0x48931
- (void)_setNewState:(int)state;	// 0x489bd
- (void)_setPlaylistsQuery:(id)query;	// 0x47b25
- (void)_setSlideshowTheme;	// 0x46dad
- (void)_setSongsQuery:(id)query;	// 0x4806d
- (void)_setTimePerSlide;	// 0x47381
- (void)_setTransition;	// 0x46f21
- (void)_setupDocument;	// 0x45e51
- (void)_songsQueryComplete;	// 0x480c1
- (void)_speakVOString:(id)string;	// 0x48889
- (void)_spinnerTimerFired;	// 0x45491
- (void)_startPreloadTask;	// 0x44a3d
- (void)_startScreenSaverTickleTimer;	// 0x485b9
- (void)_startSlideshowIfReady;	// 0x463e9
- (void)_stopScreenSaverTickleTimer;	// 0x48689
- (void)_tickleScreensaver:(id)screensaver;	// 0x486bd
- (void)_triggerPreloadOfNextImage;	// 0x44869
- (void)_updateDocumentForNewMedia;	// 0x45681
- (void)_updateForNewMedia;	// 0x45c59
- (void)_updatePreloadingStateForLastPlayed:(id)lastPlayed;	// 0x446e5
- (id)absolutePathForAssetKey:(id)assetKey;	// 0x43b65
- (id)absolutePathForAssetKey:(id)assetKey andSize:(CGSize)size;	// 0x43f2d
- (id)absolutePathForStillAssetAtPath:(id)path andSize:(CGSize)size;	// 0x43f3d
- (id)collection;	// 0x433e5
- (void)dealloc;	// 0x42f29
// declared property getter: - (int)imageLoadBatchCounter;	// 0x4410d
// declared property getter: - (int)imageManagerPruneCountToRestore;	// 0x440ed
- (id)media;	// 0x433e9
// declared property getter: - (id)musicQueryToRun;	// 0x440c9
// converted property getter: - (BOOL)muted;	// 0x43b55
- (void)nextMedia;	// 0x438e1
// converted property getter: - (id)playerSpecificOptions;	// 0x43705
- (int)playerState;	// 0x434b5
- (BOOL)playingVisualContent;	// 0x434c5
- (void)previousMedia;	// 0x43839
// converted property getter: - (int)repeatMode;	// 0x437c9
- (CGImageRef)retainedCGImageForAssetKey:(id)assetKey andSize:(CGSize)size;	// 0x43f41
- (BOOL)reverseTouchSwipeBehavior;	// 0x43101
// declared property setter: - (void)setImageLoadBatchCounter:(int)counter;	// 0x4411d
// declared property setter: - (void)setImageManagerPruneCountToRestore:(int)restore;	// 0x440fd
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(id)list;	// 0x43375
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x43105
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x43151
// declared property setter: - (void)setMusicQueryToRun:(id)run;	// 0x440dd
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x43af9
// converted property setter: - (void)setPlayerSpecificOptions:(id)options;	// 0x4354d
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x437a5
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x43719
- (BOOL)setState:(int)state error:(id *)error;	// 0x43455
// converted property setter: - (void)setVolume:(float)volume;	// 0x439f1
// converted property getter: - (BOOL)shufflePlayback;	// 0x4373d
- (BOOL)stopsActiveAudioPlayer;	// 0x430fd
- (BOOL)supportsRepeatModes;	// 0x43835
- (BOOL)supportsVolumeControl;	// 0x43989
// converted property getter: - (id)visuals;	// 0x434c9
// converted property getter: - (float)volume;	// 0x43a59
@end

