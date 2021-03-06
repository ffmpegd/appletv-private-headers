/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSHashTable;

@interface SBSPushStore : NSObject {
	NSString *_bundleID;	// 4 = 0x4
	NSHashTable *_observers;	// 8 = 0x8
}
+ (id)allNotificationEnabledBundleIDs;	// 0x366d5535
+ (id)bundleIDsWithUpdatesSince:(id)updatesSince;	// 0x366d5415
+ (unsigned)effectivePushSettingsForBundleID:(id)bundleID;	// 0x366d55f9
+ (void)initialize;	// 0x366d4dd1
+ (id)notificationsForBundleID:(id)bundleID;	// 0x366d51dd
+ (id)pushStoreForBundleID:(id)bundleID;	// 0x366d4e85
+ (void)setEffectivePushSettings:(unsigned)settings forBundleID:(id)bundleID;	// 0x366d5649
+ (id)uniqueIdentifierForNotification:(id)notification;	// 0x366d50b1
- (id)initWithBundleID:(id)bundleID;	// 0x366d5135
- (void)addObserver:(id)observer;	// 0x366d5695
- (void)dealloc;	// 0x366d5a09
- (void)notifyPushDeliveryAccepted;	// 0x366d591d
- (void)notifyPushSettingsChanged;	// 0x366d585d
- (void)notifyPushStoreCleared;	// 0x366d579d
- (void)notifyPushStoreUpdated;	// 0x366d56dd
- (void)removeObserver:(id)observer;	// 0x366d56b9
- (id)storedNotifications;	// 0x366d59dd
@end

