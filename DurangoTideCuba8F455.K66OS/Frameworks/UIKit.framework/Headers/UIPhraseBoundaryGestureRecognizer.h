/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILongPressGestureRecognizer.h"

@class UIResponder, UIDelayedAction;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
@private
	UIResponder<UITextInput> *_textInput;	// 108 = 0x6c
	UIDelayedAction *_secondDelayTimer;	// 112 = 0x70
	double _secondDelay;	// 116 = 0x74
	BOOL _secondDelayElapsed;	// 124 = 0x7c
	id _userData;	// 128 = 0x80
}
@property(assign, nonatomic) double secondDelay;	// G=0x302dd171; S=0x302dd181; @synthesize=_secondDelay
@property(readonly, assign, nonatomic) BOOL secondDelayElapsed;	// G=0x302dd161; @synthesize=_secondDelayElapsed
@property(assign, nonatomic) UIResponder<UITextInput> *textInput;	// G=0x302dd195; S=0x302dd1a5; @synthesize=_textInput
@property(assign, nonatomic) id userData;	// G=0x302dd141; S=0x302dd151; @synthesize=_userData
- (void)_resetGestureRecognizer;	// 0x302dd1b5
- (void)clearTimer;	// 0x302dd1f9
// declared property getter: - (double)secondDelay;	// 0x302dd171
// declared property getter: - (BOOL)secondDelayElapsed;	// 0x302dd161
- (void)secondDelayElapsed:(id)elapsed;	// 0x302dd259
// declared property setter: - (void)setSecondDelay:(double)delay;	// 0x302dd181
- (void)setState:(int)state;	// 0x302dd2a1
// declared property setter: - (void)setTextInput:(id)input;	// 0x302dd1a5
// declared property setter: - (void)setUserData:(id)data;	// 0x302dd151
- (void)startTimer;	// 0x302dd351
// declared property getter: - (id)textInput;	// 0x302dd195
// declared property getter: - (id)userData;	// 0x302dd141
@end
