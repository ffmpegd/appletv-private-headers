/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFlickrProvider.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrProviderForAccount : ATVFlickrProvider {
@private
	ATVInternetPhotosAccount *_account;	// 24 = 0x18
}
+ (id)providerForAccount:(id)account;	// 0x330e0279
- (id)initWithAccount:(id)account;	// 0x330e02c1
- (id)_data;	// 0x330e0509
- (BOOL)_handlesObject:(id)object;	// 0x330e0529
- (void)dealloc;	// 0x330e03e9
- (id)hashForDataAtIndex:(long)index;	// 0x330e04a9
@end

