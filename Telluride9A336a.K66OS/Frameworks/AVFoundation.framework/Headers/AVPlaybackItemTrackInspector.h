/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrackInspector.h"

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
@private
	OpaqueFigPlaybackItem *_playbackItem;	// 8 = 0x8
	int _trackID;	// 12 = 0xc
	unsigned _mediaType;	// 16 = 0x10
	AVWeakReference *_weakReferenceToAsset;	// 20 = 0x14
}
@property(readonly, assign) int trackID;	// G=0x314acf69; converted property
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x314b0795
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x314acf79
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x314b0611
- (id)asset;	// 0x314b06cd
- (void)dealloc;	// 0x314b0731
- (float)estimatedDataRate;	// 0x314b0555
- (id)extendedLanguageTag;	// 0x314acfa1
- (void)finalize;	// 0x314b06ed
- (id)formatDescriptions;	// 0x314b05f1
- (unsigned)hash;	// 0x314b0401
- (BOOL)isEnabled;	// 0x314b05c9
- (BOOL)isEqual:(id)equal;	// 0x314b0449
- (BOOL)isSelfContained;	// 0x314acf89
- (id)languageCode;	// 0x314acf9d
- (id)mediaType;	// 0x314b066d
- (CGSize)naturalSize;	// 0x314b052d
- (int)naturalTimeScale;	// 0x314acf95
- (float)nominalFrameRate;	// 0x314b04e5
- (CGAffineTransform)preferredTransform;	// 0x314b0505
- (float)preferredVolume;	// 0x314acfa5
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x314acfad
- (XXStruct_yD8eWC)timeRange;	// 0x314b0589
- (long long)totalSampleDataLength;	// 0x314acf8d
// converted property getter: - (int)trackID;	// 0x314acf69
@end

