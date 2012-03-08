/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVComposition.h"

@class NSArray, AVMutableCompositionInternal;

@interface AVMutableComposition : AVComposition {
@private
	AVMutableCompositionInternal *_mutablePriv;	// 12 = 0xc
}
@property(assign, nonatomic) CGSize naturalSize;	// G=0x30ace6ed; S=0x30ace719; 
@property(readonly, assign, nonatomic) NSArray *tracks;	// G=0x30ace6c1; 
+ (id)composition;	// 0x30ace5a9
- (id)_initWithComposition:(id)composition;	// 0x30ace5ed
- (id)_newTrackForIndex:(long)index;	// 0x30ace685
- (void)_notifyAllTracksThatSegmentsDidChange;	// 0x30acf135
- (id)addMutableTrackWithMediaType:(id)mediaType preferredTrackID:(int)anId;	// 0x30acee91
- (id)copyWithZone:(NSZone *)zone;	// 0x30ace64d
- (void)insertEmptyTimeRange:(XXStruct_yD8eWC)range;	// 0x30ace97d
- (BOOL)insertTimeRange:(XXStruct_yD8eWC)range ofAsset:(id)asset atTime:(XXStruct_pwHToB)time error:(id *)error;	// 0x30ace729
- (id)mutableTrackCompatibleWithTrack:(id)track;	// 0x30acf061
// declared property getter: - (CGSize)naturalSize;	// 0x30ace6ed
- (void)removeTimeRange:(XXStruct_yD8eWC)range;	// 0x30aceb19
- (void)removeTrack:(id)track;	// 0x30acef91
- (void)scaleTimeRange:(XXStruct_yD8eWC)range toDuration:(XXStruct_pwHToB)duration;	// 0x30acecb5
// declared property setter: - (void)setNaturalSize:(CGSize)size;	// 0x30ace719
// declared property getter: - (id)tracks;	// 0x30ace6c1
@end
