/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UITableViewCellLayoutManager : NSObject {
}
+ (id)layoutManagerForTableViewCellStyle:(int)tableViewCellStyle;	// 0x33a4c335
- (CGRect)_accessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x33a519dd
- (CGRect)_adjustedBackgroundContentRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x33a4c8dd
- (CGRect)_adjustedBackgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x33a4ca2d
- (CGRect)_backgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x33a4cae9
- (CGRect)_contentRectForCell:(id)cell forEditingState:(BOOL)editingState showingDeleteConfirmation:(BOOL)confirmation;	// 0x33a4c521
- (CGRect)_editControlRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x33a50e55
- (CGRect)_editingAccessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x33a51e25
- (CGRect)_reorderControlRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x33a51085
- (CGRect)_reorderSeparatorRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x33a517a5
- (CGRect)accessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33a519a9
- (BOOL)accessoryShouldAppearForCell:(id)accessory;	// 0x33a4cd25
- (BOOL)accessoryShouldFadeForCell:(id)accessory;	// 0x33b0d3d5
- (CGRect)accessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33b0e575
- (CGRect)backgroundEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33a50ce9
- (CGRect)backgroundStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33b0c9e1
- (id)badgeForCell:(id)cell;	// 0x33c83b89
- (void)cell:(id)cell didTransitionToState:(unsigned)state;	// 0x33b0d609
- (void)cell:(id)cell willTransitionToState:(unsigned)state;	// 0x33b0c31d
- (CGRect)contentEndingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;	// 0x33b24ab5
- (CGRect)contentEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33a4c4ed
- (float)contentIndentationForCell:(id)cell;	// 0x33a522e1
- (CGRect)contentRectForCell:(id)cell forState:(unsigned)state;	// 0x33c83b99
- (CGRect)contentStartingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;	// 0x33b24715
- (CGRect)contentStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33b0d14d
- (id)defaultBadgeForCell:(id)cell;	// 0x33c83b29
- (float)defaultDetailTextLabelFontSizeForCell:(id)cell;	// 0x33c83b19
- (id)defaultEditableTextFieldForCell:(id)cell;	// 0x33b62e59
- (id)defaultImageViewForCell:(id)cell;	// 0x33a6ee45
- (id)defaultLabelForCell:(id)cell;	// 0x33aaf8f9
- (id)defaultLabelForCell:(id)cell ofClass:(Class)aClass;	// 0x33aaf939
- (float)defaultTextLabelFontSizeForCell:(id)cell;	// 0x33b0ba35
- (CGRect)deleteConfirmationRectForCell:(id)cell;	// 0x33b24505
- (id)detailTextLabelForCell:(id)cell;	// 0x33b0b941
- (CGRect)editControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33a50e15
- (BOOL)editControlShouldAppearForCell:(id)editControl;	// 0x33b0ca4d
- (BOOL)editControlShouldFadeForCell:(id)editControl;	// 0x33a51041
- (CGRect)editControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33b0d119
- (id)editableTextFieldForCell:(id)cell;	// 0x33b26ac5
- (CGRect)editingAccessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33a51df1
- (BOOL)editingAccessoryShouldAppearForCell:(id)editingAccessory;	// 0x33a5138d
- (BOOL)editingAccessoryShouldFadeForCell:(id)editingAccessory;	// 0x33a521f1
- (CGRect)editingAccessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33b0e4fd
- (id)imageViewForCell:(id)cell;	// 0x33a6ee35
- (void)layoutSubviewsOfCell:(id)cell;	// 0x33a4fdb9
- (CGRect)reorderControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33a51045
- (BOOL)reorderControlShouldAppearForCell:(id)reorderControl;	// 0x33a6eee1
- (BOOL)reorderControlShouldFadeForCell:(id)reorderControl;	// 0x33a516c9
- (CGRect)reorderControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33b20079
- (CGRect)reorderSeparatorEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33a51765
- (BOOL)reorderSeparatorShouldAppearForCell:(id)reorderSeparator;	// 0x33a6ee89
- (BOOL)reorderSeparatorShouldFadeForCell:(id)reorderSeparator;	// 0x33a51959
- (CGRect)reorderSeparatorStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x33c83bd5
- (id)textLabelForCell:(id)cell;	// 0x33b0b931
@end

