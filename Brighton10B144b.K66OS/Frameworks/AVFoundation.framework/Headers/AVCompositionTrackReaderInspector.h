/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVTrackReaderInspector.h"
#import "AVFoundation-Structs.h"


@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
	OpaqueFigMutableComposition *_figMutableComposition;	// 32 = 0x20
}
@property(readonly, assign, nonatomic, getter=_mutableComposition) OpaqueFigMutableComposition *mutableComposition;	// G=0x302c0d8d; 
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x302c0ca1
// declared property getter: - (OpaqueFigMutableComposition *)_mutableComposition;	// 0x302c0d8d
- (void)dealloc;	// 0x302c0d05
- (void)finalize;	// 0x302c0d49
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x302c1011
- (id)segments;	// 0x302c0d9d
@end

