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

@class AVAudioMixInputParametersInternal;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {
	AVAudioMixInputParametersInternal *_inputParameters;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) opaqueMTAudioProcessingTap *audioTapProcessor;	// G=0x36900bd9; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x36900b99; 
- (id)init;	// 0x36900821
- (id)_audioVolumeCurve;	// 0x369017ed
- (void)_setRamps:(id)ramps;	// 0x36901791
- (void)_setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x36900c45
- (id)_volumeCurveAsString;	// 0x36901db1
// declared property getter: - (opaqueMTAudioProcessingTap *)audioTapProcessor;	// 0x36900bd9
- (id)copyWithZone:(NSZone *)zone;	// 0x36900a2d
- (void)dealloc;	// 0x369008c9
- (id)description;	// 0x369009a9
- (void)finalize;	// 0x3690094d
- (BOOL)getVolumeRampForTime:(XXStruct_pwHToB)time startVolume:(float *)volume endVolume:(float *)volume3 timeRange:(XXStruct_yD8eWC *)range;	// 0x36901225
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36900b0d
- (void)setAudioTapProcessor:(opaqueMTAudioProcessingTap *)processor;	// 0x36900bf9
- (void)setTrackID:(int)anId;	// 0x36900bb9
- (void)setVolume:(float)volume atTime:(XXStruct_pwHToB)time;	// 0x36901129
- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x36901061
// declared property getter: - (int)trackID;	// 0x36900b99
@end

