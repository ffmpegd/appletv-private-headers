/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSURL, NSArray, NSString, EKCalendar, NSDate, NSTimeZone;

__attribute__((visibility("hidden")))
@interface EKCalendarItem : EKObject {
}
@property(copy, nonatomic) NSURL *URL;	// G=0x31385fc1; S=0x313c78c1; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31383a09; 
@property(retain) id action;	// G=0x313c7889; S=0x313c78a5; converted property
@property(copy, nonatomic) NSArray *alarms;	// G=0x31383f01; S=0x313877e1; 
@property(assign, getter=isAllDay) BOOL allDay;	// G=0x31394955; S=0x31387f55; converted property
@property(readonly, assign, nonatomic) NSArray *attendees;	// G=0x31385ead; 
@property(retain, nonatomic) EKCalendar *calendar;	// G=0x31380265; S=0x313894f5; 
@property(readonly, assign, nonatomic) NSDate *creationDate;	// G=0x31397061; 
@property(readonly, assign, nonatomic) BOOL hasAlarms;	// G=0x31392ab5; 
@property(readonly, assign, nonatomic) BOOL hasAttendees;	// G=0x3137ff95; 
@property(readonly, assign, nonatomic) BOOL hasNotes;	// G=0x313c76bd; 
@property(readonly, assign, nonatomic) BOOL hasRecurrenceRules;	// G=0x31387a29; 
@property(readonly, assign, nonatomic) NSDate *lastModifiedDate;	// G=0x313c7795; 
@property(copy, nonatomic) NSString *location;	// G=0x3137ee81; S=0x31389b49; 
@property(copy, nonatomic) NSString *notes;	// G=0x31386021; S=0x3138b08d; 
@property(retain) id organizer;	// G=0x31385e0d; S=0x313c7bbd; converted property
@property(assign) int priority;	// G=0x31392d51; S=0x31394c99; converted property
@property(copy, nonatomic) NSArray *recurrenceRules;	// G=0x313870ed; S=0x31394c49; 
@property(retain) id structuredLocation;	// G=0x3137eea9; S=0x31389b89; converted property
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x31387085; S=0x31386dad; 
@property(copy, nonatomic) NSString *title;	// G=0x3137edc9; S=0x31389b2d; 
// declared property getter: - (id)URL;	// 0x31385fc1
// declared property getter: - (id)UUID;	// 0x31383a09
- (id)_alarmsRelation;	// 0x31383f5d
- (id)_attachmentsRelation;	// 0x31385d71
- (id)_attendeesRelation;	// 0x3138000d
- (id)_locationRelation;	// 0x3137eed1
- (void)_moveToCalendarInternal:(id)calendarInternal;	// 0x313c8321
- (id)_organizerRelation;	// 0x31385e35
- (id)_persistentItem;	// 0x3137ee55
- (id)_recurrencesRelation;	// 0x31387125
- (id)_selfAttendeeRelation;	// 0x31386585
// converted property getter: - (id)action;	// 0x313c7889
- (void)addAlarm:(id)alarm;	// 0x3138ae59
- (void)addAttendee:(id)attendee;	// 0x313c7b65
- (void)addRecurrenceRule:(id)rule;	// 0x3138a825
// declared property getter: - (id)alarms;	// 0x31383f01
- (BOOL)allowsAlarmModifications;	// 0x3138c3ed
- (BOOL)allowsAttendeeModifications;	// 0x313c79f5
- (BOOL)allowsCalendarModifications;	// 0x313c799d
- (BOOL)allowsRecurrenceModifications;	// 0x31392dc9
- (id)attachments;	// 0x31385d19
// declared property getter: - (id)attendees;	// 0x31385ead
// declared property getter: - (id)calendar;	// 0x31380265
- (BOOL)canMoveToCalendar:(id)calendar fromCalendar:(id)calendar2 error:(id *)error;	// 0x313c7be9
// declared property getter: - (id)creationDate;	// 0x31397061
- (id)description;	// 0x313c7551
// declared property getter: - (BOOL)hasAlarms;	// 0x31392ab5
// declared property getter: - (BOOL)hasAttendees;	// 0x3137ff95
// declared property getter: - (BOOL)hasNotes;	// 0x313c76bd
// declared property getter: - (BOOL)hasRecurrenceRules;	// 0x31387a29
// converted property getter: - (BOOL)isAllDay;	// 0x31394955
- (BOOL)isEditable;	// 0x313865bd
- (BOOL)isExternallyOrganizedInvitation;	// 0x3137ff55
- (BOOL)isFloating;	// 0x31387d69
- (BOOL)isSelfOrganized;	// 0x313c791d
- (BOOL)isSelfOrganizedInvitation;	// 0x313c795d
// declared property getter: - (id)lastModifiedDate;	// 0x313c7795
- (id)lazyLoadRelationForKey:(id)key;	// 0x3137efa5
// declared property getter: - (id)location;	// 0x3137ee81
- (void)moveToCalendar:(id)calendar;	// 0x313c857d
// declared property getter: - (id)notes;	// 0x31386021
// converted property getter: - (id)organizer;	// 0x31385e0d
- (id)originalItem;	// 0x313c8545
// converted property getter: - (int)priority;	// 0x31392d51
- (void)rebase;	// 0x313c7ced
// declared property getter: - (id)recurrenceRules;	// 0x313870ed
- (void)removeAlarm:(id)alarm;	// 0x313c7abd
- (void)removeAttendee:(id)attendee;	// 0x313c7b91
- (void)removeRecurrenceRule:(id)rule;	// 0x313c7ae9
- (BOOL)requiresDetach;	// 0x31394cdd
- (id)selfAttendee;	// 0x3138655d
// converted property setter: - (void)setAction:(id)action;	// 0x313c78a5
// declared property setter: - (void)setAlarms:(id)alarms;	// 0x313877e1
// converted property setter: - (void)setAllDay:(BOOL)day;	// 0x31387f55
- (void)setAttendees:(id)attendees;	// 0x313c7b15
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x313894f5
- (void)setLastModifiedDate:(id)date;	// 0x313c77b1
// declared property setter: - (void)setLocation:(id)location;	// 0x31389b49
// declared property setter: - (void)setNotes:(id)notes;	// 0x3138b08d
// converted property setter: - (void)setOrganizer:(id)organizer;	// 0x313c7bbd
// converted property setter: - (void)setPriority:(int)priority;	// 0x31394c99
// declared property setter: - (void)setRecurrenceRules:(id)rules;	// 0x31394c49
// converted property setter: - (void)setStructuredLocation:(id)location;	// 0x31389b89
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x31386dad
// declared property setter: - (void)setTitle:(id)title;	// 0x31389b2d
// declared property setter: - (void)setURL:(id)url;	// 0x313c78c1
// converted property getter: - (id)structuredLocation;	// 0x3137eea9
// declared property getter: - (id)timeZone;	// 0x31387085
// declared property getter: - (id)title;	// 0x3137edc9
- (void)updatePersistentObject;	// 0x313c7cd9
- (void)updatePersistentObjectSkippingProperties:(id)properties;	// 0x3138ccc5
- (BOOL)validate:(id *)validate;	// 0x3138b869
@end

