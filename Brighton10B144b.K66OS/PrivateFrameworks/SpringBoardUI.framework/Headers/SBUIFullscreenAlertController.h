/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIViewController.h> // Unknown library
#import "SpringBoardUI-Structs.h"
#import "NSCopying.h"

@class NSNumber, NSString, NSInvocation;

@interface SBUIFullscreenAlertController : UIViewController <NSCopying> {
	BOOL _shouldAnimateIn;	// 197 = 0xc5
	NSNumber *_animationStartTime;	// 200 = 0xc8
	NSString *_activationContext;	// 204 = 0xcc
	NSInvocation *_pendingDeactivationInvocation;	// 208 = 0xd0
}
@property(retain, nonatomic) NSString *activationContext;	// G=0x35474681; S=0x35474691; @synthesize=_activationContext
@property(retain, nonatomic) NSNumber *animationStartTime;	// G=0x35474661; S=0x35474671; @synthesize=_animationStartTime
@property(retain) NSInvocation *pendingDeactivationInvocation;	// G=0x35474631; S=0x354745f1; converted property
@property(assign, nonatomic) BOOL shouldAnimateIn;	// G=0x35474641; S=0x35474651; @synthesize=_shouldAnimateIn
- (id)init;	// 0x35474189
// declared property getter: - (id)activationContext;	// 0x35474681
- (BOOL)allowStackingOfAlert:(id)alert;	// 0x35474591
- (BOOL)allowSuspension;	// 0x35474295
- (void)animateViewOut;	// 0x3547445d
// declared property getter: - (id)animationStartTime;	// 0x35474661
- (id)copyWithZone:(NSZone *)zone;	// 0x35474579
- (void)dealloc;	// 0x35474501
- (void)didFinishLaunchingFrontmost;	// 0x354745ad
- (void)didReceiveMemoryWarning;	// 0x354744a9
- (BOOL)displaysAboveStatusBar;	// 0x35474299
- (void)finishedAnimatingIn;	// 0x354744a1
- (void)finishedAnimatingOut;	// 0x354744a5
- (void)handleAutoLock;	// 0x354745a9
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;	// 0x354745a5
- (BOOL)handleLockButtonPressed;	// 0x35474595
- (BOOL)handleMenuButtonTap;	// 0x354745a1
- (BOOL)handleVolumeDownButtonPressed;	// 0x3547459d
- (BOOL)handleVolumeUpButtonPressed;	// 0x35474599
- (BOOL)hasTranslucentBackground;	// 0x3547458d
- (BOOL)isSlidingViewController;	// 0x35474291
// converted property getter: - (id)pendingDeactivationInvocation;	// 0x35474631
- (void)requestActivationAnimated:(BOOL)animated animateCurrentDisplayOut:(BOOL)anOut withDelay:(BOOL)delay;	// 0x354741e1
- (void)requestDeactivationAnimated:(BOOL)animated animateOldDisplayInWithStyle:(int)style;	// 0x35474239
// declared property setter: - (void)setActivationContext:(id)context;	// 0x35474691
// declared property setter: - (void)setAnimationStartTime:(id)time;	// 0x35474671
// converted property setter: - (void)setPendingDeactivationInvocation:(id)invocation;	// 0x354745f1
// declared property setter: - (void)setShouldAnimateIn:(BOOL)animateIn;	// 0x35474651
// declared property getter: - (BOOL)shouldAnimateIn;	// 0x35474641
- (void)viewDidLoad;	// 0x354742a1
- (void)viewDidUnload;	// 0x354744d5
- (BOOL)viewIsReadyToBeRemoved;	// 0x35474589
- (void)viewWillAnimateOut;	// 0x3547429d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x354743c9
@end

