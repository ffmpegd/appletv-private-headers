/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library

@class CalDAVBulkUploadTaskGroup;
@protocol CalDAVCalendar, CalDAVPrincipal;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup {
	id<CalDAVCalendar> _calendar;	// 44 = 0x2c
	id<CalDAVPrincipal> _principal;	// 48 = 0x30
	CalDAVBulkUploadTaskGroup *_uploadTaskGroup;	// 52 = 0x34
}
- (id)initWithCalendar:(id)calendar principal:(id)principal accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3517529d
- (void)cancelTaskGroup;	// 0x35175321
- (id)dataContentType;	// 0x35175291
- (void)dealloc;	// 0x351758fd
- (void)startTaskGroup;	// 0x35175365
@end

