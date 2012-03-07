/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSCalendar.h> // Unknown library
#import "Foundation-Structs.h"

@class NSLocale, NSTimeZone, NSDate;

__attribute__((visibility("hidden")))
@interface NSAutoCalendar : NSCalendar {
@private
	NSCalendar *cal;	// 4 = 0x4
	NSLocale *changedLocale;	// 8 = 0x8
	NSTimeZone *changedTimeZone;	// 12 = 0xc
	unsigned changedFirstWeekday;	// 16 = 0x10
	unsigned changedMinimumDaysinFirstWeek;	// 20 = 0x14
	NSDate *changedGregorianStartDate;	// 24 = 0x18
}
@property(assign) unsigned firstWeekday;	// G=0x3205f85d; S=0x3205f831; converted property
@property(retain) id gregorianStartDate;	// G=0x3205f92d; S=0x3205f8c9; converted property
@property(retain) id locale;	// G=0x3205f78d; S=0x3205f729; converted property
@property(assign) unsigned minimumDaysInFirstWeek;	// G=0x3205f8a9; S=0x3205f87d; converted property
@property(retain) id timeZone;	// G=0x3205f811; S=0x3205f7ad; converted property
- (id)init;	// 0x3205f559
- (id)initWithCalendarIdentifier:(id)calendarIdentifier;	// 0x3205f641
- (id)initWithCoder:(id)coder;	// 0x3205fdcd
- (void)_update:(id)update;	// 0x3205f441
- (id)calendarIdentifier;	// 0x3205f709
- (Class)classForCoder;	// 0x3205ffdd
- (id)components:(unsigned)components fromDate:(id)date;	// 0x3205fa65
- (id)components:(unsigned)components fromDate:(id)date toDate:(id)date3 options:(unsigned)options;	// 0x3205faa5
- (id)copyWithZone:(NSZone *)zone;	// 0x3205fb2d
- (id)dateByAddingComponents:(id)components toDate:(id)date options:(unsigned)options;	// 0x3205fa85
- (id)dateFromComponents:(id)components;	// 0x3205fa45
- (void)dealloc;	// 0x3205f651
- (id)description;	// 0x3205fac5
- (void)encodeWithCoder:(id)coder;	// 0x3205fc19
// converted property getter: - (unsigned)firstWeekday;	// 0x3205f85d
// converted property getter: - (id)gregorianStartDate;	// 0x3205f92d
// converted property getter: - (id)locale;	// 0x3205f78d
- (NSRange)maximumRangeOfUnit:(unsigned)unit;	// 0x3205f97d
// converted property getter: - (unsigned)minimumDaysInFirstWeek;	// 0x3205f8a9
- (NSRange)minimumRangeOfUnit:(unsigned)unit;	// 0x3205f94d
- (unsigned)ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x3205f9e9
- (NSRange)rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x3205f9ad
- (BOOL)rangeOfUnit:(unsigned)unit startDate:(id *)date interval:(double *)interval forDate:(id)date4;	// 0x3205fa09
// converted property setter: - (void)setFirstWeekday:(unsigned)weekday;	// 0x3205f831
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x3205f8c9
// converted property setter: - (void)setLocale:(id)locale;	// 0x3205f729
// converted property setter: - (void)setMinimumDaysInFirstWeek:(unsigned)firstWeek;	// 0x3205f87d
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x3205f7ad
// converted property getter: - (id)timeZone;	// 0x3205f811
@end

