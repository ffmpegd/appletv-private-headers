/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ISFairPlayRentalInfo : NSObject {
@private
	unsigned long _playbackDuration;	// 4 = 0x4
	unsigned long _playbackStartTime;	// 8 = 0x8
	unsigned long _rentalDuration;	// 12 = 0xc
	unsigned long _rentalStartTime;	// 16 = 0x10
}
@property(assign, nonatomic) unsigned long playbackDuration;	// G=0x35f679f5; S=0x35f67a05; @synthesize=_playbackDuration
@property(assign, nonatomic) unsigned long playbackStartTime;	// G=0x35f67a15; S=0x35f67a25; @synthesize=_playbackStartTime
@property(assign, nonatomic) unsigned long rentalDuration;	// G=0x35f67a35; S=0x35f67a45; @synthesize=_rentalDuration
@property(assign, nonatomic) unsigned long rentalStartTime;	// G=0x35f67a55; S=0x35f67a65; @synthesize=_rentalStartTime
// declared property getter: - (unsigned long)playbackDuration;	// 0x35f679f5
// declared property getter: - (unsigned long)playbackStartTime;	// 0x35f67a15
// declared property getter: - (unsigned long)rentalDuration;	// 0x35f67a35
// declared property getter: - (unsigned long)rentalStartTime;	// 0x35f67a55
// declared property setter: - (void)setPlaybackDuration:(unsigned long)duration;	// 0x35f67a05
// declared property setter: - (void)setPlaybackStartTime:(unsigned long)time;	// 0x35f67a25
// declared property setter: - (void)setRentalDuration:(unsigned long)duration;	// 0x35f67a45
// declared property setter: - (void)setRentalStartTime:(unsigned long)time;	// 0x35f67a65
@end
