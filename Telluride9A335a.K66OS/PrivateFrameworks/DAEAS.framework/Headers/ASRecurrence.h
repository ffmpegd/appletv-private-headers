/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSDate, ASEvent, NSNumber;

@interface ASRecurrence : ASItem <NSCoding> {
	NSNumber *_type;	// 40 = 0x28
	NSNumber *_interval;	// 44 = 0x2c
	NSNumber *_dayOfWeek;	// 48 = 0x30
	NSNumber *_dayOfMonth;	// 52 = 0x34
	NSNumber *_weekOfMonth;	// 56 = 0x38
	NSNumber *_monthOfYear;	// 60 = 0x3c
	NSDate *_until;	// 64 = 0x40
	NSNumber *_occurrences;	// 68 = 0x44
	NSNumber *_calendarType;	// 72 = 0x48
	ASEvent *_parentEvent;	// 76 = 0x4c
}
@property(retain) NSNumber *calendarType;	// G=0x321d89e5; S=0x321d89f9; @synthesize=_calendarType
@property(retain) NSNumber *dayOfMonth;	// G=0x321d88cd; S=0x321d88e1; @synthesize=_dayOfMonth
@property(retain) NSNumber *dayOfWeek;	// G=0x321d8895; S=0x321d88a9; @synthesize=_dayOfWeek
@property(retain) NSNumber *interval;	// G=0x321d885d; S=0x321d8871; @synthesize=_interval
@property(retain) NSNumber *monthOfYear;	// G=0x321d893d; S=0x321d8951; @synthesize=_monthOfYear
@property(retain) NSNumber *occurrences;	// G=0x321d89ad; S=0x321d89c1; @synthesize=_occurrences
@property(retain) NSNumber *type;	// G=0x321d8825; S=0x321d8839; @synthesize=_type
@property(retain) NSDate *until;	// G=0x321d8975; S=0x321d8989; @synthesize=_until
@property(retain) NSNumber *weekOfMonth;	// G=0x321d8905; S=0x321d8919; @synthesize=_weekOfMonth
+ (BOOL)acceptsTopLevelLeaves;	// 0x321d650d
+ (BOOL)frontingBasicTypes;	// 0x321d6609
+ (BOOL)notifyOfUnknownTokens;	// 0x321d665d
+ (BOOL)parsingLeafNode;	// 0x321d6561
+ (BOOL)parsingWithSubItems;	// 0x321d65b5
- (id)initWithCalRecurrence:(void *)calRecurrence parentEvent:(id)event;	// 0x321d7fe9
- (id)initWithCoder:(id)coder;	// 0x321d8415
- (BOOL)_loadAttributesFromCalRecurrence:(void *)calRecurrence parentStartDate:(id)date parentItem:(id)item;	// 0x321d76fd
- (void *)_newRecurrenceWithParentStartDate:(id)parentStartDate;	// 0x321d70fd
- (BOOL)_requiresParentEvent;	// 0x321d6ee9
- (id)_transformedUntilDateForActiveSync:(id)activeSync;	// 0x321d67e9
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)parentStartDate;	// 0x321d66c1
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x321d8075
- (id)asParseRules;	// 0x321d6905
// declared property getter: - (id)calendarType;	// 0x321d89e5
// declared property getter: - (id)dayOfMonth;	// 0x321d88cd
// declared property getter: - (id)dayOfWeek;	// 0x321d8895
- (void)dealloc;	// 0x321d8329
- (void)encodeWithCoder:(id)coder;	// 0x321d8659
// declared property getter: - (id)interval;	// 0x321d885d
// declared property getter: - (id)monthOfYear;	// 0x321d893d
// declared property getter: - (id)occurrences;	// 0x321d89ad
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x321d6eed
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x321d767d
// declared property setter: - (void)setCalendarType:(id)type;	// 0x321d89f9
// declared property setter: - (void)setDayOfMonth:(id)month;	// 0x321d88e1
// declared property setter: - (void)setDayOfWeek:(id)week;	// 0x321d88a9
// declared property setter: - (void)setInterval:(id)interval;	// 0x321d8871
// declared property setter: - (void)setMonthOfYear:(id)year;	// 0x321d8951
// declared property setter: - (void)setOccurrences:(id)occurrences;	// 0x321d89c1
- (void)setParentEvent:(id)event;	// 0x321d66b1
// declared property setter: - (void)setType:(id)type;	// 0x321d8839
// declared property setter: - (void)setUntil:(id)until;	// 0x321d8989
- (void)setUntilString:(id)string;	// 0x321d82ed
// declared property setter: - (void)setWeekOfMonth:(id)month;	// 0x321d8919
// declared property getter: - (id)type;	// 0x321d8825
// declared property getter: - (id)until;	// 0x321d8975
// declared property getter: - (id)weekOfMonth;	// 0x321d8905
@end

