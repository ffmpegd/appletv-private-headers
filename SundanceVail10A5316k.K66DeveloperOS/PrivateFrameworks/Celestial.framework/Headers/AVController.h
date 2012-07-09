/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVController : NSObject {
@private
	AVControllerPrivate *_priv;	// 4 = 0x4
}
@property(assign) double currentTime;	// G=0x33c04079; S=0x33c1fff5; converted property
@property(assign) id delegate;	// G=0x33c21911; S=0x33c036d5; converted property
@property(assign) BOOL muted;	// G=0x33c20399; S=0x33c2055d; converted property
@property(retain) id outputQTESFilePath;	// G=0x33c09761; S=0x33c20885; converted property
@property(retain) id queue;	// G=0x33c1ef79; S=0x33c00d55; converted property
@property(retain) id queueFeeder;	// G=0x33c1f97d; S=0x33c0d9b5; converted property
@property(assign) BOOL shouldDisplayClosedCaptions;	// G=0x33c2098d; S=0x33c03a19; converted property
@property(assign) BOOL vibrationEnabled;	// G=0x33c1e8b1; S=0x33c1e8c9; converted property
@property(retain) id vibrationPattern;	// G=0x33c1e9a1; S=0x33c1e921; converted property
@property(assign) OpaqueFigVisualContext *visualContext;	// G=0x33c20745; S=0x33c20759; converted property
@property(assign) float volume;	// G=0x33c035b9; S=0x33c0ded5; converted property
+ (id)avController;	// 0x33c1eb99
+ (id)avControllerWithQueue:(id)queue error:(id *)error;	// 0x33c1ebd5
+ (id)compatibleAudioRouteForRoute:(id)route;	// 0x33c1e9e1
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inDictionaries:(id)dictionaries;	// 0x33c1ec15
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x33c0c6e1
+ (BOOL)isSupportedFileExtension:(id)extension;	// 0x33c1eb45
+ (BOOL)isSupportedMimeType:(id)type;	// 0x33c1eaf1
+ (void)setEnableNetworkMode:(BOOL)mode;	// 0x33c0e025
- (id)init;	// 0x33c0032d
- (id)initForStreaming;	// 0x33c1ede1
- (id)initWithError:(id *)error;	// 0x33c00acd
- (id)initWithQueue:(id)queue error:(id *)error;	// 0x33c00341
- (id)initWithQueue:(id)queue fmpType:(unsigned)type error:(id *)error;	// 0x33c00379
- (id)_figPlayerNotifications;	// 0x33c21a4d
- (BOOL)activate:(id *)activate;	// 0x33c1fd71
- (id)addNextFeederItemToQueue;	// 0x33c04431
- (void)applyDesiredRepeatMode;	// 0x33c21441
- (id)attributeForKey:(id)key;	// 0x33c02c99
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)notification;	// 0x33c01989
- (BOOL)beginInterruption:(id *)interruption;	// 0x33c1fc49
- (BOOL)beginRepeatGap;	// 0x33c0e5c5
- (id)bookmarkGroupIDForAVItem:(id)avitem;	// 0x33c06251
- (double)bookmarkTimeForAVItem:(id)avitem;	// 0x33c06279
- (BOOL)canBeginInterruption;	// 0x33c1fcfd
- (void)cancelAllCGImageRequests;	// 0x33c21041
- (void)cancelContinueAfterRepeatGap;	// 0x33c08a19
- (void)checkQueueSpace;	// 0x33c043a5
- (void)continueAfterRepeatGap;	// 0x33c1f9a5
- (long)copyImageForTime:(CVBufferRef *)time time:(const XXStruct_pwHToB *)time2;	// 0x33c1ef6d
- (OpaqueFigPlaybackItem *)createItemWithURL:(id)url flags:(unsigned long)flags error:(int *)error;	// 0x33c09601
- (OpaqueFigPlaybackItem *)currentFPItem;	// 0x33c041f1
- (id)currentItem;	// 0x33c04211
- (void)currentItemHasChanged:(id)changed;	// 0x33c06e71
- (void)currentItemWillChangeToItem:(id)currentItem oldItemCurrentTime:(double)time;	// 0x33c0697d
// converted property getter: - (double)currentTime;	// 0x33c04079
- (void)dealloc;	// 0x33c153dd
// converted property getter: - (id)delegate;	// 0x33c21911
- (void)dequeueDeadItem;	// 0x33c225bd
- (void)dequeueFirstItem;	// 0x33c0cb89
- (void)endInterruptionWithStatus:(id)status;	// 0x33c1fed5
- (void)ensurePlaybackQueueImmed;	// 0x33c22401
- (int)eqPreset;	// 0x33c20731
- (id)errorWithDescription:(id)description code:(long)code;	// 0x33c1fbad
- (void)feederInvalidatedWithCurrentItemMoved:(id)currentItemMoved;	// 0x33c1f715
- (void)feederRangeWasInserted:(id)inserted;	// 0x33c1ef8d
- (void)feederRangeWasRemoved:(id)removed;	// 0x33c1f3dd
- (void)figPlayerNotificationHandler:(id)handler;	// 0x33c225e9
- (void)fmpEffectiveVolumeDidChange;	// 0x33c21281
- (void)fpItemNotification:(id)notification sender:(id)sender;	// 0x33c07435
- (CGImageRef)grabCGImageAtTime:(double)time withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions actualTime:(double *)time4;	// 0x33c14cf1
- (BOOL)havePlayedCurrentItem;	// 0x33c1f991
- (unsigned)indexOfCurrentQueueFeederItem;	// 0x33c0c7b9
- (BOOL)isCurrentItemReady;	// 0x33c223b5
- (BOOL)isNewImageAvailableForTime:(const XXStruct_pwHToB *)time willNeverBeAvailable:(BOOL *)available;	// 0x33c1ef69
- (BOOL)isValid;	// 0x33c219ed
- (void)itemHasFinishedPlayingNotification:(id)notification;	// 0x33c0e465
- (id)lkLayer;	// 0x33c20979
- (void)logPerformanceDataForCurrentItem;	// 0x33c21e4d
- (void)makeCurrentItemReady;	// 0x33c08a59
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x33c0d96d
// converted property getter: - (BOOL)muted;	// 0x33c20399
- (BOOL)okToNotifyFromThisThread;	// 0x33c06d45
// converted property getter: - (id)outputQTESFilePath;	// 0x33c09761
- (void)pause;	// 0x33c0c7a5
- (BOOL)play:(id *)play;	// 0x33c1fa79
- (BOOL)playNextItem:(id *)item;	// 0x33c0ca5d
- (AVControllerPrivate *)privateStorage;	// 0x33c1ef59
// converted property getter: - (id)queue;	// 0x33c1ef79
// converted property getter: - (id)queueFeeder;	// 0x33c1f97d
- (float)rate;	// 0x33c07075
- (void)rateDidChangeToRate:(float)rate;	// 0x33c0b019
- (void)registerTimeMarkerObserver:(id)observer forItem:(id)item times:(id)times context:(id)context;	// 0x33c22249
- (void)removeObserver:(id)observer fromTMOArray:(id)tmoarray;	// 0x33c0d60d
- (int)repeatMode;	// 0x33c0d99d
- (void)requestAsyncCGImagesAtTimes:(id)times requestIDs:(id)ids withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x33c20bad
- (void)requestAsyncCGImagesAtTimes:(id)times withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x33c20b89
- (BOOL)resumePlayback:(double)playback error:(id *)error;	// 0x33c1fa95
- (void)safeSubtitleCommandPosted:(void *)posted;	// 0x33c21929
- (void)scheduleQueueSpaceCheck;	// 0x33c086b5
- (void)scheduleUpdateTimeMarkerObservations;	// 0x33c07195
- (void)seekToDate:(id)date;	// 0x33c200dd
- (void)setAVItemClass:(Class)aClass;	// 0x33c1ed01
- (void)setApplyVideoTrackMatrix;	// 0x33c209a5
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x33c01dbd
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x33c1fff5
- (void)setCurrentTime:(double)time options:(int)options;	// 0x33c0db35
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33c036d5
- (void)setEQPreset:(int)preset;	// 0x33c037e1
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned)currentQueueFeederItem error:(id *)error;	// 0x33c0c821
- (void)setLayer:(id)layer;	// 0x33c03b15
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x33c2055d
// converted property setter: - (void)setOutputQTESFilePath:(id)path;	// 0x33c20885
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x33c224e1
// converted property setter: - (void)setQueue:(id)queue;	// 0x33c00d55
// converted property setter: - (void)setQueueFeeder:(id)feeder;	// 0x33c0d9b5
- (void)setQueueFeeder:(id)feeder withIndex:(int)index;	// 0x33c03d41
- (BOOL)setRate:(float)rate error:(id *)error;	// 0x33c08809
- (BOOL)setRepeatMode:(int)mode;	// 0x33c03c49
// converted property setter: - (void)setShouldDisplayClosedCaptions:(BOOL)displayClosedCaptions;	// 0x33c03a19
- (void)setSubtitleRecipient:(id)recipient;	// 0x33c03915
// converted property setter: - (void)setVibrationEnabled:(BOOL)enabled;	// 0x33c1e8c9
// converted property setter: - (void)setVibrationPattern:(id)pattern;	// 0x33c1e921
// converted property setter: - (void)setVisualContext:(OpaqueFigVisualContext *)context;	// 0x33c20759
// converted property setter: - (void)setVolume:(float)volume;	// 0x33c0ded5
- (BOOL)shouldBeginPlayingItem:(id)item error:(id *)error;	// 0x33c0a1b9
// converted property getter: - (BOOL)shouldDisplayClosedCaptions;	// 0x33c2098d
- (void)stepByCount:(int)count;	// 0x33c201f5
- (void)unregisterTimeMarkerObserver:(id)observer forItem:(id)item;	// 0x33c0d489
- (long)updateActionAtEnd;	// 0x33c03a2d
- (void)updateTimeMarkerObservations;	// 0x33c0a3d9
// converted property getter: - (BOOL)vibrationEnabled;	// 0x33c1e8b1
// converted property getter: - (id)vibrationPattern;	// 0x33c1e9a1
// converted property getter: - (OpaqueFigVisualContext *)visualContext;	// 0x33c20745
// converted property getter: - (float)volume;	// 0x33c035b9
@end
