/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIWebFormControl.h"

@class DOMHTMLInputElement, NSString, UIDatePicker;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl> {
	DOMHTMLInputElement *_inputElement;	// 4 = 0x4
	UIDatePicker *_datePicker;	// 8 = 0x8
	NSString *_formatString;	// 12 = 0xc
	BOOL _shouldRemoveTimeZoneInformation;	// 16 = 0x10
	BOOL _isTimeInput;	// 17 = 0x11
}
@property(retain, nonatomic) UIDatePicker *_datePicker;	// G=0x30e1f0e1; S=0x30e1f0f1; @synthesize
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement;	// G=0x30e1f0c1; S=0x30e1f0d1; @synthesize
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement datePickerMode:(int)mode;	// 0x30e1eb21
- (void)_dateChangeHandler:(id)handler;	// 0x30e1eb11
- (void)_dateChanged;	// 0x30e1eae1
- (void)_dateChangedSetAsNumber;	// 0x30e1e8f9
- (void)_dateChangedSetAsString;	// 0x30e1e9a1
// declared property getter: - (id)_datePicker;	// 0x30e1f0e1
// declared property getter: - (id)_inputElement;	// 0x30e1f0c1
- (id)_sanitizeInputValueForFormatter:(id)formatter;	// 0x30e1ee2d
- (int)_timeZoneOffsetFromGMT:(id)gmt;	// 0x30e1e8a5
- (void)controlBeginEditing;	// 0x30e1ee81
- (id)controlView;	// 0x30e1ee1d
- (void)dealloc;	// 0x30e1edc5
// declared property setter: - (void)set_datePicker:(id)picker;	// 0x30e1f0f1
// declared property setter: - (void)set_inputElement:(id)element;	// 0x30e1f0d1
@end
