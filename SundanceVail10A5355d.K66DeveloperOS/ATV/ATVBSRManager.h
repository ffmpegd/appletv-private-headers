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
+ (void)setSingleton:(id)singleton;	// 0x12acf1
+ (id)singleton;	// 0x12ace1
- (id)init;	// 0x12ad01
- (void)_performResetFromIR;	// 0x12ae51
- (void)_showBSRScreenWithController:(id)controller;	// 0x12af65
- (void)dealloc;	// 0x12ad7d
- (void)enterBSRModeWithCompletionBlock:(id)completionBlock;	// 0x12add9
- (void)enterWithModes:(id)modes withCompletionBlock:(id)completionBlock;	// 0x12ae15
@end
