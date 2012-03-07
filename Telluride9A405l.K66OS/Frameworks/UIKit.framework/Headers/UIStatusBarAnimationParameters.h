/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIStatusBarAnimationParameters : NSObject {
	double _startTime;	// 4 = 0x4
	double _duration;	// 12 = 0xc
	int _curve;	// 20 = 0x14
}
@property(assign, nonatomic) int curve;	// G=0x32d5b245; S=0x32fa6fe9; @synthesize=_curve
@property(assign, nonatomic) double duration;	// G=0x32d5b22d; S=0x32de16e5; @synthesize=_duration
@property(assign, nonatomic) double startTime;	// G=0x32de16f9; S=0x32fa6fd5; @synthesize=_startTime
- (id)init;	// 0x32fa6fc5
- (id)initWithDefaultParameters;	// 0x32d5b1dd
// declared property getter: - (int)curve;	// 0x32d5b245
// declared property getter: - (double)duration;	// 0x32d5b22d
// declared property setter: - (void)setCurve:(int)curve;	// 0x32fa6fe9
// declared property setter: - (void)setDuration:(double)duration;	// 0x32de16e5
// declared property setter: - (void)setStartTime:(double)time;	// 0x32fa6fd5
// declared property getter: - (double)startTime;	// 0x32de16f9
@end

