/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextTapRecognizer.h"

@class UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UISelectionTapRecognizer : UITextTapRecognizer {
	UIResponder<UITextInput> *_textView;	// 72 = 0x48
}
@property(assign) UIResponder<UITextInput> *textView;	// G=0x3482f415; S=0x3482f429; @synthesize=_textView
- (BOOL)isCloseToSelection;	// 0x3482efdd
- (void)setState:(int)state;	// 0x3482f3a9
// declared property setter: - (void)setTextView:(id)view;	// 0x3482f429
// declared property getter: - (id)textView;	// 0x3482f415
@end

