/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVLeafDataPayload.h> // Unknown library
#import "CalDAVCalendarItemProtocol.h"

@class NSString, CalDAVCalendarServerScheduleChangesItem;

@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload <CalDAVCalendarItemProtocol> {
	NSString *_scheduleTag;	// 16 = 0x10
	CalDAVCalendarServerScheduleChangesItem *_scheduleChanges;	// 20 = 0x14
}
@property(retain) CalDAVCalendarServerScheduleChangesItem *scheduleChanges;	// G=0x33250c41; S=0x33250c1d; @synthesize=_scheduleChanges
@property(retain) NSString *scheduleTag;	// G=0x33250c7d; S=0x33250c59; @synthesize=_scheduleTag
- (void)dealloc;	// 0x33250bc9
// declared property getter: - (id)scheduleChanges;	// 0x33250c41
// declared property getter: - (id)scheduleTag;	// 0x33250c7d
// declared property setter: - (void)setScheduleChanges:(id)changes;	// 0x33250c1d
// declared property setter: - (void)setScheduleTag:(id)tag;	// 0x33250c59
@end

