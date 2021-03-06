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
+ (id)durationFromICSString:(id)icsstring;	// 0x36a2b1a5
+ (id)durationFromRFC2445UTF8String:(const char *)rfc2445UTF8String;	// 0x36a2af99
+ (id)generateDurationFromICSString:(id)icsstring;	// 0x36a1a839
- (id)initWithCoder:(id)coder;	// 0x36a1a8d5
- (id)initWithWeeks:(int)weeks days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x36a1a67d
- (id)ICSStringWithOptions:(unsigned)options;	// 0x36a1a855
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x36a1ecc1
- (int)days;	// 0x36a1a745
- (void)encodeWithCoder:(id)coder;	// 0x36a1a895
- (int)hours;	// 0x36a1a781
- (BOOL)isNegative;	// 0x36a1a815
- (int)minutes;	// 0x36a1a7b9
- (int)seconds;	// 0x36a1a7ed
- (double)timeInterval;	// 0x36a1a6fd
- (int)weeks;	// 0x36a1a715
@end

