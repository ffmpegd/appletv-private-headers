/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection, NSMutableArray, NSDictionary, SSURLBagContext;
@protocol OS_dispatch_queue;

@interface SSURLBag : NSObject {
	SSXPCConnection *_connection;	// 4 = 0x4
	SSURLBagContext *_context;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
	double _expirationTime;	// 20 = 0x14
	NSMutableArray *_pendingLookups;	// 28 = 0x1c
}
@property(readonly, assign) SSURLBagContext *URLBagContext;	// G=0x312d83f1; 
+ (id)URLBagForContext:(id)context;	// 0x312d7e29
- (id)init;	// 0x312d7c51
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x312d7cb1
// declared property getter: - (id)URLBagContext;	// 0x312d83f1
- (id)_connection;	// 0x312d8685
- (void)_drainPendingLookupsWithError:(id)error;	// 0x312d86e1
- (void)_loadURLBag;	// 0x312d88e1
- (void)_loadWithCompletionBlock:(id)completionBlock;	// 0x312d8c99
- (void)dealloc;	// 0x312d7d89
- (void)getTrustForURL:(id)url completionBlock:(id)block;	// 0x312d7fc5
- (void)invalidate;	// 0x312d8221
- (void)loadValueForKey:(id)key completionBlock:(id)block;	// 0x312d8321
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x312d8675
- (id)valueForKey:(id)key error:(id *)error;	// 0x312d8429
@end
