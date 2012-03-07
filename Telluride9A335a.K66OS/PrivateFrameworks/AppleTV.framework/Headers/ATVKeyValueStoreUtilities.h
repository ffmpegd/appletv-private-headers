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
+ (id)sharedInstance;	// 0x34137491
- (id)init;	// 0x341374f5
- (void)_accountAuthenticationSucceeded:(id)succeeded;	// 0x341379a1
- (void)_accountRemovedNotification:(id)notification;	// 0x3413783d
- (void)_startPeriodicCleanupTaskOnKeyValueStore:(id)store;	// 0x3413776d
- (void)dealloc;	// 0x34137551
- (BOOL)isKeyValueStoreAvailable;	// 0x341376ed
- (void)startMonitoringStore:(id)store;	// 0x341375cd
@end

