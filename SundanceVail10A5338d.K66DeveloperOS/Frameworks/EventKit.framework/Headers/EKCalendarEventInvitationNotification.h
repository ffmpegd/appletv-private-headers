/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarNotification.h"

@class NSString, NSDate;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification {
	NSString *_location;	// 36 = 0x24
	NSString *_calendarName;	// 40 = 0x28
	NSDate *_startDate;	// 44 = 0x2c
	NSDate *_endDate;	// 48 = 0x30
	BOOL _allDay;	// 52 = 0x34
	int _status;	// 56 = 0x38
}
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x34ba8b7d; S=0x34ba8b8d; @synthesize=_allDay
@property(retain, nonatomic) NSString *calendarName;	// G=0x34ba8b1d; S=0x34ba8b2d; @synthesize=_calendarName
@property(retain, nonatomic) NSDate *endDate;	// G=0x34ba8b5d; S=0x34ba8b6d; @synthesize=_endDate
@property(retain, nonatomic) NSString *location;	// G=0x34ba8afd; S=0x34ba8b0d; @synthesize=_location
@property(retain, nonatomic) NSDate *startDate;	// G=0x34ba8b3d; S=0x34ba8b4d; @synthesize=_startDate
@property(assign, nonatomic) int status;	// G=0x34ba8b9d; S=0x34ba8bad; @synthesize=_status
- (id)initWithType:(int)type;	// 0x34ba8a2d
// declared property getter: - (id)calendarName;	// 0x34ba8b1d
- (void)dealloc;	// 0x34ba8a59
// declared property getter: - (id)endDate;	// 0x34ba8b5d
- (id)eventFromEventStore:(id)eventStore;	// 0x34ba8ad9
// declared property getter: - (BOOL)isAllDay;	// 0x34ba8b7d
// declared property getter: - (id)location;	// 0x34ba8afd
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x34ba8b8d
// declared property setter: - (void)setCalendarName:(id)name;	// 0x34ba8b2d
// declared property setter: - (void)setEndDate:(id)date;	// 0x34ba8b6d
// declared property setter: - (void)setLocation:(id)location;	// 0x34ba8b0d
// declared property setter: - (void)setStartDate:(id)date;	// 0x34ba8b4d
// declared property setter: - (void)setStatus:(int)status;	// 0x34ba8bad
// declared property getter: - (id)startDate;	// 0x34ba8b3d
// declared property getter: - (int)status;	// 0x34ba8b9d
@end
