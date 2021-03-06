/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIKeyboard, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject {
@private
	UIView *_inputView;	// 4 = 0x4
	UIView *_inputAccessoryView;	// 8 = 0x8
	BOOL _isKeyboard;	// 12 = 0xc
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x3001ebd1; 
@property(retain, nonatomic) UIView *inputAccessoryView;	// G=0x3001e591; S=0x3001e675; @synthesize=_inputAccessoryView
@property(retain, nonatomic) UIView *inputView;	// G=0x3001e5a1; S=0x3001e699; @synthesize=_inputView
@property(readonly, assign, nonatomic) UIKeyboard *keyboard;	// G=0x3009abad; 
+ (id)emptyInputSet;	// 0x3001ec09
+ (id)inputSetWithInputView:(id)inputView accessoryView:(id)view;	// 0x3001e5b1
+ (id)inputSetWithKeyboardAndAccessoryView:(id)keyboardAndAccessoryView;	// 0x3010391d
- (id)initWithInputView:(id)inputView accessoryView:(id)view isKeyboard:(BOOL)keyboard;	// 0x3001e605
- (BOOL)containsResponder:(id)responder;	// 0x3001e769
- (void)dealloc;	// 0x3001ef25
- (id)description;	// 0x3033acb9
- (BOOL)inSyncWithOrientation:(int)orientation forKeyboard:(id)keyboard;	// 0x3033aed9
// declared property getter: - (id)inputAccessoryView;	// 0x3001e591
// declared property getter: - (id)inputView;	// 0x3001e5a1
// declared property getter: - (BOOL)isEmpty;	// 0x3001ebd1
- (BOOL)isEqual:(id)equal;	// 0x3001ec69
- (BOOL)isStrictSupersetOfViewSet:(id)viewSet;	// 0x30152d81
// declared property getter: - (id)keyboard;	// 0x3009abad
- (int)keyboardOrientation:(id)orientation;	// 0x3033ae75
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x3001e675
// declared property setter: - (void)setInputView:(id)view;	// 0x3001e699
- (BOOL)usesKeyClicks;	// 0x3033ac19
- (BOOL)visible;	// 0x3009bb15
@end

