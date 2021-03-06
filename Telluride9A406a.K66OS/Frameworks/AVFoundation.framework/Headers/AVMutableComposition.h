/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVComposition.h"

@class AVMutableCompositionInternal, NSArray;

@interface AVMutableComposition : AVComposition {
@private
	AVMutableCompositionInternal *_mutablePriv;	// 12 = 0xc
}
@property(assign, nonatomic) CGSize naturalSize;	// G=0x30e89055; S=0x30e89045; 
@property(readonly, assign, nonatomic) NSArray *tracks;	// G=0x30e8844d; 
+ (id)composition;	// 0x30e88479
- (id)_initWithComposition:(id)composition;	// 0x30e890f5
- (id)_newTrackForIndex:(long)index;	// 0x30e89081
- (void)_notifyAllTracksThatSegmentsDidChange;	// 0x30e884bd
- (id)addMutableTrackWithMediaType:(id)mediaType preferredTrackID:(int)anId;	// 0x30e88739
- (id)copyWithZone:(NSZone *)zone;	// 0x30e890bd
- (void)insertEmptyTimeRange:(XXStruct_yD8eWC)range;	// 0x30e88be5
- (BOOL)insertTimeRange:(XXStruct_yD8eWC)range ofAsset:(id)asset atTime:(XXStruct_pwHToB)time error:(id *)error;	// 0x30e88da9
- (id)mutableTrackCompatibleWithTrack:(id)track;	// 0x30e88581
// declared property getter: - (CGSize)naturalSize;	// 0x30e89055
- (void)removeTimeRange:(XXStruct_yD8eWC)range;	// 0x30e88a21
- (void)removeTrack:(id)track;	// 0x30e8866d
- (void)scaleTimeRange:(XXStruct_yD8eWC)range toDuration:(XXStruct_pwHToB)duration;	// 0x30e88841
// declared property setter: - (void)setNaturalSize:(CGSize)size;	// 0x30e89045
// declared property getter: - (id)tracks;	// 0x30e8844d
@end

