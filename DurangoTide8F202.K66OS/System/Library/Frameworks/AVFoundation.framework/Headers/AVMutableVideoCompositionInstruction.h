/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVVideoCompositionInstruction.h"

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {
@private
	AVMutableVideoCompositionInstructionInternal *_mutableInstruction;	// 8 = 0x8
}
@property(retain, nonatomic) CGColorRef backgroundColor;	// G=0x303eea6d; S=0x303eea41; 
@property(assign, nonatomic) BOOL enablePostProcessing;	// G=0x303ee9bd; S=0x303ee991; 
@property(copy, nonatomic) NSArray *layerInstructions;	// G=0x303eea15; S=0x303ee9e9; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x303f0895; S=0x303eea99; 
+ (id)videoCompositionInstruction;	// 0x303ef18d
// declared property getter: - (CGColorRef)backgroundColor;	// 0x303eea6d
// declared property getter: - (BOOL)enablePostProcessing;	// 0x303ee9bd
// declared property getter: - (id)layerInstructions;	// 0x303eea15
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x303eea41
// declared property setter: - (void)setEnablePostProcessing:(BOOL)processing;	// 0x303ee991
// declared property setter: - (void)setLayerInstructions:(id)instructions;	// 0x303ee9e9
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x303eea99
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x303f0895
@end
