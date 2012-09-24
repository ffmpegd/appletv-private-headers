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
+ (id)layoutManagerForTableViewCellStyle:(int)tableViewCellStyle;	// 0x308f7f2d
- (CGRect)_accessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x308fcc95
- (CGRect)_adjustedBackgroundContentRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x308f84d5
- (CGRect)_adjustedBackgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x308f8625
- (CGRect)_backgroundRectForCell:(id)cell forIndentedState:(BOOL)indentedState;	// 0x308f86e1
- (CGRect)_contentRectForCell:(id)cell forEditingState:(BOOL)editingState showingDeleteConfirmation:(BOOL)confirmation;	// 0x308f8119
- (CGRect)_editControlRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x308fc10d
- (CGRect)_editingAccessoryRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x308fd735
- (CGRect)_reorderControlRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x308fc33d
- (CGRect)_reorderSeparatorRectForCell:(id)cell offscreen:(BOOL)offscreen;	// 0x308fca5d
- (CGRect)accessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x308fcc61
- (BOOL)accessoryShouldAppearForCell:(id)accessory;	// 0x308f88cd
- (BOOL)accessoryShouldFadeForCell:(id)accessory;	// 0x309f4ca1
- (CGRect)accessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x30a754f5
- (CGRect)backgroundEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x308fbfa1
- (CGRect)backgroundStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x309f4959
- (id)badgeForCell:(id)cell;	// 0x30996215
- (void)cell:(id)cell didTransitionToState:(unsigned)state;	// 0x309f4ed9
- (void)cell:(id)cell willTransitionToState:(unsigned)state;	// 0x309f4295
- (CGRect)contentEndingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;	// 0x309761b9
- (CGRect)contentEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x308f80e5
- (float)contentIndentationForCell:(id)cell;	// 0x308fdbf1
- (CGRect)contentRectForCell:(id)cell forState:(unsigned)state;	// 0x30b6a62d
- (CGRect)contentStartingRectForCell:(id)cell forDisplayOfDeleteConfirmation:(BOOL)deleteConfirmation;	// 0x30a75d95
- (CGRect)contentStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x309f4a21
- (id)defaultBadgeForCell:(id)cell;	// 0x30996225
- (float)defaultDetailTextLabelFontSizeForCell:(id)cell;	// 0x30b6a619
- (id)defaultEditableTextFieldForCell:(id)cell;	// 0x30a5b2d5
- (id)defaultImageViewForCell:(id)cell;	// 0x3092bfbd
- (id)defaultLabelForCell:(id)cell;	// 0x3097b1a1
- (id)defaultLabelForCell:(id)cell ofClass:(Class)aClass;	// 0x3097b1e1
- (float)defaultTextLabelFontSizeForCell:(id)cell;	// 0x309f5029
- (CGRect)deleteConfirmationRectForCell:(id)cell;	// 0x30a75b89
- (id)detailTextLabelForCell:(id)cell;	// 0x309f3e8d
- (CGRect)editControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x308fc0cd
- (BOOL)editControlShouldAppearForCell:(id)editControl;	// 0x309f49c5
- (BOOL)editControlShouldFadeForCell:(id)editControl;	// 0x308fc2f9
- (CGRect)editControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x30a57935
- (id)editableTextFieldForCell:(id)cell;	// 0x30b6a629
- (CGRect)editingAccessoryEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x308fd701
- (BOOL)editingAccessoryShouldAppearForCell:(id)editingAccessory;	// 0x308fc645
- (BOOL)editingAccessoryShouldFadeForCell:(id)editingAccessory;	// 0x308fdb01
- (CGRect)editingAccessoryStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x30b6a69d
- (id)imageViewForCell:(id)cell;	// 0x3092bfad
- (void)layoutSubviewsOfCell:(id)cell;	// 0x308fb041
- (CGRect)reorderControlEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x308fc2fd
- (BOOL)reorderControlShouldAppearForCell:(id)reorderControl;	// 0x3092c351
- (BOOL)reorderControlShouldFadeForCell:(id)reorderControl;	// 0x308fc981
- (CGRect)reorderControlStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x30a57cd1
- (CGRect)reorderSeparatorEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x308fca1d
- (BOOL)reorderSeparatorShouldAppearForCell:(id)reorderSeparator;	// 0x3092c2f9
- (BOOL)reorderSeparatorShouldFadeForCell:(id)reorderSeparator;	// 0x308fcc11
- (CGRect)reorderSeparatorStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x30b6a669
- (id)textLabelForCell:(id)cell;	// 0x309f3e7d
@end
