/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVTrackReaderInspector.h"


@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
	OpaqueFigMutableComposition *_figMutableComposition;	// 32 = 0x20
}
@property(readonly, assign, nonatomic, getter=_mutableComposition) OpaqueFigMutableComposition *mutableComposition;	// G=0x34240eb9; 
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x34240dcd
// declared property getter: - (OpaqueFigMutableComposition *)_mutableComposition;	// 0x34240eb9
- (void)dealloc;	// 0x34240e31
- (void)finalize;	// 0x34240e75
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x3424113d
- (id)segments;	// 0x34240ec9
@end

