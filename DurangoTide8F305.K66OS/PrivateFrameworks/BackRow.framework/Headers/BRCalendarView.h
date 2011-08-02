/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"
#import "BRTumblerDelegate.h"
#import "BRTumblerDataSource.h"

@class BRImageControl, NSCalendar, NSDate, BRCursorControl, BRTumblerControl, BRPagedView;
@protocol BRCalendarViewDataSource, BRCalendarViewDelegate;

@interface BRCalendarView : BRControl <BRTumblerDataSource, BRTumblerDelegate> {
@private
	id<BRCalendarViewDataSource> _dataSource;	// 44 = 0x2c
	id<BRCalendarViewDelegate> _delegate;	// 48 = 0x30
	NSDate *_date;	// 52 = 0x34
	NSCalendar *_calendar;	// 56 = 0x38
	NSDate *_startDate;	// 60 = 0x3c
	NSDate *_endDate;	// 64 = 0x40
	BRTumblerControl *_monthPicker;	// 68 = 0x44
	BRPagedView *_calendarPages;	// 72 = 0x48
	BRImageControl *_brandingImage;	// 76 = 0x4c
	BRCursorControl *_cursor;	// 80 = 0x50
}
@property(assign, nonatomic) id<BRCalendarViewDataSource> dataSource;	// G=0x32a21975; S=0x32a21d41; @synthesize=_dataSource
@property(assign, nonatomic) id<BRCalendarViewDelegate> delegate;	// G=0x32a21955; S=0x32a21965; @synthesize=_delegate
+ (id)calendarView;	// 0x32a21e75
+ (id)calendarViewForDate:(id)date;	// 0x32a21e31
+ (id)calendarViewForDate:(id)date inCalendar:(id)calendar;	// 0x32a21de9
- (id)init;	// 0x32a21d99
- (id)initWithDate:(id)date;	// 0x32a21d61
- (id)initWithDate:(id)date inCalendar:(id)calendar;	// 0x32a21f6d
- (unsigned)_monthCount;	// 0x32a21985
- (void)calendarMonthView:(id)view didSelectItemAtDate:(id)date;	// 0x32a21aa1
- (id)calendarMonthView:(id)view itemForDate:(id)date;	// 0x32a21acd
- (BOOL)currentItemSelectedInTumbler:(id)tumbler;	// 0x32a219f9
// declared property getter: - (id)dataSource;	// 0x32a21975
- (BOOL)datasourceShouldBeRetainedByPagedView:(id)datasource;	// 0x32a21941
- (void)dealloc;	// 0x32a21eb9
// declared property getter: - (id)delegate;	// 0x32a21955
- (BOOL)delegateShouldBeRetainedByPagedView:(id)delegate;	// 0x32a21951
- (unsigned)itemCountForTumbler:(id)tumbler;	// 0x32a21a8d
- (void)layoutSubcontrols;	// 0x32a22411
- (long)pageCountForPagedView:(id)pagedView;	// 0x32a21bcd
- (void)pagedView:(id)view didSelectItemAtIndex:(long)index;	// 0x32a2194d
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x32a21949
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x32a21af9
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x32a21945
- (void)reload;	// 0x32a21be1
- (void)setBrandingImage:(id)image;	// 0x32a21d21
// declared property setter: - (void)setDataSource:(id)source;	// 0x32a21d41
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32a21965
- (void)tumblerControl:(id)control didTumbleToItemAtIndex:(unsigned)index;	// 0x32a21a1d
- (id)tumblerControl:(id)control itemAtIndex:(unsigned)index;	// 0x32a222c9
@end
