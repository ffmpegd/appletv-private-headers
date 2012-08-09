/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoComposition.h"

@class AVMutableVideoCompositionInternal, AVVideoCompositionCoreAnimationTool, NSArray;

@interface AVMutableVideoComposition : AVVideoComposition {
	AVMutableVideoCompositionInternal *_mutableVideoComposition;	// 8 = 0x8
}
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x326907f5; S=0x32690821; 
@property(retain) id compositor;	// G=0x3269061d; S=0x32690649; converted property
@property(assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x32690675; S=0x326906a1; 
@property(copy, nonatomic) NSArray *instructions;	// G=0x3269079d; S=0x326907c9; 
@property(assign, nonatomic) float renderScale;	// G=0x32690745; S=0x32690771; 
@property(assign, nonatomic) CGSize renderSize;	// G=0x326906e9; S=0x32690715; 
+ (id)videoComposition;	// 0x3268fa41
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset;	// 0x3268fa85
+ (id)videoCompositionWithPropertiesOfAsset:(id)asset videoGravity:(id)gravity;	// 0x32690619
// declared property getter: - (id)animationTool;	// 0x326907f5
// converted property getter: - (id)compositor;	// 0x3269061d
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x32690675
// declared property getter: - (id)instructions;	// 0x3269079d
// declared property getter: - (float)renderScale;	// 0x32690745
// declared property getter: - (CGSize)renderSize;	// 0x326906e9
// declared property setter: - (void)setAnimationTool:(id)tool;	// 0x32690821
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x32690649
// declared property setter: - (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x326906a1
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x326907c9
// declared property setter: - (void)setRenderScale:(float)scale;	// 0x32690771
// declared property setter: - (void)setRenderSize:(CGSize)size;	// 0x32690715
@end
