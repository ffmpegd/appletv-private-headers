/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCompositionTrack.h"

@class NSArray, NSString, AVMutableCompositionTrackInternal;

@interface AVMutableCompositionTrack : AVCompositionTrack {
	AVMutableCompositionTrackInternal *_mutablePriv;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *extendedLanguageTag;	// G=0x32675cfd; S=0x32675d29; 
@property(copy, nonatomic) NSString *languageCode;	// G=0x32675cb1; S=0x32675cdd; 
@property(assign, nonatomic) int naturalTimeScale;	// G=0x32675c35; S=0x32675c61; 
@property(assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x32675d49; S=0x32675d75; 
@property(assign, nonatomic) float preferredVolume;	// G=0x32675de1; S=0x32675e0d; 
@property(copy, nonatomic) NSArray *segments;	// G=0x32674a45; S=0x32674a71; 
- (void)_setTrackReaderPropertyValue:(void *)value forKey:(CFStringRef)key;	// 0x32675bd5
// declared property getter: - (id)extendedLanguageTag;	// 0x32675cfd
- (void)insertEmptyTimeRange:(XXStruct_yD8eWC)range;	// 0x32675399
- (BOOL)insertTimeRange:(XXStruct_yD8eWC)range ofTrack:(id)track atTime:(XXStruct_pwHToB)time error:(id *)error;	// 0x32674cd5
- (BOOL)insertTimeRanges:(id)ranges ofTracks:(id)tracks atTime:(XXStruct_pwHToB)time error:(id *)error;	// 0x32674f0d
// declared property getter: - (id)languageCode;	// 0x32675cb1
// declared property getter: - (int)naturalTimeScale;	// 0x32675c35
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x32675d49
// declared property getter: - (float)preferredVolume;	// 0x32675de1
- (void)removeTimeRange:(XXStruct_yD8eWC)range;	// 0x32675509
- (void)scaleTimeRange:(XXStruct_yD8eWC)range toDuration:(XXStruct_pwHToB)duration;	// 0x32675679
// declared property getter: - (id)segments;	// 0x32674a45
// declared property setter: - (void)setExtendedLanguageTag:(id)tag;	// 0x32675d29
// declared property setter: - (void)setLanguageCode:(id)code;	// 0x32675cdd
// declared property setter: - (void)setNaturalTimeScale:(int)scale;	// 0x32675c61
// declared property setter: - (void)setPreferredTransform:(CGAffineTransform)transform;	// 0x32675d75
// declared property setter: - (void)setPreferredVolume:(float)volume;	// 0x32675e0d
// declared property setter: - (void)setSegments:(id)segments;	// 0x32674a71
- (BOOL)validateTrackSegments:(id)segments error:(id *)error;	// 0x32675829
@end
