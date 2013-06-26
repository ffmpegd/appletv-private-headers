/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class UIInputViewAnimationStyle;

__attribute__((visibility("hidden")))
@interface UIKeyboardRotationState : NSObject {
	int _state;	// 4 = 0x4
	BOOL _requiresNewState;	// 8 = 0x8
	int _postRotationState;	// 12 = 0xc
	UIInputViewAnimationStyle *_animationStyle;	// 16 = 0x10
	int _targetOrientation;	// 20 = 0x14
}
@property(retain, nonatomic) UIInputViewAnimationStyle *animationStyle;	// G=0x2f7a37ed; S=0x2f7a37fd; @synthesize=_animationStyle
@property(assign, nonatomic) int postRotationState;	// G=0x2f7a37cd; S=0x2f7a37dd; @synthesize=_postRotationState
@property(assign, nonatomic) BOOL requiresNewState;	// G=0x2f7a37ad; S=0x2f7a37bd; @synthesize=_requiresNewState
@property(assign, nonatomic) int state;	// G=0x2f7a378d; S=0x2f7a379d; @synthesize=_state
@property(assign, nonatomic) int targetOrientation;	// G=0x2f7a380d; S=0x2f7a381d; @synthesize=_targetOrientation
+ (id)stateWithState:(int)state targetOrientation:(int)orientation;	// 0x2f7a3675
// declared property getter: - (id)animationStyle;	// 0x2f7a37ed
- (void)dealloc;	// 0x2f7a3711
// declared property getter: - (int)postRotationState;	// 0x2f7a37cd
// declared property getter: - (BOOL)requiresNewState;	// 0x2f7a37ad
// declared property setter: - (void)setAnimationStyle:(id)style;	// 0x2f7a37fd
// declared property setter: - (void)setPostRotationState:(int)state;	// 0x2f7a37dd
- (void)setPostRotationState:(int)state animationStyle:(id)style;	// 0x2f7a3755
// declared property setter: - (void)setRequiresNewState:(BOOL)state;	// 0x2f7a37bd
// declared property setter: - (void)setState:(int)state;	// 0x2f7a379d
// declared property setter: - (void)setTargetOrientation:(int)orientation;	// 0x2f7a381d
// declared property getter: - (int)state;	// 0x2f7a378d
// declared property getter: - (int)targetOrientation;	// 0x2f7a380d
@end
