/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "AppleTV-Structs.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface BRNetworkMonitor : BRSingleton {
	NSTimer *_networkDropTimer;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x40e2c5
+ (id)singleton;	// 0x40e2b5
- (void)_completeNetworkTransition;	// 0x40e531
- (void)handleSysConfigCallbackWithStore:(SCDynamicStoreRef)store changedKeys:(CFArrayRef)keys info:(void *)info;	// 0x40e2d9
@end

