/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"

@class AVAsset, AVAssetTrackInternal;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
	AVAssetTrackInternal *_track;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x3024e725; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x3024e771; 
+ (id)keyPathsForValuesAffectingTimeRange;	// 0x3024f425
+ (id)mediaTypesForMediaCharacteristics;	// 0x3024e2a5
- (id)init;	// 0x3024e561
- (id)_allReferencedTracksWithReferenceType:(id)referenceType;	// 0x3024f025
- (id)_assetTrackInspector;	// 0x3024e751
- (id)_fallbackTrack;	// 0x3024f151
- (id)_firstReferencedTrackWithReferenceType:(id)referenceType;	// 0x3024ef31
- (id)_followingTrackAmongTracks:(id)tracks;	// 0x3024f171
- (BOOL)_hasMultipleNonEmptyEdits;	// 0x302936d5
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x3024e585
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x3024e455
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x3024e5a9
- (id)_mostCloselyAssociatedTrackAmongTracks:(id)tracks;	// 0x3024f271
- (id)_pairedForcedOnlySubtitlesTrack;	// 0x3024f369
- (BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)flags flagsMask:(unsigned)mask;	// 0x3024e939
// declared property getter: - (id)asset;	// 0x3024e725
- (id)availableMetadataFormats;	// 0x3024eea5
- (id)commonMetadata;	// 0x3024ee79
- (id)copyWithZone:(NSZone *)zone;	// 0x3024e5c9
- (void)dealloc;	// 0x3024e5d9
- (id)description;	// 0x3024e6a1
- (CGSize)dimensions;	// 0x3024ec89
- (float)estimatedDataRate;	// 0x3024eb9d
- (id)extendedLanguageTag;	// 0x3024ebf5
- (void)finalize;	// 0x3024e65d
- (id)formatDescriptions;	// 0x3024e845
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x3024e9f9
- (BOOL)hasMediaCharacteristics:(id)characteristics;	// 0x3024ea41
- (unsigned)hash;	// 0x3024f3f9
- (BOOL)isEnabled;	// 0x3024e8a5
- (BOOL)isEqual:(id)equal;	// 0x3024f389
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x3024eefd
- (BOOL)isPlayable;	// 0x3024e871
- (BOOL)isSelfContained;	// 0x3024e8d9
- (id)languageCode;	// 0x3024ebc9
- (int)layer;	// 0x3024ed09
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3024e7e5
- (id)locale;	// 0x3024ec21
- (id)mediaCharacteristics;	// 0x3024eb05
- (id)mediaType;	// 0x3024e819
- (id)metadataForFormat:(id)format;	// 0x3024eed1
- (CGSize)naturalSize;	// 0x3024ec4d
- (int)naturalTimeScale;	// 0x3024eb71
- (float)nominalFrameRate;	// 0x3024ed61
- (CGAffineTransform)preferredTransform;	// 0x3024ecc5
- (float)preferredVolume;	// 0x3024ed35
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x3024ee0d
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x3024edb9
- (id)segments;	// 0x3024ed8d
- (int)statusOfValueForKey:(id)key;	// 0x3024e79d
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x3024e7b1
- (XXStruct_yD8eWC)timeRange;	// 0x3024eb31
- (long long)totalSampleDataLength;	// 0x3024e90d
// declared property getter: - (int)trackID;	// 0x3024e771
@end

