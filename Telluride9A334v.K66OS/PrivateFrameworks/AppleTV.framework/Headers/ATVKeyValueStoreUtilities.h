/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet;

@interface ATVKeyValueStoreUtilities : NSObject {
@private
	NSMutableSet *_keyValueStores;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x33156491
- (id)init;	// 0x331564f5
- (void)_accountAuthenticationSucceeded:(id)succeeded;	// 0x331569a1
- (void)_accountRemovedNotification:(id)notification;	// 0x3315683d
- (void)_startPeriodicCleanupTaskOnKeyValueStore:(id)store;	// 0x3315676d
- (void)dealloc;	// 0x33156551
- (BOOL)isKeyValueStoreAvailable;	// 0x331566ed
- (void)startMonitoringStore:(id)store;	// 0x331565cd
@end

