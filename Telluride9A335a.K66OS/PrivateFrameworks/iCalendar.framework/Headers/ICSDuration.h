/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library


@interface ICSDuration : NSObject <NSCoding> {
	double _duration;	// 4 = 0x4
}
+ (id)durationFromICSString:(id)icsstring;	// 0x36774e5d
+ (id)durationFromICSString:(id)icsstring;	// 0x36785b79
+ (id)durationFromRFC2445UTF8String:(const char *)rfc2445UTF8String;	// 0x3678596d
- (id)initWithCoder:(id)coder;	// 0x36774ef9
- (id)initWithWeeks:(int)weeks days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x36774ca1
- (id)ICSStringWithOptions:(unsigned)options;	// 0x36774e79
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x36778e99
- (int)days;	// 0x36774d69
- (void)encodeWithCoder:(id)coder;	// 0x36774eb9
- (int)hours;	// 0x36774da5
- (BOOL)isNegative;	// 0x36774e39
- (int)minutes;	// 0x36774ddd
- (int)seconds;	// 0x36774e11
- (double)timeInterval;	// 0x36774d21
- (int)weeks;	// 0x36774d39
@end

