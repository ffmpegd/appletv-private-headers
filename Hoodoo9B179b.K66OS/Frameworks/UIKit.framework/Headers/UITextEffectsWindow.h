/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAutoRotatingWindow.h"
#import "UIKit-Structs.h"


@interface UITextEffectsWindow : UIAutoRotatingWindow {
	unsigned long _activeEffectsCount;	// 136 = 0x88
	BOOL _inDealloc;	// 140 = 0x8c
}
+ (void)_releaseSharedInstances;	// 0x33145745
+ (id)sharedTextEffectsWindow;	// 0x32f3acf1
+ (id)sharedTextEffectsWindowAboveStatusBar;	// 0x33145655
- (id)initWithFrame:(CGRect)frame;	// 0x32f3adf5
- (void)_didRemoveSubview:(id)subview;	// 0x32f9a945
- (BOOL)_disableViewScaling;	// 0x33145531
- (void)bringSubviewToFront:(id)front;	// 0x33145561
- (void)dealloc;	// 0x331454f1
- (void)delayHideWindow;	// 0x33145535
- (void)didAddSubview:(id)subview;	// 0x32f3e815
- (BOOL)isInternalWindow;	// 0x32f4905d
- (void)matchDeviceOrientation;	// 0x32f3af0d
- (void)resetTransform;	// 0x33145605
- (void)sendSubviewToBack:(id)back;	// 0x33145565
- (void)sortSubviews;	// 0x32f3e8a9
- (void)updateForOrientation:(int)orientation;	// 0x32f3af49
- (void)updateForOrientation:(int)orientation forceResetTransform:(BOOL)transform;	// 0x33145569
- (void)updateSubviewOrdering;	// 0x33145645
@end

