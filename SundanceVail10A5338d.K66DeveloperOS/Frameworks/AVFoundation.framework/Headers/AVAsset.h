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

@class NSArray, AVAssetInternal;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
	AVAssetInternal *_assetInternal;	// 4 = 0x4
}
@property(readonly, assign) NSArray *availableChapterLocales;	// G=0x3173efe5; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x3173ddb9; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x3173dead; 
@property(readonly, assign, nonatomic) float preferredRate;	// G=0x3173de19; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x3173de69; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x3173de41; 
+ (id)assetWithURL:(id)url;	// 0x3173d6a1
+ (id)assetWithURL:(id)url figPlaybackItem:(OpaqueFigPlaybackItem *)item trackIDs:(id)ids dynamicBehavior:(BOOL)behavior;	// 0x3173d6c1
- (id)init;	// 0x3173d791
- (id)_absoluteURL;	// 0x3173dd75
- (id)_assetInspector;	// 0x3173d92d
- (id)_assetInspectorLoader;	// 0x3173d961
- (id)_chapterTracks;	// 0x31787bb9
- (id)_comparisonToken;	// 0x3173d965
- (BOOL)_containsAtLeastOnePlayableAudioTrack;	// 0x31787ca9
- (BOOL)_containsAtLeastOnePlayableVideoTrack;	// 0x31787d8d
- (OpaqueFigAsset *)_figAsset;	// 0x3173dcc9
- (id)_firstTrackGroupWithMediaType:(id)mediaType;	// 0x3173e11d
- (OpaqueFigFormatReader *)_formatReader;	// 0x3173dd05
- (BOOL)_isStreaming;	// 0x3173dd79
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x3173dd39
- (void)_serverHasDied;	// 0x3173ee41
- (void)_tracksDidChange;	// 0x3173ebfd
- (id)_weakReference;	// 0x3173d90d
- (id)alternateTrackGroups;	// 0x3173e2b9
- (id)audioAlternatesTrackGroup;	// 0x3173e279
// declared property getter: - (id)availableChapterLocales;	// 0x3173efe5
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;	// 0x3173e339
- (id)availableMetadataFormats;	// 0x3173eb45
- (void)cancelLoading;	// 0x3173dca1
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)languages;	// 0x3173efed
- (id)chapterMetadataGroupsWithTitleLocale:(id)titleLocale containingItemsWithCommonKeys:(id)commonKeys;	// 0x3173efe9
- (id)commonMetadata;	// 0x3173eb1d
- (id)compatibleTrackForCompositionTrack:(id)compositionTrack;	// 0x3173eddd
- (id)copyWithZone:(NSZone *)zone;	// 0x3173d895
- (id)creationDate;	// 0x3173eaad
- (void)dealloc;	// 0x3173d8a5
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x3173ddb9
- (BOOL)hasProtectedContent;	// 0x3173ee7d
- (unsigned)hash;	// 0x3173da7d
- (BOOL)isCompatibleWithSavedPhotosAlbum;	// 0x3173efa5
- (BOOL)isComposable;	// 0x3173ef65
- (BOOL)isEqual:(id)equal;	// 0x3173d9b9
- (BOOL)isExportable;	// 0x3173eee5
- (BOOL)isPlayable;	// 0x3173eea5
- (BOOL)isReadable;	// 0x3173ef25
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3173dbe1
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)collectionKeys completionHandler:(id)handler;	// 0x3173dc41
- (id)lyrics;	// 0x3173ead5
- (id)mediaSelectionGroupForMediaCharacteristic:(id)mediaCharacteristic;	// 0x3173e6e1
- (id)mediaSelectionGroups;	// 0x3173e2e1
- (id)metadataForFormat:(id)format;	// 0x3173eb9d
// declared property getter: - (CGSize)naturalSize;	// 0x3173dead
- (int)naturalTimeScale;	// 0x3173df55
// declared property getter: - (float)preferredRate;	// 0x3173de19
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x3173de69
// declared property getter: - (float)preferredVolume;	// 0x3173de41
- (BOOL)providesPreciseDurationAndTiming;	// 0x3173df7d
- (unsigned)referenceRestrictions;	// 0x3173dfa5
- (int)statusOfValueForKey:(id)key;	// 0x3173db7d
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x3173db91
- (id)subtitleAlternatesTrackGroup;	// 0x3173e299
- (id)trackGroups;	// 0x3173dfcd
- (id)trackReferences;	// 0x3173ea85
- (id)trackWithTrackID:(int)trackID;	// 0x3173ec01
- (id)tracks;	// 0x3173ebc9
- (id)tracksWithMediaCharacteristic:(id)mediaCharacteristic;	// 0x3173ed3d
- (id)tracksWithMediaCharacteristics:(id)mediaCharacteristics;	// 0x3173ed79
- (id)tracksWithMediaType:(id)mediaType;	// 0x3173ecd9
- (int)unusedTrackID;	// 0x3177e45d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3173daf5
@end
