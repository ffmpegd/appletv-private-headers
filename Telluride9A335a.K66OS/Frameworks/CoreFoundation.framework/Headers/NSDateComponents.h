/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSDateComponents : NSObject <NSCopying, NSCoding> {
}
@property(retain) id calendar;	// G=0x3349de35; S=0x3349de41; converted property
@property(assign) int day;	// G=0x3349dfa1; S=0x3349db5d; converted property
@property(assign) int era;	// G=0x3349df61; S=0x3349db2d; converted property
@property(assign) int hour;	// G=0x3349dfad; S=0x3349dfb9; converted property
@property(assign) int minute;	// G=0x3349dfc9; S=0x3349dfd5; converted property
@property(assign) int month;	// G=0x3349df95; S=0x3349db4d; converted property
@property(assign) int nanosecond;	// G=0x3349e001; S=0x3349e00d; converted property
@property(assign) int quarter;	// G=0x3349df79; S=0x3349df85; converted property
@property(assign) int second;	// G=0x3349dfe5; S=0x3349dff1; converted property
@property(retain) id timeZone;	// G=0x3349dec9; S=0x3349ded5; converted property
@property(assign) int week;	// G=0x3349e01d; S=0x3349e029; converted property
@property(assign) int weekOfMonth;	// G=0x3349e055; S=0x3349e061; converted property
@property(assign) int weekOfYear;	// G=0x3349e039; S=0x3349e045; converted property
@property(assign) int weekday;	// G=0x3349e08d; S=0x3349e099; converted property
@property(assign) int weekdayOrdinal;	// G=0x3349e0a9; S=0x3349e0b5; converted property
@property(assign) int year;	// G=0x3349df6d; S=0x3349db3d; converted property
@property(assign) int yearForWeekOfYear;	// G=0x3349e071; S=0x3349e07d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3349dae5
- (id)init;	// 0x3349daed
- (id)initWithCoder:(id)coder;	// 0x33511899
// converted property getter: - (id)calendar;	// 0x3349de35
- (id)copyWithZone:(NSZone *)zone;	// 0x3349db6d
- (id)date;	// 0x335118a1
// converted property getter: - (int)day;	// 0x3349dfa1
- (void)dealloc;	// 0x3349e4c5
- (id)description;	// 0x33511909
- (void)encodeWithCoder:(id)coder;	// 0x3351189d
// converted property getter: - (int)era;	// 0x3349df61
- (unsigned)hash;	// 0x33511735
// converted property getter: - (int)hour;	// 0x3349dfad
- (BOOL)isEqual:(id)equal;	// 0x3349e815
// converted property getter: - (int)minute;	// 0x3349dfc9
// converted property getter: - (int)month;	// 0x3349df95
// converted property getter: - (int)nanosecond;	// 0x3349e001
// converted property getter: - (int)quarter;	// 0x3349df79
// converted property getter: - (int)second;	// 0x3349dfe5
// converted property setter: - (void)setCalendar:(id)calendar;	// 0x3349de41
// converted property setter: - (void)setDay:(int)day;	// 0x3349db5d
// converted property setter: - (void)setEra:(int)era;	// 0x3349db2d
// converted property setter: - (void)setHour:(int)hour;	// 0x3349dfb9
// converted property setter: - (void)setMinute:(int)minute;	// 0x3349dfd5
// converted property setter: - (void)setMonth:(int)month;	// 0x3349db4d
// converted property setter: - (void)setNanosecond:(int)nanosecond;	// 0x3349e00d
// converted property setter: - (void)setQuarter:(int)quarter;	// 0x3349df85
// converted property setter: - (void)setSecond:(int)second;	// 0x3349dff1
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x3349ded5
// converted property setter: - (void)setWeek:(int)week;	// 0x3349e029
// converted property setter: - (void)setWeekOfMonth:(int)month;	// 0x3349e061
// converted property setter: - (void)setWeekOfYear:(int)year;	// 0x3349e045
// converted property setter: - (void)setWeekday:(int)weekday;	// 0x3349e099
// converted property setter: - (void)setWeekdayOrdinal:(int)ordinal;	// 0x3349e0b5
// converted property setter: - (void)setYear:(int)year;	// 0x3349db3d
// converted property setter: - (void)setYearForWeekOfYear:(int)year;	// 0x3349e07d
// converted property getter: - (id)timeZone;	// 0x3349dec9
// converted property getter: - (int)week;	// 0x3349e01d
// converted property getter: - (int)weekOfMonth;	// 0x3349e055
// converted property getter: - (int)weekOfYear;	// 0x3349e039
// converted property getter: - (int)weekday;	// 0x3349e08d
// converted property getter: - (int)weekdayOrdinal;	// 0x3349e0a9
// converted property getter: - (int)year;	// 0x3349df6d
// converted property getter: - (int)yearForWeekOfYear;	// 0x3349e071
@end

