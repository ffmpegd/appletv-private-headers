/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIFormPeripheral.h"
#import <NSObject.h> // Unknown library

@class DOMHTMLInputElement;
@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebDateTimePeripheral : NSObject <UIFormPeripheral> {
	DOMHTMLInputElement *_inputElement;	// 4 = 0x4
	id<UIWebFormControl> _control;	// 8 = 0x8
}
@property(retain, nonatomic) id<UIWebFormControl> _control;	// G=0x30e1f835; S=0x30e1f845; @synthesize
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement;	// G=0x30e1f815; S=0x30e1f825; @synthesize
+ (id)createPeripheralWithDOMHTMLInputElement:(id)domhtmlinputElement;	// 0x30e1f78d
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement;	// 0x30e1f619
// declared property getter: - (id)_control;	// 0x30e1f835
- (int)_datePickerModeForInputType:(id)inputType;	// 0x30e1f571
// declared property getter: - (id)_inputElement;	// 0x30e1f815
- (id)assistantView;	// 0x30e1f7f5
- (void)beginEditing;	// 0x30e1f7d5
- (void)dealloc;	// 0x30e1f735
// declared property setter: - (void)set_control:(id)control;	// 0x30e1f845
// declared property setter: - (void)set_inputElement:(id)element;	// 0x30e1f825
@end

