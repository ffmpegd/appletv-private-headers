/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebDateTimePopoverViewController : UIViewController {
	id<UIWebFormControl> _innerWebDateTimeControl;	// 196 = 0xc4
}
@property(retain, nonatomic) id<UIWebFormControl> _innerWebDateTimeControl;	// G=0x30453db5; S=0x30453dc5; @synthesize
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement datePickerMode:(int)mode;	// 0x30453ca9
// declared property getter: - (id)_innerWebDateTimeControl;	// 0x30453db5
- (void)dealloc;	// 0x30453d35
- (void)loadView;	// 0x30453d79
// declared property setter: - (void)set_innerWebDateTimeControl:(id)control;	// 0x30453dc5
@end
