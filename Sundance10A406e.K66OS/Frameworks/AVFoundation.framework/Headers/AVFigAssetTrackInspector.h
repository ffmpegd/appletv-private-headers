/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrackInspector.h"

@class AVWeakReference, NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector {
	OpaqueFigAssetTrack *_figAssetTrack;	// 8 = 0x8
	OpaqueFigSimpleMutex *_loadingMutex;	// 12 = 0xc
	OpaqueFigSemaphore *_playabilityValidationSemaphore;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_completionHandlerQueue;	// 20 = 0x14
	int _playableStatus;	// 24 = 0x18
	long _playableResult;	// 28 = 0x1c
	BOOL _playable;	// 32 = 0x20
	NSMutableArray *_loadingBatches;	// 36 = 0x24
	AVWeakReference *_weakReferenceToAsset;	// 40 = 0x28
	NSArray *_cachedMediaCharacteristics;	// 44 = 0x2c
}
@property(readonly, assign, getter=isPlayable) BOOL playable;	// G=0x30326119; converted property
- (void)_addFigAssetTrackNotifications;	// 0x3032536d
- (id)_completionHandlerQueue;	// 0x30325f59
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)keyAreLoaded;	// 0x30325e55
- (OpaqueFigAssetTrack *)_figAssetTrack;	// 0x30325f49
- (unsigned long)_figMediaType;	// 0x30325fcd
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x30324fd1
- (int)_loadStatusForFigAssetTrackProperty:(id)figAssetTrackProperty returningError:(int *)error;	// 0x303258c1
- (id)_loadingBatches;	// 0x30325f79
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x30325f69
- (OpaqueFigSemaphore *)_playabilityValidationSemaphore;	// 0x30325f89
- (void)_removeFigAssetTrackNotifications;	// 0x303257f5
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x30326061
- (id)asset;	// 0x30325f29
- (id)availableMetadataFormats;	// 0x30326b05
- (id)commonMetadata;	// 0x303269c5
- (void)dealloc;	// 0x303251f5
- (CGSize)dimensions;	// 0x30326401
- (float)estimatedDataRate;	// 0x303262e5
- (id)extendedLanguageTag;	// 0x303263b1
- (void)finalize;	// 0x303252d5
- (id)formatDescriptions;	// 0x303260b9
- (unsigned)hash;	// 0x30326d85
- (BOOL)isEnabled;	// 0x30326225
- (BOOL)isEqual:(id)equal;	// 0x30326d11
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x30326ce9
// converted property getter: - (BOOL)isPlayable;	// 0x30326119
- (BOOL)isSelfContained;	// 0x3032624d
- (id)languageCode;	// 0x30326319
- (int)layer;	// 0x30326469
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x30325aa5
- (id)mediaCharacteristics;	// 0x30326339
- (id)mediaType;	// 0x30325ffd
- (id)metadataForFormat:(id)format;	// 0x30326b4d
- (CGSize)naturalSize;	// 0x303263d1
- (int)naturalTimeScale;	// 0x303262c5
- (float)nominalFrameRate;	// 0x303264b1
- (CGAffineTransform)preferredTransform;	// 0x30326431
- (float)preferredVolume;	// 0x3032648d
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x30326699
- (id)segments;	// 0x303264d1
- (void)setIsPlayable:(BOOL)playable result:(long)result;	// 0x303260d9
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x30325939
- (XXStruct_yD8eWC)timeRange;	// 0x30326295
- (long long)totalSampleDataLength;	// 0x30326275
- (int)trackID;	// 0x30325f99
@end
