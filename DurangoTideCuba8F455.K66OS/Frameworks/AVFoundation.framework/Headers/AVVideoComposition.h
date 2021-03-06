/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVVideoCompositionInternal, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionInternal *_videoComposition;	// 4 = 0x4
}
@property(readonly, retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;	// G=0x32596491; 
@property(retain) id compositor;	// G=0x3259636d; S=0x32596d81; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB frameDuration;	// G=0x32596389; 
@property(readonly, copy, nonatomic) NSArray *instructions;	// G=0x32596475; 
@property(readonly, assign, nonatomic) float renderScale;	// G=0x3259643d; 
@property(readonly, assign, nonatomic) CGSize renderSize;	// G=0x325963f1; 
- (id)init;	// 0x32599781
- (int)_auxiliaryTrackID;	// 0x32596ca5
- (id)_auxiliaryTrackLayer;	// 0x32596cd1
- (BOOL)_hasLayerAsAuxiliaryTrack;	// 0x32596cfd
- (BOOL)_hasPostProcessingLayers;	// 0x32596c75
- (BOOL)_isValidReturningExceptionReason:(id *)reason;	// 0x32598a25
- (id)_postProcessingRootLayer;	// 0x32596c1d
- (id)_postProcessingVideoLayer;	// 0x32596c49
- (id)_serializableInstructions;	// 0x325998e5
// declared property getter: - (id)animationTool;	// 0x32596491
// converted property getter: - (id)compositor;	// 0x3259636d
- (id)copyWithZone:(NSZone *)zone;	// 0x325979cd
- (void)dealloc;	// 0x32597e7d
- (void)finalize;	// 0x32597e3d
// declared property getter: - (XXStruct_pwHToB)frameDuration;	// 0x32596389
// declared property getter: - (id)instructions;	// 0x32596475
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3259789d
// declared property getter: - (float)renderScale;	// 0x3259643d
// declared property getter: - (CGSize)renderSize;	// 0x325963f1
- (void)setAnimationTool:(id)tool;	// 0x32596bc9
// converted property setter: - (void)setCompositor:(id)compositor;	// 0x32596d81
- (void)setFrameDuration:(XXStruct_pwHToB)duration;	// 0x325963b1
- (void)setInstructions:(id)instructions;	// 0x32596d2d
- (void)setRenderScale:(float)scale;	// 0x32596459
- (void)setRenderSize:(CGSize)size;	// 0x32596415
@end

