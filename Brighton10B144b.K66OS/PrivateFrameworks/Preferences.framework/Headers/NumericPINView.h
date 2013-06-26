/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PINView.h"

@class UIPasscodeField;

@interface NumericPINView : PINView {
	UIPasscodeField *_passcodeField;	// 108 = 0x6c
}
@property(retain) id stringValue;	// G=0x352f4cbd; S=0x352f4cdd; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x352f4755
- (void)appendString:(id)string;	// 0x352f4d1d
- (void)deleteLastCharacter;	// 0x352f4cfd
- (void)hidePasscodeField:(BOOL)field;	// 0x352f4bad
- (void)layoutSubviews;	// 0x352f49b1
// converted property setter: - (void)setStringValue:(id)value;	// 0x352f4cdd
// converted property getter: - (id)stringValue;	// 0x352f4cbd
@end
