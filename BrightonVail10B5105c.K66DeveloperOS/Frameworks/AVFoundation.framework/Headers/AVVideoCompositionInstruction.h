/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSCoding.h"

@class AVVideoCompositionInstructionInternal, NSArray;

@interface AVVideoCompositionInstruction : NSObject <NSCoding, NSCopying, NSMutableCopying> {
	AVVideoCompositionInstructionInternal *_instruction;	// 4 = 0x4
}
@property(retain, nonatomic) CGColorRef backgroundColor;	// G=0x302ea9c9; S=0x302ea9e9; 
@property(readonly, assign, nonatomic) BOOL enablePostProcessing;	// G=0x302eaab1; 
@property(readonly, assign, nonatomic) NSArray *layerInstructions;	// G=0x302eaa35; 
@property(readonly, assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x302ea911; 
+ (void)initialize;	// 0x302ea341
- (id)init;	// 0x302ea381
- (id)initWithCoder:(id)coder;	// 0x302ea471
- (void)_setValuesFromDictionary:(id)dictionary;	// 0x302eae6d
// declared property getter: - (CGColorRef)backgroundColor;	// 0x302ea9c9
- (id)copyWithZone:(NSZone *)zone;	// 0x302ea561
- (void)dealloc;	// 0x302ea831
- (id)description;	// 0x302eb275
- (id)dictionaryRepresentation;	// 0x302eaaf1
// declared property getter: - (BOOL)enablePostProcessing;	// 0x302eaab1
- (void)encodeWithCoder:(id)coder;	// 0x302ea529
- (void)finalize;	// 0x302ea8b5
// declared property getter: - (id)layerInstructions;	// 0x302eaa35
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x302ea6e9
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x302ea9e9
- (void)setEnablePostProcessing:(BOOL)processing;	// 0x302eaad1
- (void)setLayerInstructions:(id)instructions;	// 0x302eaa55
- (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x302ea96d
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x302ea911
@end

