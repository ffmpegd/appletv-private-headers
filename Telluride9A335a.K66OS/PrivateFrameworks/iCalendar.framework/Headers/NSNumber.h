/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <NSNumber.h> // Unknown library


@interface NSNumber (ICSWriter)
- (void)_ICSBoolAppendingToString:(id)string;	// 0x36778485
- (void)_ICSFBTypeAppendingToString:(id)string;	// 0x367785e1
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x36778669
- (void)_ICSUTCOffsetAppendingToString:(id)string;	// 0x367784cd
@end

@interface NSNumber (iCalendarImport)
+ (id)boolFromICSString:(id)icsstring;	// 0x367858ed
@end

