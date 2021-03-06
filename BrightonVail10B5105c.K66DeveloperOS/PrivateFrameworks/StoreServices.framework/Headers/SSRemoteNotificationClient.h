/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface SSRemoteNotificationClient : NSObject {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	int _notifyToken;	// 8 = 0x8
}
+ (id)sharedClient;	// 0x35864ca1
- (id)init;	// 0x35864bfd
- (void)dealloc;	// 0x35864c4d
- (id)popQueuedNotifications;	// 0x35864d51
- (void)registerForRemoteNotifications;	// 0x35864f99
- (void)unregisterForRemoteNotifications;	// 0x3586526d
@end

