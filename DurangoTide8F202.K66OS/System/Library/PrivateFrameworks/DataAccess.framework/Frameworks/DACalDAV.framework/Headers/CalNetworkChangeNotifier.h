/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "DACalDAV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface CalNetworkChangeNotifier : NSObject {
	SCDynamicStoreRef _store;	// 4 = 0x4
	CFRunLoopSourceRef _runLoopSource;	// 8 = 0x8
	NSMutableArray *_listeners;	// 12 = 0xc
	BOOL _pendingPost;	// 16 = 0x10
	BOOL _asleep;	// 17 = 0x11
	BOOL _checkedNetwork;	// 18 = 0x12
	BOOL _isNetworkUp;	// 19 = 0x13
}
@property(readonly, assign) BOOL isNetworkUp;	// G=0x32cf3a99; converted property
+ (void)disableNotifications;	// 0x32cf3d0d
+ (BOOL)enableNotifications;	// 0x32cf3d31
+ (BOOL)isHostReachable:(id)reachable;	// 0x32cf3aa1
+ (BOOL)isNetworkUp;	// 0x32cf3ad5
+ (id)sharedNotifier;	// 0x32cf3d71
- (id)init;	// 0x32cf3d91
- (void)_cancelAndRepostIfNecessary;	// 0x32cf3c4d
- (void)_cancelPost;	// 0x32cf3c61
- (void)_delayPost;	// 0x32cf3ca9
- (void)_goingToSleep:(id)sleep;	// 0x32cf3bb1
- (BOOL)_listenForChanges;	// 0x32cf3a95
- (void)_sendNotification;	// 0x32cf3bf9
- (void)_wakeUp:(id)up;	// 0x32cf3b65
- (void)addListener:(id)listener;	// 0x32cf3b25
- (void)dealloc;	// 0x32cf3e19
- (BOOL)isHostReachable:(id)reachable;	// 0x32cf3a9d
// converted property getter: - (BOOL)isNetworkUp;	// 0x32cf3a99
- (void)removeListener:(id)listener;	// 0x32cf3b05
@end

