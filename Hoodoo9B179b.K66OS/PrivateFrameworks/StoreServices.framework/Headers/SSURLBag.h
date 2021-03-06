/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class SSURLBagContext, NSMutableArray, NSDictionary, SSXPCConnection;

@interface SSURLBag : NSObject {
@private
	SSXPCConnection *_connection;	// 4 = 0x4
	SSURLBagContext *_context;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	dispatch_queue_s *_dispatchQueue;	// 16 = 0x10
	double _expirationTime;	// 20 = 0x14
	NSMutableArray *_pendingLookups;	// 28 = 0x1c
}
@property(readonly, assign) SSURLBagContext *URLBagContext;	// G=0x33cb19c9; 
+ (id)URLBagForContext:(id)context;	// 0x33cb1679
- (id)init;	// 0x33cb1439
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x33cb1499
// declared property getter: - (id)URLBagContext;	// 0x33cb19c9
- (id)_connection;	// 0x33cb1c35
- (void)_drainPendingLookupsWithError:(id)error;	// 0x33cb1c95
- (void)_loadURLBag;	// 0x33cb1e85
- (void)_loadWithCompletionBlock:(id)completionBlock;	// 0x33cb2215
- (void)dealloc;	// 0x33cb1571
- (void)invalidate;	// 0x33cb17f5
- (void)loadValueForKey:(id)key completionBlock:(id)block;	// 0x33cb18fd
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x33cb1c25
- (id)valueForKey:(id)key error:(id *)error;	// 0x33cb1a01
@end

