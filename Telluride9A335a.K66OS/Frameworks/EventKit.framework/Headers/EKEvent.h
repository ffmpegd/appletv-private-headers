/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem.h"
#import "EventKit-Structs.h"

@class EKRecurrenceRule, NSString, EKParticipant, NSNumber, NSDate, EKCalendarDate;

@interface EKEvent : EKCalendarItem {
@private
	EKCalendarDate *_occurrenceStartDate;	// 4 = 0x4
	EKCalendarDate *_occurrenceEndDate;	// 8 = 0x8
	BOOL _occurrenceIsAllDay;	// 12 = 0xc
	EKCalendarDate *_originalOccurrenceStartDate;	// 16 = 0x10
	EKCalendarDate *_originalOccurrenceEndDate;	// 20 = 0x14
	NSNumber *_originalOccurrenceIsAllDay;	// 24 = 0x18
}
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x30fd9409; S=0x30fe2d89; 
@property(assign, nonatomic) int availability;	// G=0x3101cbd9; S=0x3101cc2d; 
@property(readonly, assign, nonatomic) int birthdayPersonID;	// G=0x3101cab1; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x30fd9645; S=0x30fe32f5; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x30fe0c21; 
@property(readonly, assign, nonatomic) BOOL isDetached;	// G=0x30fe2bb1; 
@property(assign) unsigned modifiedProperties;	// G=0x3101c859; S=0x3101c88d; converted property
@property(assign) BOOL needsOccurrenceCacheUpdate;	// G=0x3101c8d1; S=0x3101c8f5; converted property
@property(copy, nonatomic) EKCalendarDate *occurrenceEndDate;	// G=0x30fd8c91; S=0x30fd93e5; @synthesize=_occurrenceEndDate
@property(assign, nonatomic) BOOL occurrenceIsAllDay;	// G=0x3101f279; S=0x30fd8735; @synthesize=_occurrenceIsAllDay
@property(copy, nonatomic) EKCalendarDate *occurrenceStartDate;	// G=0x30fd93d5; S=0x30fd86c1; @synthesize=_occurrenceStartDate
@property(readonly, assign, nonatomic) EKParticipant *organizer;	// G=0x30fe0de1; 
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceEndDate;	// G=0x30fe3b9d; S=0x30fe3229; @synthesize=_originalOccurrenceEndDate
@property(copy, nonatomic) NSNumber *originalOccurrenceIsAllDay;	// G=0x30fe3bc9; S=0x30fe1cd5; @synthesize=_originalOccurrenceIsAllDay
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceStartDate;	// G=0x30fe3b79; S=0x30fe3205; @synthesize=_originalOccurrenceStartDate
@property(assign) int participationStatus;	// G=0x30fe152d; S=0x3101c939; converted property
@property(assign) unsigned readState;	// G=0x30fe1629; S=0x3101ccc9; converted property
@property(retain, nonatomic) EKRecurrenceRule *recurrenceRule;	// G=0x3101cb29; S=0x3101cb75; 
@property(retain) id responseComment;	// G=0x3101cc91; S=0x3101ccad; converted property
@property(copy, nonatomic) NSDate *startDate;	// G=0x30fd9625; S=0x30fe3049; 
@property(readonly, assign, nonatomic) int status;	// G=0x30fdaf11; 
+ (id)eventWithEventStore:(id)eventStore;	// 0x30fe4369
- (id)init;	// 0x3101c409
- (id)initWithEventStore:(id)eventStore;	// 0x30fe1679
- (id)initWithPersistentObject:(id)persistentObject;	// 0x3101c445
- (id)initWithPersistentObject:(id)persistentObject occurrenceDate:(id)date;	// 0x30fd81d5
- (BOOL)_cancelWithSpan:(int)span error:(id *)error;	// 0x3101e57d
- (BOOL)_checkStartDateConstraintAgainstDate:(XXStruct_lQVxyC)date timeZone:(id)zone error:(id *)error;	// 0x30fe72a9
- (BOOL)_deleteWithSpan:(int)span error:(id *)error;	// 0x30fed209
- (void)_detachWithStartDate:(id)startDate newStartDate:(id)date future:(BOOL)future;	// 0x3101e701
- (id)_effectiveTimeZone;	// 0x30fe324d
- (BOOL)_isAllDay;	// 0x30fd86e5
- (BOOL)_isInitialOccurrenceDate:(id)date;	// 0x30fed025
- (BOOL)_occurrenceExistsOnDate:(double)date timeZone:(id)zone;	// 0x3101e341
- (int)_parentParticipationStatus;	// 0x3101ca71
- (id)_persistentEvent;	// 0x30fd8d4d
- (void)_sendModifiedNote;	// 0x30fe42d5
- (BOOL)_shouldCancelInsteadOfDeleteWithSpan:(int)span;	// 0x30fed109
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)recurrenceInterval;	// 0x3101d64d
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(int)span error:(id *)error;	// 0x30fe6ea5
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;	// 0x3101d48d
- (int)alarmCount;	// 0x3101cb01
- (BOOL)allowsAlarmModifications;	// 0x30fe73a5
- (BOOL)allowsCalendarModifications;	// 0x3101d011
- (BOOL)allowsRecurrenceModifications;	// 0x30fe2b2d
- (id)attachments;	// 0x30fe0ced
- (int)attendeeCount;	// 0x3101cad9
- (id)attendees;	// 0x30fe0e81
// declared property getter: - (int)availability;	// 0x3101cbd9
// declared property getter: - (int)birthdayPersonID;	// 0x3101cab1
- (id)birthdayTitleWithAddressBook:(void *)addressBook;	// 0x3101c6a1
- (BOOL)canBeRespondedTo;	// 0x30fe12a9
- (BOOL)canDetachSingleOccurrence;	// 0x3101d0ad
- (BOOL)canMoveToCalendar:(id)calendar fromCalendar:(id)calendar2 error:(id *)error;	// 0x3101cde5
- (BOOL)canSetAvailability;	// 0x3101d16d
- (void)clearReadState;	// 0x3101cd0d
- (BOOL)commitWithSpan:(int)span error:(id *)error;	// 0x30fe74d5
- (id)committedValueForKey:(id)key;	// 0x30fe22a1
- (int)compareStartDateWithEvent:(id)event;	// 0x30fd959d
- (void)dealloc;	// 0x30fe1e79
- (id)description;	// 0x3101d1e9
- (void)didCommit;	// 0x30feb681
- (id)dirtyPropertiesToSkip;	// 0x3101d329
- (double)duration;	// 0x30fdc361
- (id)endCalendarDate;	// 0x30fd8c81
// declared property getter: - (id)endDate;	// 0x30fd9645
- (XXStruct_lQVxyC)endDateGr;	// 0x30fdc2d1
- (XXStruct_lQVxyC)endDatePinnedForAllDay;	// 0x3101c7e5
// declared property getter: - (id)eventIdentifier;	// 0x30fe0c21
- (id)eventStore;	// 0x30fdb171
- (id)exportToICS;	// 0x3101c579
- (id)externalId;	// 0x3101d11d
- (id)externalURL;	// 0x3101c459
- (BOOL)hasSelfAttendee;	// 0x3101d1b9
- (unsigned)hash;	// 0x30fd9419
- (id)initialEndDate;	// 0x3101c705
- (id)initialStartDate;	// 0x3101c6b1
// declared property getter: - (BOOL)isAllDay;	// 0x30fd9409
// declared property getter: - (BOOL)isDetached;	// 0x30fe2bb1
- (BOOL)isDirtyIgnoringCalendar;	// 0x3101c601
- (BOOL)isEndDateDirty;	// 0x3101c5e1
- (BOOL)isEqual:(id)equal;	// 0x30fd94c5
- (BOOL)isStartDateDirty;	// 0x3101c5c1
- (BOOL)isStatusDirty;	// 0x3101c5a1
- (BOOL)isTentative;	// 0x3101cd41
// converted property getter: - (unsigned)modifiedProperties;	// 0x3101c859
// converted property getter: - (BOOL)needsOccurrenceCacheUpdate;	// 0x3101c8d1
- (id)occurrenceDate;	// 0x30fe29f1
// declared property getter: - (id)occurrenceEndDate;	// 0x30fd8c91
// declared property getter: - (BOOL)occurrenceIsAllDay;	// 0x3101f279
// declared property getter: - (id)occurrenceStartDate;	// 0x30fd93d5
// declared property getter: - (id)organizer;	// 0x30fe0de1
// declared property getter: - (id)originalOccurrenceEndDate;	// 0x30fe3b9d
// declared property getter: - (id)originalOccurrenceIsAllDay;	// 0x30fe3bc9
// declared property getter: - (id)originalOccurrenceStartDate;	// 0x30fe3b79
// converted property getter: - (int)participationStatus;	// 0x30fe152d
- (int)pendingParticipationStatus;	// 0x3101d0f5
// converted property getter: - (unsigned)readState;	// 0x30fe1629
// declared property getter: - (id)recurrenceRule;	// 0x3101cb29
- (BOOL)refresh;	// 0x30fe3c5d
- (BOOL)removeWithSpan:(int)span error:(id *)error;	// 0x30fecf55
- (BOOL)requiresDetach;	// 0x30fe60a9
// converted property getter: - (id)responseComment;	// 0x3101cc91
- (BOOL)responseMustApplyToAll;	// 0x3101d085
- (void)revert;	// 0x3101d385
- (void)rollback;	// 0x30fe362d
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x30fe2d89
// declared property setter: - (void)setAvailability:(int)availability;	// 0x3101cc2d
// declared property setter: - (void)setEndDate:(id)date;	// 0x30fe32f5
// converted property setter: - (void)setModifiedProperties:(unsigned)properties;	// 0x3101c88d
// converted property setter: - (void)setNeedsOccurrenceCacheUpdate:(BOOL)update;	// 0x3101c8f5
// declared property setter: - (void)setOccurrenceEndDate:(id)date;	// 0x30fd93e5
// declared property setter: - (void)setOccurrenceIsAllDay:(BOOL)day;	// 0x30fd8735
// declared property setter: - (void)setOccurrenceStartDate:(id)date;	// 0x30fd86c1
// declared property setter: - (void)setOriginalOccurrenceEndDate:(id)date;	// 0x30fe3229
// declared property setter: - (void)setOriginalOccurrenceIsAllDay:(id)day;	// 0x30fe1cd5
// declared property setter: - (void)setOriginalOccurrenceStartDate:(id)date;	// 0x30fe3205
// converted property setter: - (void)setParticipationStatus:(int)status;	// 0x3101c939
// converted property setter: - (void)setReadState:(unsigned)state;	// 0x3101ccc9
// declared property setter: - (void)setRecurrenceRule:(id)rule;	// 0x3101cb75
// converted property setter: - (void)setResponseComment:(id)comment;	// 0x3101ccad
// declared property setter: - (void)setStartDate:(id)date;	// 0x30fe3049
- (void)setTimeZone:(id)zone;	// 0x30fe1cf9
- (id)startCalendarDate;	// 0x30fd8c71
// declared property getter: - (id)startDate;	// 0x30fd9625
- (XXStruct_lQVxyC)startDateGr;	// 0x30fdc241
- (XXStruct_lQVxyC)startDatePinnedForAllDay;	// 0x3101c77d
// declared property getter: - (int)status;	// 0x30fdaf11
- (id)uniqueId;	// 0x3101d145
- (BOOL)validateWithSpan:(int)span error:(id *)error;	// 0x30fe650d
@end

