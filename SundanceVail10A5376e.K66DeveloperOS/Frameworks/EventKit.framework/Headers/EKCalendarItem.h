/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSString, NSURL, NSArray, EKCalendar, NSDate, NSTimeZone;

@interface EKCalendarItem : EKObject {
	int _actionsDisabledCachedValue;	// 36 = 0x24
}
@property(copy, nonatomic) NSURL *URL;	// G=0x367b02a1; S=0x367fa1b5; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x367f9d61; 
@property(retain) id action;	// G=0x367fa17d; S=0x367fa199; converted property
@property(copy, nonatomic) NSArray *alarms;	// G=0x367b0129; S=0x367b1c9d; 
@property(assign, getter=isAllDay) BOOL allDay;	// G=0x367fa005; S=0x367b2f59; converted property
@property(readonly, assign, nonatomic) NSArray *attendees;	// G=0x367af74d; 
@property(retain, nonatomic) EKCalendar *calendar;	// G=0x367a982d; S=0x367b3905; 
@property(readonly, assign, nonatomic) NSString *calendarItemExternalIdentifier;	// G=0x367f9cad; 
@property(readonly, assign, nonatomic) NSString *calendarItemIdentifier;	// G=0x367f9c11; 
@property(readonly, assign, nonatomic) NSDate *creationDate;	// G=0x367f9f4d; 
@property(assign, getter=isDefaultAlarmRemoved) BOOL defaultAlarmRemoved;	// G=0x367fa211; S=0x367fa241; converted property
@property(readonly, assign, nonatomic) BOOL hasAlarms;	// G=0x367fa6e1; 
@property(readonly, assign, nonatomic) BOOL hasAttendees;	// G=0x367a9c41; 
@property(readonly, assign, nonatomic) BOOL hasNotes;	// G=0x367f9e3d; 
@property(readonly, assign, nonatomic) BOOL hasRecurrenceRules;	// G=0x367b099d; 
@property(readonly, assign, nonatomic) NSDate *lastModifiedDate;	// G=0x367f9f15; 
@property(copy, nonatomic) NSString *location;	// G=0x367a9b35; S=0x367b3c31; 
@property(copy, nonatomic) NSString *notes;	// G=0x367b0351; S=0x367b4e09; 
@property(retain) id organizer;	// G=0x367aabbd; S=0x367fa93d; converted property
@property(assign) int priority;	// G=0x367fa09d; S=0x367fa139; converted property
@property(copy, nonatomic) NSArray *recurrenceRules;	// G=0x367b15a9; S=0x367fa7cd; 
@property(retain) id sharedItemCreatedByDisplayName;	// G=0x367fa969; S=0x367fa9c5; converted property
@property(retain) id sharedItemCreatedByFirstName;	// G=0x367faa19; S=0x367faa35; converted property
@property(retain) id sharedItemCreatedByLastName;	// G=0x367faa51; S=0x367faa6d; converted property
@property(retain) id sharedItemCreatedDate;	// G=0x367faa89; S=0x367faaa5; converted property
@property(retain) id sharedItemCreatedTimeZone;	// G=0x367faac1; S=0x367faadd; converted property
@property(retain) id sharedItemModifiedByDisplayName;	// G=0x367faaf9; S=0x367fab55; converted property
@property(retain) id sharedItemModifiedByEmailAddress;	// G=0x367fab71; S=0x367fab8d; converted property
@property(retain) id sharedItemModifiedByFirstName;	// G=0x367faba9; S=0x367fabc5; converted property
@property(retain) id sharedItemModifiedByLastName;	// G=0x367fabe1; S=0x367fabfd; converted property
@property(retain) id sharedItemModifiedDate;	// G=0x367fac19; S=0x367fac35; converted property
@property(retain) id sharedItemModifiedTimeZone;	// G=0x367fac51; S=0x367fac6d; converted property
@property(retain) id structuredLocation;	// G=0x367a9b5d; S=0x367b3c71; converted property
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x367abba5; S=0x367b1471; 
@property(copy, nonatomic) NSString *title;	// G=0x367a8d61; S=0x367b3c15; 
// declared property getter: - (id)URL;	// 0x367b02a1
// declared property getter: - (id)UUID;	// 0x367f9d61
- (id)_alarmsRelation;	// 0x367b0185
- (id)_attachmentsRelation;	// 0x367af0cd
- (id)_attendeesRelation;	// 0x367a9cb9
- (id)_locationRelation;	// 0x367a9b85
- (void)_moveToCalendarInternal:(id)calendarInternal;	// 0x367fb38d
- (id)_organizerRelation;	// 0x367aabe5
- (id)_persistentItem;	// 0x367a8ded
- (id)_recurrencesRelation;	// 0x367b0a31
- (id)_selfAttendeeRelation;	// 0x367aaefd
// converted property getter: - (id)action;	// 0x367fa17d
- (BOOL)actionsDisabled;	// 0x367fa549
- (void)addAlarm:(id)alarm;	// 0x367fa775
- (void)addAttendee:(id)attendee;	// 0x367fa849
- (void)addRecurrenceRule:(id)rule;	// 0x367b4ad5
// declared property getter: - (id)alarms;	// 0x367b0129
- (BOOL)allowsAlarmModifications;	// 0x367fa3ad
- (BOOL)allowsAttendeeModifications;	// 0x367fa47d
- (BOOL)allowsCalendarModifications;	// 0x367fa33d
- (BOOL)allowsRecurrenceModifications;	// 0x367fa395
- (id)attachments;	// 0x367af075
// declared property getter: - (id)attendees;	// 0x367af74d
// declared property getter: - (id)calendar;	// 0x367a982d
// declared property getter: - (id)calendarItemExternalIdentifier;	// 0x367f9cad
// declared property getter: - (id)calendarItemIdentifier;	// 0x367f9c11
- (BOOL)canMoveToCalendar:(id)calendar fromCalendar:(id)calendar2 error:(id *)error;	// 0x367fac89
// declared property getter: - (id)creationDate;	// 0x367f9f4d
- (id)description;	// 0x367f9b25
- (id)externalURI;	// 0x367fa285
// declared property getter: - (BOOL)hasAlarms;	// 0x367fa6e1
// declared property getter: - (BOOL)hasAttendees;	// 0x367a9c41
// declared property getter: - (BOOL)hasNotes;	// 0x367f9e3d
// declared property getter: - (BOOL)hasRecurrenceRules;	// 0x367b099d
// converted property getter: - (BOOL)isAllDay;	// 0x367fa005
// converted property getter: - (BOOL)isDefaultAlarmRemoved;	// 0x367fa211
- (BOOL)isEditable;	// 0x367b0849
- (BOOL)isExternallyOrganizedInvitation;	// 0x367a9c01
- (BOOL)isFloating;	// 0x367b15fd
- (BOOL)isOrganizedBySharedCalendarOwner;	// 0x367fa2cd
- (BOOL)isSelfOrganized;	// 0x367aab55
- (BOOL)isSelfOrganizedInvitation;	// 0x367fa28d
// declared property getter: - (id)lastModifiedDate;	// 0x367f9f15
- (id)lazyLoadRelationForKey:(id)key;	// 0x367a9861
// declared property getter: - (id)location;	// 0x367a9b35
- (void)moveToCalendar:(id)calendar;	// 0x367fb5bd
// declared property getter: - (id)notes;	// 0x367b0351
// converted property getter: - (id)organizer;	// 0x367aabbd
- (id)originalItem;	// 0x367fb585
// converted property getter: - (int)priority;	// 0x367fa09d
- (void)rebase;	// 0x367fadfd
// declared property getter: - (id)recurrenceRules;	// 0x367b15a9
- (void)removeAlarm:(id)alarm;	// 0x367fa7a1
- (void)removeAttendee:(id)attendee;	// 0x367fa875
- (void)removeRecurrenceRule:(id)rule;	// 0x367fa81d
- (BOOL)requiresDetach;	// 0x367fa289
- (id)selfAttendee;	// 0x367aaed5
- (int)selfParticipantStatus;	// 0x367fa8a1
// converted property setter: - (void)setAction:(id)action;	// 0x367fa199
// declared property setter: - (void)setAlarms:(id)alarms;	// 0x367b1c9d
// converted property setter: - (void)setAllDay:(BOOL)day;	// 0x367b2f59
- (void)setAttendees:(id)attendees;	// 0x367b4db9
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x367b3905
- (void)setCreationDate:(id)date;	// 0x367f9fe9
// converted property setter: - (void)setDefaultAlarmRemoved:(BOOL)removed;	// 0x367fa241
- (void)setLastModifiedDate:(id)date;	// 0x367f9f31
// declared property setter: - (void)setLocation:(id)location;	// 0x367b3c31
// declared property setter: - (void)setNotes:(id)notes;	// 0x367b4e09
// converted property setter: - (void)setOrganizer:(id)organizer;	// 0x367fa93d
// converted property setter: - (void)setPriority:(int)priority;	// 0x367fa139
// declared property setter: - (void)setRecurrenceRules:(id)rules;	// 0x367fa7cd
- (void)setSharedItemCreatedByAddress:(id)address;	// 0x367fa9fd
// converted property setter: - (void)setSharedItemCreatedByDisplayName:(id)name;	// 0x367fa9c5
// converted property setter: - (void)setSharedItemCreatedByFirstName:(id)name;	// 0x367faa35
// converted property setter: - (void)setSharedItemCreatedByLastName:(id)name;	// 0x367faa6d
// converted property setter: - (void)setSharedItemCreatedDate:(id)date;	// 0x367faaa5
// converted property setter: - (void)setSharedItemCreatedTimeZone:(id)zone;	// 0x367faadd
// converted property setter: - (void)setSharedItemModifiedByDisplayName:(id)name;	// 0x367fab55
// converted property setter: - (void)setSharedItemModifiedByEmailAddress:(id)address;	// 0x367fab8d
// converted property setter: - (void)setSharedItemModifiedByFirstName:(id)name;	// 0x367fabc5
// converted property setter: - (void)setSharedItemModifiedByLastName:(id)name;	// 0x367fabfd
// converted property setter: - (void)setSharedItemModifiedDate:(id)date;	// 0x367fac35
// converted property setter: - (void)setSharedItemModifiedTimeZone:(id)zone;	// 0x367fac6d
// converted property setter: - (void)setStructuredLocation:(id)location;	// 0x367b3c71
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x367b1471
// declared property setter: - (void)setTitle:(id)title;	// 0x367b3c15
// declared property setter: - (void)setURL:(id)url;	// 0x367fa1b5
// converted property getter: - (id)sharedItemCreatedByDisplayName;	// 0x367fa969
- (id)sharedItemCreatedByEmailAddress;	// 0x367fa9e1
// converted property getter: - (id)sharedItemCreatedByFirstName;	// 0x367faa19
// converted property getter: - (id)sharedItemCreatedByLastName;	// 0x367faa51
// converted property getter: - (id)sharedItemCreatedDate;	// 0x367faa89
// converted property getter: - (id)sharedItemCreatedTimeZone;	// 0x367faac1
// converted property getter: - (id)sharedItemModifiedByDisplayName;	// 0x367faaf9
// converted property getter: - (id)sharedItemModifiedByEmailAddress;	// 0x367fab71
// converted property getter: - (id)sharedItemModifiedByFirstName;	// 0x367faba9
// converted property getter: - (id)sharedItemModifiedByLastName;	// 0x367fabe1
// converted property getter: - (id)sharedItemModifiedDate;	// 0x367fac19
// converted property getter: - (id)sharedItemModifiedTimeZone;	// 0x367fac51
// converted property getter: - (id)structuredLocation;	// 0x367a9b5d
// declared property getter: - (id)timeZone;	// 0x367abba5
// declared property getter: - (id)title;	// 0x367a8d61
- (void)updatePersistentObject;	// 0x367fade9
- (void)updatePersistentObjectSkippingProperties:(id)properties;	// 0x367b6a65
- (BOOL)validate:(id *)validate;	// 0x367b53f1
@end

