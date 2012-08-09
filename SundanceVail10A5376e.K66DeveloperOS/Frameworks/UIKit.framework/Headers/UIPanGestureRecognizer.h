/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer {
	CGPoint _firstScreenLocation;	// 56 = 0x38
	CGPoint _lastScreenLocation;	// 64 = 0x40
	double _lastTouchTime;	// 72 = 0x48
	id _velocitySample;	// 80 = 0x50
	id _previousVelocitySample;	// 84 = 0x54
	NSMutableArray *_touches;	// 88 = 0x58
	unsigned _lastTouchCount;	// 92 = 0x5c
	unsigned _minimumNumberOfTouches;	// 96 = 0x60
	unsigned _maximumNumberOfTouches;	// 100 = 0x64
	float _hysteresis;	// 104 = 0x68
	CGPoint _lastUnadjustedScreenLocation;	// 108 = 0x6c
	unsigned _failsPastMaxTouches : 1;	// 116 = 0x74
	unsigned _canPanHorizontally : 1;	// 116 = 0x74
	unsigned _canPanVertically : 1;	// 116 = 0x74
	unsigned _ignoresStationaryTouches : 1;	// 116 = 0x74
	NSMutableArray *_movingTouches;	// 120 = 0x78
}
@property(readonly, assign, getter=_previousVelocitySample) UIPanGestureVelocitySample *_previousVelocitySample;	// G=0x302e9e59; @synthesize
@property(readonly, assign, getter=_velocitySample) UIPanGestureVelocitySample *_velocitySample;	// G=0x302f9345; @synthesize
@property(assign) BOOL failsPastMaxTouches;	// G=0x304eb315; S=0x3027d6ed; converted property
@property(assign, nonatomic) unsigned maximumNumberOfTouches;	// G=0x304ebab5; S=0x3027d95d; @synthesize=_maximumNumberOfTouches
@property(assign, nonatomic) unsigned minimumNumberOfTouches;	// G=0x304ebaa5; S=0x30299745; @synthesize=_minimumNumberOfTouches
- (id)initWithCoder:(id)coder;	// 0x304eb1b5
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3027d579
- (CGPoint)_adjustScreenLocation:(CGPoint)location;	// 0x3034d3a1
- (BOOL)_canPanHorizontally;	// 0x303a2ed5
- (BOOL)_canPanVertically;	// 0x3034e239
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x3034d149
- (CADoublePoint)_convertPoint:(CGPoint)point fromScreenCoordinatesToView:(id)view;	// 0x3034e019
- (CADoublePoint)_convertPoint:(CGPoint)point toScreenCoordinatesFromView:(id)view;	// 0x3034e44d
- (CADoublePoint)_convertVelocitySample:(id)sample fromScreenCoordinatesToView:(id)view;	// 0x302e9cc1
- (void)_handleEndedTouches:(id)touches withFinalStateAdjustments:(id)finalStateAdjustments;	// 0x304eb755
- (float)_hysteresis;	// 0x3034e1a1
- (BOOL)_ignoresStationaryTouches;	// 0x304eb351
- (int)_lastTouchCount;	// 0x304eb329
- (UIOffset)_offsetInViewFromScreenLocation:(CGPoint)screenLocation toScreenLocation:(CGPoint)screenLocation2;	// 0x304eb381
// declared property getter: - (id)_previousVelocitySample;	// 0x302e9e59
- (void)_removeHysteresisFromTranslation;	// 0x3034e24d
- (void)_resetGestureRecognizer;	// 0x302f91d1
- (void)_resetVelocitySamples;	// 0x302f9259
- (void)_setCanPanHorizontally:(BOOL)horizontally;	// 0x302df105
- (void)_setCanPanVertically:(BOOL)vertically;	// 0x304eb365
- (void)_setHysteresis:(float)hysteresis;	// 0x3027d7f9
- (void)_setIgnoresStationaryTouches:(BOOL)touches;	// 0x304eb339
- (CGPoint)_shiftPanLocationToNewScreenLocation:(CGPoint)newScreenLocation lockingToAxis:(int)axis;	// 0x304eb459
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x3034de09
- (void)_touchesListChangedFrom:(id)from to:(id)to;	// 0x30397049
- (BOOL)_updateMovingTouchesArraySavingOldArray:(id *)array;	// 0x304eb5b5
// declared property getter: - (id)_velocitySample;	// 0x302f9345
- (BOOL)_willScrollX;	// 0x3034de81
- (BOOL)_willScrollY;	// 0x3034e1b1
- (void)dealloc;	// 0x30359975
- (void)encodeWithCoder:(id)coder;	// 0x304eb285
// converted property getter: - (BOOL)failsPastMaxTouches;	// 0x304eb315
- (CGPoint)locationInView:(id)view;	// 0x30396fb5
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x304eb979
// declared property getter: - (unsigned)maximumNumberOfTouches;	// 0x304ebab5
// declared property getter: - (unsigned)minimumNumberOfTouches;	// 0x304ebaa5
- (unsigned)numberOfTouches;	// 0x303bbdd9
// converted property setter: - (void)setFailsPastMaxTouches:(BOOL)touches;	// 0x3027d6ed
// declared property setter: - (void)setMaximumNumberOfTouches:(unsigned)touches;	// 0x3027d95d
// declared property setter: - (void)setMinimumNumberOfTouches:(unsigned)touches;	// 0x30299745
- (void)setTranslation:(CGPoint)translation inView:(id)view;	// 0x3034e371
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x302f72f5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x303bbd81
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x302f8d85
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3034cc09
- (CGPoint)translationInView:(id)view;	// 0x3034df61
- (CGPoint)velocityInView:(id)view;	// 0x302e9ba9
@end
