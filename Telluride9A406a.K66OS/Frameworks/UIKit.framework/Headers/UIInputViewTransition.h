/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIInputViewAnimationStyle, UIInputViewSet;

__attribute__((visibility("hidden")))
@interface UIInputViewTransition : NSObject {
@private
	UIInputViewSet *oldSet;	// 4 = 0x4
	UIInputViewSet *newSet;	// 8 = 0x8
	UIInputViewAnimationStyle *animationStyle;	// 12 = 0xc
	BOOL cancelled;	// 16 = 0x10
	int animationState;	// 20 = 0x14
	double animationStartTime;	// 24 = 0x18
	BOOL skipNotifications;	// 32 = 0x20
	BOOL skipFencing;	// 33 = 0x21
	CGRect beginFrame;	// 36 = 0x24
	CGRect endFrame;	// 52 = 0x34
	CGRect beginFrameScreen;	// 68 = 0x44
	CGRect endFrameScreen;	// 84 = 0x54
	CGRect beginFloatingFrame;	// 100 = 0x64
	CGRect endFloatingFrame;	// 116 = 0x74
	CGRect beginFloatingFrameScreen;	// 132 = 0x84
	CGRect endFloatingFrameScreen;	// 148 = 0x94
}
@property(assign, nonatomic) double animationStartTime;	// G=0x359906d5; S=0x356fa6d5; @synthesize
@property(assign, nonatomic) int animationState;	// G=0x356f7b75; S=0x356f6ae1; @synthesize
@property(retain, nonatomic) UIInputViewAnimationStyle *animationStyle;	// G=0x356f6c21; S=0x356f6b59; @synthesize
@property(assign, nonatomic) CGRect beginFloatingFrame;	// G=0x356f7539; S=0x3599071d; @synthesize
@property(assign, nonatomic) CGRect beginFloatingFrameScreen;	// G=0x35990755; S=0x356f74dd; @synthesize
@property(assign, nonatomic) CGRect beginFrame;	// G=0x356f745d; S=0x356f6b7d; @synthesize
@property(assign, nonatomic) CGRect beginFrameScreen;	// G=0x356f7515; S=0x356f74a5; @synthesize
@property(readonly, assign, nonatomic) int beginState;	// G=0x35990419; 
@property(assign, nonatomic) BOOL cancelled;	// G=0x356fa6e9; S=0x357ea2ad; @synthesize
@property(readonly, assign, nonatomic) CGRect deprecatedBounds;	// G=0x356f84cd; 
@property(readonly, assign, nonatomic) CGPoint deprecatedCenterBegin;	// G=0x356f8425; 
@property(readonly, assign, nonatomic) CGPoint deprecatedCenterEnd;	// G=0x356f85a1; 
@property(assign, nonatomic) CGRect endFloatingFrame;	// G=0x356f7581; S=0x35990739; @synthesize
@property(assign, nonatomic) CGRect endFloatingFrameScreen;	// G=0x35990779; S=0x356f74f9; @synthesize
@property(assign, nonatomic) CGRect endFrame;	// G=0x356f7481; S=0x356f6b99; @synthesize
@property(assign, nonatomic) CGRect endFrameScreen;	// G=0x356f755d; S=0x356f74c1; @synthesize
@property(readonly, assign, nonatomic) int endState;	// G=0x356f7aa9; 
@property(retain) UIInputViewSet *newSet;	// G=0x356f6be9; S=0x356f6b15; converted property
@property(retain, nonatomic) UIInputViewSet *oldSet;	// G=0x356f6bb5; S=0x356f6af1; @synthesize
@property(assign, nonatomic) BOOL skipFencing;	// G=0x359906fd; S=0x3599070d; @synthesize
@property(assign, nonatomic) BOOL skipNotifications;	// G=0x356f8121; S=0x359906ed; @synthesize
@property(readonly, assign, nonatomic) int transitioningState;	// G=0x356f7b85; 
// declared property getter: - (double)animationStartTime;	// 0x359906d5
// declared property getter: - (int)animationState;	// 0x356f7b75
// declared property getter: - (id)animationStyle;	// 0x356f6c21
// declared property getter: - (CGRect)beginFloatingFrame;	// 0x356f7539
// declared property getter: - (CGRect)beginFloatingFrameScreen;	// 0x35990755
// declared property getter: - (CGRect)beginFrame;	// 0x356f745d
// declared property getter: - (CGRect)beginFrameScreen;	// 0x356f7515
// declared property getter: - (int)beginState;	// 0x35990419
- (BOOL)canAnimate;	// 0x357534f5
// declared property getter: - (BOOL)cancelled;	// 0x356fa6e9
- (void)dealloc;	// 0x356fe6a5
// declared property getter: - (CGRect)deprecatedBounds;	// 0x356f84cd
// declared property getter: - (CGPoint)deprecatedCenterBegin;	// 0x356f8425
// declared property getter: - (CGPoint)deprecatedCenterEnd;	// 0x356f85a1
- (id)description;	// 0x359904c9
// declared property getter: - (CGRect)endFloatingFrame;	// 0x356f7581
// declared property getter: - (CGRect)endFloatingFrameScreen;	// 0x35990779
// declared property getter: - (CGRect)endFrame;	// 0x356f7481
// declared property getter: - (CGRect)endFrameScreen;	// 0x356f755d
// declared property getter: - (int)endState;	// 0x356f7aa9
- (BOOL)fadeAccessoryView;	// 0x356f877d
- (BOOL)isAlmostDone;	// 0x357ea1f5
- (BOOL)isOnScreen;	// 0x35990489
// converted property getter: - (id)newSet;	// 0x356f6be9
// declared property getter: - (id)oldSet;	// 0x356f6bb5
- (void)postNotificationsForTransitionEnd;	// 0x356facd1
- (void)postNotificationsForTransitionStart;	// 0x356f7dc5
- (BOOL)requiresAutomaticAppearanceEnabled;	// 0x357edba9
// declared property setter: - (void)setAnimationStartTime:(double)time;	// 0x356fa6d5
// declared property setter: - (void)setAnimationState:(int)state;	// 0x356f6ae1
// declared property setter: - (void)setAnimationStyle:(id)style;	// 0x356f6b59
// declared property setter: - (void)setBeginFloatingFrame:(CGRect)frame;	// 0x3599071d
// declared property setter: - (void)setBeginFloatingFrameScreen:(CGRect)screen;	// 0x356f74dd
// declared property setter: - (void)setBeginFrame:(CGRect)frame;	// 0x356f6b7d
// declared property setter: - (void)setBeginFrameScreen:(CGRect)screen;	// 0x356f74a5
// declared property setter: - (void)setCancelled:(BOOL)cancelled;	// 0x357ea2ad
// declared property setter: - (void)setEndFloatingFrame:(CGRect)frame;	// 0x35990739
// declared property setter: - (void)setEndFloatingFrameScreen:(CGRect)screen;	// 0x356f74f9
// declared property setter: - (void)setEndFrame:(CGRect)frame;	// 0x356f6b99
// declared property setter: - (void)setEndFrameScreen:(CGRect)screen;	// 0x356f74c1
// converted property setter: - (void)setNewSet:(id)set;	// 0x356f6b15
// declared property setter: - (void)setOldSet:(id)set;	// 0x356f6af1
// declared property setter: - (void)setSkipFencing:(BOOL)fencing;	// 0x3599070d
// declared property setter: - (void)setSkipNotifications:(BOOL)notifications;	// 0x359906ed
- (BOOL)shouldCompleteOnSuspend;	// 0x35990485
// declared property getter: - (BOOL)skipFencing;	// 0x359906fd
// declared property getter: - (BOOL)skipNotifications;	// 0x356f8121
- (BOOL)subsumesTransition:(id)transition;	// 0x357cc099
// declared property getter: - (int)transitioningState;	// 0x356f7b85
- (id)userInfoForTransition;	// 0x356f8131
@end
