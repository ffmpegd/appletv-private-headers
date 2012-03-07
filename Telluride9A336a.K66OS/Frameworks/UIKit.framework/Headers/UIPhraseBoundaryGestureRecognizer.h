/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILongPressGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIDelayedAction, UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
@private
	UIResponder<UITextInput> *_textInput;	// 104 = 0x68
	UIDelayedAction *_secondDelayTimer;	// 108 = 0x6c
	double _secondDelay;	// 112 = 0x70
	BOOL _secondDelayElapsed;	// 120 = 0x78
	id _userData;	// 124 = 0x7c
}
@property(assign, nonatomic) double secondDelay;	// G=0x353952a9; S=0x353952c1; @synthesize=_secondDelay
@property(readonly, assign, nonatomic) BOOL secondDelayElapsed;	// G=0x353952d5; @synthesize=_secondDelayElapsed
@property(assign, nonatomic) UIResponder<UITextInput> *textInput;	// G=0x35395289; S=0x35395299; @synthesize=_textInput
@property(assign, nonatomic) id userData;	// G=0x353952e5; S=0x353952f5; @synthesize=_userData
- (void)_resetGestureRecognizer;	// 0x35394ec1
- (void)clearTimer;	// 0x35395221
// declared property getter: - (double)secondDelay;	// 0x353952a9
// declared property getter: - (BOOL)secondDelayElapsed;	// 0x353952d5
- (void)secondDelayElapsed:(id)elapsed;	// 0x35394fcd
// declared property setter: - (void)setSecondDelay:(double)delay;	// 0x353952c1
- (void)setState:(int)state;	// 0x35394f0d
// declared property setter: - (void)setTextInput:(id)input;	// 0x35395299
// declared property setter: - (void)setUserData:(id)data;	// 0x353952f5
- (void)startTimer;	// 0x3539501d
// declared property getter: - (id)textInput;	// 0x35395289
// declared property getter: - (id)userData;	// 0x353952e5
@end

