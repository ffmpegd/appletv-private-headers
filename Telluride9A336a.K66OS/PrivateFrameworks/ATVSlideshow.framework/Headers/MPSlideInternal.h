/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MPSlideInternal : NSObject {
	double startTime;	// 4 = 0x4
	double duration;	// 12 = 0xc
	double audioFadeInDuration;	// 20 = 0x14
	double audioFadeOutDuration;	// 28 = 0x1c
	double audioDuckInDuration;	// 36 = 0x24
	double audioDuckOutDuration;	// 44 = 0x2c
	double audioDuckLevel;	// 52 = 0x34
	float scale;	// 60 = 0x3c
	float rotation;	// 64 = 0x40
	CGPoint center;	// 68 = 0x44
	float audioVolume;	// 76 = 0x4c
	NSString *sizingMode;	// 80 = 0x50
	int mediaType;	// 84 = 0x54
	BOOL isSecondary;	// 88 = 0x58
	BOOL mirrorToDuplicatePaths;	// 89 = 0x59
	double cachedShowTime;	// 92 = 0x5c
	double cachedShowDuration;	// 100 = 0x64
}
@property(assign, nonatomic) double audioDuckInDuration;	// G=0x342e2c6d; S=0x342e2c85; @synthesize
@property(assign, nonatomic) double audioDuckLevel;	// G=0x342e2cc5; S=0x342e2cdd; @synthesize
@property(assign, nonatomic) double audioDuckOutDuration;	// G=0x342e2c99; S=0x342e2cb1; @synthesize
@property(assign, nonatomic) double audioFadeInDuration;	// G=0x342e2c15; S=0x342e2c2d; @synthesize
@property(assign, nonatomic) double audioFadeOutDuration;	// G=0x342e2c41; S=0x342e2c59; @synthesize
@property(assign, nonatomic) float audioVolume;	// G=0x342e2cf1; S=0x342e2d01; @synthesize
@property(assign, nonatomic) double cachedShowDuration;	// G=0x342e2e21; S=0x342e2e39; @synthesize
@property(assign, nonatomic) double cachedShowTime;	// G=0x342e2df5; S=0x342e2e0d; @synthesize
@property(assign, nonatomic) CGPoint center;	// G=0x342e2d85; S=0x342e2da1; @synthesize
@property(assign, nonatomic) double duration;	// G=0x342e2be9; S=0x342e2c01; @synthesize
@property(assign, nonatomic) BOOL isSecondary;	// G=0x342e2db5; S=0x342e2dc5; @synthesize
@property(assign, nonatomic) int mediaType;	// G=0x342e2b9d; S=0x342e2bad; @synthesize
@property(assign, nonatomic) BOOL mirrorToDuplicatePaths;	// G=0x342e2dd5; S=0x342e2de5; @synthesize
@property(assign, nonatomic) float rotation;	// G=0x342e2d65; S=0x342e2d75; @synthesize
@property(assign, nonatomic) float scale;	// G=0x342e2d45; S=0x342e2d55; @synthesize
@property(copy, nonatomic) NSString *sizingMode;	// G=0x342e2d11; S=0x342e2d21; @synthesize
@property(assign, nonatomic) double startTime;	// G=0x342e2bbd; S=0x342e2bd5; @synthesize
- (id)init;	// 0x342e2b09
// declared property getter: - (double)audioDuckInDuration;	// 0x342e2c6d
// declared property getter: - (double)audioDuckLevel;	// 0x342e2cc5
// declared property getter: - (double)audioDuckOutDuration;	// 0x342e2c99
// declared property getter: - (double)audioFadeInDuration;	// 0x342e2c15
// declared property getter: - (double)audioFadeOutDuration;	// 0x342e2c41
// declared property getter: - (float)audioVolume;	// 0x342e2cf1
// declared property getter: - (double)cachedShowDuration;	// 0x342e2e21
// declared property getter: - (double)cachedShowTime;	// 0x342e2df5
// declared property getter: - (CGPoint)center;	// 0x342e2d85
- (void)dealloc;	// 0x342e2b49
// declared property getter: - (double)duration;	// 0x342e2be9
// declared property getter: - (BOOL)isSecondary;	// 0x342e2db5
// declared property getter: - (int)mediaType;	// 0x342e2b9d
// declared property getter: - (BOOL)mirrorToDuplicatePaths;	// 0x342e2dd5
// declared property getter: - (float)rotation;	// 0x342e2d65
// declared property getter: - (float)scale;	// 0x342e2d45
// declared property setter: - (void)setAudioDuckInDuration:(double)duration;	// 0x342e2c85
// declared property setter: - (void)setAudioDuckLevel:(double)level;	// 0x342e2cdd
// declared property setter: - (void)setAudioDuckOutDuration:(double)duration;	// 0x342e2cb1
// declared property setter: - (void)setAudioFadeInDuration:(double)duration;	// 0x342e2c2d
// declared property setter: - (void)setAudioFadeOutDuration:(double)duration;	// 0x342e2c59
// declared property setter: - (void)setAudioVolume:(float)volume;	// 0x342e2d01
// declared property setter: - (void)setCachedShowDuration:(double)duration;	// 0x342e2e39
// declared property setter: - (void)setCachedShowTime:(double)time;	// 0x342e2e0d
// declared property setter: - (void)setCenter:(CGPoint)center;	// 0x342e2da1
// declared property setter: - (void)setDuration:(double)duration;	// 0x342e2c01
// declared property setter: - (void)setIsSecondary:(BOOL)secondary;	// 0x342e2dc5
// declared property setter: - (void)setMediaType:(int)type;	// 0x342e2bad
// declared property setter: - (void)setMirrorToDuplicatePaths:(BOOL)duplicatePaths;	// 0x342e2de5
// declared property setter: - (void)setRotation:(float)rotation;	// 0x342e2d75
// declared property setter: - (void)setScale:(float)scale;	// 0x342e2d55
// declared property setter: - (void)setSizingMode:(id)mode;	// 0x342e2d21
// declared property setter: - (void)setStartTime:(double)time;	// 0x342e2bd5
// declared property getter: - (id)sizingMode;	// 0x342e2d11
// declared property getter: - (double)startTime;	// 0x342e2bbd
@end

