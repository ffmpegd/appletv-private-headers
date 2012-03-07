/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class AVAsset, AVPlayerItem, MPMediaItem, MPAVController, NSURL, MPAlternateTracks, NSString, MPQueueFeeder, NSArray, NSData;

@interface MPAVItem : NSObject {
	AVAsset *_asset;	// 4 = 0x4
	dispatch_queue_s *_assetQueue;	// 8 = 0x8
	AVPlayerItem *_avPlayerItem;	// 12 = 0xc
	BOOL _didAttemptToLoadAsset;	// 16 = 0x10
	BOOL _isAssetLoaded;	// 17 = 0x11
	MPQueueFeeder *_feeder;	// 20 = 0x14
	MPAVController *_player;	// 24 = 0x18
	NSArray *_chapterTimeMarkers;	// 28 = 0x1c
	NSArray *_artworkTimeMarkers;	// 32 = 0x20
	NSArray *_urlTimeMarkers;	// 36 = 0x24
	NSArray *_closedCaptionTimeMarkers;	// 40 = 0x28
	MPAlternateTracks *_alternateTracks;	// 44 = 0x2c
	double _cachedDuration;	// 48 = 0x30
	double _cachedPlayableDuration;	// 56 = 0x38
	unsigned _type;	// 64 = 0x40
	float _defaultPlaybackRate;	// 68 = 0x44
	unsigned _indexInQueueFeeder;	// 72 = 0x48
	unsigned _advancedDuringPlayback : 1;	// 76 = 0x4c
	unsigned _handledFinishTime : 1;	// 76 = 0x4c
	unsigned _hasPlayedThisSession : 1;	// 76 = 0x4c
	unsigned _wasCountedAsSkipped : 1;	// 76 = 0x4c
	unsigned _isStreamable : 2;	// 76 = 0x4c
	unsigned _useCachedPlayableDuration : 1;	// 76 = 0x4c
	unsigned _watchingAttributes : 1;	// 76 = 0x4c
	unsigned _lyricsAvailable : 1;	// 77 = 0x4d
	unsigned _delayedInvalidateCachedPlayedDurationScheduled : 1;	// 77 = 0x4d
	unsigned _timeMarkersNeedLoading : 1;	// 77 = 0x4d
}
@property(readonly, assign, nonatomic) NSString *album;	// G=0x34dda5f5; 
@property(readonly, assign, nonatomic) NSString *albumArtist;	// G=0x34dda5fd; 
@property(readonly, assign, nonatomic) unsigned albumTrackCount;	// G=0x34dda605; 
@property(readonly, assign, nonatomic) unsigned albumTrackNumber;	// G=0x34dda601; 
@property(readonly, assign, nonatomic) MPAlternateTracks *alternateTracks;	// G=0x34ddcea9; @synthesize=_alternateTracks
@property(readonly, assign, nonatomic) NSString *artist;	// G=0x34dda5f9; 
@property(readonly, assign, nonatomic) NSData *artworkImageData;	// G=0x34dda609; 
@property(readonly, assign, nonatomic) NSString *artworkMIMEType;	// G=0x34dda60d; 
@property(retain, nonatomic) NSArray *artworkTimeMarkers;	// G=0x34ddbc4d; S=0x34ddcf7d; @synthesize=_artworkTimeMarkers
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x34dd9821; 
@property(retain, nonatomic) NSArray *chapterTimeMarkers;	// G=0x34ddbc25; S=0x34ddcf59; @synthesize=_chapterTimeMarkers
@property(retain, nonatomic) NSArray *closedCaptionTimeMarkers;	// G=0x34ddbd19; S=0x34ddbc9d; 
@property(readonly, assign, nonatomic) NSString *composer;	// G=0x34dda611; 
@property(readonly, assign, nonatomic) unsigned countForQueueFeeder;	// G=0x34dda635; 
@property(readonly, assign, nonatomic) double currentTimeDisplayOverride;	// G=0x34dda65d; 
@property(assign, nonatomic) float defaultPlaybackRate;	// G=0x34ddced9; S=0x34ddcee9; @synthesize=_defaultPlaybackRate
@property(readonly, assign, nonatomic) unsigned discCount;	// G=0x34dda619; 
@property(readonly, assign, nonatomic) unsigned discNumber;	// G=0x34dda615; 
@property(readonly, assign, nonatomic) NSString *displayableText;	// G=0x34dda6b9; 
@property(readonly, assign, nonatomic) BOOL displayableTextLoaded;	// G=0x34dda671; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x34ddc4e1; 
@property(readonly, assign, nonatomic) double durationFromExternalMetadata;	// G=0x34ddc521; 
@property(readonly, assign, nonatomic) double durationIfAvailable;	// G=0x34ddc5b5; 
@property(readonly, assign, nonatomic) BOOL durationIsValid;	// G=0x34ddc535; 
@property(readonly, assign, nonatomic) BOOL externalProtectionEnabled;	// G=0x34ddc4a1; 
@property(assign, nonatomic) MPQueueFeeder *feeder;	// G=0x34ddceb9; S=0x34ddcec9; @synthesize=_feeder
@property(assign, nonatomic) XXStruct_pwHToB forwardPlaybackEndTime;	// G=0x34dda8b5; S=0x34dda8f5; 
@property(readonly, assign, nonatomic) NSString *genre;	// G=0x34dda631; 
@property(readonly, assign, nonatomic) BOOL hasDataForItemArtwork;	// G=0x34dda751; 
@property(readonly, assign, nonatomic) BOOL hasDisplayableText;	// G=0x34dda755; 
@property(assign, nonatomic) BOOL hasPlayedThisSession;	// G=0x34dda759; S=0x34dda999; 
@property(assign, nonatomic) unsigned indexInQueueFeeder;	// G=0x34ddcf39; S=0x34ddcf49; @synthesize=_indexInQueueFeeder
@property(assign) BOOL isAssetLoaded;	// G=0x34ddcef9; S=0x34ddcf09; @synthesize=_isAssetLoaded
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x34dda6c9; 
@property(readonly, assign, nonatomic) NSString *mainTitle;	// G=0x34dda7dd; 
@property(readonly, assign, nonatomic) MPMediaItem *mediaItem;	// G=0x34e823d9; 
@property(readonly, assign, nonatomic) unsigned long long persistentID;	// G=0x34ddc341; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x34ddc6f9; 
@property(readonly, assign, nonatomic) double playableDurationIfAvailable;	// G=0x34ddc879; 
@property(assign, nonatomic) double playbackCheckpointCurrentTime;	// G=0x34dd9c59; S=0x34dd9c6d; 
@property(assign, nonatomic) MPAVController *player;	// G=0x34ddcf19; S=0x34ddcf29; @synthesize=_player
@property(readonly, assign, nonatomic) AVPlayerItem *playerItem;	// G=0x34dd99fd; 
@property(readonly, assign, nonatomic) NSURL *podcastURL;	// G=0x34dda7e1; 
@property(readonly, assign, nonatomic) CGSize presentationSize;	// G=0x34dda879; 
@property(readonly, assign, nonatomic) BOOL requiresExternalProtection;	// G=0x34ddc479; 
@property(readonly, assign, nonatomic) int status;	// G=0x34dd9bc5; 
@property(readonly, assign, nonatomic, getter=isStreamable) BOOL streamable;	// G=0x34dda76d; 
@property(readonly, assign, nonatomic) double timeOfSeekableEnd;	// G=0x34ddc979; 
@property(readonly, assign, nonatomic) double timeOfSeekableStart;	// G=0x34ddc8c1; 
@property(readonly, assign, nonatomic) unsigned type;	// G=0x34ddc32d; 
@property(retain, nonatomic) NSArray *urlTimeMarkers;	// G=0x34ddbc75; S=0x34ddcfa1; @synthesize=_urlTimeMarkers
@property(readonly, assign, nonatomic) BOOL useEmbeddedChapterData;	// G=0x34ddacc9; 
@property(readonly, assign, nonatomic) float userRating;	// G=0x34ddc33d; 
@property(assign) BOOL userSkippedPlayback;	// G=0x34dd9cfd; S=0x34dd9cd5; converted property
@property(copy, nonatomic) NSString *videoID;	// G=0x34ddc425; S=0x34ddc44d; 
@property(readonly, assign, nonatomic) BOOL wantsSubtitles;	// G=0x34ddc34d; 
+ (id)URLFromPath:(id)path;	// 0x34dd9309
+ (unsigned)defaultScaleMode;	// 0x34dd92d9
+ (void)setDefaultScaleMode:(unsigned)mode;	// 0x34dd92e9
- (id)init;	// 0x34dd93b9
- (id)initWithAsset:(id)asset;	// 0x34dd9445
- (id)initWithURL:(id)url;	// 0x34dd93cd
- (id)initWithURL:(id)url options:(id)options;	// 0x34dd9409
- (void)_checkAllowsBlockingDurationCall;	// 0x34ddaa09
- (void)_delayedInvalidateCachedPlayedDuration;	// 0x34ddca79
- (double)_durationFromExternalMetadataIfAvailable;	// 0x34ddc559
- (double)_durationInSeconds;	// 0x34dd9d11
- (void)_itemAttributeAvailableKey:(id)key;	// 0x34ddcaa9
- (void)_loadAssetAndPlayerItem;	// 0x34dd9721
- (void)_loadTimeMarkersAsync;	// 0x34ddbb05
- (void)_loadTimeMarkersBlocking;	// 0x34ddaccd
- (void)_realoadEmbeddedTimeMarkers;	// 0x34dda9d5
- (void)_releaseAllTimeMarkers;	// 0x34dd9571
// declared property getter: - (id)album;	// 0x34dda5f5
// declared property getter: - (id)albumArtist;	// 0x34dda5fd
// declared property getter: - (unsigned)albumTrackCount;	// 0x34dda605
// declared property getter: - (unsigned)albumTrackNumber;	// 0x34dda601
- (BOOL)allowAutoChangingScaleModeToFill;	// 0x34dd92d5
// declared property getter: - (id)alternateTracks;	// 0x34ddcea9
- (unsigned)alternatesCountForTypes:(unsigned)types;	// 0x34dda72d
// declared property getter: - (id)artist;	// 0x34dda5f9
// declared property getter: - (id)artworkImageData;	// 0x34dda609
// declared property getter: - (id)artworkMIMEType;	// 0x34dda60d
- (id)artworkTimeMarkerForTime:(double)time;	// 0x34ddbe31
// declared property getter: - (id)artworkTimeMarkers;	// 0x34ddbc4d
// declared property getter: - (id)asset;	// 0x34dd9821
- (id)blockForDirectAVControllerNotificationReferencingItem:(id)directAVControllerNotificationReferencingItem;	// 0x34ddcce5
- (id)chapterTimeMarkerForTime:(double)time;	// 0x34ddbd29
// declared property getter: - (id)chapterTimeMarkers;	// 0x34ddbc25
- (id)closedCaptionTimeMarkerForTime:(double)time;	// 0x34ddc041
// declared property getter: - (id)closedCaptionTimeMarkers;	// 0x34ddbd19
// declared property getter: - (id)composer;	// 0x34dda611
// declared property getter: - (unsigned)countForQueueFeeder;	// 0x34dda635
// declared property getter: - (double)currentTimeDisplayOverride;	// 0x34dda65d
- (void)dealloc;	// 0x34dd95f5
// declared property getter: - (float)defaultPlaybackRate;	// 0x34ddced9
// declared property getter: - (unsigned)discCount;	// 0x34dda619
// declared property getter: - (unsigned)discNumber;	// 0x34dda615
// declared property getter: - (id)displayableText;	// 0x34dda6b9
// declared property getter: - (BOOL)displayableTextLoaded;	// 0x34dda671
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x34ddc4e1
// declared property getter: - (double)durationFromExternalMetadata;	// 0x34ddc521
// declared property getter: - (double)durationIfAvailable;	// 0x34ddc5b5
- (double)durationInSeconds;	// 0x34dd9d59
// declared property getter: - (BOOL)durationIsValid;	// 0x34ddc535
// declared property getter: - (BOOL)externalProtectionEnabled;	// 0x34ddc4a1
// declared property getter: - (id)feeder;	// 0x34ddceb9
- (void)flushNowPlayingCaches;	// 0x34dd96f1
// declared property getter: - (XXStruct_pwHToB)forwardPlaybackEndTime;	// 0x34dda8b5
// declared property getter: - (id)genre;	// 0x34dda631
- (BOOL)hasAlternatesForTypes:(unsigned)types;	// 0x34dda709
// declared property getter: - (BOOL)hasDataForItemArtwork;	// 0x34dda751
// declared property getter: - (BOOL)hasDisplayableText;	// 0x34dda755
// declared property getter: - (BOOL)hasPlayedThisSession;	// 0x34dda759
- (id)imageCacheRequestWithSize:(CGSize)size time:(double)time;	// 0x34ddabe9
// declared property getter: - (unsigned)indexInQueueFeeder;	// 0x34ddcf39
// declared property getter: - (BOOL)isAssetLoaded;	// 0x34ddcef9
- (BOOL)isAssetURLValid;	// 0x34dda62d
- (BOOL)isPlaceholderForItem:(id)item;	// 0x34dda629
// declared property getter: - (BOOL)isStreamable;	// 0x34dda76d
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned)speed;	// 0x34dd92fd
- (BOOL)isValidPlayerSubstituteForItem:(id)item;	// 0x34dda61d
- (void)loadAssetAndPlayerItem;	// 0x34dd971d
- (id)localeForAssetTrack:(id)assetTrack;	// 0x34ddab3d
- (id)localizedPositionInPlaylistString;	// 0x34ddc351
// declared property getter: - (id)lyrics;	// 0x34dda6c9
// declared property getter: - (id)mainTitle;	// 0x34dda7dd
// declared property getter: - (id)mediaItem;	// 0x34e823d9
- (CGSize)naturalSize;	// 0x34ddcca9
- (void)notePlaybackFinishedByHittingEnd;	// 0x34dd9c41
- (id)path;	// 0x34dd9dc9
// declared property getter: - (unsigned long long)persistentID;	// 0x34ddc341
// declared property getter: - (double)playableDuration;	// 0x34ddc6f9
// declared property getter: - (double)playableDurationIfAvailable;	// 0x34ddc879
// declared property getter: - (double)playbackCheckpointCurrentTime;	// 0x34dd9c59
- (float)playbackRateForLevel:(unsigned)level direction:(int)direction paused:(BOOL)paused;	// 0x34dda7e5
// declared property getter: - (id)player;	// 0x34ddcf19
// declared property getter: - (id)playerItem;	// 0x34dd99fd
// declared property getter: - (id)podcastURL;	// 0x34dda7e1
- (void)postDurationDidChange;	// 0x34dda5b1
// declared property getter: - (CGSize)presentationSize;	// 0x34dda879
- (void)reevaluateType;	// 0x34ddc149
// declared property getter: - (BOOL)requiresExternalProtection;	// 0x34ddc479
- (void)resetBookkeeping;	// 0x34dd9be5
- (float)scanIntervalForLevel:(unsigned)level paused:(BOOL)paused;	// 0x34dda93d
- (void)setAlternateAudioTrackID:(unsigned)anId;	// 0x34dd9c39
// declared property setter: - (void)setArtworkTimeMarkers:(id)markers;	// 0x34ddcf7d
// declared property setter: - (void)setChapterTimeMarkers:(id)markers;	// 0x34ddcf59
// declared property setter: - (void)setClosedCaptionTimeMarkers:(id)markers;	// 0x34ddbc9d
// declared property setter: - (void)setDefaultPlaybackRate:(float)rate;	// 0x34ddcee9
// declared property setter: - (void)setFeeder:(id)feeder;	// 0x34ddcec9
// declared property setter: - (void)setForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x34dda8f5
// declared property setter: - (void)setHasPlayedThisSession:(BOOL)session;	// 0x34dda999
// declared property setter: - (void)setIndexInQueueFeeder:(unsigned)queueFeeder;	// 0x34ddcf49
// declared property setter: - (void)setIsAssetLoaded:(BOOL)loaded;	// 0x34ddcf09
- (void)setOverrideDuration:(double)duration;	// 0x34dda9c1
// declared property setter: - (void)setPlaybackCheckpointCurrentTime:(double)time;	// 0x34dd9c6d
- (void)setPlaybackFinishedTime:(double)time;	// 0x34dd9c71
- (void)setPlaybackStoppedTime:(double)time;	// 0x34dd9c3d
// declared property setter: - (void)setPlayer:(id)player;	// 0x34ddcf29
- (void)setRating:(float)rating;	// 0x34dd9c89
- (void)setSubtitleTrackID:(unsigned)anId;	// 0x34dd9c8d
// declared property setter: - (void)setUrlTimeMarkers:(id)markers;	// 0x34ddcfa1
- (void)setUserAdvancedDuringPlayback:(BOOL)playback;	// 0x34dd9c91
- (void)setUserEnabledSubtitles:(BOOL)subtitles;	// 0x34dd9ca9
// converted property setter: - (void)setUserSkippedPlayback:(BOOL)playback;	// 0x34dd9cd5
// declared property setter: - (void)setVideoID:(id)anId;	// 0x34ddc44d
- (void)setupPlaybackInfo;	// 0x34dd9ec1
// declared property getter: - (int)status;	// 0x34dd9bc5
// declared property getter: - (double)timeOfSeekableEnd;	// 0x34ddc979
// declared property getter: - (double)timeOfSeekableStart;	// 0x34ddc8c1
- (id)titlesForTime:(double)time;	// 0x34ddacc5
// declared property getter: - (unsigned)type;	// 0x34ddc32d
- (void)updateAttributesForDefaultsChange:(id)defaultsChange;	// 0x34dda5ad
- (id)url;	// 0x34dd9e51
- (id)urlTimeMarkerForTime:(double)time;	// 0x34ddbf39
// declared property getter: - (id)urlTimeMarkers;	// 0x34ddbc75
// declared property getter: - (BOOL)useEmbeddedChapterData;	// 0x34ddacc9
// declared property getter: - (float)userRating;	// 0x34ddc33d
// converted property getter: - (BOOL)userSkippedPlayback;	// 0x34dd9cfd
// declared property getter: - (id)videoID;	// 0x34ddc425
// declared property getter: - (BOOL)wantsSubtitles;	// 0x34ddc34d
@end

