/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class EKTimeZone;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {
	XXStruct_lQVxyC _dateGr;	// 4 = 0x4
	double _dateAbs;	// 20 = 0x14
	EKTimeZone *_timeZone;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
}
@property(readonly, retain) EKTimeZone *timeZone;	// G=0x32759f99; converted property
+ (id)calendarDateWithAbsoluteTime:(double)absoluteTime timeZone:(id)zone;	// 0x3274c99d
+ (id)calendarDateWithDate:(id)date timeZone:(id)zone;	// 0x3274f631
+ (id)calendarDateWithDateComponents:(id)dateComponents timeZone:(id)zone;	// 0x3274dfd1
+ (id)calendarDateWithGregorianDate:(XXStruct_lQVxyC)gregorianDate timeZone:(id)zone;	// 0x3275b789
- (id)initWithAbsoluteTime:(double)absoluteTime internalTimeZone:(id)zone;	// 0x327a6c0d
- (id)initWithAbsoluteTime:(double)absoluteTime timeZone:(id)zone;	// 0x3274c9e5
- (id)initWithDate:(id)date timeZone:(id)zone;	// 0x3274f671
- (id)initWithDateComponents:(id)dateComponents timeZone:(id)zone;	// 0x3274e011
- (id)initWithGregorianDate:(XXStruct_lQVxyC)gregorianDate internalTimeZone:(id)zone;	// 0x3274df3d
- (id)initWithGregorianDate:(XXStruct_lQVxyC)gregorianDate timeZone:(id)zone;	// 0x3275b7dd
- (double)absoluteTime;	// 0x3274d3a5
- (id)calendarDateByAddingDays:(int)days;	// 0x3274e339
- (id)calendarDateByAddingGregorianUnits:(XXStruct_mY3THC)units;	// 0x3274e365
- (id)calendarDateByAddingWeeks:(int)weeks;	// 0x327a6dc9
- (id)calendarDateForDay;	// 0x3274e1c9
- (id)calendarDateForEndOfDay;	// 0x3274e455
- (id)calendarDateForEndOfMonth;	// 0x327530ed
- (id)calendarDateForEndOfWeekWithWeekStart:(unsigned)weekStart;	// 0x32752f1d
- (id)calendarDateForMonth;	// 0x32752ff9
- (id)calendarDateForWeekWithWeekStart:(unsigned)weekStart;	// 0x3274d2f1
- (id)calendarDateForWeekWithWeekStart:(unsigned)weekStart daysSinceWeekStart:(int *)start;	// 0x3274d305
- (id)calendarDateForYear;	// 0x327a6fc5
- (id)calendarDateInTimeZone:(id)timeZone;	// 0x32764cf5
- (id)calendarDateWithDate:(id)date;	// 0x327a6df9
- (int)compare:(id)compare;	// 0x327505d5
- (id)components;	// 0x32764df9
- (id)copyWithZone:(NSZone *)zone;	// 0x3274d2e1
- (id)date;	// 0x3274e559
- (unsigned)day;	// 0x32769759
- (unsigned)dayOfWeek;	// 0x327689fd
- (unsigned)dayOfYear;	// 0x327a6ed1
- (unsigned)daysInMonth;	// 0x327531f9
- (unsigned)daysInYear;	// 0x327a6f31
- (void)dealloc;	// 0x3274f87d
- (id)description;	// 0x327a6c89
- (XXStruct_mY3THC)differenceAsGregorianUnits:(id)units flags:(unsigned long)flags;	// 0x3274ffd1
- (int)differenceInDays:(id)days;	// 0x32752ee5
- (int)differenceInMonths:(id)months;	// 0x32769701
- (int)differenceInYears:(id)years;	// 0x327a6e35
- (id)earlierDate:(id)date;	// 0x32769c6d
- (XXStruct_lQVxyC)gregorianDate;	// 0x3274e2ad
- (unsigned)hour;	// 0x32768135
- (BOOL)isEqual:(id)equal;	// 0x3275abd9
- (id)laterDate:(id)date;	// 0x327a70c5
- (unsigned)minute;	// 0x32768169
- (unsigned)month;	// 0x327a6e9d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32768959
- (double)second;	// 0x3276819d
- (int)secondsFromGMT;	// 0x327a6d8d
// converted property getter: - (id)timeZone;	// 0x32759f99
- (unsigned)weekOfYear;	// 0x327a6f01
- (unsigned)weeksInYear;	// 0x327a6f79
- (unsigned)year;	// 0x327a6e6d
@end
