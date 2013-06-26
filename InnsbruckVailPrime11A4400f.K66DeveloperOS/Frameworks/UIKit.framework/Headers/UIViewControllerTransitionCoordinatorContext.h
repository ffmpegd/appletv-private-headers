/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"


@protocol UIViewControllerTransitionCoordinatorContext <NSObject>
- (int)completionCurve;
- (float)completionVelocity;
- (id)containerView;
- (BOOL)initiallyInteractive;
- (BOOL)isAnimated;
- (BOOL)isCancelled;
- (BOOL)isInteractive;
- (float)percentComplete;
- (int)presentationStyle;
- (double)transitionDuration;
- (id)viewControllerForKey:(id)key;
@end
