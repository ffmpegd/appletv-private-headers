/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVNewFeaturesController : BRController {
	BOOL _iTunesStoreInitialized;	// 100 = 0x64
	NSTimer *_storeWaitTimer;	// 104 = 0x68
	BOOL _launchedApp;	// 108 = 0x6c
}
- (id)init;	// 0x243eb9
- (void)_gatherConfigAndLaunch;	// 0x24454d
- (void)_musicStoreNotification:(id)notification;	// 0x2440a1
- (void)_storeWaitTimerFired:(id)fired;	// 0x24405d
- (id)_whatsNewConfiguration;	// 0x2442c1
- (id)_whatsNewURL;	// 0x2441a9
- (void)dealloc;	// 0x243ee5
- (BOOL)isAccessibilityElement;	// 0x24409d
- (void)wasPushed;	// 0x243f41
@end

