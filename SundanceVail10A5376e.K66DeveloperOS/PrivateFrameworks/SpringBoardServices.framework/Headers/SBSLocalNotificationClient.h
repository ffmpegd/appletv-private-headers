/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library


@interface SBSLocalNotificationClient : NSObject {
}
+ (void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace optionalBundleIdentifier:(id)identifier;	// 0x366d4a51
+ (void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace optionalBundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x366d4971
+ (void)cancelAllLocalNotifications;	// 0x366d4b05
+ (void)cancelAllLocalNotificationsForBundleIdentifier:(id)bundleIdentifier;	// 0x366d4cb5
+ (void)cancelLocalNotification:(id)notification;	// 0x366d4ac1
+ (void)cancelLocalNotification:(id)notification bundleIdentifier:(id)identifier;	// 0x366d4c1d
+ (void)cancelLocalNotification:(id)notification bundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x366d4c65
+ (id)getPendingNotification;	// 0x366d48e9
+ (void)scheduleLocalNotification:(id)notification;	// 0x366d4a7d
+ (void)scheduleLocalNotification:(id)notification bundleIdentifier:(id)identifier;	// 0x366d4b85
+ (void)scheduleLocalNotification:(id)notification bundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x366d4bcd
+ (id)scheduledLocalNotifications;	// 0x366d4b71
+ (id)scheduledLocalNotificationsForBundleIdentifier:(id)bundleIdentifier;	// 0x366d4d21
+ (void)setScheduledLocalNotifications:(id)notifications;	// 0x366d4b4d
+ (void)setScheduledLocalNotifications:(id)notifications bundleIdentifier:(id)identifier;	// 0x366d4cfd
@end

