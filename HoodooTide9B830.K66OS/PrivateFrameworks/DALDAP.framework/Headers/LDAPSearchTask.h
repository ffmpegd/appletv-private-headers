/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import "DALDAP-Structs.h"
#import "LDAPTask.h"

@class DAContactsSearchQuery, NSMutableArray, NSDate;

@interface LDAPSearchTask : LDAPTask {
	ldap *_ld;	// 16 = 0x10
	int _msgId;	// 20 = 0x14
	DAContactsSearchQuery *_query;	// 24 = 0x18
	dispatch_source_s *_checkResultsTimer;	// 28 = 0x1c
	NSMutableArray *_foundContacts;	// 32 = 0x20
	NSDate *_dateConnectionWentOut;	// 36 = 0x24
}
@property(readonly, assign) DAContactsSearchQuery *query;	// G=0x31792015; @synthesize=_query
- (id)initWithQuery:(id)query;	// 0x317901b9
- (void)_appendKey:(id)key value:(id)value toSearchResultElement:(id)searchResultElement;	// 0x31790fdd
- (id)_copyContactSearchElementFromLDAPElement:(ldapmsg *)ldapelement;	// 0x3179139d
- (id)_copySearchStringForQueryInput:(id)queryInput;	// 0x317909d9
- (void)_failImmediately;	// 0x31791a69
- (id)_initializeServer;	// 0x317902d5
- (void)_invokeBlockOnMainThread:(id)thread;	// 0x31791dcd
- (void)_promptForPasswordDueToError:(id)error;	// 0x31791955
- (id)_startQuery;	// 0x31790bd5
- (void)checkForResults;	// 0x317915d9
- (void)dealloc;	// 0x3179023d
- (void)finishWithError:(id)error;	// 0x31791dd5
- (int)numDownloadedElements;	// 0x31791ff5
- (void)performTaskInBackground;	// 0x31791b15
// declared property getter: - (id)query;	// 0x31792015
@end

