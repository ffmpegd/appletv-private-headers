/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "RequestQueue.h"
#import "ISSingleton.h"


__attribute__((visibility("hidden")))
@interface StoreKitRequestQueue : RequestQueue <ISSingleton> {
}
+ (void)setSharedInstance:(id)instance;	// 0x33358be9
+ (id)sharedInstance;	// 0x33358c29
- (void)cancelRequestWithInfo:(id)info identity:(id)identity;	// 0x33358c65
- (void)requestProductsWithInfo:(id)info identity:(id)identity;	// 0x33358d19
- (void)sendError:(id)error forOperation:(id)operation;	// 0x33358e8d
- (void)sendResponseForOperation:(id)operation;	// 0x33359025
@end

