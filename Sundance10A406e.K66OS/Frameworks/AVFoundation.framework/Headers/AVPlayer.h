/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSError, NSArray, AVPlayerInternal;

@interface AVPlayer : NSObject {
	AVPlayerInternal *_player;	// 4 = 0x4
}
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;	// G=0x302bc305; S=0x302bc349; 
@property(readonly, assign, nonatomic) int _externalProtectionStatus;	// G=0x302bc429; 
@property(assign) int actionAtItemEnd;	// G=0x302b7551; S=0x302b7889; converted property
@property(assign) BOOL allowsAirPlayVideo;	// G=0x302b84e1; S=0x302b84f9; converted property
@property(assign) BOOL allowsExternalPlayback;	// G=0x302b7ce1; S=0x302b7dbd; converted property
@property(readonly, assign, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) BOOL audioPlaybackEnabledAtAllRates;	// G=0x302bc6a9; 
@property(assign, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;	// G=0x302b7995; S=0x302b7a71; converted property
@property(assign, nonatomic) BOOL disallowsAMRAudio;	// G=0x302bda1d; S=0x302bdaf9; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x302b4e45; 
@property(retain) id externalPlaybackVideoGravity;	// G=0x302b9241; S=0x302b9285; converted property
@property(retain) id externalVideoGravity;	// G=0x302b9471; S=0x302b9481; converted property
@property(assign) OpaqueCMClock *masterClock;	// G=0x302b7115; S=0x302b7135; converted property
@property(assign, nonatomic) float maxRateForAudioPlayback;	// G=0x302bc9bd; S=0x302bc91d; 
@property(assign, nonatomic) float minRateForAudioPlayback;	// G=0x302bc869; S=0x302bc7c9; 
@property(assign) float rate;	// G=0x302b6741; S=0x302b681d; converted property
@property(readonly, assign, nonatomic) int status;	// G=0x302b4e25; 
@property(assign) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;	// G=0x302b86dd; S=0x302b86f5; converted property
@property(assign) BOOL usesExternalPlaybackWhileExternalScreenIsActive;	// G=0x302b8051; S=0x302b812d; converted property
+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;	// 0x302b789d
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;	// 0x302b86d9
+ (BOOL)automaticallyNotifiesObserversOfAllowsAirPlayVideo;	// 0x302b854d
+ (BOOL)automaticallyNotifiesObserversOfAllowsExternalPlayback;	// 0x302b7f1d
+ (BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;	// 0x302b7b85
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;	// 0x302b51a1
+ (BOOL)automaticallyNotifiesObserversOfDisallowsAMRAudio;	// 0x302bdc0d
+ (BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;	// 0x302b849d
+ (BOOL)automaticallyNotifiesObserversOfMasterClock;	// 0x302b7225
+ (BOOL)automaticallyNotifiesObserversOfRate;	// 0x302b691d
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x302b8749
+ (BOOL)automaticallyNotifiesObserversOfUsesExternalPlaybackWhileExternalScreenIsActive;	// 0x302b828d
+ (BOOL)automaticallyNotifiesObserversOfVolume;	// 0x302b7425
+ (void)initialize;	// 0x302b3f59
+ (id)keyPathsForValuesAffectingActionAtItemEnd;	// 0x302b78a1
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;	// 0x302b7b89
+ (id)keyPathsForValuesAffectingRate;	// 0x302b6921
+ (id)playerWithPlayerItem:(id)playerItem;	// 0x302b3fbd
+ (id)playerWithURL:(id)url;	// 0x302b3f75
- (id)init;	// 0x302b407d
- (id)initWithDispatchQueue:(id)dispatchQueue;	// 0x302b45ad
- (id)initWithPlayerItem:(id)playerItem;	// 0x302b4005
- (id)initWithURL:(id)url;	// 0x302b4041
- (BOOL)_CALayerDestinationIsTVOut;	// 0x302bd6d5
- (int)_actionAtItemEnd;	// 0x302b742d
- (void)_addFPListeners;	// 0x302b9599
- (void)_addLayer:(id)layer;	// 0x302b8ff5
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem;	// 0x302b51a5
- (BOOL)_airPlayVideoActive;	// 0x302b8551
- (BOOL)_allowsExternalPlayback;	// 0x302b7bb1
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;	// 0x302bca71
- (BOOL)_attachItem:(id)item andPerformOperation:(int)operation withObject:(id)object;	// 0x302b563d
- (void)_attachLayersToFigPlayer;	// 0x302b8c7d
- (id)_cachedValueForKey:(id)key;	// 0x302b4b01
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id)handler;	// 0x302b6d61
- (void)_changeStatusToFailedWithError:(id)error;	// 0x302b4e89
- (void)_checkDefaultsWriteForPerformanceLogging;	// 0x302b9ae1
- (id)_clientName;	// 0x302bd4d9
- (void)_coordinateWithRemovalOfItem:(id)item;	// 0x302b63c9
- (int)_createPrerollID;	// 0x302b6d05
- (id)_currentItem;	// 0x302b4f75
- (void)_currentItemStatusIsReadyToPlay;	// 0x302b50fd
- (id)_currentSubtitlesPayload;	// 0x302b9919
- (int)_defaultActionAtItemEnd;	// 0x302b7429
- (void)_detachLayersFromFigPlayer;	// 0x302b8d61
- (void)_didAccessKVOForKey:(id)key;	// 0x302b4b8d
- (void)_didFinishSuspension:(id)suspension;	// 0x302bd0a9
- (BOOL)_disallowsAMRAudio;	// 0x302bd971
// declared property getter: - (id)_displaysUsedForPlayback;	// 0x302bc305
- (void)_enumerateItemsUsingBlock:(id)block;	// 0x302b6545
- (BOOL)_externalPlaybackActive;	// 0x302b8291
// declared property getter: - (int)_externalProtectionStatus;	// 0x302bc429
- (OpaqueFigPlayer *)_figPlayer;	// 0x302b4ac1
- (id)_fpNotificationNames;	// 0x302b9491
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;	// 0x302bcc19
- (BOOL)_iapdExtendedModeIsActive;	// 0x302bcce9
- (BOOL)_insertItem:(id)item afterItem:(id)item2;	// 0x302b561d
- (BOOL)_insertPlaybackItemOfItem:(id)item inPlayerQueueAfterPlaybackItemOfItem:(id)item2;	// 0x302b5595
- (BOOL)_isClosedCaptionDisplayEnabled;	// 0x302b78c9
- (int)_itemOkayToPlayWhileTransitioningToBackground:(id)background;	// 0x302bcd49
- (id)_items;	// 0x302b65a5
- (void)_logPerformanceDataForCurrentItem;	// 0x302b9c61
- (void)_logPerformanceDataForPreviousItem;	// 0x302b9b45
- (BOOL)_outputObscuredDueToInsufficientExternalProtection;	// 0x302bc4d5
- (id)_pixelBufferAttributeMediator;	// 0x302b8b41
- (id)_playbackDisplaysForFigPlayer;	// 0x302bc21d
- (void)_playerDestinationPixelBufferAttributesDidChange:(id)_playerDestinationPixelBufferAttributes;	// 0x302b4f0d
- (id)_playerLayers;	// 0x302b8b61
- (id)_propertyStorage;	// 0x302b4ae1
- (float)_rate;	// 0x302b66c1
- (void)_removeAllItems;	// 0x302b6671
- (void)_removeAllLayers;	// 0x302b8a51
- (void)_removeFPListeners;	// 0x302b9755
- (BOOL)_removeItem:(id)item;	// 0x302b64b1
- (void)_removeLayer:(id)layer;	// 0x302b8dad
- (BOOL)_resumePlayback:(double)playback error:(id *)error;	// 0x302bd831
- (void)_setActionAtItemEnd:(int)itemEnd allowingAdvance:(BOOL)advance;	// 0x302b763d
- (void)_setCALayerDestinationIsTVOut:(BOOL)anOut;	// 0x302bd631
- (void)_setCachedValue:(id)value forKey:(id)key;	// 0x302b4b2d
- (void)_setClientName:(id)name;	// 0x302bd591
- (void)_setCurrentItem:(id)item;	// 0x302b4fcd
- (void)_setCurrentSubtitlesPayload:(id)payload;	// 0x302b98c1
// declared property setter: - (void)_setDisplaysUsedForPlayback:(id)playback;	// 0x302bc349
- (void)_setEQPreset:(int)preset;	// 0x302bd3a1
- (void)_setFigPlaybackItemToMakeCurrent:(OpaqueFigPlaybackItem *)makeCurrent;	// 0x302b98a1
- (void)_setNeroVideoGravityOnFigPlayer;	// 0x302b9321
- (void)_setPreferredLanguageList:(id)list;	// 0x302bd791
- (void)_setStoppingFadeOutDuration:(float)duration;	// 0x302bd439
- (void)_setVolume:(float)volume;	// 0x302b734d
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)inactive;	// 0x302bd2fd
- (BOOL)_shouldDetachContentLayersFromFigPlayer;	// 0x302bd049
- (BOOL)_shouldLogPerformanceData;	// 0x302b9b25
- (id)_stateDispatchQueue;	// 0x302b4aa1
- (id)_unregisterAndReturnRetainedPrerollCompletionHandler;	// 0x302b6f0d
- (BOOL)_usesExternalPlaybackWhileExternalScreenIsActive;	// 0x302b7f21
- (float)_volume;	// 0x302b7229
- (id)_weakReference;	// 0x302b4a71
- (void)_willAccessKVOForKey:(id)key;	// 0x302b4b61
- (void)_willEnterForeground:(id)foreground;	// 0x302bd1ed
// converted property getter: - (int)actionAtItemEnd;	// 0x302b7551
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(id)queue usingBlock:(id)block;	// 0x302b88a5
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x302b4c79
- (id)addPeriodicTimeObserverForInterval:(XXStruct_pwHToB)interval queue:(id)queue usingBlock:(id)block;	// 0x302b87c5
// converted property getter: - (BOOL)allowsAirPlayVideo;	// 0x302b84e1
// converted property getter: - (BOOL)allowsExternalPlayback;	// 0x302b7ce1
- (void)cancelPendingPrerolls;	// 0x302b7011
- (id)currentItem;	// 0x302b4f95
- (XXStruct_pwHToB)currentTime;	// 0x302b6949
- (void)dealloc;	// 0x302b4619
- (void)didChangeValueForKey:(id)key;	// 0x302b4c19
// declared property getter: - (BOOL)disallowsAMRAudio;	// 0x302bda1d
- (id)dispatchQueue;	// 0x302b4a91
// declared property getter: - (id)error;	// 0x302b4e45
- (int)externalPlaybackType;	// 0x302b84a1
// converted property getter: - (id)externalPlaybackVideoGravity;	// 0x302b9241
// converted property getter: - (id)externalVideoGravity;	// 0x302b9471
- (void)finalize;	// 0x302b492d
- (BOOL)isAirPlayVideoActive;	// 0x302b85fd
// declared property getter: - (BOOL)isAudioPlaybackEnabledAtAllRates;	// 0x302bc6a9
// converted property getter: - (BOOL)isClosedCaptionDisplayEnabled;	// 0x302b7995
- (BOOL)isExternalPlaybackActive;	// 0x302b83c1
// converted property getter: - (OpaqueCMClock *)masterClock;	// 0x302b7115
// declared property getter: - (float)maxRateForAudioPlayback;	// 0x302bc9bd
// declared property getter: - (float)minRateForAudioPlayback;	// 0x302bc869
- (BOOL)outputObscuredDueToInsufficientExternalProtection;	// 0x302bc4f1
- (void)pause;	// 0x302b8761
- (void)play;	// 0x302b874d
- (id)playerAVAudioSession;	// 0x302bd92d
- (void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;	// 0x302b55fd
- (void)prerollAtRate:(float)rate completionHandler:(id)handler;	// 0x302b6f51
- (void)prerollOperationDidComplete:(BOOL)prerollOperation notificationPayload:(CFDictionaryRef)payload;	// 0x302b7025
// converted property getter: - (float)rate;	// 0x302b6741
- (void)removeAudioPlaybackRateLimits;	// 0x302bc5cd
- (void)removeTimeObserver:(id)observer;	// 0x302b896d
- (void)replaceCurrentItemWithPlayerItem:(id)playerItem;	// 0x302b8775
- (void)seekToDate:(id)date;	// 0x302b69a9
- (void)seekToDate:(id)date completionHandler:(id)handler;	// 0x302b69d9
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x302b6a0d
- (void)seekToTime:(XXStruct_pwHToB)time completionHandler:(id)handler;	// 0x302b6af9
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x302b6a59
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after completionHandler:(id)handler;	// 0x302b6b85
// converted property setter: - (void)setActionAtItemEnd:(int)itemEnd;	// 0x302b7889
// converted property setter: - (void)setAllowsAirPlayVideo:(BOOL)video;	// 0x302b84f9
// converted property setter: - (void)setAllowsExternalPlayback:(BOOL)playback;	// 0x302b7dbd
// converted property setter: - (void)setClosedCaptionDisplayEnabled:(BOOL)enabled;	// 0x302b7a71
// declared property setter: - (void)setDisallowsAMRAudio:(BOOL)audio;	// 0x302bdaf9
// converted property setter: - (void)setExternalPlaybackVideoGravity:(id)gravity;	// 0x302b9285
// converted property setter: - (void)setExternalVideoGravity:(id)gravity;	// 0x302b9481
// converted property setter: - (void)setMasterClock:(OpaqueCMClock *)clock;	// 0x302b7135
// declared property setter: - (void)setMaxRateForAudioPlayback:(float)audioPlayback;	// 0x302bc91d
// declared property setter: - (void)setMinRateForAudioPlayback:(float)audioPlayback;	// 0x302bc7c9
// converted property setter: - (void)setRate:(float)rate;	// 0x302b681d
- (void)setRate:(float)rate time:(XXStruct_pwHToB)time atHostTime:(XXStruct_pwHToB)hostTime;	// 0x302b6c31
// converted property setter: - (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)active;	// 0x302b86f5
// converted property setter: - (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)active;	// 0x302b812d
// declared property getter: - (int)status;	// 0x302b4e25
// converted property getter: - (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x302b86dd
// converted property getter: - (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;	// 0x302b8051
- (void)willChangeValueForKey:(id)key;	// 0x302b4bb9
@end

