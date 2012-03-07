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
@property(readonly, assign) BOOL shouldSave;	// G=0x36088991; @synthesize=_shouldSave
+ (id)_userInfoCache;	// 0x36087291
- (id)initWithPrincipal:(id)principal calendar:(id)calendar calendarItem:(void *)item;	// 0x360872fd
- (void)_addOrganizerToItem;	// 0x36087ba9
- (id)_getUserInfoFromAddressBook;	// 0x360873e9
- (BOOL)_organizerIsMe:(void *)me;	// 0x36087ff9
- (void)_setOrganizerInfo;	// 0x36087935
- (void)dealloc;	// 0x36087381
// declared property getter: - (BOOL)shouldSave;	// 0x36088991
- (void)startTaskGroup;	// 0x360881f5
- (void)task:(id)task didFinishWithError:(id)error;	// 0x360886b1
@end

