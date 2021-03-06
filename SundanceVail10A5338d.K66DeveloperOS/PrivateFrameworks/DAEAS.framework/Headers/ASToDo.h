/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "DADataElement.h"
#import "ASChangedCollectionLeaf.h"

@class NSArray, ASToDoRecurrence, NSNumber, NSString, NSDate, NSTimeZone;

@interface ASToDo : ASChangedCollectionLeaf <DADataElement> {
	void *_calRecord;	// 64 = 0x40
	NSString *_body;	// 68 = 0x44
	NSNumber *_bodyTruncated;	// 72 = 0x48
	NSArray *_categories;	// 76 = 0x4c
	NSNumber *_complete;	// 80 = 0x50
	NSDate *_dateCompleted;	// 84 = 0x54
	NSDate *_dueDate;	// 88 = 0x58
	NSDate *_utcDueDate;	// 92 = 0x5c
	NSNumber *_importance;	// 96 = 0x60
	NSNumber *_reminderIsSet;	// 100 = 0x64
	NSDate *_reminderDateTime;	// 104 = 0x68
	NSNumber *_sensitivity;	// 108 = 0x6c
	NSDate *_startTime;	// 112 = 0x70
	NSDate *_utcStartTime;	// 116 = 0x74
	NSString *_subject;	// 120 = 0x78
	ASToDoRecurrence *_recurrence;	// 124 = 0x7c
}
@property(retain, nonatomic) NSString *body;	// G=0x36ee9b01; S=0x36ee98d9; @synthesize=_body
@property(retain) NSNumber *bodyTruncated;	// G=0x36ee9b11; S=0x36ee9b25; @synthesize=_bodyTruncated
@property(assign) void *calTask;	// G=0x36ee9835; S=0x36ee9649; converted property
@property(retain) NSArray *categories;	// G=0x36ee9b35; S=0x36ee9b49; @synthesize=_categories
@property(retain) NSNumber *complete;	// G=0x36ee9b59; S=0x36ee9b6d; @synthesize=_complete
@property(retain) NSDate *dateCompleted;	// G=0x36ee9b7d; S=0x36ee9b91; @synthesize=_dateCompleted
@property(retain) NSDate *dueDate;	// G=0x36ee9ba1; S=0x36ee9bb5; @synthesize=_dueDate
@property(readonly, assign) NSTimeZone *dueDateTimeZone;	// G=0x36ee99b9; 
@property(retain) NSNumber *importance;	// G=0x36ee9be9; S=0x36ee9bfd; @synthesize=_importance
@property(retain) ASToDoRecurrence *recurrence;	// G=0x36ee9ce5; S=0x36ee9cf9; @synthesize=_recurrence
@property(retain) NSDate *reminderDateTime;	// G=0x36ee9c31; S=0x36ee9c45; @synthesize=_reminderDateTime
@property(retain) NSNumber *reminderIsSet;	// G=0x36ee9c0d; S=0x36ee9c21; @synthesize=_reminderIsSet
@property(retain) NSNumber *sensitivity;	// G=0x36ee9c55; S=0x36ee9c69; @synthesize=_sensitivity
@property(retain) NSDate *startTime;	// G=0x36ee9c79; S=0x36ee9c8d; @synthesize=_startTime
@property(retain) NSString *subject;	// G=0x36ee9cc1; S=0x36ee9cd5; @synthesize=_subject
@property(retain, setter=setUTCDueDate:) NSDate *utcDueDate;	// G=0x36ee9bc5; S=0x36ee9bd9; @synthesize=_utcDueDate
@property(retain, setter=setUTCStartTime:) NSDate *utcStartTime;	// G=0x36ee9c9d; S=0x36ee9cb1; @synthesize=_utcStartTime
+ (BOOL)acceptsTopLevelLeaves;	// 0x36ee72a1
+ (id)asParseRules;	// 0x36ee7445
+ (BOOL)frontingBasicTypes;	// 0x36ee739d
+ (BOOL)notifyOfUnknownTokens;	// 0x36ee73f1
+ (BOOL)parsingLeafNode;	// 0x36ee72f5
+ (BOOL)parsingWithSubItems;	// 0x36ee7349
+ (id)toDoWithCalTask:(void *)calTask serverID:(id)anId account:(id)account;	// 0x36ee7ec1
- (id)initWithCalTask:(void *)calTask serverID:(id)anId account:(id)account;	// 0x36ee7e41
- (id)initWithCoder:(id)coder;	// 0x36ee9a05
- (id)_bestGuessTimeZoneWithLocalDate:(id)localDate utcDate:(id)date;	// 0x36ee8111
- (void)_loadAttributesFromCalTask:(void *)calTask forAccount:(id)account;	// 0x36ee7831
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x36ee9181
// declared property getter: - (id)body;	// 0x36ee9b01
// declared property getter: - (id)bodyTruncated;	// 0x36ee9b11
// converted property getter: - (void *)calTask;	// 0x36ee9835
// declared property getter: - (id)categories;	// 0x36ee9b35
// declared property getter: - (id)complete;	// 0x36ee9b59
- (int)dataclass;	// 0x36ee782d
// declared property getter: - (id)dateCompleted;	// 0x36ee9b7d
- (void)dealloc;	// 0x36ee7f09
- (BOOL)deleteFromCalendar;	// 0x36ee9161
- (BOOL)deleteFromContainer:(void *)container;	// 0x36ee99a1
- (id)description;	// 0x36ee8089
// declared property getter: - (id)dueDate;	// 0x36ee9ba1
// declared property getter: - (id)dueDateTimeZone;	// 0x36ee99b9
- (void)encodeWithCoder:(id)coder;	// 0x36ee9a85
// declared property getter: - (id)importance;	// 0x36ee9be9
- (BOOL)loadCalRecordForAccount:(id)account;	// 0x36ee9695
- (void)loadClientIDs;	// 0x36ee9879
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x36ee9971
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36ee90c9
- (void)postProcessApplicationData;	// 0x36ee895d
// declared property getter: - (id)recurrence;	// 0x36ee9ce5
// declared property getter: - (id)reminderDateTime;	// 0x36ee9c31
// declared property getter: - (id)reminderIsSet;	// 0x36ee9c0d
- (BOOL)saveServerIDToCalendar;	// 0x36ee9845
- (BOOL)saveServerIDToExistingItem;	// 0x36ee9989
- (BOOL)saveToCalendarWithExistingRecord:(void *)existingRecord intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x36ee8251
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x36ee992d
// declared property getter: - (id)sensitivity;	// 0x36ee9c55
// declared property setter: - (void)setBody:(id)body;	// 0x36ee98d9
// declared property setter: - (void)setBodyTruncated:(id)truncated;	// 0x36ee9b25
// converted property setter: - (void)setCalTask:(void *)task;	// 0x36ee9649
// declared property setter: - (void)setCategories:(id)categories;	// 0x36ee9b49
// declared property setter: - (void)setComplete:(id)complete;	// 0x36ee9b6d
// declared property setter: - (void)setDateCompleted:(id)completed;	// 0x36ee9b91
// declared property setter: - (void)setDueDate:(id)date;	// 0x36ee9bb5
// declared property setter: - (void)setImportance:(id)importance;	// 0x36ee9bfd
- (void)setLocalItem:(void *)item;	// 0x36ee9961
// declared property setter: - (void)setRecurrence:(id)recurrence;	// 0x36ee9cf9
// declared property setter: - (void)setReminderDateTime:(id)time;	// 0x36ee9c45
// declared property setter: - (void)setReminderIsSet:(id)set;	// 0x36ee9c21
// declared property setter: - (void)setSensitivity:(id)sensitivity;	// 0x36ee9c69
// declared property setter: - (void)setStartTime:(id)time;	// 0x36ee9c8d
// declared property setter: - (void)setSubject:(id)subject;	// 0x36ee9cd5
// declared property setter: - (void)setUTCDueDate:(id)date;	// 0x36ee9bd9
// declared property setter: - (void)setUTCStartTime:(id)time;	// 0x36ee9cb1
// declared property getter: - (id)startTime;	// 0x36ee9c79
// declared property getter: - (id)subject;	// 0x36ee9cc1
// declared property getter: - (id)utcDueDate;	// 0x36ee9bc5
// declared property getter: - (id)utcStartTime;	// 0x36ee9c9d
@end

