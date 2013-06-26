/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIDatePickerMode.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Date : _UIDatePickerMode {
	float _dateYearWidth;	// 116 = 0x74
	float _dateMonthWidth;	// 120 = 0x78
	float _dateDayWidth;	// 124 = 0x7c
	NSString *_yearFormat;	// 128 = 0x80
	NSString *_monthFormat;	// 132 = 0x84
	NSString *_dayFormat;	// 136 = 0x88
	BOOL _isUsingJapaneseCalendar;	// 140 = 0x8c
}
+ (int)datePickerMode;	// 0x32c93e79
+ (unsigned)extractableCalendarUnits;	// 0x32c9433d
- (id)_dateForYearRow:(int)yearRow;	// 0x32c99d01
- (BOOL)_shouldEnableValueForRow:(int)row inComponent:(int)component calendarUnit:(unsigned)unit;	// 0x32c996a9
- (void)_shouldReset:(id)reset;	// 0x32f0f52d
- (id)dateFormatForCalendarUnit:(unsigned)calendarUnit;	// 0x32c96681
- (void)dealloc;	// 0x32c9d065
- (int)displayedCalendarUnits;	// 0x32c93ca9
- (id)localizedFormatString;	// 0x32c942c5
- (unsigned)nextUnitLargerThanUnit:(unsigned)unit;	// 0x32c97301
- (unsigned)nextUnitSmallerThanUnit:(unsigned)unit;	// 0x32c972e9
- (void)noteCalendarChanged;	// 0x32c9354d
- (int)numberOfRowsForCalendarUnit:(unsigned)calendarUnit;	// 0x32c98121
- (void)resetComponentWidths;	// 0x32c9362d
- (int)rowForDate:(id)date dateComponents:(id)components component:(int)component currentRow:(int)row;	// 0x32c9aec9
- (float)widthForCalendarUnit:(unsigned)calendarUnit font:(id)font maxWidth:(float)width;	// 0x32c960a5
@end
