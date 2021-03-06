/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebRotatingAccessoryPopover.h"
#import "UIWebFormControl.h"

@class UIWebDateTimePopoverViewController;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePopover : UIWebRotatingAccessoryPopover <UIWebFormControl> {
	UIWebDateTimePopoverViewController *_webDateTimeViewController;	// 28 = 0x1c
}
@property(retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController;	// G=0x2f64a079; S=0x2f64a089; @synthesize
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement datePickerMode:(int)mode;	// 0x2f649d75
// declared property getter: - (id)_webDateTimeViewController;	// 0x2f64a079
- (void)clear:(id)clear;	// 0x2f649d45
- (void)controlBeginEditing;	// 0x2f64a02d
- (id)controlView;	// 0x2f64a029
- (void)dealloc;	// 0x2f649fe5
// declared property setter: - (void)set_webDateTimeViewController:(id)controller;	// 0x2f64a089
@end

