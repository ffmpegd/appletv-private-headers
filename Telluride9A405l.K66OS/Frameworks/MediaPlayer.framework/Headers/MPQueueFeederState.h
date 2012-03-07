/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPQueueFeeder;

@interface MPQueueFeederState : NSObject {
	MPQueueFeeder *_feeder;	// 4 = 0x4
	unsigned _currentItemIndex;	// 8 = 0x8
	double _currentTime;	// 12 = 0xc
	int _feederMode;	// 20 = 0x14
}
@property(assign, nonatomic) unsigned currentItemIndex;	// G=0x33bf41ed; S=0x33bf41fd; @synthesize=_currentItemIndex
@property(assign, nonatomic) double currentTime;	// G=0x33bf420d; S=0x33bf4225; @synthesize=_currentTime
@property(retain, nonatomic) MPQueueFeeder *feeder;	// G=0x33bf41b9; S=0x33bf41c9; @synthesize=_feeder
@property(assign, nonatomic) int feederMode;	// G=0x33bf4239; S=0x33bf4249; @synthesize=_feederMode
- (id)initWithStateOfAVController:(id)avcontroller;	// 0x33bf3fd9
// declared property getter: - (unsigned)currentItemIndex;	// 0x33bf41ed
// declared property getter: - (double)currentTime;	// 0x33bf420d
- (void)dealloc;	// 0x33bf40b9
- (id)description;	// 0x33bf4105
// declared property getter: - (id)feeder;	// 0x33bf41b9
// declared property getter: - (int)feederMode;	// 0x33bf4239
// declared property setter: - (void)setCurrentItemIndex:(unsigned)index;	// 0x33bf41fd
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x33bf4225
// declared property setter: - (void)setFeeder:(id)feeder;	// 0x33bf41c9
// declared property setter: - (void)setFeederMode:(int)mode;	// 0x33bf4249
@end

