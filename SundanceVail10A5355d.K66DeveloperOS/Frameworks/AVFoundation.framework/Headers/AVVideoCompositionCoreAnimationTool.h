/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject {
	AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;	// 4 = 0x4
}
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)additionalLayer asTrackID:(int)anId;	// 0x3269094d
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)postProcessingAsVideoLayer inLayer:(id)layer;	// 0x326909a1
- (id)initWithMagicTrackID:(int)magicTrackID animationLayer:(id)layer videoLayer:(id)layer3;	// 0x3269084d
- (int)_auxiliaryTrackID;	// 0x32690b2d
- (id)_auxiliaryTrackLayer;	// 0x32690af9
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x32690abd
- (BOOL)_hasPostProcessingLayers;	// 0x32690b61
- (id)_postProcessingRootLayer;	// 0x32690b9d
- (id)_postProcessingVideoLayer;	// 0x32690bd1
- (void)dealloc;	// 0x326909f5
- (void)finalize;	// 0x32690a79
@end
