/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSError;

@interface CalDAVRefreshContext : NSObject {
	BOOL _isForced;	// 4 = 0x4
	BOOL _wasUserRequested;	// 5 = 0x5
	BOOL _isCalendarsOnly;	// 6 = 0x6
	BOOL _didDownloadEvents;	// 7 = 0x7
	BOOL _didSaveDatabase;	// 8 = 0x8
	BOOL _shouldSave;	// 9 = 0x9
	BOOL _shouldSaveAccounts;	// 10 = 0xa
	BOOL _calendarFailedToSync;	// 11 = 0xb
	double _startTime;	// 12 = 0xc
	int _numDownloadedElements;	// 20 = 0x14
	BOOL _shouldRetry;	// 24 = 0x18
	int _retryTime;	// 28 = 0x1c
	NSError *_error;	// 32 = 0x20
	unsigned _localItems;	// 36 = 0x24
}
@property(assign, nonatomic) BOOL calendarFailedToSync;	// G=0x378bd1a9; S=0x378bd1b9; @synthesize=_calendarFailedToSync
@property(assign, nonatomic) BOOL didDownloadEvents;	// G=0x378bd0dd; S=0x378bd0ed; @synthesize=_didDownloadEvents
@property(assign, nonatomic) BOOL didSaveDatabase;	// G=0x378bd0fd; S=0x378bd10d; @synthesize=_didSaveDatabase
@property(retain, nonatomic) NSError *error;	// G=0x378bd209; S=0x378bd219; @synthesize=_error
@property(assign, nonatomic) BOOL isCalendarsOnly;	// G=0x378bd0bd; S=0x378bd0cd; @synthesize=_isCalendarsOnly
@property(assign, nonatomic) BOOL isForced;	// G=0x378bd07d; S=0x378bd08d; @synthesize=_isForced
@property(assign, nonatomic) unsigned localItems;	// G=0x378bd229; S=0x378bd239; @synthesize=_localItems
@property(assign, nonatomic) int numDownloadedElements;	// G=0x378bd189; S=0x378bd199; @synthesize=_numDownloadedElements
@property(assign, nonatomic) int retryTime;	// G=0x378bd1e9; S=0x378bd1f9; @synthesize=_retryTime
@property(assign, nonatomic) BOOL shouldRetry;	// G=0x378bd1c9; S=0x378bd1d9; @synthesize=_shouldRetry
@property(assign, nonatomic) BOOL shouldSave;	// G=0x378bd11d; S=0x378bd12d; @synthesize=_shouldSave
@property(assign, nonatomic) BOOL shouldSaveAccounts;	// G=0x378bd13d; S=0x378bd14d; @synthesize=_shouldSaveAccounts
@property(assign, nonatomic) double startTime;	// G=0x378bd15d; S=0x378bd175; @synthesize=_startTime
@property(assign, nonatomic) BOOL wasUserRequested;	// G=0x378bd09d; S=0x378bd0ad; @synthesize=_wasUserRequested
+ (id)defaultContext;	// 0x378bcfed
// declared property getter: - (BOOL)calendarFailedToSync;	// 0x378bd1a9
- (void)dealloc;	// 0x378bd031
// declared property getter: - (BOOL)didDownloadEvents;	// 0x378bd0dd
// declared property getter: - (BOOL)didSaveDatabase;	// 0x378bd0fd
// declared property getter: - (id)error;	// 0x378bd209
// declared property getter: - (BOOL)isCalendarsOnly;	// 0x378bd0bd
// declared property getter: - (BOOL)isForced;	// 0x378bd07d
// declared property getter: - (unsigned)localItems;	// 0x378bd229
// declared property getter: - (int)numDownloadedElements;	// 0x378bd189
// declared property getter: - (int)retryTime;	// 0x378bd1e9
// declared property setter: - (void)setCalendarFailedToSync:(BOOL)sync;	// 0x378bd1b9
// declared property setter: - (void)setDidDownloadEvents:(BOOL)downloadEvents;	// 0x378bd0ed
// declared property setter: - (void)setDidSaveDatabase:(BOOL)saveDatabase;	// 0x378bd10d
// declared property setter: - (void)setError:(id)error;	// 0x378bd219
// declared property setter: - (void)setIsCalendarsOnly:(BOOL)only;	// 0x378bd0cd
// declared property setter: - (void)setIsForced:(BOOL)forced;	// 0x378bd08d
// declared property setter: - (void)setLocalItems:(unsigned)items;	// 0x378bd239
// declared property setter: - (void)setNumDownloadedElements:(int)elements;	// 0x378bd199
// declared property setter: - (void)setRetryTime:(int)time;	// 0x378bd1f9
// declared property setter: - (void)setShouldRetry:(BOOL)retry;	// 0x378bd1d9
// declared property setter: - (void)setShouldSave:(BOOL)save;	// 0x378bd12d
// declared property setter: - (void)setShouldSaveAccounts:(BOOL)saveAccounts;	// 0x378bd14d
// declared property setter: - (void)setStartTime:(double)time;	// 0x378bd175
// declared property setter: - (void)setWasUserRequested:(BOOL)requested;	// 0x378bd0ad
// declared property getter: - (BOOL)shouldRetry;	// 0x378bd1c9
// declared property getter: - (BOOL)shouldSave;	// 0x378bd11d
// declared property getter: - (BOOL)shouldSaveAccounts;	// 0x378bd13d
// declared property getter: - (double)startTime;	// 0x378bd15d
// declared property getter: - (BOOL)wasUserRequested;	// 0x378bd09d
@end

