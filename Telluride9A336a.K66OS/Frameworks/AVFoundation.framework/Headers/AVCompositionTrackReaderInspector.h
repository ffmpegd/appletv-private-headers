/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVTrackReaderInspector.h"


@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
@private
	OpaqueFigMutableComposition *_figMutableComposition;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic, getter=_mutableComposition) OpaqueFigMutableComposition *mutableComposition;	// G=0x314acf59; 
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x314ad8ed
// declared property getter: - (OpaqueFigMutableComposition *)_mutableComposition;	// 0x314acf59
- (void)dealloc;	// 0x314ad8a9
- (void)finalize;	// 0x314ad865
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x314ad4a5
- (id)segments;	// 0x314ad5cd
@end
