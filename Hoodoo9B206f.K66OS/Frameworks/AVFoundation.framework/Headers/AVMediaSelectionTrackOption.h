/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionOption.h"

@class AVWeakReference, AVAssetTrack;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
	AVAssetTrack *_track;	// 8 = 0x8
	AVWeakReference *_weakReferenceToGroup;	// 12 = 0xc
	BOOL _displaysNonForcedSubtitles;	// 16 = 0x10
}
@property(readonly, assign) BOOL displaysNonForcedSubtitles;	// G=0x3270a51d; converted property
@property(readonly, retain) AVAssetTrack *track;	// G=0x3270a50d; converted property
- (id)initWithAssetTrack:(id)assetTrack group:(id)group;	// 0x3270a035
- (id)initWithAssetTrack:(id)assetTrack group:(id)group displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x32709f75
- (id)_ancillaryDescription;	// 0x3270a1b5
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x3270a7b9
- (id)availableMetadataFormats;	// 0x3270a779
- (id)commonMetadata;	// 0x3270a759
- (void)dealloc;	// 0x3270a059
// converted property getter: - (BOOL)displaysNonForcedSubtitles;	// 0x3270a51d
- (id)group;	// 0x3270a195
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x3270a681
- (unsigned)hash;	// 0x3270a15d
- (BOOL)isEqual:(id)equal;	// 0x3270a0b9
- (BOOL)isPlayable;	// 0x3270a715
- (id)locale;	// 0x3270a739
- (id)mediaSubTypes;	// 0x3270a56d
- (id)mediaType;	// 0x3270a54d
- (id)metadataForFormat:(id)format;	// 0x3270a799
- (id)propertyList;	// 0x3270a961
// converted property getter: - (id)track;	// 0x3270a50d
- (int)trackID;	// 0x3270a52d
@end
