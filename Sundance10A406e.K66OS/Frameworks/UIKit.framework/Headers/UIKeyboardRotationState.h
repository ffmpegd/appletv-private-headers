/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIInputViewAnimationStyle;

__attribute__((visibility("hidden")))
@interface UIKeyboardRotationState : NSObject {
	int _state;	// 4 = 0x4
	BOOL _requiresNewState;	// 8 = 0x8
	int _postRotationState;	// 12 = 0xc
	UIInputViewAnimationStyle *_animationStyle;	// 16 = 0x10
	int _targetOrientation;	// 20 = 0x14
}
@property(retain, nonatomic) UIInputViewAnimationStyle *animationStyle;	// G=0x30be4c19; S=0x30be4c29; @synthesize=_animationStyle
@property(assign, nonatomic) int postRotationState;	// G=0x30be4bf9; S=0x30be4c09; @synthesize=_postRotationState
@property(assign, nonatomic) BOOL requiresNewState;	// G=0x30be4bd9; S=0x30be4be9; @synthesize=_requiresNewState
@property(assign, nonatomic) int state;	// G=0x30be4bb9; S=0x30be4bc9; @synthesize=_state
@property(assign, nonatomic) int targetOrientation;	// G=0x30be4c39; S=0x30be4c49; @synthesize=_targetOrientation
+ (id)stateWithState:(int)state targetOrientation:(int)orientation;	// 0x30be4aa1
// declared property getter: - (id)animationStyle;	// 0x30be4c19
- (void)dealloc;	// 0x30be4b3d
// declared property getter: - (int)postRotationState;	// 0x30be4bf9
// declared property getter: - (BOOL)requiresNewState;	// 0x30be4bd9
// declared property setter: - (void)setAnimationStyle:(id)style;	// 0x30be4c29
// declared property setter: - (void)setPostRotationState:(int)state;	// 0x30be4c09
- (void)setPostRotationState:(int)state animationStyle:(id)style;	// 0x30be4b81
// declared property setter: - (void)setRequiresNewState:(BOOL)state;	// 0x30be4be9
// declared property setter: - (void)setState:(int)state;	// 0x30be4bc9
// declared property setter: - (void)setTargetOrientation:(int)orientation;	// 0x30be4c49
// declared property getter: - (int)state;	// 0x30be4bb9
// declared property getter: - (int)targetOrientation;	// 0x30be4c39
@end
