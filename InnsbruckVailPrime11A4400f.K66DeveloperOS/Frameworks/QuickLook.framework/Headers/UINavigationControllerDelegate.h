/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "NSObject.h"


@protocol UINavigationControllerDelegate <NSObject>
@optional
- (id)navigationController:(id)controller animationControllerForOperation:(int)operation fromViewController:(id)viewController toViewController:(id)viewController4;
- (void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
- (id)navigationController:(id)controller interactionControllerForAnimationController:(id)animationController;
- (void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
- (int)navigationControllerPreferredInterfaceOrientationForPresentation:(id)presentation;
- (unsigned)navigationControllerSupportedInterfaceOrientations:(id)orientations;
@end
