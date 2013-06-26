/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "MobileCalDAVCalendar.h"


@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar {
	int _mostRecentNotificationChangeIndex;	// 120 = 0x78
}
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal title:(id)title;	// 0x348b1dc1
- (id)_changedAttributesFromCalendarChanges:(id)calendarChanges;	// 0x348b4105
- (void *)_copyCalItemFromAnyCalendarWithExternalID:(id)externalID;	// 0x348b3bf9
- (void *)_copyNotificationWithExternalID:(id)externalID;	// 0x348b2275
- (void *)_copyNotificationWithUniqueIdentifier:(id)uniqueIdentifier inCalendar:(void *)calendar orStore:(void *)store;	// 0x348b21cd
- (void *)_createResourceChange:(id)change withType:(unsigned)type forNotification:(void *)notification;	// 0x348b40e1
- (void *)_createResourceChange:(id)change withType:(unsigned)type forNotification:(void *)notification withRecurrenceID:(id)recurrenceID;	// 0x348b3c75
- (BOOL)_handleInviteNotification:(id)notification withResource:(id)resource uid:(id)uid;	// 0x348b31b1
- (BOOL)_handleInviteReply:(id)reply withResource:(id)resource owningNotification:(id)notification uid:(id)uid;	// 0x348b3635
- (BOOL)_handleResourceChanged:(id)changed withResource:(id)resource uid:(id)uid;	// 0x348b44a9
- (BOOL)_removeCalendarItemWithURL:(id)url;	// 0x348b2a79
- (id)allItemURLs;	// 0x348b1e2d
- (Class)appSpecificCalendarItemClass;	// 0x348b2c59
- (void)clearEventChanges;	// 0x348b2c75
- (id)etagsForItemURLs:(id)itemURLs;	// 0x348b1f69
- (BOOL)isNotification;	// 0x348b1e29
- (void)prepareMergeSyncActionsWithCompletionBlock:(id)completionBlock;	// 0x348b31a9
- (void)prepareSyncActionsWithCompletionBlock:(id)completionBlock;	// 0x348b2dd9
- (BOOL)setEtag:(id)etag forItemAtURL:(id)url;	// 0x348b2305
- (BOOL)setScheduleTag:(id)tag forItemAtURL:(id)url;	// 0x348b2545
- (BOOL)setURL:(id)url forResourceWithUUID:(id)uuid;	// 0x348b2401
- (BOOL)updateResourcesFromServer:(id)server;	// 0x348b25c1
@end
