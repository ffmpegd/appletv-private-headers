/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAudioMixInternal, NSArray;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {
@private
	AVAudioMixInternal *_audioMix;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *inputParameters;	// G=0x30b115f9; 
- (id)init;	// 0x30b11335
- (id)_audioVolumeCurveForTrackID:(int)trackID;	// 0x30b11679
- (id)copyWithZone:(NSZone *)zone;	// 0x30b114d5
- (void)dealloc;	// 0x30b113b9
- (id)description;	// 0x30b1146d
- (void)finalize;	// 0x30b11429
// declared property getter: - (id)inputParameters;	// 0x30b115f9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30b11591
- (void)setInputParameters:(id)parameters;	// 0x30b11619
@end
