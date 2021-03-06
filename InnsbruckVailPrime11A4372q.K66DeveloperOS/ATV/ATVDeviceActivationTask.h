/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDeviceActivationDelegate.h"
#import <AppleTVServices/ATVBackgroundTask.h>

@class ATVDeviceActivationAction;

__attribute__((visibility("hidden")))
@interface ATVDeviceActivationTask : ATVBackgroundTask <ATVDeviceActivationDelegate> {
	BOOL _processingActivation;	// 4 = 0x4
	ATVDeviceActivationAction *_action;	// 8 = 0x8
}
+ (void)scheduleOneShotActivationCheck;	// 0x314e1
+ (void)scheduleRepeatingActivationCheck;	// 0x31441
- (void)activationFailedForAction:(id)action withReason:(int)reason error:(id)error;	// 0x31765
- (void)activationSucceeded:(id)succeeded;	// 0x316a5
- (void)dealloc;	// 0x31659
- (BOOL)perform;	// 0x31515
@end

