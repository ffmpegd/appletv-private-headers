/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSString;

@interface ICSTimeZone : ICSComponent {
	id _systemTimeZone;	// 12 = 0xc
}
@property(retain) NSString *tzid;	// G=0x33c43a39; S=0x33c43a81; 
+ (id)blocksAfterDate:(id)date untilDate:(id)date2 forTimeZone:(id)timeZone;	// 0x33c43be1
+ (id)name;	// 0x33c439d9
+ (id)timeZoneWithSystemTimeZoneName:(id)systemTimeZoneName;	// 0x33c45549
- (id)initWithSystemTimeZone:(id)systemTimeZone;	// 0x33c44d31
- (id)initWithSystemTimeZone:(id)systemTimeZone fromDate:(id)date options:(int)options;	// 0x33c439e5
- (id)initWithTimeZone:(id)timeZone fromDate:(id)date options:(int)options;	// 0x33c44f51
- (id)computeTimeZoneChangeListFromDate:(id)date toDate:(id)date2;	// 0x33c557f9
- (void)dealloc;	// 0x33c43b39
- (id)getNSTimeZone:(id)zone;	// 0x33c55671
- (id)getNSTimeZoneFromDate:(id)date toDate:(id)date2;	// 0x33c55271
- (BOOL)isEqualToNSTimeZone:(id)nstimeZone forDate:(id)date;	// 0x33c55065
// declared property setter: - (void)setTzid:(id)tzid;	// 0x33c43a81
- (id)systemTimeZoneForDate:(id)date;	// 0x33c43aa1
// declared property getter: - (id)tzid;	// 0x33c43a39
@end
