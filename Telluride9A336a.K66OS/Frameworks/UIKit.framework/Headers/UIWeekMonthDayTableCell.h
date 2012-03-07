/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIDateTableCell.h"

@class UILabel, NSDate;

__attribute__((visibility("hidden")))
@interface UIWeekMonthDayTableCell : UIDateTableCell {
@private
	UILabel *_weekdayLabel;	// 80 = 0x50
	NSDate *_date;	// 84 = 0x54
	float _weekdayWidth;	// 88 = 0x58
	BOOL _weekdayLast;	// 92 = 0x5c
}
@property(retain) NSDate *date;	// G=0x35262c85; S=0x35262c95; converted property
- (id)_weekdayLabelColor;	// 0x35262cf9
// converted property getter: - (id)date;	// 0x35262c85
- (void)dealloc;	// 0x35262c25
- (void)layoutSubviews;	// 0x35263045
- (void)setBackgroundColor:(id)color;	// 0x35262d51
// converted property setter: - (void)setDate:(id)date;	// 0x35262c95
- (void)setWeekdayLast:(BOOL)last;	// 0x35262cd9
- (void)setWeekdayString:(id)string;	// 0x35262d99
- (void)setWeekdayWidth:(float)width;	// 0x35262ce9
- (void)updateHighlightColors;	// 0x35262f89
@end

