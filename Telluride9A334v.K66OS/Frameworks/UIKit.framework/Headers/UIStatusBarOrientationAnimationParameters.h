/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStatusBarAnimationParameters.h"


@interface UIStatusBarOrientationAnimationParameters : UIStatusBarAnimationParameters {
	int _orientationAnimation;	// 24 = 0x18
	BOOL _notifySpringBoardAndFence;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL notifySpringBoardAndFence;	// G=0x301abc7d; S=0x301abc5d; @synthesize=_notifySpringBoardAndFence
@property(assign, nonatomic) int orientationAnimation;	// G=0x301abc6d; S=0x301abc4d; @synthesize=_orientationAnimation
- (id)initWithDefaultParameters;	// 0x301abbb5
// declared property getter: - (BOOL)notifySpringBoardAndFence;	// 0x301abc7d
// declared property getter: - (int)orientationAnimation;	// 0x301abc6d
// declared property setter: - (void)setNotifySpringBoardAndFence:(BOOL)fence;	// 0x301abc5d
// declared property setter: - (void)setOrientationAnimation:(int)animation;	// 0x301abc4d
@end

