/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library


@interface SBSLocalNotificationClient : NSObject {
}
+ (void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace;	// 0x31e571cd
+ (void)cancelAllLocalNotifications;	// 0x31e57075
+ (void)cancelLocalNotification:(id)notification;	// 0x31e570b5
+ (id)getPendingNotification;	// 0x31e57135
+ (void)scheduleLocalNotification:(id)notification;	// 0x31e570f5
+ (id)scheduledLocalNotifications;	// 0x31e5723d
+ (void)setScheduledLocalNotifications:(id)notifications;	// 0x31e57055
@end
