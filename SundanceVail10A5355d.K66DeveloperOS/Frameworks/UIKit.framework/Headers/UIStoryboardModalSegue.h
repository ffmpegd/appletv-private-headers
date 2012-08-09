/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegue.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardModalSegue : UIStoryboardSegue {
	BOOL _useDefaultModalPresentationStyle;	// 20 = 0x14
	BOOL _useDefaultModalTransitionStyle;	// 21 = 0x15
	int _modalPresentationStyle;	// 24 = 0x18
	int _modalTransitionStyle;	// 28 = 0x1c
	BOOL _animates;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL animates;	// G=0x33d6ae5d; S=0x33d6ae6d; @synthesize=_animates
@property(assign, nonatomic) int modalPresentationStyle;	// G=0x33d6ae1d; S=0x33d6ae2d; @synthesize=_modalPresentationStyle
@property(assign, nonatomic) int modalTransitionStyle;	// G=0x33d6ae3d; S=0x33d6ae4d; @synthesize=_modalTransitionStyle
@property(assign, nonatomic) BOOL useDefaultModalPresentationStyle;	// G=0x33d6addd; S=0x33d6aded; @synthesize=_useDefaultModalPresentationStyle
@property(assign, nonatomic) BOOL useDefaultModalTransitionStyle;	// G=0x33d6adfd; S=0x33d6ae0d; @synthesize=_useDefaultModalTransitionStyle
// declared property getter: - (BOOL)animates;	// 0x33d6ae5d
// declared property getter: - (int)modalPresentationStyle;	// 0x33d6ae1d
// declared property getter: - (int)modalTransitionStyle;	// 0x33d6ae3d
- (void)perform;	// 0x33d6acdd
// declared property setter: - (void)setAnimates:(BOOL)animates;	// 0x33d6ae6d
// declared property setter: - (void)setModalPresentationStyle:(int)style;	// 0x33d6ae2d
// declared property setter: - (void)setModalTransitionStyle:(int)style;	// 0x33d6ae4d
// declared property setter: - (void)setUseDefaultModalPresentationStyle:(BOOL)style;	// 0x33d6aded
// declared property setter: - (void)setUseDefaultModalTransitionStyle:(BOOL)style;	// 0x33d6ae0d
// declared property getter: - (BOOL)useDefaultModalPresentationStyle;	// 0x33d6addd
// declared property getter: - (BOOL)useDefaultModalTransitionStyle;	// 0x33d6adfd
@end
