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
	id<UIWebFormControl> _innerWebDateTimeControl;	// 304 = 0x130
}
@property(retain, nonatomic) id<UIWebFormControl> _innerWebDateTimeControl;	// G=0x2f649d25; S=0x2f649d35; @synthesize
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement datePickerMode:(int)mode;	// 0x2f649c19
// declared property getter: - (id)_innerWebDateTimeControl;	// 0x2f649d25
- (void)dealloc;	// 0x2f649ca5
- (void)loadView;	// 0x2f649ce9
// declared property setter: - (void)set_innerWebDateTimeControl:(id)control;	// 0x2f649d35
@end
