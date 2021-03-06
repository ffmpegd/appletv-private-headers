/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIImage;

@interface UIOldSliderControl : UIControl {
	UIImage *_sliderLeftFillCap;	// 108 = 0x6c
	XXUnion_a01swB _sliderLeftFill;	// 112 = 0x70
	XXUnion_a01swB _sliderRightFill;	// 116 = 0x74
	UIImage *_minValueImage;	// 120 = 0x78
	UIImage *_maxValueImage;	// 124 = 0x7c
	int _numberOfTickMarks;	// 128 = 0x80
	float _hitOffset;	// 132 = 0x84
	UIImage *_sliderRightCap;	// 136 = 0x88
	UIImage *_sliderRightFullCap;	// 140 = 0x8c
	UIImage *_sliderLeftCap;	// 144 = 0x90
	struct {
		unsigned allowsOnlyTickMarks : 1;
		unsigned animating : 1;
		unsigned showValue : 1;
		unsigned layeredFill : 1;
		unsigned continuous : 1;
		unsigned sendActionDuringAnimation : 1;
		unsigned alternateColors : 1;
		unsigned shouldFlipValue : 1;
		unsigned needsNonOpaqueFills : 1;
		unsigned reserved : 24;
	} _sliderFlags;	// 148 = 0x94
	float _value;	// 156 = 0x9c
	float _animationEndValue;	// 160 = 0xa0
	float _minValue;	// 164 = 0xa4
	float _maxValue;	// 168 = 0xa8
	UIView *_knob;	// 172 = 0xac
	double _lastTrackingTime;	// 176 = 0xb0
	double _idleTrackingTime;	// 184 = 0xb8
	CGPoint _lastTrackingPoint;	// 192 = 0xc0
	CGPoint _idleTrackingPoint;	// 200 = 0xc8
}
@property(assign) float value;	// G=0x32f0444d; S=0x32f03e11; converted property
- (id)init;	// 0x32f02bd1
- (id)initWithFrame:(CGRect)frame;	// 0x32f02c05
- (id)initWithFrame:(CGRect)frame layeredFill:(BOOL)fill;	// 0x32f02c31
- (void)_controlMouseDown:(GSEventRef)down;	// 0x32f05451
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x32f05459
- (void)_controlMouseUp:(GSEventRef)up;	// 0x32f05455
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x32f059a9
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x32f059b1
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x32f059ad
- (void)_resetFillFrames;	// 0x32f02f19
- (id)_scriptingInfo;	// 0x32f05a51
- (void)_sendDelayedActions;	// 0x32f03dad
- (void)_setValue:(float)value andSendAction:(BOOL)action;	// 0x32f03e25
- (void)_sliderBounds:(CGRect)bounds getLeftCapRect:(CGRect *)rect rightCapRect:(CGRect *)rect3 left:(CGRect *)left right:(CGRect *)right;	// 0x32f037f5
- (float)_validatedValue:(float)value;	// 0x32f04e31
- (float)_validatedValueForPoint:(CGPoint)point includeTickMarks:(BOOL)marks;	// 0x32f04e7d
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x32f03d69
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x32f05091
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32f05461
- (BOOL)cancelMouseTracking;	// 0x32f053c9
- (BOOL)cancelTouchTracking;	// 0x32f059b5
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x32f051b9
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32f055e1
- (id)createSliderKnobView;	// 0x32f02e81
- (void)dealloc;	// 0x32f03579
- (void)drawRect:(CGRect)rect;	// 0x32f048c9
- (void)drawSliderInRect:(CGRect)rect;	// 0x32f03d39
- (void)drawSliderInRect:(CGRect)rect dirtyRect:(CGRect)rect2;	// 0x32f03aad
- (void)drawSliderPiece:(int)piece inRect:(CGRect)rect;	// 0x32f036e5
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x32f05221
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32f057b1
- (CGRect)fillBounds;	// 0x32f02fd9
- (id)imageForSliderPiece:(int)sliderPiece;	// 0x32f03679
- (BOOL)isAnimatingValueChange;	// 0x32f041c5
- (CGRect)maxValueImageBounds;	// 0x32f04641
- (CGRect)minValueImageBounds;	// 0x32f04581
- (void)refreshImages;	// 0x32f03171
- (void)setAllowsTickMarkValuesOnly:(BOOL)only;	// 0x32f04be1
- (void)setContinuous:(BOOL)continuous;	// 0x32f05a21
- (void)setEnabled:(BOOL)enabled;	// 0x32f04d89
- (void)setHighlighted:(BOOL)highlighted;	// 0x32f05021
- (void)setMaxValue:(float)value;	// 0x32f04861
- (void)setMaxValueImage:(id)image;	// 0x32f04cfd
- (void)setMinValue:(float)value;	// 0x32f047f9
- (void)setMinValueImage:(id)image;	// 0x32f04c71
- (void)setNumberOfTickMarks:(int)tickMarks;	// 0x32f04bd1
- (void)setSendActionDuringAnimation:(BOOL)animation;	// 0x32f05a39
- (void)setShowValue:(BOOL)value;	// 0x32f04bf9
// converted property setter: - (void)setValue:(float)value;	// 0x32f03e11
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x32f04429
- (void)setValue:(float)value animated:(BOOL)animated animationCurve:(int)curve;	// 0x32f041d9
- (CGRect)sliderBounds;	// 0x32f0445d
- (void)sliderBoundsChanged;	// 0x32f0312d
// converted property getter: - (float)value;	// 0x32f0444d
- (CGRect)valueTextBounds;	// 0x32f04755
@end

