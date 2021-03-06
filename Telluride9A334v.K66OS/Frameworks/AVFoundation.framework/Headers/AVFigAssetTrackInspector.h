/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrackInspector.h"

@class AVWeakReference, NSMutableArray;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector {
@private
	OpaqueFigAssetTrack *_figAssetTrack;	// 8 = 0x8
	OpaqueFigSimpleMutex *_loadingMutex;	// 12 = 0xc
	OpaqueFigSemaphore *_playabilityValidationSemaphore;	// 16 = 0x10
	dispatch_queue_s *_completionHandlerQueue;	// 20 = 0x14
	int _playableStatus;	// 24 = 0x18
	int _playableResult;	// 28 = 0x1c
	BOOL _playable;	// 32 = 0x20
	NSMutableArray *_loadingBatches;	// 36 = 0x24
	AVWeakReference *_weakReferenceToAsset;	// 40 = 0x28
}
@property(readonly, assign, getter=isPlayable) BOOL playable;	// G=0x354a2391; converted property
- (void)_addFigAssetTrackNotifications;	// 0x354a2c45
- (dispatch_queue_s *)_completionHandlerQueue;	// 0x354a0ed5
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)keyAreLoaded;	// 0x354a25cd
- (OpaqueFigAssetTrack *)_figAssetTrack;	// 0x354a0ec5
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x354a2e85
- (int)_loadStatusForFigAssetTrackProperty:(id)figAssetTrackProperty returningError:(int *)error;	// 0x354a2af9
- (id)_loadingBatches;	// 0x354a0ef5
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x354a0ee5
- (OpaqueFigSemaphore *)_playabilityValidationSemaphore;	// 0x354a0f05
- (void)_removeFigAssetTrackNotifications;	// 0x354a2b7d
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x354a24b9
- (id)asset;	// 0x354a25ad
- (id)availableMetadataFormats;	// 0x354a1bb1
- (id)commonMetadata;	// 0x354a1bf5
- (void)dealloc;	// 0x354a2dbd
- (float)estimatedDataRate;	// 0x354a22a5
- (id)extendedLanguageTag;	// 0x354a2265
- (void)finalize;	// 0x354a2d25
- (id)formatDescriptions;	// 0x354a2499
- (unsigned)hash;	// 0x354a1959
- (BOOL)isEnabled;	// 0x354a2369
- (BOOL)isEqual:(id)equal;	// 0x354a19a1
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x354a1a11
// converted property getter: - (BOOL)isPlayable;	// 0x354a2391
- (BOOL)isSelfContained;	// 0x354a2341
- (id)languageCode;	// 0x354a2285
- (int)layer;	// 0x354a21f1
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x354a2689
- (id)mediaType;	// 0x354a2509
- (id)metadataForFormat:(id)format;	// 0x354a1a39
- (CGSize)naturalSize;	// 0x354a223d
- (int)naturalTimeScale;	// 0x354a22d9
- (float)nominalFrameRate;	// 0x354a21a9
- (CGAffineTransform)preferredTransform;	// 0x354a2215
- (float)preferredVolume;	// 0x354a21c9
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x354a1d0d
- (id)segments;	// 0x354a1ff5
- (void)setIsPlayable:(BOOL)playable result:(long)result;	// 0x354a0f15
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x354a299d
- (XXStruct_yD8eWC)timeRange;	// 0x354a22f9
- (long long)totalSampleDataLength;	// 0x354a2321
- (int)trackID;	// 0x354a2579
@end

