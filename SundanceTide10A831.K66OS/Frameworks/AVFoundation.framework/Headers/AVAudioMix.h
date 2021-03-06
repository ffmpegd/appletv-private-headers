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

@class AVAudioMixInternal, NSArray;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {
	AVAudioMixInternal *_audioMix;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *inputParameters;	// G=0x34234559; 
- (id)init;	// 0x34234295
- (opaqueMTAudioProcessingTap *)_audioTapProcessorForTrackID:(int)trackID;	// 0x342346c9
- (id)_audioVolumeCurveForTrackID:(int)trackID;	// 0x342345d5
- (id)copyWithZone:(NSZone *)zone;	// 0x34234431
- (void)dealloc;	// 0x34234319
- (id)description;	// 0x342343c9
- (void)finalize;	// 0x34234385
// declared property getter: - (id)inputParameters;	// 0x34234559
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x342344f1
- (void)setInputParameters:(id)parameters;	// 0x34234579
@end

