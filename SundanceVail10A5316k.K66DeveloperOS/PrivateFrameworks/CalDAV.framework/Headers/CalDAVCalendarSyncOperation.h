/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVOperation.h"

@class NSError, NSString;
@protocol CalDAVCalendar, CalDAVCalendarSyncDelegate;

@interface CalDAVCalendarSyncOperation : CalDAVOperation {
	BOOL _getScheduleTags;	// 56 = 0x38
	BOOL _getScheduleChanges;	// 57 = 0x39
	NSError *_savedError;	// 60 = 0x3c
	NSString *_nextCtag;	// 64 = 0x40
	id<CalDAVCalendar> _calendar;	// 68 = 0x44
}
@property(assign, nonatomic) id<CalDAVCalendarSyncDelegate> delegate;	// @dynamic
@property(assign) BOOL getScheduleChanges;	// G=0x36e64769; S=0x36e64781; @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// G=0x36e64739; S=0x36e64751; @synthesize=_getScheduleTags
- (id)initWithPrincipal:(id)principal calendar:(id)calendar nextCtag:(id)ctag;	// 0x36e6346d
- (id)_distantFutureEndDate;	// 0x36e635d5
- (void)_finishWithError:(id)error;	// 0x36e63549
- (void)_processAddedOrModified:(id)modified removed:(id)removed;	// 0x36e63d51
- (void)_reallySyncCalendar;	// 0x36e636e1
- (void)_syncEventsForMerge;	// 0x36e63d91
- (void)containerSyncTask:(id)task completedWithNewCTag:(id)newCTag newSyncToken:(id)token addedOrModified:(id)modified removed:(id)removed error:(id)error;	// 0x36e64351
- (void)containerSyncTask:(id)task retrievedAddedOrModifiedActions:(id)actions removed:(id)removed;	// 0x36e64339
- (id)copyAllLocalURLsInFolderWithURL:(id)url;	// 0x36e64055
- (id)copyLocalETagsForURLs:(id)urls inFolderWithURL:(id)url;	// 0x36e63f55
- (void)dealloc;	// 0x36e634e5
// declared property getter: - (BOOL)getScheduleChanges;	// 0x36e64769
// declared property getter: - (BOOL)getScheduleTags;	// 0x36e64739
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x36e64781
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x36e64751
- (BOOL)setLocalETag:(id)tag forItemWithURL:(id)url inFolderWithURL:(id)url3;	// 0x36e64151
- (BOOL)setLocalScheduleTag:(id)tag forItemWithURL:(id)url inFolderWithURL:(id)url3;	// 0x36e64245
- (void)syncCalendar;	// 0x36e63b0d
@end

