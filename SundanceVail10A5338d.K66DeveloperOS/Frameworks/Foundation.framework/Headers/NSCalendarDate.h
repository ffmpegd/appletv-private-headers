/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDate.h> // Unknown library
#import "Foundation-Structs.h"

@class NSTimeZone, NSString;

@interface NSCalendarDate : NSDate {
	unsigned refCount;	// 4 = 0x4
	double _timeIntervalSinceReferenceDate;	// 8 = 0x8
	NSTimeZone *_timeZone;	// 16 = 0x10
	NSString *_formatString;	// 20 = 0x14
	void *_reserved;	// 24 = 0x18
}
@property(retain) id calendarFormat;	// G=0x373662c1; S=0x3732d2a1; converted property
@property(readonly, assign) double timeIntervalSinceReferenceDate;	// G=0x373073f5; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x373662ad; S=0x3732d245; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x37307239
+ (id)calendarDate;	// 0x3734997d
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x373676a9
+ (id)dateWithString:(id)string calendarFormat:(id)format;	// 0x3736685d
+ (id)dateWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x373668a9
+ (id)dateWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x373456d9
+ (id)distantFuture;	// 0x373661b9
+ (id)distantPast;	// 0x37366229
- (id)init;	// 0x373072b9
- (id)initWithCoder:(id)coder;	// 0x373666dd
- (id)initWithString:(id)string;	// 0x37366189
- (id)initWithString:(id)string calendarFormat:(id)format;	// 0x37356c21
- (id)initWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x37356c49
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x373072e1
- (id)initWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x3734573d
- (id)addTimeInterval:(double)interval;	// 0x3732d1b1
// converted property getter: - (id)calendarFormat;	// 0x373662c1
- (Class)classForCoder;	// 0x373665b9
- (id)copyWithZone:(NSZone *)zone;	// 0x37356771
- (id)dateByAddingYears:(int)years months:(int)months days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x373499bd
- (int)dayOfCommonEra;	// 0x373662d1
- (int)dayOfMonth;	// 0x37366381
- (int)dayOfWeek;	// 0x373663b9
- (int)dayOfYear;	// 0x37366401
- (void)dealloc;	// 0x373074c5
- (id)description;	// 0x37366805
- (id)descriptionWithCalendarFormat:(id)calendarFormat;	// 0x37366845
- (id)descriptionWithCalendarFormat:(id)calendarFormat locale:(id)locale;	// 0x373668f9
- (id)descriptionWithLocale:(id)locale;	// 0x37366825
- (void)encodeWithCoder:(id)coder;	// 0x373665bd
- (int)hourOfDay;	// 0x3734c489
- (int)microsecondOfSecond;	// 0x37366431
- (int)minuteOfHour;	// 0x3732d119
- (int)monthOfYear;	// 0x37366349
- (oneway void)release;	// 0x37307411
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x37459755
- (int)secondOfMinute;	// 0x37307359
// converted property setter: - (void)setCalendarFormat:(id)format;	// 0x3732d2a1
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x3732d245
// converted property getter: - (double)timeIntervalSinceReferenceDate;	// 0x373073f5
// converted property getter: - (id)timeZone;	// 0x373662ad
- (id)timeZoneDetail;	// 0x3736629d
- (int)yearOfCommonEra;	// 0x373456a1
- (void)years:(int *)years months:(int *)months days:(int *)days hours:(int *)hours minutes:(int *)minutes seconds:(int *)seconds sinceDate:(id)date;	// 0x37366481
@end

