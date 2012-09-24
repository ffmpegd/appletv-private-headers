/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTextField.h"
#import "BRControl.h"

@class BRTextControl, ATVIPv4AddressSelectionControl;
@protocol BRTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface ATVIPv4AddressEntryControl : BRControl <BRTextField> {
	ATVIPv4AddressSelectionControl *_addressPicker;	// 84 = 0x54
	BRTextControl *_labelLayer;	// 88 = 0x58
	CGSize _addressPickerSize;	// 92 = 0x5c
	float _labelPadding;	// 100 = 0x64
	id<BRTextFieldDelegate> _textFieldDelegate;	// 104 = 0x68
}
- (id)init;	// 0x208011
- (void)_handlePlayPauseButton:(id)button;	// 0x2086b1
- (void)_layoutUI;	// 0x2087cd
- (id)accessibilityLabel;	// 0x2087ad
- (id)accessibilityTraitsList;	// 0x20872d
- (BOOL)brEventAction:(id)action;	// 0x208445
- (void)dealloc;	// 0x2080f5
- (BOOL)isAccessibilityElement;	// 0x208729
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x208159
- (void)reset;	// 0x2083b5
- (void)setDelegate:(id)delegate;	// 0x208245
- (void)setFrame:(CGRect)frame;	// 0x2083fd
- (void)setInitialAddress:(id)address;	// 0x208395
- (void)setLabel:(id)label;	// 0x208255
- (void)setString:(id)string;	// 0x208691
- (id)stringValue;	// 0x208671
@end
