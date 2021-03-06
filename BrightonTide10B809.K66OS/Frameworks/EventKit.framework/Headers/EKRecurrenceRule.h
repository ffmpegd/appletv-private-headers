/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKObject.h"

@class NSString, NSArray, EKRecurrenceEnd;

@interface EKRecurrenceRule : EKObject <NSCopying> {
	EKRecurrenceEnd *_cachedEnd;	// 36 = 0x24
}
@property(retain, nonatomic) EKRecurrenceEnd *cachedEnd;	// G=0x3183f86d; S=0x3183f87d; @synthesize=_cachedEnd
@property(readonly, assign, nonatomic) NSString *calendarIdentifier;	// G=0x3183ec55; 
@property(readonly, assign, nonatomic) NSArray *daysOfTheMonth;	// G=0x3183ef61; 
@property(readonly, assign, nonatomic) NSArray *daysOfTheWeek;	// G=0x3183ef45; 
@property(readonly, assign, nonatomic) NSArray *daysOfTheYear;	// G=0x3183ef7d; 
@property(readonly, assign, nonatomic) int firstDayOfTheWeek;	// G=0x3183ee39; 
@property(readonly, assign, nonatomic) int frequency;	// G=0x3183ec8d; 
@property(readonly, assign, nonatomic) int interval;	// G=0x3183eced; 
@property(readonly, assign, nonatomic) NSArray *monthsOfTheYear;	// G=0x3183efb5; 
@property(copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;	// G=0x3183ed4d; S=0x317fcabd; 
@property(readonly, assign, nonatomic) NSArray *setPositions;	// G=0x3183efd1; 
@property(readonly, assign, nonatomic) NSArray *weeksOfTheYear;	// G=0x3183ef99; 
+ (id)iCalendarValueFromDate:(id)date isDateOnly:(BOOL)only isFloating:(BOOL)floating;	// 0x3183f289
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned)theWeek;	// 0x3183f219
+ (id)iCalendarValueFromRecurrenceType:(int)recurrenceType;	// 0x3183f1d1
+ (id)recurrenceRuleWithType:(int)type interval:(unsigned)interval end:(id)end;	// 0x3183e885
- (id)init;	// 0x317fc58d
- (id)initRecurrenceWithFrequency:(int)frequency interval:(int)interval daysOfTheWeek:(id)theWeek daysOfTheMonth:(id)theMonth monthsOfTheYear:(id)theYear weeksOfTheYear:(id)theYear6 daysOfTheYear:(id)theYear7 setPositions:(id)positions end:(id)end;	// 0x317fc455
- (id)initRecurrenceWithFrequency:(int)frequency interval:(int)interval end:(id)end;	// 0x317fc415
- (id)UUID;	// 0x3183e8dd
- (id)_persistentRule;	// 0x3183e8cd
// declared property getter: - (id)cachedEnd;	// 0x3183f86d
- (id)cachedEndDate;	// 0x3183ee11
// declared property getter: - (id)calendarIdentifier;	// 0x3183ec55
- (id)copyWithZone:(NSZone *)zone;	// 0x3183e9c1
// declared property getter: - (id)daysOfTheMonth;	// 0x3183ef61
// declared property getter: - (id)daysOfTheWeek;	// 0x3183ef45
// declared property getter: - (id)daysOfTheYear;	// 0x3183ef7d
- (void)dealloc;	// 0x31802e9d
- (id)description;	// 0x3183e95d
- (BOOL)dirtyStateMayAffectExceptionDates;	// 0x3183f031
// declared property getter: - (int)firstDayOfTheWeek;	// 0x3183ee39
// declared property getter: - (int)frequency;	// 0x3183ec8d
- (XXStruct_mY3THC)gregorianUnits;	// 0x3183eb91
// declared property getter: - (int)interval;	// 0x3183eced
- (id)lazyLoadRelationForKey:(id)key;	// 0x317fcee5
- (BOOL)mayOccurAfterDate:(id)date;	// 0x3183f129
// declared property getter: - (id)monthsOfTheYear;	// 0x3183efb5
- (id)owner;	// 0x3183ec21
// declared property getter: - (id)recurrenceEnd;	// 0x3183ed4d
- (void)reset;	// 0x3183efed
// declared property setter: - (void)setCachedEnd:(id)end;	// 0x3183f87d
- (void)setDaysOfTheMonth:(id)theMonth;	// 0x317fcc39
- (void)setDaysOfTheWeek:(id)theWeek;	// 0x317fcc1d
- (void)setDaysOfTheYear:(id)theYear;	// 0x317fcc8d
- (void)setFirstDayOfTheWeek:(unsigned)theWeek;	// 0x3183ee71
- (void)setFrequency:(int)frequency;	// 0x317fc9b1
- (void)setInterval:(int)interval;	// 0x317fc9f5
- (void)setMonthsOfTheYear:(id)theYear;	// 0x317fcc71
// declared property getter: - (id)setPositions;	// 0x3183efd1
// declared property setter: - (void)setRecurrenceEnd:(id)end;	// 0x317fcabd
- (void)setSetPositions:(id)positions;	// 0x317fcc55
- (void)setWeeksOfTheYear:(id)theYear;	// 0x317fcca9
- (BOOL)shouldPinMonthDays;	// 0x3183e905
- (id)stringValueAsDateOnly:(BOOL)only isFloating:(BOOL)floating;	// 0x3183f385
// declared property getter: - (id)weeksOfTheYear;	// 0x3183ef99
@end

