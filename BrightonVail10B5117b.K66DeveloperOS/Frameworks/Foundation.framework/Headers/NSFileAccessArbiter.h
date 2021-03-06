/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessArbiter.h"
#import "NSObject.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSFileAccessNode;
@protocol OS_dispatch_queue, OS_xpc_object;

@protocol NSFileAccessArbiter <NSObject>
- (void)cancelAccessClaimForID:(id)anId;
- (id)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;
- (void)grantSubarbitrationClaim:(id)claim withServer:(id)server;
- (void)revokeAccessClaimForID:(id)anId;
- (void)revokeSubarbitrationClaimForID:(id)anId;
- (void)tiePresenterForID:(id)anId toItemAtURL:(id)url;
- (void)writerWithPurposeID:(id)purposeID didDisconnectItemAtURL:(id)url;
- (void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;
- (void)writerWithPurposeID:(id)purposeID didReconnectItemAtURL:(id)url;
- (void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;
@end

@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiter> {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	BOOL _isSubarbiter;	// 8 = 0x8
	NSMutableDictionary *_accessClaimsByID;	// 12 = 0xc
	NSMutableDictionary *_subarbitrationClaimsByID;	// 16 = 0x10
	NSMutableDictionary *_reactorsByID;	// 20 = 0x14
	NSMutableDictionary *_watchersByPresenterID;	// 24 = 0x18
	NSFileAccessNode *_rootNode;	// 28 = 0x1c
	NSObject<OS_xpc_object> *_superarbitrationServer;	// 32 = 0x20
}
@property(readonly, retain) NSFileAccessNode *rootNode;	// G=0x31a5f98d; converted property
- (id)initWithQueue:(id)queue isSubarbiter:(BOOL)subarbiter listener:(id)listener;	// 0x31a5cdfd
- (void)_addPresenter:(id)presenter ofItemAtURL:(id)url withLastEventID:(id)lastEventID;	// 0x31a5f609
- (void)_addProvider:(id)provider ofItemsAtURL:(id)url;	// 0x31a5f6c5
- (void)_cancelAccessClaimForID:(id)anId;	// 0x31a5dbed
- (void)_grantAccessClaim:(id)claim;	// 0x31a5d439
- (void)_grantSubarbitrationClaim:(id)claim withServer:(id)server;	// 0x31a5d8c9
- (void)_handleCanceledClient:(id)client;	// 0x31a60c95
- (void)_handleMessage:(id)message forSubarbitrationClaim:(id)subarbitrationClaim server:(id)server;	// 0x31a60871
- (void)_handleMessage:(id)message fromClient:(id)client;	// 0x31a602b1
- (BOOL)_handleMessage:(id)message ofKind:(id)kind withParameters:(id)parameters embeddedServer:(id)server fromClient:(id)client;	// 0x31a5faad
- (void)_removeReactorForID:(id)anId;	// 0x31a5f74d
- (void)_revokeAccessClaim:(id)claim;	// 0x31a5d6e1
- (void)_revokeAccessClaimForID:(id)anId fromLocal:(BOOL)local;	// 0x31a5d7a9
- (void)_sendSubarbitersMessageWithKind:(id)kind parameters:(id)parameters;	// 0x31a5f9c5
- (void)_startArbitratingItemsAtURLs:(id)urls withSuperarbitrationServer:(id)superarbitrationServer;	// 0x31a5f7cd
- (void)_startWatchingItemAtURL:(id)url forPresenter:(id)presenter withLastEventID:(id)lastEventID;	// 0x31a5ee79
- (void)_stopWatchingItemForPresenterForID:(id)anId;	// 0x31a5f5b5
- (void)_tiePresenter:(id)presenter toItemAtURL:(id)url;	// 0x31a5d3ad
- (void)_tiePresenterForID:(id)anId toItemAtURL:(id)url;	// 0x31a5ee31
- (void)_writerWithPurposeID:(id)purposeID didDisconnectItemAtURL:(id)url;	// 0x31a5ea7d
- (void)_writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;	// 0x31a5dcb9
- (void)_writerWithPurposeID:(id)purposeID didReconnectItemAtURL:(id)url;	// 0x31a5ebad
- (void)_writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;	// 0x31a5ed05
- (void)cancelAccessClaimForID:(id)anId;	// 0x31a61405
- (void)dealloc;	// 0x31a5d2a5
- (void)finalize;	// 0x31a5d36d
- (id)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;	// 0x31a6114d
- (void)grantSubarbitrationClaim:(id)claim withServer:(id)server;	// 0x31a613c5
- (void)revokeAccessClaimForID:(id)anId;	// 0x31a61311
- (void)revokeSubarbitrationClaimForID:(id)anId;	// 0x31a61401
// converted property getter: - (id)rootNode;	// 0x31a5f98d
- (void)stopArbitrating;	// 0x31a5f8fd
- (void)tiePresenterForID:(id)anId toItemAtURL:(id)url;	// 0x31a61885
- (void)writerWithPurposeID:(id)purposeID didDisconnectItemAtURL:(id)url;	// 0x31a616a1
- (void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;	// 0x31a6151d
- (void)writerWithPurposeID:(id)purposeID didReconnectItemAtURL:(id)url;	// 0x31a616a5
- (void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;	// 0x31a616a9
@end

