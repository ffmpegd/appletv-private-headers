/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface SSXPCServer : NSObject {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	NSString *_entitlementName;	// 8 = 0x8
	xpc_connection_s *_listener;	// 12 = 0xc
	NSMutableDictionary *_observers;	// 16 = 0x10
}
+ (id)mainServer;	// 0x3421ab35
- (id)init;	// 0x3421a659
- (id)initWithServiceName:(id)serviceName;	// 0x3421a66d
- (id)initWithServiceName:(id)serviceName entitlement:(id)entitlement queue:(dispatch_queue_s *)queue;	// 0x3421a68d
- (void)_dispatchMessage:(void *)message connection:(xpc_connection_s *)connection;	// 0x3421afa5
- (void)addObserver:(id)observer selector:(SEL)selector forMessage:(long long)message;	// 0x3421abf5
- (void)dealloc;	// 0x3421aaa9
- (void)removeObserver:(id)observer selector:(SEL)selector forMessage:(long long)message;	// 0x3421ade5
@end

