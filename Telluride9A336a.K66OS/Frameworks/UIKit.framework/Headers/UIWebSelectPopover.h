/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebRotatingPopover.h"
#import "UIWebFormControl.h"

@class UIKeyboard, UIWebSelectTableViewController;

__attribute__((visibility("hidden")))
@interface UIWebSelectPopover : UIWebRotatingPopover <UIWebFormControl> {
@private
	UIWebSelectTableViewController *_tableViewController;	// 16 = 0x10
	UIKeyboard *_keyboard;	// 20 = 0x14
}
@property(retain, nonatomic) UIWebSelectTableViewController *_tableViewController;	// G=0x352cfbd9; S=0x352cfbe9; @synthesize
- (id)initWithDOMHTMLSelectElement:(id)domhtmlselectElement cachedItems:(id)items singleSelectionItem:(id)item singleSelectionIndex:(unsigned)index multipleSelection:(BOOL)selection;	// 0x352cf5e9
// declared property getter: - (id)_tableViewController;	// 0x352cfbd9
- (void)_userActionDismissedPopover:(id)popover;	// 0x352cfbc9
- (void)controlBeginEditing;	// 0x352cfbb9
- (id)controlView;	// 0x352cfbb5
- (void)dealloc;	// 0x352cfac5
// declared property setter: - (void)set_tableViewController:(id)controller;	// 0x352cfbe9
@end

