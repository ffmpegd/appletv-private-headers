/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOETARequester : NSObject {
	NSMapTable *_pendingRequests;	// 4 = 0x4
	NSLock *_pendingRequestsLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedRequester;	// 0x33fc80d9
- (id)init;	// 0x33fc8145
- (void)cancelRequest:(id)request;	// 0x33fc8849
- (Class)classForProviderID:(short)providerID;	// 0x33fc893d
- (void)dealloc;	// 0x33fc8225
- (void)registerProvider:(Class)provider;	// 0x33fc88fd
- (void)startRequest:(id)request finished:(id)finished networkActivity:(id)activity error:(id)error;	// 0x33fc8355
@end

