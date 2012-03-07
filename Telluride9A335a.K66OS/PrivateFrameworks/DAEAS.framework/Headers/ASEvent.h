/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASChangedCollectionLeaf.h"
#import "DADataElement.h"
#import "NSCoding.h"

@class ASRecurrence, NSDate, NSArray, NSNumber, NSString, ASEventUID, ASTimeZone;

@interface ASEvent : ASChangedCollectionLeaf <NSCoding, DADataElement> {
	void *_calRecord;	// 64 = 0x40
	ASTimeZone *_timeZone;	// 68 = 0x44
	NSNumber *_allDayEvent;	// 72 = 0x48
	NSString *_body;	// 76 = 0x4c
	NSNumber *_bodyTruncated;	// 80 = 0x50
	NSNumber *_busyStatus;	// 84 = 0x54
	NSArray *_categories;	// 88 = 0x58
	NSDate *_dTStamp;	// 92 = 0x5c
	NSDate *_endTime;	// 96 = 0x60
	NSString *_location;	// 100 = 0x64
	NSNumber *_meetingStatus;	// 104 = 0x68
	NSString *_organizerEmail;	// 108 = 0x6c
	NSString *_organizerName;	// 112 = 0x70
	NSNumber *_reminderMinsBefore;	// 116 = 0x74
	NSNumber *_sensitivity;	// 120 = 0x78
	NSString *_subject;	// 124 = 0x7c
	NSDate *_startTime;	// 128 = 0x80
	ASEventUID *_eventUID;	// 132 = 0x84
	NSArray *_attendees;	// 136 = 0x88
	NSArray *_attendeesPendingDeletion;	// 140 = 0x8c
	ASRecurrence *_recurrence;	// 144 = 0x90
	NSArray *_exceptions;	// 148 = 0x94
	NSNumber *_responseRequested;	// 152 = 0x98
	int _meetingResponseToEmailAbout;	// 156 = 0x9c
	BOOL _calculateNextStatusAsIfMeetingRequest;	// 160 = 0xa0
	BOOL _shouldUpdateStatus;	// 161 = 0xa1
	BOOL _cachedOrganizerIsSelf;	// 162 = 0xa2
	BOOL _haveCheckedOrganizerEmail;	// 163 = 0xa3
	BOOL _isAttendeeUpdateOnly;	// 164 = 0xa4
	BOOL _isDTStampUpdateOnly;	// 165 = 0xa5
	NSNumber *_responseType;	// 168 = 0xa8
}
@property(retain) NSNumber *allDayEvent;	// G=0x321bee4d; S=0x321bee61; @synthesize=_allDayEvent
@property(retain) NSArray *attendees;	// G=0x321bf16d; S=0x321bf181; @synthesize=_attendees
@property(retain) NSArray *attendeesPendingDeletion;	// G=0x321bf1c5; S=0x321bf1d9; @synthesize=_attendeesPendingDeletion
@property(retain, nonatomic) NSString *body;	// G=0x321bee85; S=0x321bd459; @synthesize=_body
@property(retain) NSNumber *bodyTruncated;	// G=0x321bee95; S=0x321beea9; @synthesize=_bodyTruncated
@property(retain) NSNumber *busyStatus;	// G=0x321beecd; S=0x321beee1; @synthesize=_busyStatus
@property(assign) void *calEvent;	// G=0x321bc689; S=0x321bc415; converted property
@property(retain) NSArray *categories;	// G=0x321bef05; S=0x321bef19; @synthesize=_categories
@property(retain) NSDate *dTStamp;	// G=0x321bef3d; S=0x321bef51; @synthesize=_dTStamp
@property(retain) NSDate *endTime;	// G=0x321bef75; S=0x321bef89; @synthesize=_endTime
@property(retain) ASEventUID *eventUID;	// G=0x321bca59; S=0x321bca91; @synthesize=_eventUID
@property(retain) id exceptionDate;	// G=0x321bcb0d; S=0x321bcb11; converted property
@property(retain, nonatomic) NSArray *exceptions;	// G=0x321bf1b5; S=0x321bece5; @synthesize=_exceptions
@property(retain) NSString *location;	// G=0x321befad; S=0x321befc1; @synthesize=_location
@property(assign) int meetingResponseForEmail;	// G=0x321b9325; S=0x321b9355; converted property
@property(retain) NSNumber *meetingStatus;	// G=0x321befe5; S=0x321beff9; @synthesize=_meetingStatus
@property(retain) NSString *organizerEmail;	// G=0x321bf01d; S=0x321bf031; @synthesize=_organizerEmail
@property(retain) NSString *organizerName;	// G=0x321bf055; S=0x321bf069; @synthesize=_organizerName
@property(retain, nonatomic) ASRecurrence *recurrence;	// G=0x321bf1a5; S=0x321bedb9; @synthesize=_recurrence
@property(retain) NSNumber *reminderMinsBefore;	// G=0x321bf08d; S=0x321bf0a1; @synthesize=_reminderMinsBefore
@property(retain) NSNumber *responseRequested;	// G=0x321bf1fd; S=0x321bf211; @synthesize=_responseRequested
@property(retain) NSNumber *responseType;	// G=0x321bf235; S=0x321bf249; @synthesize=_responseType
@property(retain) NSNumber *sensitivity;	// G=0x321bf0c5; S=0x321bf0d9; @synthesize=_sensitivity
@property(retain) NSDate *startTime;	// G=0x321bf135; S=0x321bf149; @synthesize=_startTime
@property(retain) NSString *subject;	// G=0x321bf0fd; S=0x321bf111; @synthesize=_subject
@property(retain) ASTimeZone *timeZone;	// G=0x321bee15; S=0x321bee29; @synthesize=_timeZone
+ (void)_setFakeDTStampDateForUnitTests:(id)unitTests;	// 0x321bbb09
+ (BOOL)acceptsTopLevelLeaves;	// 0x321b7225
+ (id)eventWithCalEvent:(void *)calEvent serverID:(id)anId account:(id)account;	// 0x321b8da5
+ (BOOL)frontingBasicTypes;	// 0x321b7321
+ (BOOL)notifyOfUnknownTokens;	// 0x321b7375
+ (BOOL)parsingLeafNode;	// 0x321b7279
+ (BOOL)parsingWithSubItems;	// 0x321b72cd
+ (void)setSystemTimeZoneNameForUnitTests:(id)unitTests;	// 0x321b71e5
- (id)init;	// 0x321b8c6d
- (id)initWithCalEvent:(void *)calEvent serverID:(id)anId account:(id)account;	// 0x321b8ce1
- (id)initWithCoder:(id)coder;	// 0x321bcb15
- (int)CalCalendarItemStatus;	// 0x321b910d
- (BOOL)_bailIfNotNewestDataForAccount:(id)account;	// 0x321b9365
- (void)_determineSelfnessWithLocalEvent:(void *)localEvent forAccount:(id)account;	// 0x321bad15
- (void)_loadAttributesFromCalEvent:(void *)calEvent forAccount:(id)account;	// 0x321b804d
- (int)_meetingResponseShouldFilterForEmail:(BOOL)_meetingResponse;	// 0x321b92a1
- (int)_nextAttendeeStatusWithOldStatus:(int)oldStatus account:(id)account;	// 0x321b9259
- (int)_nextAttendeeStatusWithOldStatus:(int)oldStatus meetingClassType:(int)type account:(id)account;	// 0x321b91c9
- (int)_nextEventStatusWithOldStatus:(int)oldStatus account:(id)account;	// 0x321b9181
- (int)_nextEventStatusWithOldStatus:(int)oldStatus meetingClassType:(int)type account:(id)account;	// 0x321b912d
- (void)_sanitizeLocalExceptionsForAccount:(id)account;	// 0x321ba7c5
- (BOOL)_selfIsMoreCorrectThanOtherEvent:(id)event account:(id)account;	// 0x321bdab5
- (id)_transformedEndDateForActiveSync:(id)activeSync;	// 0x321b752d
- (id)_transformedEndDateForCalFramework:(id)calFramework startDate:(id)date;	// 0x321b7409
- (id)_transformedStartDateForActiveSync:(id)activeSync;	// 0x321b74d5
- (id)_transformedStartDateForCalFramework:(id)calFramework;	// 0x321b73c9
// declared property getter: - (id)allDayEvent;	// 0x321bee4d
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x321bbb49
- (id)asParseRules;	// 0x321b7635
// declared property getter: - (id)attendees;	// 0x321bf16d
// declared property getter: - (id)attendeesPendingDeletion;	// 0x321bf1c5
// declared property getter: - (id)body;	// 0x321bee85
// declared property getter: - (id)bodyTruncated;	// 0x321bee95
// declared property getter: - (id)busyStatus;	// 0x321beecd
- (BOOL)cachedOrganizerIsSelfWithAccount:(id)account;	// 0x321bd4b1
- (int)calAttendeePendingStatus;	// 0x321b90d9
- (int)calAttendeeStatus;	// 0x321b90a5
// converted property getter: - (void *)calEvent;	// 0x321bc689
// declared property getter: - (id)categories;	// 0x321bef05
- (void *)copySelfAttendeeGeneratedIfNecessaryWithLocalEvent:(void *)localEvent forAccount:(id)account;	// 0x321b7ebd
// declared property getter: - (id)dTStamp;	// 0x321bef3d
- (int)dataclass;	// 0x321b7d75
- (void)dealloc;	// 0x321b8ded
- (BOOL)deleteFromCalendar;	// 0x321bba51
- (BOOL)deleteFromContainer:(void *)container;	// 0x321bda7d
- (id)description;	// 0x321b900d
- (void)encodeWithCoder:(id)coder;	// 0x321bd02d
- (id)endDateForCalFramework;	// 0x321bc9a1
// declared property getter: - (id)endTime;	// 0x321bef75
- (id)eventByMergingInEvent:(id)event account:(id)account;	// 0x321bec9d
- (id)eventByMergingInLosingEvent:(id)losingEvent account:(id)account;	// 0x321be639
// declared property getter: - (id)eventUID;	// 0x321bca59
// converted property getter: - (id)exceptionDate;	// 0x321bcb0d
// declared property getter: - (id)exceptions;	// 0x321bf1b5
- (id)fullOrganizerString;	// 0x321bd4f9
- (BOOL)hasOccurrenceInTheFuture;	// 0x321bd6e5
- (void)informExceptionsThatParentIsReadyForAccount:(id)account;	// 0x321bac6d
- (BOOL)isEqualToEvent:(id)event;	// 0x321bdead
- (BOOL)loadCalRecordForAccount:(id)account;	// 0x321bc4e9
- (void)loadClientIDs;	// 0x321bc859
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x321bda4d
// declared property getter: - (id)location;	// 0x321befad
- (int)meetingResponse;	// 0x321b9311
// converted property getter: - (int)meetingResponseForEmail;	// 0x321b9325
// declared property getter: - (id)meetingStatus;	// 0x321befe5
// declared property getter: - (id)organizerEmail;	// 0x321bf01d
// declared property getter: - (id)organizerName;	// 0x321bf055
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x321bb989
- (void)postProcessApplicationData;	// 0x321bae8d
- (BOOL)purgeAttendeesPendingDeletion;	// 0x321bd545
// declared property getter: - (id)recurrence;	// 0x321bf1a5
// declared property getter: - (id)reminderMinsBefore;	// 0x321bf08d
// declared property getter: - (id)responseRequested;	// 0x321bf1fd
// declared property getter: - (id)responseType;	// 0x321bf235
- (BOOL)saveAfterMapWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x321bda09
- (BOOL)saveDetachedEventsWithExistingRecord:(void *)existingRecord intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x321bab7d
- (BOOL)saveServerIDToCalendar;	// 0x321bc699
- (BOOL)saveServerIDToExistingItem;	// 0x321bda65
- (BOOL)saveToCalendarWithExistingRecord:(void *)existingRecord intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x321b936d
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x321bd9d5
// declared property getter: - (id)sensitivity;	// 0x321bf0c5
// declared property setter: - (void)setAllDayEvent:(id)event;	// 0x321bee61
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x321bf181
// declared property setter: - (void)setAttendeesPendingDeletion:(id)deletion;	// 0x321bf1d9
// declared property setter: - (void)setBody:(id)body;	// 0x321bd459
// declared property setter: - (void)setBodyTruncated:(id)truncated;	// 0x321beea9
// declared property setter: - (void)setBusyStatus:(id)status;	// 0x321beee1
// converted property setter: - (void)setCalEvent:(void *)event;	// 0x321bc415
- (void)setCalculateNextStatusAsIfMeetingRequest:(BOOL)request;	// 0x321bda95
// declared property setter: - (void)setCategories:(id)categories;	// 0x321bef19
// declared property setter: - (void)setDTStamp:(id)stamp;	// 0x321bef51
// declared property setter: - (void)setEndTime:(id)time;	// 0x321bef89
// declared property setter: - (void)setEventUID:(id)uid;	// 0x321bca91
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x321bcb11
// declared property setter: - (void)setExceptions:(id)exceptions;	// 0x321bece5
- (void)setLocalItem:(void *)item;	// 0x321bda3d
// declared property setter: - (void)setLocation:(id)location;	// 0x321befc1
// converted property setter: - (void)setMeetingResponseForEmail:(int)email;	// 0x321b9355
// declared property setter: - (void)setMeetingStatus:(id)status;	// 0x321beff9
// declared property setter: - (void)setOrganizerEmail:(id)email;	// 0x321bf031
// declared property setter: - (void)setOrganizerName:(id)name;	// 0x321bf069
// declared property setter: - (void)setRecurrence:(id)recurrence;	// 0x321bedb9
// declared property setter: - (void)setReminderMinsBefore:(id)before;	// 0x321bf0a1
// declared property setter: - (void)setResponseRequested:(id)requested;	// 0x321bf211
// declared property setter: - (void)setResponseType:(id)type;	// 0x321bf249
// declared property setter: - (void)setSensitivity:(id)sensitivity;	// 0x321bf0d9
- (void)setShouldUpdateStatus:(BOOL)updateStatus;	// 0x321bdaa5
// declared property setter: - (void)setStartTime:(id)time;	// 0x321bf149
// declared property setter: - (void)setSubject:(id)subject;	// 0x321bf111
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x321bee29
- (BOOL)shouldUseInMemoryAttendeesForAccount:(id)account numExistingAttendees:(int)attendees;	// 0x321b9369
- (id)startDateForCalFramework;	// 0x321bc945
// declared property getter: - (id)startTime;	// 0x321bf135
// declared property getter: - (id)subject;	// 0x321bf0fd
// declared property getter: - (id)timeZone;	// 0x321bee15
- (id)timeZoneNameForCalFramework;	// 0x321b75ad
- (id)uidForCalFramework;	// 0x321bca39
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)localEvent;	// 0x321b7d79
- (BOOL)verifyExternalIds;	// 0x321bc6cd
@end
