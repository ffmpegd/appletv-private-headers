/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class NSMutableSet, UITouch, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
	CGPoint _startPoint;	// 56 = 0x38
	float _allowableMovement;	// 64 = 0x40
	int _numberOfFullTaps;	// 68 = 0x44
	double _minimumFinalPressDuration;	// 72 = 0x48
	NSMutableSet *_activeTouches;	// 80 = 0x50
	int _currentNumberOfTaps;	// 84 = 0x54
	UITouch *_touch;	// 88 = 0x58
	UIDelayedAction *_tapTimer;	// 92 = 0x5c
}
@property(assign, nonatomic) float allowableMovement;	// G=0x304f2bd9; S=0x3029bb89; @synthesize=_allowableMovement
@property(assign, nonatomic) double minimumFinalPressDuration;	// G=0x304f2be9; S=0x302ca551; @synthesize=_minimumFinalPressDuration
@property(assign, nonatomic) int numberOfFullTaps;	// G=0x3032cf59; S=0x304f2bc9; @synthesize=_numberOfFullTaps
@property(retain, nonatomic) UITouch *touch;	// G=0x3032cf49; S=0x302ce351; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3029bab9
- (void)_resetGestureRecognizer;	// 0x30336449
- (void)_verifyMovementInAllowableRange;	// 0x3032f3f5
// declared property getter: - (float)allowableMovement;	// 0x304f2bd9
- (void)clearTapTimer;	// 0x302ce2f5
- (void)dealloc;	// 0x302ce27d
// declared property getter: - (double)minimumFinalPressDuration;	// 0x304f2be9
// declared property getter: - (int)numberOfFullTaps;	// 0x3032cf59
- (void)recognized:(id)recognized;	// 0x304f2b45
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x3029bb89
// declared property setter: - (void)setMinimumFinalPressDuration:(double)duration;	// 0x302ca551
// declared property setter: - (void)setNumberOfFullTaps:(int)fullTaps;	// 0x304f2bc9
// declared property setter: - (void)setTouch:(id)touch;	// 0x302ce351
- (void)startRecognitionTimer:(double)timer;	// 0x304f2abd
- (void)startTapTimer:(double)timer;	// 0x3032cf6d
- (void)tooSlow:(id)slow;	// 0x30336415
// declared property getter: - (id)touch;	// 0x3032cf49
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3032cc51
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x304f2b79
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3032f291
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x303c1219
@end

