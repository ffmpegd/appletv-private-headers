/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UITouch, UIDelayedAction, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
@private
	CGPoint _startPoint;	// 56 = 0x38
	float _allowableMovement;	// 64 = 0x40
	int _numberOfFullTaps;	// 68 = 0x44
	double _minimumFinalPressDuration;	// 72 = 0x48
	NSMutableSet *_activeTouches;	// 80 = 0x50
	int _currentNumberOfTaps;	// 84 = 0x54
	UITouch *_touch;	// 88 = 0x58
	UIDelayedAction *_tapTimer;	// 92 = 0x5c
}
@property(assign, nonatomic) float allowableMovement;	// G=0x30340181; S=0x300d4641; @synthesize=_allowableMovement
@property(assign, nonatomic) double minimumFinalPressDuration;	// G=0x30340191; S=0x3012b859; @synthesize=_minimumFinalPressDuration
@property(assign, nonatomic) int numberOfFullTaps;	// G=0x3017bb71; S=0x30340171; @synthesize=_numberOfFullTaps
@property(retain, nonatomic) UITouch *touch;	// G=0x3017bb61; S=0x300b3091; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x300d4571
- (void)_resetGestureRecognizer;	// 0x30182c19
- (void)_verifyMovementInAllowableRange;	// 0x3017da35
// declared property getter: - (float)allowableMovement;	// 0x30340181
- (void)clearTapTimer;	// 0x300b3035
- (void)dealloc;	// 0x300b2fbd
// declared property getter: - (double)minimumFinalPressDuration;	// 0x30340191
// declared property getter: - (int)numberOfFullTaps;	// 0x3017bb71
- (void)recognized:(id)recognized;	// 0x303400ed
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x300d4641
// declared property setter: - (void)setMinimumFinalPressDuration:(double)duration;	// 0x3012b859
// declared property setter: - (void)setNumberOfFullTaps:(int)fullTaps;	// 0x30340171
// declared property setter: - (void)setTouch:(id)touch;	// 0x300b3091
- (void)startRecognitionTimer:(double)timer;	// 0x30340065
- (void)startTapTimer:(double)timer;	// 0x3017bb85
- (void)tooSlow:(id)slow;	// 0x30182bd5
// declared property getter: - (id)touch;	// 0x3017bb61
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3017b869
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30340121
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3017d8d1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x301abb21
@end

