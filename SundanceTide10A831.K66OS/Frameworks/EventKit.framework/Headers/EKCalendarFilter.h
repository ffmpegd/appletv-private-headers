/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface EKCalendarFilter : NSObject <NSCopying> {
	opaque_pthread_mutex_t _lock;	// 4 = 0x4
	NSMutableSet *_calendarUIDs;	// 48 = 0x30
	CalDatabase *_database;	// 52 = 0x34
	NSMutableDictionary *_queryCache;	// 56 = 0x38
	NSString *_searchTerm;	// 60 = 0x3c
	int _entityType;	// 64 = 0x40
}
@property(copy, nonatomic) NSString *searchTerm;	// G=0x34f1617d; S=0x34f16191; @synthesize=_searchTerm
+ (void)_addCalendarUIDsFromPrefs:(id)prefs toSet:(id)set database:(CalDatabase *)database;	// 0x34f154cd
+ (void)_addCalendarWithUID:(id)uid toSet:(id)set database:(CalDatabase *)database;	// 0x34f1547d
+ (void)_addCalendarsForStoreWithUID:(id)uid toSet:(id)set database:(CalDatabase *)database;	// 0x34f155cd
- (id)initFilteringAllWithDatabase:(CalDatabase *)database;	// 0x34f14505
- (id)initWithDatabase:(CalDatabase *)database;	// 0x34f14465
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type;	// 0x34f14485
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type calendarUIDs:(id)uids;	// 0x34f146c9
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type showingCalendarsWithUIDs:(id)uids;	// 0x34f14615
- (id)initWithDatabase:(CalDatabase *)database filteringCalendars:(id)calendars;	// 0x34f1466d
- (id)initWithDatabase:(CalDatabase *)database showingCalendars:(id)calendars;	// 0x34f1455d
- (id)initWithDatabase:(CalDatabase *)database showingCalendarsWithUIDs:(id)uids;	// 0x34f145b9
- (id)initWithPersistentIdentifier:(id)persistentIdentifier database:(CalDatabase *)database;	// 0x34f144a9
- (id)_UIDAntiSetWithCalendars:(id)calendars;	// 0x34f14add
- (id)_UIDSetWithCalendars:(id)calendars;	// 0x34f149b9
- (id)_addFilterToQuery:(id)query creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x34f15bd1
- (id)_calendarUIDsFromPersistentIdentifier:(id)persistentIdentifier;	// 0x34f15699
- (void)_databaseChanged;	// 0x34f14875
- (id)_generateUIDSetToFilterAllCalendars;	// 0x34f14d59
- (id)_generateUIDSetToFilterCalendars:(id)filterCalendars;	// 0x34f14c91
- (id)_generateUIDSetToShowCalendarUIDs:(id)showCalendarUIDs;	// 0x34f14cd5
- (id)_generateUIDSetToShowCalendars:(id)showCalendars;	// 0x34f14c01
- (BOOL)_isFilteringAllWhileLocked;	// 0x34f148ed
- (id)calendarIDClauseForQueryWithVariableName:(id)variableName;	// 0x34f15ef5
- (id)copyWithZone:(NSZone *)zone;	// 0x34f1523d
- (void)dealloc;	// 0x34f147bd
- (id)filterQueryForKey:(id)key prefix:(id)prefix whereClause:(id)clause creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x34f15ce5
- (id)filterQueryForQueryString:(id)queryString creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x34f15c6d
- (id)filteredCalendars;	// 0x34f14dc5
- (BOOL)isCalendarUIDVisible:(id)visible;	// 0x34f151c9
- (BOOL)isEqual:(id)equal;	// 0x34f152a5
- (BOOL)isFilteringAll;	// 0x34f1497d
- (BOOL)isShowingAll;	// 0x34f148bd
- (id)persistentIdentifier;	// 0x34f1538d
- (void)removeCalendarWithUID:(id)uid;	// 0x34f1521d
// declared property getter: - (id)searchTerm;	// 0x34f1617d
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x34f16191
- (void)validate;	// 0x34f15a5d
- (int)visibleCalendarCountWithOptions:(int)options;	// 0x34f1507d
- (id)visibleCalendarsWithOptions:(int)options;	// 0x34f14efd
@end
