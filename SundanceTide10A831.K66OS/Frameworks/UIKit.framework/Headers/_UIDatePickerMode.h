/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDateComponents, UIFont, UIColor, NSDate, _UIDatePickerView, NSArray;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode : NSObject {
	NSDateComponents *_selectedDateComponents;	// 4 = 0x4
	NSDateComponents *_baseDateComponents;	// 8 = 0x8
	unsigned *_elements;	// 12 = 0xc
	int _yearsSinceBaseDate;	// 16 = 0x10
	NSRange _maxDayRange;	// 20 = 0x14
	NSRange _maxMonthRange;	// 28 = 0x1c
	NSString *_localizedFormatString;	// 36 = 0x24
	NSArray *_dateFormatters;	// 40 = 0x28
	unsigned _numberOfComponents;	// 44 = 0x2c
	NSString *_amString;	// 48 = 0x30
	NSString *_pmString;	// 52 = 0x34
	int _minuteInterval;	// 56 = 0x38
	NSDateComponents *_todayDateComponents;	// 60 = 0x3c
	double _todaySinceReferenceDate;	// 64 = 0x40
	UIFont *_font;	// 72 = 0x48
	UIFont *_amPmFont;	// 76 = 0x4c
	UIFont *_defaultTimeFont;	// 80 = 0x50
	UIColor *_todayTextColor;	// 84 = 0x54
	NSDate *_baseDate;	// 88 = 0x58
	NSDate *_minimumDate;	// 92 = 0x5c
	NSDateComponents *_minimumDateComponents;	// 96 = 0x60
	NSDate *_maximumDate;	// 100 = 0x64
	NSDateComponents *_maximumDateComponents;	// 104 = 0x68
	NSDate *_originatingDate;	// 108 = 0x6c
	_UIDatePickerView *datePickerView;	// 112 = 0x70
}
@property(readonly, assign, nonatomic) UIFont *amPmFont;	// G=0x31ffe101; @synthesize=_amPmFont
@property(readonly, assign, nonatomic) NSString *amString;	// G=0x31ffdff9; @synthesize=_amString
@property(retain, nonatomic) NSDate *baseDate;	// G=0x31d89e05; S=0x31d83181; @synthesize=_baseDate
@property(retain, nonatomic) NSDateComponents *baseDateComponents;	// G=0x31d89e71; S=0x31d8312d; 
@property(readonly, assign, nonatomic) int datePickerMode;	// G=0x31d83425; 
@property(assign, nonatomic) _UIDatePickerView *datePickerView;	// G=0x31d83279; S=0x31d82e69; @synthesize
@property(readonly, assign, nonatomic) UIFont *defaultTimeFont;	// G=0x31ffe0ad; @synthesize=_defaultTimeFont
@property(readonly, assign, nonatomic) int displayedCalendarUnits;	// G=0x31d8377d; 
@property(assign, nonatomic) unsigned *elements;	// G=0x31d84149; S=0x31d831a5; @synthesize=_elements
@property(readonly, assign, nonatomic) UIFont *font;	// G=0x31d85d09; @synthesize=_font
@property(retain, nonatomic) NSString *localizedFormatString;	// G=0x31ffe265; S=0x31d831e9; @synthesize=_localizedFormatString
@property(readonly, assign, nonatomic) NSDate *maximumDate;	// G=0x31ffe9e9; @synthesize=_maximumDate
@property(readonly, assign, nonatomic) NSDateComponents *maximumDateComponents;	// G=0x31ffe9f9; @synthesize=_maximumDateComponents
@property(readonly, assign, nonatomic) NSDate *minimumDate;	// G=0x31ffe9c9; @synthesize=_minimumDate
@property(readonly, assign, nonatomic) NSDateComponents *minimumDateComponents;	// G=0x31ffe9d9; @synthesize=_minimumDateComponents
@property(assign, nonatomic) int minuteInterval;	// G=0x31ffe9b5; S=0x31d82e35; @synthesize=_minuteInterval
@property(assign, nonatomic) unsigned numberOfComponents;	// G=0x31d83b85; S=0x31d83b75; @synthesize=_numberOfComponents
@property(retain, nonatomic) NSDate *originatingDate;	// G=0x31d89b6d; S=0x31d84431; @synthesize=_originatingDate
@property(readonly, assign, nonatomic) NSString *pmString;	// G=0x31ffe051; @synthesize=_pmString
@property(readonly, assign, nonatomic) float rowHeight;	// G=0x31d87dd5; 
@property(retain, nonatomic) NSDateComponents *selectedDateComponents;	// G=0x31d897d5; S=0x31d8b3d9; @synthesize=_selectedDateComponents
@property(readonly, assign, nonatomic) UIFont *sizedFont;	// G=0x31d85d4d; 
@property(retain, nonatomic) NSDateComponents *todayDateComponents;	// G=0x31d870e9; S=0x31d831fd; @synthesize=_todayDateComponents
@property(assign, nonatomic) double todaySinceReferenceDate;	// G=0x31ffded1; S=0x31d871e5; @synthesize=_todaySinceReferenceDate
@property(readonly, assign, nonatomic) UIColor *todayTextColor;	// G=0x31d8bde5; @synthesize=_todayTextColor
@property(assign, nonatomic) int yearsSinceBaseDate;	// G=0x31ffdf51; S=0x31d83191; @synthesize=_yearsSinceBaseDate
+ (id)_datePickerModeWithFormatString:(id)formatString datePickerView:(id)view;	// 0x31ffdc19
+ (id)_datePickerModeWithMode:(int)mode datePickerView:(id)view;	// 0x31d82ba1
+ (int)datePickerMode;	// 0x31ffdb91
+ (unsigned)extractableCalendarUnits;	// 0x31ffe1dd
+ (id)newDateFromGregorianYear:(int)gregorianYear month:(int)month day:(int)day timeZone:(id)zone;	// 0x31d86dd1
- (id)init;	// 0x31d82cd5
- (id)_dateByEnsuringValue:(int)value forCalendarUnit:(unsigned)calendarUnit;	// 0x31d86e01
- (id)_dateForYearRow:(int)yearRow;	// 0x31d89d59
- (int)_incrementForStaggeredTimeIntervals;	// 0x31ffe431
- (BOOL)_isComponentScrolling:(int)scrolling;	// 0x31d8a369
- (BOOL)_monthExists:(int)exists inYear:(int)year;	// 0x31ffe839
- (int)_numberOfDaysInDateComponents:(id)dateComponents;	// 0x31ffe711
- (BOOL)_scrollingAnyColumnExcept:(int)except;	// 0x31d8ac05
- (BOOL)_shouldEnableValueForRow:(int)row column:(int)column;	// 0x31d894f1
- (BOOL)_shouldEnableValueForRow:(int)row inComponent:(int)component calendarUnit:(unsigned)unit;	// 0x31ffe929
- (void)_shouldReset:(id)reset;	// 0x31ffdc81
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(int)component usingSelectionBarValue:(BOOL)value;	// 0x31d8983d
// declared property getter: - (id)amPmFont;	// 0x31ffe101
// declared property getter: - (id)amString;	// 0x31ffdff9
- (BOOL)areValidDateComponents:(id)components comparingUnits:(int)units;	// 0x31d89f51
// declared property getter: - (id)baseDate;	// 0x31d89e05
// declared property getter: - (id)baseDateComponents;	// 0x31d89e71
- (id)calendar;	// 0x31d83251
- (unsigned)calendarUnitForComponent:(int)component;	// 0x31d85ccd
- (void)clearBaseDate;	// 0x31d830e5
- (int)componentForCalendarUnit:(unsigned)calendarUnit;	// 0x31d85ed9
- (float)componentWidthForTwoDigitCalendarUnit:(unsigned)twoDigitCalendarUnit font:(id)font maxWidth:(float)width;	// 0x31ffdd55
- (id)dateComponentsByRestrictingSelectedComponents:(id)components withLastManipulatedColumn:(int)lastManipulatedColumn;	// 0x31d8ba81
- (id)dateForRow:(int)row inCalendarUnit:(unsigned)calendarUnit;	// 0x31d8934d
- (id)dateFormatForCalendarUnit:(unsigned)calendarUnit;	// 0x31ffe669
- (id)dateFormatterForCalendarUnit:(unsigned)calendarUnit;	// 0x31d8634d
// declared property getter: - (int)datePickerMode;	// 0x31d83425
// declared property getter: - (id)datePickerView;	// 0x31d83279
- (int)dayForRow:(int)row;	// 0x31d89bd9
- (void)dealloc;	// 0x31d8c455
// declared property getter: - (id)defaultTimeFont;	// 0x31ffe0ad
// declared property getter: - (int)displayedCalendarUnits;	// 0x31d8377d
// declared property getter: - (unsigned *)elements;	// 0x31d84149
- (int)eraForYearRow:(int)yearRow;	// 0x31d8acb5
// declared property getter: - (id)font;	// 0x31d85d09
- (id)fontForCalendarUnit:(unsigned)calendarUnit;	// 0x31d89151
- (int)hourForRow:(int)row;	// 0x31ffe629
- (BOOL)is24Hour;	// 0x31d85ead
- (void)loadDate:(id)date animated:(BOOL)animated;	// 0x31d8429d
- (id)locale;	// 0x31d839f9
// declared property getter: - (id)localizedFormatString;	// 0x31ffe265
// declared property getter: - (id)maximumDate;	// 0x31ffe9e9
// declared property getter: - (id)maximumDateComponents;	// 0x31ffe9f9
// declared property getter: - (id)minimumDate;	// 0x31ffe9c9
// declared property getter: - (id)minimumDateComponents;	// 0x31ffe9d9
- (int)minuteForRow:(int)row;	// 0x31ffe5dd
// declared property getter: - (int)minuteInterval;	// 0x31ffe9b5
- (int)monthForRow:(int)row;	// 0x31d894d1
- (unsigned)nextUnitLargerThanUnit:(unsigned)unit;	// 0x31ffe479
- (unsigned)nextUnitSmallerThanUnit:(unsigned)unit;	// 0x31ffe505
- (void)noteCalendarChanged;	// 0x31d82f55
// declared property getter: - (unsigned)numberOfComponents;	// 0x31d83b85
- (int)numberOfRowsForCalendarUnit:(unsigned)calendarUnit;	// 0x31ffe2ed
- (int)numberOfRowsInComponent:(int)component;	// 0x31d87ffd
// declared property getter: - (id)originatingDate;	// 0x31d89b6d
// declared property getter: - (id)pmString;	// 0x31ffe051
- (NSRange)rangeForCalendarUnit:(unsigned)calendarUnit;	// 0x31d8b095
- (void)resetComponentWidths;	// 0x31ffe379
- (void)resetSelectedDateComponentsWithValuesUnderSelectionBars;	// 0x31ffe6f5
- (int)rowForDate:(id)date dateComponents:(id)components component:(int)component currentRow:(int)row;	// 0x31d8af35
// declared property getter: - (float)rowHeight;	// 0x31d87dd5
- (int)secondForRow:(int)row;	// 0x31ffe591
// declared property getter: - (id)selectedDateComponents;	// 0x31d897d5
// declared property setter: - (void)setBaseDate:(id)date;	// 0x31d83181
// declared property setter: - (void)setBaseDateComponents:(id)components;	// 0x31d8312d
// declared property setter: - (void)setDatePickerView:(id)view;	// 0x31d82e69
// declared property setter: - (void)setElements:(unsigned *)elements;	// 0x31d831a5
// declared property setter: - (void)setLocalizedFormatString:(id)string;	// 0x31d831e9
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x31d82e35
// declared property setter: - (void)setNumberOfComponents:(unsigned)components;	// 0x31d83b75
// declared property setter: - (void)setOriginatingDate:(id)date;	// 0x31d84431
// declared property setter: - (void)setSelectedDateComponents:(id)components;	// 0x31d8b3d9
// declared property setter: - (void)setTodayDateComponents:(id)components;	// 0x31d831fd
// declared property setter: - (void)setTodaySinceReferenceDate:(double)date;	// 0x31d871e5
// declared property setter: - (void)setYearsSinceBaseDate:(int)date;	// 0x31d83191
// declared property getter: - (id)sizedFont;	// 0x31d85d4d
- (void)takeExtremesFromMinimumDate:(id)minimumDate maximumDate:(id)date;	// 0x31d83bbd
- (id)timeZone;	// 0x31d832b9
- (int)titleAlignmentForCalendarUnit:(unsigned)calendarUnit;	// 0x31d8917d
- (id)titleForRow:(int)row inComponent:(int)component;	// 0x31d89211
// declared property getter: - (id)todayDateComponents;	// 0x31d870e9
// declared property getter: - (double)todaySinceReferenceDate;	// 0x31ffded1
// declared property getter: - (id)todayTextColor;	// 0x31d8bde5
- (float)totalComponentWidth;	// 0x31ffe401
- (float)totalComponentWidthWithFont:(id)font;	// 0x31d85f29
- (void)updateEnabledStateOfViewForRow:(int)row inComponent:(int)component;	// 0x31d8b8a1
- (void)updateSelectedDateComponentsWithNewValueInComponent:(int)component;	// 0x31d89829
- (int)valueForRow:(int)row inCalendarUnit:(unsigned)calendarUnit;	// 0x31d893a1
- (id)viewForRow:(int)row inComponent:(int)component reusingView:(id)view;	// 0x31d88d45
- (float)widthForCalendarUnit:(unsigned)calendarUnit font:(id)font maxWidth:(float)width;	// 0x31ffe155
- (float)widthForComponent:(int)component maxWidth:(float)width;	// 0x31d85bc9
- (int)yearForRow:(int)row;	// 0x31d8ac61
// declared property getter: - (int)yearsSinceBaseDate;	// 0x31ffdf51
@end

