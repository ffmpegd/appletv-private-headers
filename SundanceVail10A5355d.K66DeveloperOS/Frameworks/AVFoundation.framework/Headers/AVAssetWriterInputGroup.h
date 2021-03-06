/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionGroup.h"
#import "AVFoundation-Structs.h"

@class AVAssetWriterInputGroupInternal, AVAssetWriterInput, NSArray;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup {
	AVAssetWriterInputGroupInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) AVAssetWriterInput *defaultInput;	// G=0x3268019d; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x3268017d; 
+ (id)assetWriterInputGroupWithInputs:(id)inputs defaultInput:(id)input;	// 0x3267fe45
- (id)init;	// 0x3267fe91
- (id)initWithInputs:(id)inputs defaultInput:(id)input;	// 0x3267fea5
- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;	// 0x326801bd
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;	// 0x326802f5
- (id)copyWithZone:(NSZone *)zone;	// 0x3268016d
- (void)dealloc;	// 0x32680091
// declared property getter: - (id)defaultInput;	// 0x3268019d
- (void)finalize;	// 0x32680129
// declared property getter: - (id)inputs;	// 0x3268017d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32680411
- (id)options;	// 0x32680461
@end

