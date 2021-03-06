/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "CoreDAVTaskDelegate.h"
#import <CoreDAVTaskGroup.h> // Unknown library

@class MobileCalDAVCalendar, CalDAVPrincipalResult, MobileCalDAVPrincipal;

@interface CalDAVAttendeeFixupTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	MobileCalDAVPrincipal *_principal;	// 44 = 0x2c
	MobileCalDAVCalendar *_calendar;	// 48 = 0x30
	void *_calItem;	// 52 = 0x34
	CalDAVPrincipalResult *_userInfo;	// 56 = 0x38
@private
	BOOL _shouldSave;	// 60 = 0x3c
}
@property(readonly, assign) BOOL shouldSave;	// G=0x3023ca8d; @synthesize=_shouldSave
+ (id)_userInfoCache;	// 0x3023b38d
- (id)initWithPrincipal:(id)principal calendar:(id)calendar calendarItem:(void *)item;	// 0x3023b3f9
- (void)_addOrganizerToItem;	// 0x3023bca5
- (id)_getUserInfoFromAddressBook;	// 0x3023b4e5
- (BOOL)_organizerIsMe:(void *)me;	// 0x3023c0f5
- (void)_setOrganizerInfo;	// 0x3023ba31
- (void)dealloc;	// 0x3023b47d
// declared property getter: - (BOOL)shouldSave;	// 0x3023ca8d
- (void)startTaskGroup;	// 0x3023c2f1
- (void)task:(id)task didFinishWithError:(id)error;	// 0x3023c7ad
@end

