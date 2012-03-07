/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTextFieldDelegate.h"
#import "BRController.h"

@class BRPasscodeEntryControl, BRTextControl, NSDictionary, BRHeaderControl, NSString;

@interface BRParentalControlsPasscodeController : BRController <BRTextFieldDelegate> {
@private
	BRController *_guardedController;	// 80 = 0x50
	BRPasscodeEntryControl *_editor;	// 84 = 0x54
	BRHeaderControl *_header;	// 88 = 0x58
	BRTextControl *_prompt;	// 92 = 0x5c
	NSString *_passcodeToConfirm;	// 96 = 0x60
	int _mode;	// 100 = 0x64
	NSDictionary *_userInfo;	// 104 = 0x68
}
@property(retain) NSDictionary *userInfo;	// G=0x35e5375d; S=0x35e5371d; converted property
+ (id)passcodeEntryControllerGuarding:(id)guarding hideDigits:(BOOL)digits;	// 0x35e53105
- (id)initWithTitle:(id)title prompt:(id)prompt mode:(int)mode guarding:(id)guarding hideDigits:(BOOL)digits;	// 0x35e531ad
- (void)_passcodeEnteredForConfirm:(id)confirm;	// 0x35e53b19
- (void)_passcodeEnteredForEntry:(id)entry;	// 0x35e537cd
- (void)_passcodeEnteredForSet:(id)set;	// 0x35e539b5
- (id)accessibilityLabel;	// 0x35e53d71
- (void)dealloc;	// 0x35e53399
- (void)setFrame:(CGRect)frame;	// 0x35e53461
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x35e536dd
- (void)setIconScaleFactor:(float)factor;	// 0x35e536fd
- (void)setPasscodeToConfirm:(id)confirm;	// 0x35e5369d
// converted property setter: - (void)setUserInfo:(id)info;	// 0x35e5371d
- (void)textDidChange:(id)text;	// 0x35e5376d
- (void)textDidEndEditing:(id)text;	// 0x35e53771
// converted property getter: - (id)userInfo;	// 0x35e5375d
@end

