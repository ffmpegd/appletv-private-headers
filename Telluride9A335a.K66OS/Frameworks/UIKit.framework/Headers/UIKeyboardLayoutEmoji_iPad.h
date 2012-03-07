/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardLayoutEmoji.h"
#import "UIGestureRecognizerDelegate.h"

@class UIButton, UIGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutEmoji_iPad : UIKeyboardLayoutEmoji <UIGestureRecognizerDelegate> {
@private
	UIGestureRecognizer *_longPressForMenu;	// 156 = 0x9c
	UIGestureRecognizer *_translateRecognizer;	// 160 = 0xa0
	UIButton *_spaceButton;	// 164 = 0xa4
	UIButton *_dismissButton;	// 168 = 0xa8
	CGRect _spaceFrame;	// 172 = 0xac
	CGRect _dismissFrame;	// 188 = 0xbc
}
@property(readonly, assign) CGRect dismissFrame;	// G=0x33c0b3a1; @synthesize=_dismissFrame
@property(readonly, assign) CGRect spaceFrame;	// G=0x33c0b37d; @synthesize=_spaceFrame
- (id)initWithFrame:(CGRect)frame;	// 0x33c0a449
- (CGRect)categoryFrame;	// 0x33c0ace9
- (void)dealloc;	// 0x33c0a695
- (void)dismiss;	// 0x33c0a7dd
// declared property getter: - (CGRect)dismissFrame;	// 0x33c0b3a1
- (void)dismissTranslateDetected:(id)detected;	// 0x33c0a8f9
- (void)generateControlKeyRects;	// 0x33c0abe5
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x33c0a7a9
- (void)layoutSubviews;	// 0x33c0ad39
- (CGSize)leftControlSize;	// 0x33c0ab55
- (CGSize)rightControlSize;	// 0x33c0ab9d
- (void)showSplitControlMenu:(id)menu;	// 0x33c0a811
// declared property getter: - (CGRect)spaceFrame;	// 0x33c0b37d
- (void)spaceUp;	// 0x33c0a71d
- (void)updateControlButtonImages;	// 0x33c0b05d
@end

