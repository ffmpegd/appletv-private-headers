/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library


@interface UIViewController (MPMoviePlayerViewController)
- (void)dismissMoviePlayerViewControllerAnimated;	// 0x34e13f61
- (void)presentMoviePlayerViewControllerAnimated:(id)animated;	// 0x34e13f09
@end

@interface UIViewController (MPAdditions)
+ (void)_beginAppearanceTransitionFromViewController:(id)viewController toViewController:(id)viewController2 animated:(BOOL)animated;	// 0x34e81d61
+ (void)_endAppearanceTransitionFromViewController:(id)viewController toViewController:(id)viewController2;	// 0x34e81e59
- (void)_addChildViewAndViewController:(id)controller;	// 0x34e81cad
- (void)_addChildViewAndViewController:(id)controller asSubviewOfView:(id)view;	// 0x34e81c89
- (void)_addChildViewAndViewController:(id)controller asSubviewOfView:(id)view addSubviewBlock:(id)block;	// 0x34e81b65
- (BOOL)_hasAncestorViewController:(id)controller;	// 0x34e81b31
- (void)_removeFromParentViewAndViewController;	// 0x34e81ce9
@end

