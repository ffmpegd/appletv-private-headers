/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library


@interface ICSDateValue : NSObject <NSCoding> {
	int _year;	// 4 = 0x4
	int _month;	// 8 = 0x8
	int _day;	// 12 = 0xc
}
@property(readonly, assign) int day;	// G=0x328231f9; @synthesize=_day
@property(readonly, assign) int month;	// G=0x328231e9; @synthesize=_month
@property(readonly, assign) int year;	// G=0x328231d9; @synthesize=_year
+ (id)dateFromICSString:(id)icsstring;	// 0x32822d8d
+ (id)dateFromICSUTF8String:(const char *)icsutf8String;	// 0x32823209
- (id)initWithCoder:(id)coder;	// 0x32823139
- (id)initWithYear:(int)year month:(int)month day:(int)day;	// 0x32822dbd
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x327feb8d
- (int)compare:(id)compare;	// 0x32822ec5
- (id)components;	// 0x32822e1d
- (int)dateType;	// 0x3282348d
// declared property getter: - (int)day;	// 0x328231f9
- (id)description;	// 0x328230ad
- (void)encodeWithCoder:(id)coder;	// 0x328230c1
- (id)icsString;	// 0x32823099
// declared property getter: - (int)month;	// 0x328231e9
// declared property getter: - (int)year;	// 0x328231d9
@end

