/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiPicker.h"
#import "UIKeyboardEmojiCategoryControl.h"

@class UIKeyboardEmojiCategoryController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryPicker : UIKeyboardEmojiPicker <UIKeyboardEmojiCategoryControl> {
	UIKeyboardEmojiCategoryController *_categoryController;	// 124 = 0x7c
}
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x3498323d
- (id)categoryForCurrentRow;	// 0x349831e5
- (void)dealloc;	// 0x34983509
- (void)scrollViewDidScroll:(id)scrollView;	// 0x34983919
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;	// 0x34983b41
- (void)setCategory:(id)category;	// 0x34983555
- (id)symbolForRow:(int)row;	// 0x349836d1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x349837e1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x349838a9
- (id)titleForRow:(int)row;	// 0x349835c1
@end

