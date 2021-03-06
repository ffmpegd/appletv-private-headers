/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKCalendarItem.h"

@class NSString, EKCalendarDate, NSNumber, NSDate, EKParticipant;

@interface EKEvent : EKCalendarItem {
	EKCalendarDate *_occurrenceStartDate;	// 40 = 0x28
	EKCalendarDate *_occurrenceEndDate;	// 44 = 0x2c
	BOOL _occurrenceIsAllDay;	// 48 = 0x30
	EKCalendarDate *_originalOccurrenceStartDate;	// 52 = 0x34
	EKCalendarDate *_originalOccurrenceEndDate;	// 56 = 0x38
	NSNumber *_originalOccurrenceIsAllDay;	// 60 = 0x3c
}
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x34ede919; S=0x34ee8a81; 
@property(assign, nonatomic) int availability;	// G=0x34ee6801; S=0x34f27e85; 
@property(readonly, assign, nonatomic) int birthdayPersonID;	// G=0x34ede929; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x34edfd8d; S=0x34ee9041; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x34ee48f5; 
@property(assign) unsigned invitationStatus;	// G=0x34f27f25; S=0x34f27f59; converted property
@property(readonly, assign, nonatomic) BOOL isDetached;	// G=0x34ee7c7d; 
@property(assign) unsigned modifiedProperties;	// G=0x34f27aa9; S=0x34f27add; converted property
@property(assign) BOOL needsOccurrenceCacheUpdate;	// G=0x34f27b21; S=0x34f27b45; converted property
@property(copy, nonatomic) EKCalendarDate *occurrenceEndDate;	// G=0x34edfdb5; S=0x34ee05b1; @synthesize=_occurrenceEndDate
@property(assign, nonatomic) BOOL occurrenceIsAllDay;	// G=0x34f2b769; S=0x34edcccd; @synthesize=_occurrenceIsAllDay
@property(copy, nonatomic) EKCalendarDate *occurrenceStartDate;	// G=0x34edf44d; S=0x34edcb59; @synthesize=_occurrenceStartDate
@property(readonly, assign, nonatomic) EKParticipant *organizer;	// G=0x34ee0889; 
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceEndDate;	// G=0x34ee8a45; S=0x34ee8f85; @synthesize=_originalOccurrenceEndDate
@property(copy, nonatomic) NSNumber *originalOccurrenceIsAllDay;	// G=0x34ee8a6d; S=0x34ee7039; @synthesize=_originalOccurrenceIsAllDay
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceStartDate;	// G=0x34ee8a21; S=0x34ee8f75; @synthesize=_originalOccurrenceStartDate
@property(assign) int participationStatus;	// G=0x34ee0b9d; S=0x34f27b89; converted property
@property(retain) id recurrenceRule;	// G=0x34f27dd5; S=0x34f27e21; converted property
@property(retain) id responseComment;	// G=0x34f27eed; S=0x34f27f09; converted property
@property(copy, nonatomic) NSDate *startDate;	// G=0x34edfd6d; S=0x34ee8d49; 
@property(readonly, assign, nonatomic) int status;	// G=0x34edf8b5; 
+ (id)eventWithEventStore:(id)eventStore;	// 0x34ee95c1
- (id)init;	// 0x34f27595
- (id)initWithEventStore:(id)eventStore;	// 0x34ee6991
- (id)initWithPersistentObject:(id)persistentObject;	// 0x34f275d1
- (id)initWithPersistentObject:(id)persistentObject occurrenceDate:(id)date;	// 0x34edc8a1
- (BOOL)_cancelWithSpan:(int)span error:(id *)error;	// 0x34f2a909
- (BOOL)_checkStartDateConstraintAgainstDate:(XXStruct_lQVxyC)date timeZone:(id)zone error:(id *)error;	// 0x34eebb3d
- (id)_dateForNextOccurrence;	// 0x34f28a41
- (void)_deleteThisOccurrence;	// 0x34f29f81
- (BOOL)_deleteWithSpan:(int)span error:(id *)error;	// 0x34f29de1
- (void)_detachWithStartDate:(id)startDate newStartDate:(id)date future:(BOOL)future;	// 0x34f2acb5
- (id)_effectiveTimeZone;	// 0x34ee8f95
- (XXStruct_lQVxyC)_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)calendarDate orNSDate:(id)date;	// 0x34ee17c5
- (BOOL)_isAlarmAcknowledgedPropertyDirty;	// 0x34eeb645
- (BOOL)_isAllDay;	// 0x34edcb79
- (BOOL)_isInitialOccurrenceDate:(id)date;	// 0x34f2aa91
- (BOOL)_occurrenceExistsOnDate:(double)date timeZone:(id)zone;	// 0x34f299d5
- (int)_parentParticipationStatus;	// 0x34f27d45
- (id)_persistentEvent;	// 0x34ede951
- (void)_sendModifiedNote;	// 0x34f2785d
- (BOOL)_shouldCancelInsteadOfDeleteWithSpan:(int)span;	// 0x34f29c29
- (BOOL)_shouldDeclineInsteadOfDelete;	// 0x34f29d15
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)recurrenceInterval;	// 0x34f28da9
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(int)span error:(id *)error;	// 0x34eeb745
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;	// 0x34f28bad
- (int)alarmCount;	// 0x34f27dad
- (BOOL)allowsAlarmModifications;	// 0x34f284e9
- (BOOL)allowsCalendarModifications;	// 0x34f2835d
- (BOOL)allowsRecurrenceModifications;	// 0x34ee7bf5
- (id)attachments;	// 0x34ee4d41
- (int)attendeeCount;	// 0x34f27d85
- (id)attendees;	// 0x34ee5419
// declared property getter: - (int)availability;	// 0x34ee6801
// declared property getter: - (int)birthdayPersonID;	// 0x34ede929
- (id)birthdayTitleWithAddressBook:(void *)addressBook;	// 0x34ede97d
- (BOOL)canBeRespondedTo;	// 0x34ee62e9
- (BOOL)canDetachSingleOccurrence;	// 0x34f283f9
- (BOOL)canMoveToCalendar:(id)calendar fromCalendar:(id)calendar2 error:(id *)error;	// 0x34f28125
- (BOOL)canSetAvailability;	// 0x34ee67b5
- (void)clearInvitationStatus;	// 0x34f27f9d
- (BOOL)commitWithSpan:(int)span error:(id *)error;	// 0x34eebe99
- (id)committedValueForKey:(id)key;	// 0x34ee7451
- (int)compareStartDateWithEvent:(id)event;	// 0x34ee9455
- (BOOL)dateChanged;	// 0x34f27fd1
- (void)dealloc;	// 0x34ee3f71
- (id)description;	// 0x34f28531
- (void)didCommit;	// 0x34ef0361
- (id)dirtyPropertiesToSkip;	// 0x34f288dd
- (double)duration;	// 0x34f278a1
- (id)endCalendarDate;	// 0x34ee0b8d
// declared property getter: - (id)endDate;	// 0x34edfd8d
- (XXStruct_lQVxyC)endDateGr;	// 0x34ee6639
- (XXStruct_lQVxyC)endDatePinnedForAllDay;	// 0x34f27a35
// declared property getter: - (id)eventIdentifier;	// 0x34ee48f5
- (id)eventStore;	// 0x34edf75d
- (id)exportToICS;	// 0x34f27715
- (id)externalId;	// 0x34f2846d
- (id)externalURI;	// 0x34f275e5
- (id)externalURL;	// 0x34f275f5
- (BOOL)hasSelfAttendee;	// 0x34f284bd
- (unsigned)hash;	// 0x34edf3f1
- (id)initialEndDate;	// 0x34f27955
- (id)initialStartDate;	// 0x34f278f9
// converted property getter: - (unsigned)invitationStatus;	// 0x34f27f25
// declared property getter: - (BOOL)isAllDay;	// 0x34ede919
- (BOOL)isAllDayDirty;	// 0x34f2779d
// declared property getter: - (BOOL)isDetached;	// 0x34ee7c7d
- (BOOL)isDirtyIgnoringCalendar;	// 0x34f277bd
- (BOOL)isEndDateDirty;	// 0x34f2777d
- (BOOL)isEqual:(id)equal;	// 0x34edf461
- (BOOL)isStartDateDirty;	// 0x34f2775d
- (BOOL)isStatusDirty;	// 0x34f2773d
- (BOOL)isTentative;	// 0x34f28081
- (BOOL)locationChanged;	// 0x34f28055
// converted property getter: - (unsigned)modifiedProperties;	// 0x34f27aa9
// converted property getter: - (BOOL)needsOccurrenceCacheUpdate;	// 0x34f27b21
- (id)occurrenceDate;	// 0x34ee7bbd
// declared property getter: - (id)occurrenceEndDate;	// 0x34edfdb5
// declared property getter: - (BOOL)occurrenceIsAllDay;	// 0x34f2b769
// declared property getter: - (id)occurrenceStartDate;	// 0x34edf44d
// declared property getter: - (id)organizer;	// 0x34ee0889
// declared property getter: - (id)originalOccurrenceEndDate;	// 0x34ee8a45
// declared property getter: - (id)originalOccurrenceIsAllDay;	// 0x34ee8a6d
// declared property getter: - (id)originalOccurrenceStartDate;	// 0x34ee8a21
// converted property getter: - (int)participationStatus;	// 0x34ee0b9d
- (int)pendingParticipationStatus;	// 0x34f28445
// converted property getter: - (id)recurrenceRule;	// 0x34f27dd5
- (BOOL)refresh;	// 0x34f28671
- (BOOL)removeWithSpan:(int)span error:(id *)error;	// 0x34f2ab7d
- (BOOL)requiresDetach;	// 0x34eeab1d
// converted property getter: - (id)responseComment;	// 0x34f27eed
- (BOOL)responseMustApplyToAll;	// 0x34f283d1
- (void)revert;	// 0x34f28935
- (void)rollback;	// 0x34ee84f1
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x34ee8a81
// declared property setter: - (void)setAvailability:(int)availability;	// 0x34f27e85
// declared property setter: - (void)setEndDate:(id)date;	// 0x34ee9041
// converted property setter: - (void)setInvitationStatus:(unsigned)status;	// 0x34f27f59
// converted property setter: - (void)setModifiedProperties:(unsigned)properties;	// 0x34f27add
// converted property setter: - (void)setNeedsOccurrenceCacheUpdate:(BOOL)update;	// 0x34f27b45
// declared property setter: - (void)setOccurrenceEndDate:(id)date;	// 0x34ee05b1
// declared property setter: - (void)setOccurrenceIsAllDay:(BOOL)day;	// 0x34edcccd
// declared property setter: - (void)setOccurrenceStartDate:(id)date;	// 0x34edcb59
// declared property setter: - (void)setOriginalOccurrenceEndDate:(id)date;	// 0x34ee8f85
// declared property setter: - (void)setOriginalOccurrenceIsAllDay:(id)day;	// 0x34ee7039
// declared property setter: - (void)setOriginalOccurrenceStartDate:(id)date;	// 0x34ee8f75
// converted property setter: - (void)setParticipationStatus:(int)status;	// 0x34f27b89
// converted property setter: - (void)setRecurrenceRule:(id)rule;	// 0x34f27e21
// converted property setter: - (void)setResponseComment:(id)comment;	// 0x34f27f09
// declared property setter: - (void)setStartDate:(id)date;	// 0x34ee8d49
- (void)setTimeZone:(id)zone;	// 0x34ee7049
- (id)startCalendarDate;	// 0x34ede909
// declared property getter: - (id)startDate;	// 0x34edfd6d
- (XXStruct_lQVxyC)startDateGr;	// 0x34ee1769
- (XXStruct_lQVxyC)startDatePinnedForAllDay;	// 0x34f279cd
// declared property getter: - (int)status;	// 0x34edf8b5
- (BOOL)timeChanged;	// 0x34f27ffd
- (BOOL)titleChanged;	// 0x34f28029
- (id)uniqueId;	// 0x34f28495
- (BOOL)validateWithSpan:(int)span error:(id *)error;	// 0x34eead3d
@end

