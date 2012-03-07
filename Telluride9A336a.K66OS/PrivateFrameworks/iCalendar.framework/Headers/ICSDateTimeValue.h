/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import "ICSDateValue.h"


@interface ICSDateTimeValue : ICSDateValue <NSCoding> {
	int _hour;	// 16 = 0x10
	int _minute;	// 20 = 0x14
	int _second;	// 24 = 0x18
}
@property(readonly, assign) int hour;	// G=0x34652751; @synthesize=_hour
@property(readonly, assign) int minute;	// G=0x34652761; @synthesize=_minute
@property(readonly, assign) int second;	// G=0x34652771; @synthesize=_second
- (id)initWithCoder:(id)coder;	// 0x346526b1
- (id)initWithYear:(int)year month:(int)month day:(int)day;	// 0x346524e1
- (id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second;	// 0x34652511
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3462dd29
- (id)components;	// 0x34652581
- (int)dateType;	// 0x34652781
- (void)encodeWithCoder:(id)coder;	// 0x34652615
// declared property getter: - (int)hour;	// 0x34652751
// declared property getter: - (int)minute;	// 0x34652761
// declared property getter: - (int)second;	// 0x34652771
@end
