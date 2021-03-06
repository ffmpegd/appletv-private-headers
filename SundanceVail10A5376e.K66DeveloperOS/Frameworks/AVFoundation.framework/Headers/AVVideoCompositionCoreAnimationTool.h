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
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)additionalLayer asTrackID:(int)anId;	// 0x368ce1b1
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)postProcessingAsVideoLayer inLayer:(id)layer;	// 0x368ce205
- (id)initWithMagicTrackID:(int)magicTrackID animationLayer:(id)layer videoLayer:(id)layer3;	// 0x368ce0b1
- (int)_auxiliaryTrackID;	// 0x368ce391
- (id)_auxiliaryTrackLayer;	// 0x368ce35d
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x368ce321
- (BOOL)_hasPostProcessingLayers;	// 0x368ce3c5
- (id)_postProcessingRootLayer;	// 0x368ce401
- (id)_postProcessingVideoLayer;	// 0x368ce435
- (void)dealloc;	// 0x368ce259
- (void)finalize;	// 0x368ce2dd
@end

