/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableSet;

@interface ISSpringBoardUtility : NSObject {
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	NSDictionary *_enabledRemoteNotificationTypes;	// 8 = 0x8
	NSMutableSet *_processAssertions;	// 12 = 0xc
}
@property(readonly, assign) BOOL hasProcessAssertions;	// G=0x33d9a7ad; 
+ (id)sharedInstance;	// 0x33d9a2d1
- (id)init;	// 0x33d9a209
- (void)addDownloadingIconWithIdentifier:(id)identifier bundleIdentifier:(id)identifier2 softwareType:(id)type;	// 0x33d9a381
- (void)cancelDownloadingIconForIdentifier:(id)identifier;	// 0x33d9a405
- (void)cancelDownloadingIconForPurchase:(id)purchase;	// 0x33d9a445
- (void)dealloc;	// 0x33d9a259
- (int)enabledRemoteNotificationTypesForBundleIdentifier:(id)bundleIdentifier;	// 0x33d9a4e1
// declared property getter: - (BOOL)hasProcessAssertions;	// 0x33d9a7ad
- (void)releaseProcessAssertion:(SBSProcessAssertionRef)assertion;	// 0x33d9ab75
- (void)removeDefaultPNGSnapshotsForIdentifier:(id)identifier;	// 0x33d9a8a1
- (void)resetEnabledRemoteNotificationTypes;	// 0x33d9aa31
- (void)setBadgeValue:(id)value forIdentifier:(id)identifier;	// 0x33d9aacd
- (void)suspendFrontApplication;	// 0x33d9ab71
- (SBSProcessAssertionRef)takeProcessAssertionWithIdentifier:(id)identifier displayIdentifier:(id)identifier2 launchOptions:(id)options;	// 0x33d9ac05
@end
