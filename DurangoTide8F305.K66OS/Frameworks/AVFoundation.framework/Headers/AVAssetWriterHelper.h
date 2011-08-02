/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType, AVWeakReference, AVAssetWriterConfigurationState, NSError, NSURL, NSArray;

@interface AVAssetWriterHelper : NSObject {
@private
	AVAssetWriterConfigurationState *_configurationState;	// 4 = 0x4
	AVWeakReference *_weakReferenceToAssetWriter;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *availableMediaTypes;	// G=0x3474f149; 
@property(readonly, assign, nonatomic) AVAssetWriterConfigurationState *configurationState;	// G=0x3474f085; @synthesize=_configurationState
@property(readonly, assign, nonatomic) NSError *error;	// G=0x3474f079; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x3474f0b9; 
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x3474f179; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x3474f0dd; S=0x34750dfd; 
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x347509e5; S=0x34750f95; 
@property(assign, nonatomic) int movieTimeScale;	// G=0x3474f101; S=0x34750e85; 
@property(readonly, assign, nonatomic) NSURL *outputURL;	// G=0x3474f19d; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x3474f125; S=0x34750f0d; 
@property(readonly, assign, nonatomic) int status;	// G=0x34751add; 
@property(retain) AVWeakReference *weakReferenceToAssetWriter;	// G=0x34751d95; S=0x3474fc39; @synthesize=_weakReferenceToAssetWriter
- (id)init;	// 0x3474f1c1
- (id)initWithConfigurationState:(id)configurationState;	// 0x347519ad
- (BOOL)_canApplyOutputSettings:(id)settings forMediaType:(id)mediaType exceptionReason:(id *)reason;	// 0x34751b0d
- (void)_transitionToClientInitiatedTerminalStatus:(int)clientInitiatedTerminalStatus;	// 0x347514d9
- (void)addInput:(id)input;	// 0x34750d75
// declared property getter: - (id)availableMediaTypes;	// 0x3474f149
- (BOOL)canAddInput:(id)input;	// 0x3474f07d
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;	// 0x3474f095
- (void)cancelWriting;	// 0x3474f081
// declared property getter: - (id)configurationState;	// 0x3474f085
- (void)dealloc;	// 0x3474f9d5
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x34750bcd
// declared property getter: - (id)error;	// 0x3474f079
- (void)finishWriting;	// 0x34750b45
// declared property getter: - (id)inputs;	// 0x3474f0b9
// declared property getter: - (id)mediaFileType;	// 0x3474f179
// declared property getter: - (id)metadata;	// 0x3474f0dd
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x347509e5
// declared property getter: - (int)movieTimeScale;	// 0x3474f101
// declared property getter: - (id)outputURL;	// 0x3474f19d
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x34750dfd
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x34750f95
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x34750e85
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x34750f0d
// declared property setter: - (void)setWeakReferenceToAssetWriter:(id)assetWriter;	// 0x3474fc39
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x3474f125
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x34750c5d
- (void)startWriting;	// 0x34750ced
// declared property getter: - (int)status;	// 0x34751add
- (void)transitionToFailedStatusWithError:(id)error;	// 0x347513a1
// declared property getter: - (id)weakReferenceToAssetWriter;	// 0x34751d95
@end
