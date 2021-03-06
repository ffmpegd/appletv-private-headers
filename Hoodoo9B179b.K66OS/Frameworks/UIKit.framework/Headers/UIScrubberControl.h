/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIOldSliderControl.h"

@class UIView;

@interface UIScrubberControl : UIOldSliderControl {
@private
	XXUnion_a01swB _sliderAvailableFill;	// 172 = 0xac
@protected
	double _duration;	// 176 = 0xb0
	float _lastDisplayedWidth;	// 184 = 0xb8
	float _maxTrackWidth;	// 188 = 0xbc
	UIView *_elapsedTimeView;	// 192 = 0xc0
	UIView *_remainingTimeView;	// 196 = 0xc4
	id _delegate;	// 200 = 0xc8
	double _trackingStartTime;	// 204 = 0xcc
	CGPoint _lastUpdatedPoint;	// 212 = 0xd4
	float _valueAvailable;	// 220 = 0xdc
	unsigned _didDrag : 1;	// 224 = 0xe0
	unsigned _sentScrubbingStart : 1;	// 224 = 0xe0
	unsigned _autoSizesToFitDuration : 1;	// 224 = 0xe0
	unsigned _layoutTimeParts : 2;	// 224 = 0xe0
	unsigned _remainingIsDuration : 1;	// 224 = 0xe0
	unsigned _delegateDidEnterScrubbingState : 1;	// 224 = 0xe0
	unsigned _delegateDidChangeScrubValue : 1;	// 224 = 0xe0
	unsigned _delegateShouldBeginScrubbing : 1;	// 225 = 0xe1
	unsigned _endingTracking : 1;	// 225 = 0xe1
	unsigned _showKnob : 1;	// 225 = 0xe1
	unsigned _largeKnob : 1;	// 225 = 0xe1
	unsigned _rightCapIsDownloadCap : 1;	// 225 = 0xe1
	unsigned _requireMomentaryDelay : 1;	// 225 = 0xe1
	unsigned _showFullWidthComponents : 1;	// 225 = 0xe1
	unsigned _alwaysShowAllComponentsForDuration : 1;	// 225 = 0xe1
	unsigned _timeLayoutDisabledCount : 7;	// 226 = 0xe2
	unsigned _timeLayoutSkippedLayout : 1;	// 226 = 0xe2
	unsigned _timeLayoutSkippedForcedLayout : 1;	// 227 = 0xe3
	unsigned _showTimeCentered : 1;	// 227 = 0xe3
	unsigned _leftCapIsDownloadCap : 1;	// 227 = 0xe3
	unsigned _allowsAnyValue : 1;	// 227 = 0xe3
	unsigned _unused : 3;	// 227 = 0xe3
}
@property(assign) double duration;	// G=0x330d2965; S=0x330d28c1; converted property
+ (BOOL)allowLayeredFillForKnob;	// 0x330d1e25
- (id)initWithFrame:(CGRect)frame maxTrackWidth:(float)width showTimes:(BOOL)times knobStyle:(int)style;	// 0x330d1e29
- (id)initWithFrame:(CGRect)frame maxTrackWidth:(float)width showTimes:(BOOL)times showKnob:(BOOL)knob;	// 0x330d2109
- (BOOL)_notAllValueAvailable;	// 0x330d2e01
- (CGRect)_rectOfTrack;	// 0x330d2c4d
- (void)_resetTimeFrames;	// 0x330d244d
- (void)_sendDelegateDidEnterScrubbingState:(BOOL)_sendDelegate;	// 0x330d3de9
- (void)_setValue:(float)value andSendAction:(BOOL)action;	// 0x330d3645
- (void)_updateAvailableFill;	// 0x330d3189
- (void)_updateTimes:(BOOL)times;	// 0x330d373d
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x330d3e61
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x330d4295
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x330d4085
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x330d44e1
- (id)createSliderKnobView;	// 0x330d2159
- (void)dealloc;	// 0x330d264d
- (void)disableTimesLayout;	// 0x330d3c41
- (void)drawSliderPiece:(int)piece inRect:(CGRect)rect;	// 0x330d2e89
// converted property getter: - (double)duration;	// 0x330d2965
- (void)enableTimesLayout;	// 0x330d3c9d
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x330d4205
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x330d4685
- (CGRect)fillBounds;	// 0x330d2dad
- (CGRect)hitRect;	// 0x330d2be5
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x330d29f9
- (id)imageForSliderPiece:(int)sliderPiece;	// 0x330d236d
- (const XXStruct_NwkmQC *)metrics;	// 0x330d243d
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x330d2add
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x330d2ba9
- (BOOL)pointInsideKnob:(CGPoint)knob forEvent:(GSEventRef)event;	// 0x330d2a4d
- (BOOL)pointInsideKnob:(CGPoint)knob withEvent:(id)event;	// 0x330d2b19
- (double)requiredAutoUpdateDurationForDuration:(double)duration;	// 0x330d297d
- (float)scrubValue;	// 0x330d2795
- (void)setAllowsAnyValue:(BOOL)value;	// 0x330d2e69
- (void)setDelegate:(id)delegate;	// 0x330d26ed
// converted property setter: - (void)setDuration:(double)duration;	// 0x330d28c1
- (void)setPinTimeToOutsideEdges:(BOOL)outsideEdges;	// 0x330d21b9
- (void)setScrubbingRequiresMomentaryDelay:(BOOL)delay;	// 0x330d3dbd
- (void)setShowDuration:(BOOL)duration;	// 0x330d3d81
- (void)setShowFullWidthComponents:(BOOL)components;	// 0x330d3d0d
- (void)setShowTimeCenteredInAvailableArea:(BOOL)availableArea;	// 0x330d2251
- (void)setTimeColor:(id)color;	// 0x330d47fd
- (void)setTimeShadowColor:(id)color;	// 0x330d4851
- (void)setValue:(float)value animated:(BOOL)animated animationCurve:(int)curve;	// 0x330d3685
- (void)setValueAvailable:(float)available;	// 0x330d4701
- (void)sizeToFit;	// 0x330d27e9
- (CGRect)sliderBounds;	// 0x330d22ed
@end

