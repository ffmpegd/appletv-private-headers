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
@property(copy, nonatomic) NSURL *URL;	// G=0x30272d4d; S=0x30272d61; @synthesize=_URL
@property(copy, nonatomic) NSArray *inputGroups;	// G=0x30272e85; S=0x30272e99; @synthesize=_inputGroups
@property(copy, nonatomic) NSArray *inputs;	// G=0x30272e61; S=0x30272e75; @synthesize=_inputs
@property(copy, nonatomic) AVMediaFileType *mediaFileType;	// G=0x30272d71; S=0x30272d85; @synthesize=_mediaFileType
@property(copy, nonatomic) NSArray *metadataItems;	// G=0x30272e1d; S=0x30272e31; @synthesize=_metadataItems
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x30272d95; S=0x30272dc9; @synthesize=_movieFragmentInterval
@property(assign, nonatomic) int movieTimeScale;	// G=0x30272e41; S=0x30272e51; @synthesize=_movieTimeScale
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x30272dfd; S=0x30272e0d; @synthesize=_shouldOptimizeForNetworkUse
// declared property getter: - (id)URL;	// 0x30272d4d
- (void)dealloc;	// 0x30272cad
// declared property getter: - (id)inputGroups;	// 0x30272e85
// declared property getter: - (id)inputs;	// 0x30272e61
// declared property getter: - (id)mediaFileType;	// 0x30272d71
// declared property getter: - (id)metadataItems;	// 0x30272e1d
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x30272d95
// declared property getter: - (int)movieTimeScale;	// 0x30272e41
// declared property setter: - (void)setInputGroups:(id)groups;	// 0x30272e99
// declared property setter: - (void)setInputs:(id)inputs;	// 0x30272e75
// declared property setter: - (void)setMediaFileType:(id)type;	// 0x30272d85
// declared property setter: - (void)setMetadataItems:(id)items;	// 0x30272e31
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x30272dc9
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x30272e51
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x30272e0d
// declared property setter: - (void)setURL:(id)url;	// 0x30272d61
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x30272dfd
@end
