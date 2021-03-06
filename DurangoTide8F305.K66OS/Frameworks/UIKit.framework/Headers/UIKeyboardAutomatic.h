/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboard.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard {
@private
	BOOL _showingCandidateBar;	// 60 = 0x3c
}
- (id)initWithFrame:(CGRect)frame;	// 0x32051569
- (BOOL)_isAutomaticKeyboard;	// 0x320b0039
- (void)activate;	// 0x3205893d
- (void)dealloc;	// 0x32219949
- (UIPeripheralAnimationGeometry)geometryForHeightDelta:(float)heightDelta;	// 0x3221c121
- (void)hasSuspended:(id)suspended;	// 0x32218395
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x32219ded
- (BOOL)isActive;	// 0x320589c5
- (void)maximize;	// 0x32218539
- (void)minimize;	// 0x32218565
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x32219f31
- (void)willResume:(id)resume;	// 0x322183d1
@end

