/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface ATVBSRManager : BRSingleton {
	BOOL _performingBSR;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x133639
+ (id)singleton;	// 0x133629
- (id)init;	// 0x133649
- (void)_performResetFromIR;	// 0x133799
- (void)_showBSRScreenWithController:(id)controller;	// 0x1338ad
- (void)dealloc;	// 0x1336c5
- (void)enterBSRModeWithCompletionBlock:(id)completionBlock;	// 0x133721
- (void)enterWithModes:(id)modes withCompletionBlock:(id)completionBlock;	// 0x13375d
@end
