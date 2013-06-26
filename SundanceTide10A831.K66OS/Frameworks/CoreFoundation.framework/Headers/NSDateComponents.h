/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"


@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding> {
}
@property(retain) id calendar;	// G=0x34598715; S=0x34598721; converted property
@property(assign) int day;	// G=0x3458d091; S=0x3458d069; converted property
@property(assign) int era;	// G=0x34598855; S=0x34598401; converted property
@property(assign) int hour;	// G=0x34598885; S=0x34598891; converted property
@property(assign, getter=isLeapMonth) BOOL leapMonth;	// G=0x345989c1; S=0x3458d051; converted property
@property(assign) int minute;	// G=0x345988a1; S=0x345988b1; converted property
@property(assign) int month;	// G=0x3458d085; S=0x3458d041; converted property
@property(assign) int nanosecond;	// G=0x345988e1; S=0x345988f1; converted property
@property(assign) int quarter;	// G=0x34598865; S=0x34598871; converted property
@property(assign) int second;	// G=0x345988c5; S=0x345988d1; converted property
@property(retain) id timeZone;	// G=0x345987b1; S=0x345987c1; converted property
@property(assign) int week;	// G=0x34598901; S=0x34598911; converted property
@property(assign) int weekOfMonth;	// G=0x34598941; S=0x34598951; converted property
@property(assign) int weekOfYear;	// G=0x34598925; S=0x34598931; converted property
@property(assign) int weekday;	// G=0x34598985; S=0x34598991; converted property
@property(assign) int weekdayOrdinal;	// G=0x345989a1; S=0x345989b1; converted property
@property(assign) int year;	// G=0x3458d079; S=0x3458d031; converted property
@property(assign) int yearForWeekOfYear;	// G=0x34598965; S=0x34598971; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3458cfe9
+ (BOOL)supportsSecureCoding;	// 0x3460c069
- (id)init;	// 0x3458cff1
- (id)initWithCoder:(id)coder;	// 0x3460c06d
// converted property getter: - (id)calendar;	// 0x34598715
- (id)copyWithZone:(NSZone *)zone;	// 0x34598421
- (id)date;	// 0x3459a565
// converted property getter: - (int)day;	// 0x3458d091
- (void)dealloc;	// 0x3458ff11
- (id)description;	// 0x3460c075
- (void)encodeWithCoder:(id)coder;	// 0x3460c071
// converted property getter: - (int)era;	// 0x34598855
- (unsigned)hash;	// 0x3460be81
// converted property getter: - (int)hour;	// 0x34598885
- (BOOL)isEqual:(id)equal;	// 0x34598ff5
// converted property getter: - (BOOL)isLeapMonth;	// 0x345989c1
// converted property getter: - (int)minute;	// 0x345988a1
// converted property getter: - (int)month;	// 0x3458d085
// converted property getter: - (int)nanosecond;	// 0x345988e1
// converted property getter: - (int)quarter;	// 0x34598865
// converted property getter: - (int)second;	// 0x345988c5
// converted property setter: - (void)setCalendar:(id)calendar;	// 0x34598721
// converted property setter: - (void)setDay:(int)day;	// 0x3458d069
// converted property setter: - (void)setEra:(int)era;	// 0x34598401
// converted property setter: - (void)setHour:(int)hour;	// 0x34598891
// converted property setter: - (void)setLeapMonth:(BOOL)month;	// 0x3458d051
// converted property setter: - (void)setMinute:(int)minute;	// 0x345988b1
// converted property setter: - (void)setMonth:(int)month;	// 0x3458d041
// converted property setter: - (void)setNanosecond:(int)nanosecond;	// 0x345988f1
// converted property setter: - (void)setQuarter:(int)quarter;	// 0x34598871
// converted property setter: - (void)setSecond:(int)second;	// 0x345988d1
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x345987c1
// converted property setter: - (void)setWeek:(int)week;	// 0x34598911
// converted property setter: - (void)setWeekOfMonth:(int)month;	// 0x34598951
// converted property setter: - (void)setWeekOfYear:(int)year;	// 0x34598931
// converted property setter: - (void)setWeekday:(int)weekday;	// 0x34598991
// converted property setter: - (void)setWeekdayOrdinal:(int)ordinal;	// 0x345989b1
// converted property setter: - (void)setYear:(int)year;	// 0x3458d031
// converted property setter: - (void)setYearForWeekOfYear:(int)year;	// 0x34598971
// converted property getter: - (id)timeZone;	// 0x345987b1
// converted property getter: - (int)week;	// 0x34598901
// converted property getter: - (int)weekOfMonth;	// 0x34598941
// converted property getter: - (int)weekOfYear;	// 0x34598925
// converted property getter: - (int)weekday;	// 0x34598985
// converted property getter: - (int)weekdayOrdinal;	// 0x345989a1
// converted property getter: - (int)year;	// 0x3458d079
// converted property getter: - (int)yearForWeekOfYear;	// 0x34598965
@end
