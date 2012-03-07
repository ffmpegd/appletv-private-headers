/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@protocol BRHomeShareHandler;

@interface BRHomeShareManager : BRSingleton {
@private
	Class _homeShareHandlerClass;	// 4 = 0x4
	id<BRHomeShareHandler> _handlerInstance;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x35e8a235
+ (id)singleton;	// 0x35e8a225
- (void)disableHomeSharing;	// 0x35e8a389
- (void)enableHomeSharingWithAccountName:(id)accountName andPassword:(id)password;	// 0x35e8a359
- (id)handler;	// 0x35e8a4ad
- (BOOL)hasHomeShareAccount;	// 0x35e8a3d9
- (id)homeShareAccount;	// 0x35e8a401
- (id)homeSharingGroupIDIsEnabled:(id *)enabled;	// 0x35e8a32d
- (BOOL)isHomeSharingEnabled;	// 0x35e8a3b1
- (unsigned long long)machineIDForServer:(ATVDataServerRef)server;	// 0x35e8a481
- (long)pairForHomeShareStreamingWithHost:(ATVDataServerRef)host;	// 0x35e8a429
- (unsigned long long)pairingGUIDForServer:(ATVDataServerRef)server;	// 0x35e8a455
- (void)registerHandlerClass:(Class)aClass;	// 0x35e8a245
@end

