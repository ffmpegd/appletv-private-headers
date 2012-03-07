/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library


@interface MPSongInternal : NSObject {
	double duration;	// 4 = 0x4
	double startTime;	// 12 = 0xc
	float audioVolume;	// 20 = 0x14
	double fadeInDuration;	// 24 = 0x18
	double fadeOutDuration;	// 32 = 0x20
	BOOL assetLogging;	// 40 = 0x28
}
@property(assign, nonatomic) BOOL assetLogging;	// G=0x32ed1521; S=0x32ed1531; @synthesize
@property(assign, nonatomic) float audioVolume;	// G=0x32ed14a9; S=0x32ed14b9; @synthesize
@property(assign, nonatomic) double duration;	// G=0x32ed1451; S=0x32ed1469; @synthesize
@property(assign, nonatomic) double fadeInDuration;	// G=0x32ed14c9; S=0x32ed14e1; @synthesize
@property(assign, nonatomic) double fadeOutDuration;	// G=0x32ed14f5; S=0x32ed150d; @synthesize
@property(assign, nonatomic) double startTime;	// G=0x32ed147d; S=0x32ed1495; @synthesize
// declared property getter: - (BOOL)assetLogging;	// 0x32ed1521
// declared property getter: - (float)audioVolume;	// 0x32ed14a9
// declared property getter: - (double)duration;	// 0x32ed1451
// declared property getter: - (double)fadeInDuration;	// 0x32ed14c9
// declared property getter: - (double)fadeOutDuration;	// 0x32ed14f5
// declared property setter: - (void)setAssetLogging:(BOOL)logging;	// 0x32ed1531
// declared property setter: - (void)setAudioVolume:(float)volume;	// 0x32ed14b9
// declared property setter: - (void)setDuration:(double)duration;	// 0x32ed1469
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x32ed14e1
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x32ed150d
// declared property setter: - (void)setStartTime:(double)time;	// 0x32ed1495
// declared property getter: - (double)startTime;	// 0x32ed147d
@end

