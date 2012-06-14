/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrackInspector.h"

@class NSMutableArray, AVWeakReference;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector {
@private
	OpaqueFigAssetTrack *_figAssetTrack;	// 8 = 0x8
	OpaqueFigSimpleMutex *_loadingMutex;	// 12 = 0xc
	OpaqueFigSemaphore *_playabilityValidationSemaphore;	// 16 = 0x10
	dispatch_queue_s *_completionHandlerQueue;	// 20 = 0x14
	int _playableStatus;	// 24 = 0x18
	long _playableResult;	// 28 = 0x1c
	BOOL _playable;	// 32 = 0x20
	NSMutableArray *_loadingBatches;	// 36 = 0x24
	AVWeakReference *_weakReferenceToAsset;	// 40 = 0x28
}
@property(readonly, assign, getter=isPlayable) BOOL playable;	// G=0x326f6565; converted property
- (void)_addFigAssetTrackNotifications;	// 0x326f5839
- (dispatch_queue_s *)_completionHandlerQueue;	// 0x326f63e1
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)keyAreLoaded;	// 0x326f62ed
- (OpaqueFigAssetTrack *)_figAssetTrack;	// 0x326f63d1
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x326f54a5
- (int)_loadStatusForFigAssetTrackProperty:(id)figAssetTrackProperty returningError:(int *)error;	// 0x326f5d6d
- (id)_loadingBatches;	// 0x326f6401
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x326f63f1
- (OpaqueFigSemaphore *)_playabilityValidationSemaphore;	// 0x326f6411
- (void)_removeFigAssetTrackNotifications;	// 0x326f5ca5
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x326f64bd
- (id)asset;	// 0x326f63b1
- (id)availableMetadataFormats;	// 0x326f6e69
- (id)commonMetadata;	// 0x326f6d51
- (void)dealloc;	// 0x326f56d5
- (float)estimatedDataRate;	// 0x326f6739
- (id)extendedLanguageTag;	// 0x326f678d
- (void)finalize;	// 0x326f57a1
- (id)formatDescriptions;	// 0x326f6509
- (unsigned)hash;	// 0x326f70b9
- (BOOL)isEnabled;	// 0x326f6679
- (BOOL)isEqual:(id)equal;	// 0x326f7049
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x326f7021
// converted property getter: - (BOOL)isPlayable;	// 0x326f6565
- (BOOL)isSelfContained;	// 0x326f66a1
- (id)languageCode;	// 0x326f676d
- (int)layer;	// 0x326f680d
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x326f5f41
- (id)mediaType;	// 0x326f6455
- (id)metadataForFormat:(id)format;	// 0x326f6eb1
- (CGSize)naturalSize;	// 0x326f67ad
- (int)naturalTimeScale;	// 0x326f6719
- (float)nominalFrameRate;	// 0x326f6855
- (CGAffineTransform)preferredTransform;	// 0x326f67dd
- (float)preferredVolume;	// 0x326f6831
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x326f6a35
- (id)segments;	// 0x326f6875
- (void)setIsPlayable:(BOOL)playable result:(long)result;	// 0x326f6529
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x326f5ded
- (XXStruct_yD8eWC)timeRange;	// 0x326f66e9
- (long long)totalSampleDataLength;	// 0x326f66c9
- (int)trackID;	// 0x326f6421
@end
