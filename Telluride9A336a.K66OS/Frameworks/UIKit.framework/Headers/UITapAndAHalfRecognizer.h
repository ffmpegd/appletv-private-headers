/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIDelayedAction, UITouch, NSMutableSet;

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
@property(assign, nonatomic) float allowableMovement;	// G=0x3538321d; S=0x35101301; @synthesize=_allowableMovement
@property(assign, nonatomic) double minimumFinalPressDuration;	// G=0x3538322d; S=0x3515fc05; @synthesize=_minimumFinalPressDuration
@property(assign, nonatomic) int numberOfFullTaps;	// G=0x351b485d; S=0x3538320d; @synthesize=_numberOfFullTaps
@property(retain, nonatomic) UITouch *touch;	// G=0x351b484d; S=0x350df5f1; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x35101239
- (void)_resetGestureRecognizer;	// 0x351bd4dd
- (void)_verifyMovementInAllowableRange;	// 0x351b688d
// declared property getter: - (float)allowableMovement;	// 0x3538321d
- (void)clearTapTimer;	// 0x350df595
- (void)dealloc;	// 0x350df521
// declared property getter: - (double)minimumFinalPressDuration;	// 0x3538322d
// declared property getter: - (int)numberOfFullTaps;	// 0x351b485d
- (void)recognized:(id)recognized;	// 0x3538318d
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x35101301
// declared property setter: - (void)setMinimumFinalPressDuration:(double)duration;	// 0x3515fc05
// declared property setter: - (void)setNumberOfFullTaps:(int)fullTaps;	// 0x3538320d
// declared property setter: - (void)setTouch:(id)touch;	// 0x350df5f1
- (void)startRecognitionTimer:(double)timer;	// 0x35383105
- (void)startTapTimer:(double)timer;	// 0x351b486d
- (void)tooSlow:(id)slow;	// 0x351bd49d
// declared property getter: - (id)touch;	// 0x351b484d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x351b4551
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x353831bd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x351b6739
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x351e6cb9
@end

