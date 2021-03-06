/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVResourceTypeItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem {
	CoreDAVItemWithNoChildren *_calendar;	// 52 = 0x34
	CoreDAVItemWithNoChildren *_scheduleInbox;	// 56 = 0x38
	CoreDAVItemWithNoChildren *_scheduleOutbox;	// 60 = 0x3c
	CoreDAVItemWithNoChildren *_notification;	// 64 = 0x40
	CoreDAVItemWithNoChildren *_subscribed;	// 68 = 0x44
	CoreDAVItemWithNoChildren *_sharedOwner;	// 72 = 0x48
}
@property(retain) CoreDAVItemWithNoChildren *calendar;	// G=0x33747309; S=0x3374731d; @synthesize=_calendar
@property(retain) CoreDAVItemWithNoChildren *notification;	// G=0x33747375; S=0x33747389; @synthesize=_notification
@property(retain) CoreDAVItemWithNoChildren *scheduleInbox;	// G=0x3374732d; S=0x33747341; @synthesize=_scheduleInbox
@property(retain) CoreDAVItemWithNoChildren *scheduleOutbox;	// G=0x33747351; S=0x33747365; @synthesize=_scheduleOutbox
@property(retain) CoreDAVItemWithNoChildren *sharedOwner;	// G=0x337473bd; S=0x337473d1; @synthesize=_sharedOwner
@property(retain) CoreDAVItemWithNoChildren *subscribed;	// G=0x33747399; S=0x337473ad; @synthesize=_subscribed
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33746a01
// declared property getter: - (id)calendar;	// 0x33747309
- (id)copyParseRules;	// 0x33746b81
- (void)dealloc;	// 0x33746aad
- (id)description;	// 0x33746b55
// declared property getter: - (id)notification;	// 0x33747375
// declared property getter: - (id)scheduleInbox;	// 0x3374732d
// declared property getter: - (id)scheduleOutbox;	// 0x33747351
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x3374731d
// declared property setter: - (void)setNotification:(id)notification;	// 0x33747389
// declared property setter: - (void)setScheduleInbox:(id)inbox;	// 0x33747341
// declared property setter: - (void)setScheduleOutbox:(id)outbox;	// 0x33747365
// declared property setter: - (void)setSharedOwner:(id)owner;	// 0x337473d1
// declared property setter: - (void)setSubscribed:(id)subscribed;	// 0x337473ad
// declared property getter: - (id)sharedOwner;	// 0x337473bd
// declared property getter: - (id)subscribed;	// 0x33747399
- (void)write:(id)write;	// 0x33746f85
@end

