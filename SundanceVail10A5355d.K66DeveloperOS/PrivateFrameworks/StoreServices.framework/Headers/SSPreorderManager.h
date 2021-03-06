/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSPreorderManager : NSObject {
	SSXPCConnection *_connection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSArray *_itemKinds;	// 12 = 0xc
	SSXPCConnection *_observerConnection;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_observerQueue;	// 20 = 0x14
	CFArrayRef _observers;	// 24 = 0x18
	NSArray *_preorders;	// 28 = 0x1c
}
@property(readonly, assign) NSArray *itemKinds;	// G=0x31941375; 
@property(readonly, assign) NSArray *preorders;	// G=0x319413ad; 
+ (id)bookStoreItemKinds;	// 0x31940f21
+ (id)musicStoreItemKinds;	// 0x31940f55
- (id)init;	// 0x31940ce9
- (id)initWithItemKinds:(id)itemKinds;	// 0x31940cfd
- (void)_connectAsObserver;	// 0x319418d1
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x31941bb9
- (void)_registerAsObserver;	// 0x31941c55
- (void)_sendMessageToObservers:(SEL)observers;	// 0x31941d01
- (void)addObserver:(id)observer;	// 0x31941065
- (void)cancelPreorders:(id)preorders withCompletionBlock:(id)completionBlock;	// 0x31941115
- (void)dealloc;	// 0x31940e45
// declared property getter: - (id)itemKinds;	// 0x31941375
// declared property getter: - (id)preorders;	// 0x319413ad
- (void)reloadFromServer;	// 0x319417a9
- (void)removeObserver:(id)observer;	// 0x319417f9
@end

