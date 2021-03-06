/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import </libobjc.A.h>

@class NSNumber;

@interface ICSByDayValue : NSObject <NSCoding> {
	NSNumber *_number;	// 4 = 0x4
	int _weekday;	// 8 = 0x8
}
@property(retain) NSNumber *number;	// G=0x33c59045; S=0x33c59055; 
@property(assign) int weekday;	// G=0x33c591b5; S=0x33c591c9; @synthesize=_weekday
+ (id)byDayValueFromICSString:(id)icsstring;	// 0x33c515c5
+ (int)weekdayFromICSString:(id)icsstring;	// 0x33c514e5
- (id)initWithCoder:(id)coder;	// 0x33c59121
- (id)initWithWeekday:(int)weekday;	// 0x33c58fd1
- (id)initWithWeekday:(int)weekday number:(id)number;	// 0x33c58fe5
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x33c4e251
- (int)compare:(id)compare;	// 0x33c4e33d
- (void)encodeWithCoder:(id)coder;	// 0x33c590c1
// declared property getter: - (id)number;	// 0x33c59045
// declared property setter: - (void)setNumber:(id)number;	// 0x33c59055
// declared property setter: - (void)setWeekday:(int)weekday;	// 0x33c591c9
// declared property getter: - (int)weekday;	// 0x33c591b5
@end

