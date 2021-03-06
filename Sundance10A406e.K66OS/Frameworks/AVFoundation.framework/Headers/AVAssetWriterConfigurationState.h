/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType, NSURL, NSArray;

@interface AVAssetWriterConfigurationState : NSObject {
	NSURL *_URL;	// 4 = 0x4
	AVMediaFileType *_mediaFileType;	// 8 = 0x8
	XXStruct_pwHToB _movieFragmentInterval;	// 12 = 0xc
	BOOL _shouldOptimizeForNetworkUse;	// 36 = 0x24
	NSArray *_metadataItems;	// 40 = 0x28
	int _movieTimeScale;	// 44 = 0x2c
	NSArray *_inputs;	// 48 = 0x30
	NSArray *_inputGroups;	// 52 = 0x34
}
@property(copy, nonatomic) NSURL *URL;	// G=0x302d59ad; S=0x302d59c1; @synthesize=_URL
@property(copy, nonatomic) NSArray *inputGroups;	// G=0x302d5ae5; S=0x302d5af9; @synthesize=_inputGroups
@property(copy, nonatomic) NSArray *inputs;	// G=0x302d5ac1; S=0x302d5ad5; @synthesize=_inputs
@property(copy, nonatomic) AVMediaFileType *mediaFileType;	// G=0x302d59d1; S=0x302d59e5; @synthesize=_mediaFileType
@property(copy, nonatomic) NSArray *metadataItems;	// G=0x302d5a7d; S=0x302d5a91; @synthesize=_metadataItems
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x302d59f5; S=0x302d5a29; @synthesize=_movieFragmentInterval
@property(assign, nonatomic) int movieTimeScale;	// G=0x302d5aa1; S=0x302d5ab1; @synthesize=_movieTimeScale
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x302d5a5d; S=0x302d5a6d; @synthesize=_shouldOptimizeForNetworkUse
// declared property getter: - (id)URL;	// 0x302d59ad
- (void)dealloc;	// 0x302d590d
// declared property getter: - (id)inputGroups;	// 0x302d5ae5
// declared property getter: - (id)inputs;	// 0x302d5ac1
// declared property getter: - (id)mediaFileType;	// 0x302d59d1
// declared property getter: - (id)metadataItems;	// 0x302d5a7d
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x302d59f5
// declared property getter: - (int)movieTimeScale;	// 0x302d5aa1
// declared property setter: - (void)setInputGroups:(id)groups;	// 0x302d5af9
// declared property setter: - (void)setInputs:(id)inputs;	// 0x302d5ad5
// declared property setter: - (void)setMediaFileType:(id)type;	// 0x302d59e5
// declared property setter: - (void)setMetadataItems:(id)items;	// 0x302d5a91
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x302d5a29
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x302d5ab1
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x302d5a6d
// declared property setter: - (void)setURL:(id)url;	// 0x302d59c1
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x302d5a5d
@end

