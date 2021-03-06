/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"

@class NSDictionary, NSMutableArray, NSString;

@interface BROptionDialog : BRMenuController <BRMenuListItemProvider> {
@private
	NSString *_tag;	// 104 = 0x68
	int _currentSelection;	// 108 = 0x6c
	NSDictionary *_userInfo;	// 112 = 0x70
	NSMutableArray *_options;	// 116 = 0x74
	id _delegate;	// 120 = 0x78
	SEL _actionSelector;	// 124 = 0x7c
}
@property(retain) NSString *tag;	// G=0x32f2bf91; S=0x32f2be39; converted property
@property(retain) NSDictionary *userInfo;	// G=0x32f2b4bd; S=0x32f2b2fd; converted property
- (id)init;	// 0x32f2ad71
- (BOOL)_itemSelected:(id)selected;	// 0x32f5f569
- (void)_setSelectedIndex:(long)index;	// 0x32f2bf81
- (void)addOptionText:(id)text;	// 0x32f2b171
- (void)addOptionText:(id)text isDefault:(BOOL)aDefault;	// 0x32f2b10d
- (void)dealloc;	// 0x32f2c491
- (float)heightForRow:(long)row;	// 0x32f2b1b1
- (long)itemCount;	// 0x32f2af65
- (id)itemForRow:(long)row;	// 0x32f2b1b5
- (float)listVerticalOffset;	// 0x32f5f619
- (BOOL)rowSelectable:(long)selectable;	// 0x32f5f509
- (long)selectedIndex;	// 0x32f2b4ad
- (id)selectedText;	// 0x32f5f64d
- (void)setActionSelector:(SEL)selector target:(id)target;	// 0x32f2b2a9
// converted property setter: - (void)setTag:(id)tag;	// 0x32f2be39
// converted property setter: - (void)setUserInfo:(id)info;	// 0x32f2b2fd
// converted property getter: - (id)tag;	// 0x32f2bf91
- (id)titleForRow:(long)row;	// 0x32f2b261
// converted property getter: - (id)userInfo;	// 0x32f2b4bd
@end

