/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "ToneLibrary-Structs.h"
#import <UIProgressView.h> // Unknown library

@class UIImage, NSMutableArray;

@interface TLVibrationRecorderProgressView : UIProgressView {
	double _currentTimeInterval;	// 128 = 0x80
	double _maximumTimeInterval;	// 136 = 0x88
	UIImage *_resizableDotImage;	// 144 = 0x90
	CGSize _dotSize;	// 148 = 0x94
	CGSize _dotInsets;	// 156 = 0x9c
	NSMutableArray *_dots;	// 164 = 0xa4
	id _dotForCurrentVibrationComponent;	// 168 = 0xa8
	double _currentVibrationComponentDidBeginTimeInterval;	// 172 = 0xac
	double _previousPauseDidBeginTimeInterval;	// 180 = 0xb4
	int _roundedCornersCompensationDelayMode;	// 188 = 0xbc
}
@property(assign, nonatomic) double currentTimeInterval;	// G=0x35a41981; S=0x35a41059; @synthesize=_currentTimeInterval
@property(assign, nonatomic) int roundedCornersCompensationDelayMode;	// G=0x35a41999; S=0x35a419a9; @synthesize=_roundedCornersCompensationDelayMode
- (id)initWithProgressViewStyle:(int)progressViewStyle maximumTimeInterval:(double)interval;	// 0x35a40e39
- (double)_cappedValueForTimeInterval:(double)timeInterval;	// 0x35a41741
- (CGRect)_frameForDotAtTimeInterval:(double)timeInterval duration:(double)duration;	// 0x35a41789
- (CGRect)accessibilityFrame;	// 0x35a416dd
- (id)accessibilityLabel;	// 0x35a4161d
- (id)accessibilityValue;	// 0x35a4162d
- (void)clearAllVibrationComponents;	// 0x35a414e5
// declared property getter: - (double)currentTimeInterval;	// 0x35a41981
- (void)dealloc;	// 0x35a40fe1
- (BOOL)isAccessibilityElement;	// 0x35a415ed
// declared property getter: - (int)roundedCornersCompensationDelayMode;	// 0x35a41999
// declared property setter: - (void)setCurrentTimeInterval:(double)interval;	// 0x35a41059
// declared property setter: - (void)setRoundedCornersCompensationDelayMode:(int)mode;	// 0x35a419a9
- (void)vibrationComponentDidEnd;	// 0x35a41469
- (void)vibrationComponentDidStart;	// 0x35a41291
@end
