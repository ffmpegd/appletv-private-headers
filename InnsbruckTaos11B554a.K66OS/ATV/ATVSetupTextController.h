/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRTextControl, BRWaitSpinnerControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVSetupTextController : BRController {
	BRTextControl *_cancelPrompt;	// 100 = 0x64
	BRImageControl *_imageControl;	// 104 = 0x68
	BRTextControl *_informationPrompt;	// 108 = 0x6c
	BRWaitSpinnerControl *_spinner;	// 112 = 0x70
	BRTextControl *_title;	// 116 = 0x74
	BOOL _canBePopped;	// 120 = 0x78
	BOOL _showSpinner;	// 121 = 0x79
}
@property(assign, nonatomic) BOOL canBePopped;	// G=0x20cea1; S=0x20cc51; @synthesize=_canBePopped
@property(assign, nonatomic) BOOL showSpinner;	// G=0x20ceb1; S=0x20cc8d; @synthesize=_showSpinner
- (id)initWithTitle:(id)title text:(id)text cancelText:(id)text3;	// 0x20c2e9
- (void).cxx_destruct;	// 0x20cec1
- (id)accessibilityLabel;	// 0x20c5e5
- (BOOL)brEventAction:(id)action;	// 0x20c685
// declared property getter: - (BOOL)canBePopped;	// 0x20cea1
- (BOOL)isAccessibilityElement;	// 0x20c5e1
- (void)layoutSubcontrols;	// 0x20c73d
// declared property setter: - (void)setCanBePopped:(BOOL)popped;	// 0x20cc51
// declared property setter: - (void)setShowSpinner:(BOOL)spinner;	// 0x20cc8d
// declared property getter: - (BOOL)showSpinner;	// 0x20ceb1
@end

