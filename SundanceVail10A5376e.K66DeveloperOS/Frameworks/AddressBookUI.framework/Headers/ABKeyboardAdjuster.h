/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library
#import "AddressBookUI-Structs.h"

@class NSMutableSet;

@interface ABKeyboardAdjuster : NSObject {
	NSMutableSet *_adjustmentRecords;	// 4 = 0x4
	BOOL _active;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL active;	// G=0x30ff9df1; S=0x30ff9b4d; @synthesize=_active
+ (id)sharedAdjuster;	// 0x30ff9db9
- (id)init;	// 0x30ff95fd
- (void)_adjustTableForKeyboardInfo:(id)keyboardInfo;	// 0x30ff920d
- (void)_keyboardWillHide:(id)_keyboard;	// 0x30ff9525
- (void)_keyboardWillShow:(id)_keyboard;	// 0x30ff944d
// declared property getter: - (BOOL)active;	// 0x30ff9df1
- (void)addScrollView:(id)view;	// 0x30ff9769
- (void)cancelDelayedAdjustmentsForView:(id)view;	// 0x30ff91e5
- (BOOL)containsScrollView:(id)view;	// 0x30ff9851
- (void)dateFieldDateDidBeginEditingNotification:(id)dateFieldDate;	// 0x30ff9ab5
- (void)dateFieldDateDidEndEditingNotification:(id)dateFieldDate;	// 0x30ff9b01
- (void)dealloc;	// 0x30ff96ed
- (void)manuallyAdjustEdgeInsets:(UIEdgeInsets)insets force:(BOOL)force;	// 0x30ff92d1
- (id)recordForScrollView:(id)scrollView;	// 0x30ff919d
- (void)removeScrollView:(id)view;	// 0x30ff97cd
- (void)resetAdjustment;	// 0x30ff9d8d
// declared property setter: - (void)setActive:(BOOL)active;	// 0x30ff9b4d
- (BOOL)shouldForceAutomaticKeyboardForView:(id)view;	// 0x30ff989d
- (void)textFieldTextDidBeginEditingNotification:(id)textFieldText;	// 0x30ff9985
- (void)textFieldTextDidEndEditingNotification:(id)textFieldText;	// 0x30ff99d1
- (void)textViewTextDidBeginEditingNotification:(id)textViewText;	// 0x30ff9a1d
- (void)textViewTextDidEndEditingNotification:(id)textViewText;	// 0x30ff9a69
@end
