/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCopying.h"

@class AVVideoCompositionCoreAnimationTool, AVVideoCompositionInternal, NSArray;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionInternal *_videoComposition;	// 4 = 0x4
}
@property(readonly, retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x35464439; 
@property(retain) id compositor;	// G=0x354642f1; S=0x3546a7a5; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x35464311; 
@property(readonly, copy, nonatomic) NSArray *instructions;	// G=0x35464419; 
@property(readonly, assign, nonatomic) float renderScale;	// G=0x354643d9; 
@property(readonly, assign, nonatomic) CGSize renderSize;	// G=0x35464389; 
+ (id)videoCompositionForAsset:(id)asset;	// 0x3546a9d9
+ (id)videoCompositionForAsset:(id)asset videoGravity:(id)gravity;	// 0x3546aa1d
- (id)init;	// 0x3546aee5
- (int)_auxiliaryTrackID;	// 0x3546a8c5
- (id)_auxiliaryTrackLayer;	// 0x3546a899
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x3546a865
- (BOOL)_hasPostProcessingLayers;	// 0x3546a8f1
- (BOOL)_isValidReturningExceptionReason:(id *)reason;	// 0x3546bb81
- (id)_postProcessingRootLayer;	// 0x3546a951
- (id)_postProcessingVideoLayer;	// 0x3546a925
- (id)_serializableInstructions;	// 0x3546bc81
// declared property getter: - (id)animationTool;	// 0x35464439
// converted property getter: - (id)compositor;	// 0x354642f1
- (id)copyWithZone:(NSZone *)zone;	// 0x3546c131
- (void)dealloc;	// 0x3546bf55
- (void)finalize;	// 0x3546bf11
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x35464311
// declared property getter: - (id)instructions;	// 0x35464419
- (BOOL)isValidForAsset:(id)asset timeRange:(XXStruct_yD8eWC)range validationDelegate:(id)delegate;	// 0x3546b001
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3546bfdd
// declared property getter: - (float)renderScale;	// 0x354643d9
// declared property getter: - (CGSize)renderSize;	// 0x35464389
- (void)setAnimationTool:(id)tool;	// 0x3546a97d
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x3546a7a5
- (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x35464349
- (void)setInstructions:(id)instructions;	// 0x3546a805
- (void)setRenderScale:(float)scale;	// 0x354643f9
- (void)setRenderSize:(CGSize)size;	// 0x354643b1
@end

