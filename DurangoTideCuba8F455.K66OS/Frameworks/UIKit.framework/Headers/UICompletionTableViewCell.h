/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewCell.h"

@class UITableCell;

__attribute__((visibility("hidden")))
@interface UICompletionTableViewCell : UITableViewCell {
@private
	UITableCell *_tableCell;	// 216 = 0xd8
}
@property(retain, nonatomic) UITableCell *tableCell;	// G=0x301c9951; S=0x301c46b9; @synthesize=_tableCell
- (void)dealloc;	// 0x3022cbd5
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x301c46e1
// declared property setter: - (void)setTableCell:(id)cell;	// 0x301c46b9
// declared property getter: - (id)tableCell;	// 0x301c9951
@end
