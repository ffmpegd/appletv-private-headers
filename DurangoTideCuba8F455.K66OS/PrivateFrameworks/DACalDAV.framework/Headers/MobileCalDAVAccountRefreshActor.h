/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "MobileCalDAVOperationActor.h"

@class CalDAVRefreshContext;

@interface MobileCalDAVAccountRefreshActor : MobileCalDAVOperationActor {
	CalDAVRefreshContext *_context;	// 24 = 0x18
	BOOL _handledCookieFailure;	// 28 = 0x1c
	double _bulkRetryBackoff;	// 32 = 0x20
	BOOL _shouldRetry;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) CalDAVRefreshContext *context;	// G=0x31465ab5; @synthesize=_context
@property(assign) BOOL shouldCancel;	// G=0x31465d0d; S=0x31465d31; converted property
+ (void)setCalDAVRefreshBackgroundTasksShouldCancel:(BOOL)cancel;	// 0x31466c41
+ (BOOL)shouldCancel;	// 0x31465aa1
- (id)initWithQueue:(id)queue context:(id)context callbackTarget:(id)target callbackThread:(id)thread;	// 0x31466b81
- (id)_ICSCalendarsFromMainEventUIDs:(id)mainEventUIDs inCalendar:(id)calendar withAccount:(id)account;	// 0x3146a2b9
- (void)_collectLocallyModifiedEventsInCalendar:(id)calendar forAccount:(id)account shouldSave:(BOOL *)save outEventsToSend:(id *)send outPathsToMove:(id *)move outEventsToDelete:(id *)aDelete;	// 0x3146cb3d
- (void *)_copyCalEventForDetachedEvent:(id)detachedEvent inCalendar:(id)calendar;	// 0x31469ac1
- (void)_fixUpICSCalendar:(id)calendar forEvent:(void *)event inCalendar:(id)calendar3 withAccount:(id)account;	// 0x31469b99
- (BOOL)_handleBadPasswordResponseWithAccount:(id)account;	// 0x31466d91
- (BOOL)_refreshCalendar:(id)calendar fromAccount:(id)account newCTag:(id)tag shouldSave:(BOOL *)save error:(id *)error;	// 0x3146a47d
- (void)_sendResultToCallbackActor:(id)callbackActor;	// 0x31466a61
// declared property getter: - (id)context;	// 0x31465ab5
- (void)dealloc;	// 0x31466b15
- (id)doBlockWithPasswordCheck:(id)passwordCheck;	// 0x314663f9
- (oneway void)refresh;	// 0x314671dd
- (BOOL)refreshCalendarCollectionsForAccount:(id)account pathsToCTags:(id)ctags shouldSave:(BOOL *)save error:(id *)error;	// 0x3146bc75
- (id)refreshCalendarsForAccount:(id)account shouldSave:(BOOL *)save error:(id *)error;	// 0x31467a11
- (oneway void)refreshCalendarsOnly;	// 0x314666c5
- (BOOL)refreshInboxCollectionForAccount:(id)account ctag:(id)ctag shouldSave:(BOOL *)save error:(id *)error;	// 0x31465d59
- (BOOL)refreshNotificationCollectionForAccount:(id)account ctag:(id)ctag shouldSave:(BOOL *)save error:(id *)error;	// 0x31465ab1
- (BOOL)refreshPropertiesForAccount:(id)account shouldSave:(BOOL *)save error:(id *)error;	// 0x314692f9
// converted property setter: - (void)setShouldCancel:(BOOL)cancel;	// 0x31465d31
// converted property getter: - (BOOL)shouldCancel;	// 0x31465d0d
@end

