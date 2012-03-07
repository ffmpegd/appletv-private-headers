/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetReaderOutput.h"

@class NSDictionary, AVAudioMix, NSArray, AVAssetReaderAudioMixOutputInternal;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {
@private
	AVAssetReaderAudioMixOutputInternal *_audioMixOutputInternal;	// 8 = 0x8
}
@property(copy, nonatomic) AVAudioMix *audioMix;	// G=0x35457961; S=0x35459af9; 
@property(readonly, assign, nonatomic) NSDictionary *audioSettings;	// G=0x354589bd; 
@property(readonly, assign, nonatomic) NSArray *audioTracks;	// G=0x35457941; 
+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)audioTracks audioSettings:(id)settings;	// 0x35458a61
- (id)init;	// 0x354589a9
- (id)initWithAudioTracks:(id)audioTracks audioSettings:(id)settings;	// 0x35459f91
- (id)_asset;	// 0x35458a25
- (id)_audioVolumeCurveForTrack:(id)track;	// 0x35459e11
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x354596e1
- (void)_setAudioVolumeCurve:(id)curve forTrack:(id)track;	// 0x35459cdd
// declared property getter: - (id)audioMix;	// 0x35457961
// declared property getter: - (id)audioSettings;	// 0x354589bd
// declared property getter: - (id)audioTracks;	// 0x35457941
- (void)dealloc;	// 0x35459629
- (id)description;	// 0x35459ec9
- (void)finalize;	// 0x35459f4d
- (id)mediaType;	// 0x354589e9
// declared property setter: - (void)setAudioMix:(id)mix;	// 0x35459af9
@end

