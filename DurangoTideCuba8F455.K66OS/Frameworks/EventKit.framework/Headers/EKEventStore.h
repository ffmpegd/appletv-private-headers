/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, EKCalendar, NSMutableArray, NSTimeZone, NSArray;

@interface EKEventStore : NSObject {
@private
	id _database;	// 4 = 0x4
	NSMutableDictionary *_calendars;	// 8 = 0x8
	NSMutableDictionary *_sources;	// 12 = 0xc
	NSMutableArray *_observers;	// 16 = 0x10
	unsigned _flags;	// 20 = 0x14
	NSTimeZone *_timeZone;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSArray *calendars;	// G=0x32e4cd39; 
@property(readonly, assign, nonatomic) EKCalendar *defaultCalendarForNewEvents;	// G=0x32e4bf85; 
@property(readonly, assign, nonatomic) NSString *eventStoreIdentifier;	// G=0x32e73ef9; 
@property(retain) NSTimeZone *timeZone;	// G=0x32e45619; S=0x32e4541d; converted property
+ (id)storeWithOptions:(unsigned long)options path:(id)path;	// 0x32e73455
- (id)init;	// 0x32e44f65
- (id)initWithOptions:(unsigned long)options path:(id)path;	// 0x32e44f7d
- (void)_databaseChangedExternally;	// 0x32e73b71
- (id)_eventWithURI:(id)uri checkValid:(BOOL)valid;	// 0x32e74099
- (void)_notifyStoreChanged;	// 0x32e73405
- (void)_save;	// 0x32e7343d
- (void)_saveWithNotify:(BOOL)notify;	// 0x32e734a5
- (id)calendarWithID:(id)anId;	// 0x32e48409
// declared property getter: - (id)calendars;	// 0x32e4cd39
- (void)daemonRestarted;	// 0x32e736c1
- (void)dealloc;	// 0x32e73965
// declared property getter: - (id)defaultCalendarForNewEvents;	// 0x32e4bf85
- (id)defaultCalendarForNewTasks;	// 0x32e74cd1
- (void)enumerateEventsMatchingPredicate:(id)predicate usingBlock:(id)block;	// 0x32e72fd1
- (id)eventForUID:(id)uid occurrenceDate:(id)date;	// 0x32e4fe61
// declared property getter: - (id)eventStoreIdentifier;	// 0x32e73ef9
- (id)eventWithIdentifier:(id)identifier;	// 0x32e73fcd
- (id)eventWithUniqueId:(id)uniqueId;	// 0x32e744c1
- (id)eventsMatchingPredicate:(id)predicate;	// 0x32e4632d
- (id)importICS:(id)ics intoCalendar:(id)calendar options:(unsigned)options;	// 0x32e748f5
- (id)importICSData:(id)data intoCalendar:(id)calendar options:(unsigned)options;	// 0x32e74aa9
- (BOOL)markEventRead:(id)read error:(id *)error;	// 0x32e746a5
- (id)predicateForEventsWithStartDate:(id)startDate endDate:(id)date calendars:(id)calendars;	// 0x32e45711
- (id)predicateForEventsWithStartDate:(id)startDate endDate:(id)date eventIdentifier:(id)identifier calendars:(id)calendars;	// 0x32e747b5
- (int)readWriteCalendarCount;	// 0x32e4cc79
- (id)readWriteCalendars;	// 0x32e735c5
- (void)refreshAccountDataIfNecessary;	// 0x32e74d41
- (void)refreshAccountListIfNecessary;	// 0x32e74d29
- (BOOL)removeCalendar:(id)calendar error:(id *)error;	// 0x32e73f39
- (BOOL)removeEvent:(id)event span:(int)span error:(id *)error;	// 0x32e7319d
- (BOOL)saveCalendar:(id)calendar deferred:(BOOL)deferred error:(id *)error;	// 0x32e732b1
- (BOOL)saveCalendar:(id)calendar error:(id *)error;	// 0x32e73351
- (BOOL)saveEvent:(id)event span:(int)span error:(id *)error;	// 0x32e7322d
- (unsigned)serverPort;	// 0x32e468b5
- (void)setDefaultCalendarForNewEvents:(id)newEvents;	// 0x32e74c91
- (BOOL)setEventParticipationStatus:(id)status status:(int)status2 applyToAll:(BOOL)all error:(id *)error;	// 0x32e745a9
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x32e4541d
- (id)sourceWithID:(id)anId;	// 0x32e4898d
// converted property getter: - (id)timeZone;	// 0x32e45619
@end

