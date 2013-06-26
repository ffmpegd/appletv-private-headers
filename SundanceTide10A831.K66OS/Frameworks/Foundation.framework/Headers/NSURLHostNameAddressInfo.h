/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSURLHostNameAddressInfo : NSObject {
	double timestamp;	// 4 = 0x4
	addrinfo *addressInfo;	// 12 = 0xc
}
+ (id)addressInfoForHost:(id)host;	// 0x325c4681
+ (void)asyncResolveWithCallbackClient:(id)callbackClient;	// 0x325c47c5
- (id)_initWithAddressInfo:(addrinfo *)addressInfo;	// 0x325c490d
- (double)_timestamp;	// 0x325c4975
- (addrinfo *)addrinfo;	// 0x325c4965
- (void)dealloc;	// 0x325c498d
- (void)finalize;	// 0x325c49d1
@end
