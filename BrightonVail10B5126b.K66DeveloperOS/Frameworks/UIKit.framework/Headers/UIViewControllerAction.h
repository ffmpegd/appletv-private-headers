/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIViewController, NSString;

__attribute__((visibility("hidden")))
@interface UIViewControllerAction : NSObject {
	UIViewController *_viewController;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	int _transition;	// 12 = 0xc
	id _completion;	// 16 = 0x10
	float _curlUpRevealedHeight;	// 20 = 0x14
}
@property(assign, nonatomic, setter=_setCurlUpRevealedHeight:) float _curlUpRevealedHeight;	// G=0x32cec0ed; S=0x32bf8e2d; @synthesize
@property(readonly, assign, nonatomic) BOOL animated;	// G=0x32cec0d1; 
@property(copy, nonatomic) id completion;	// G=0x32bf8e95; S=0x32bce441; @synthesize=_completion
@property(retain, nonatomic) NSString *name;	// G=0x32cec10d; S=0x32bce40d; @synthesize=_name
@property(assign, nonatomic) int transition;	// G=0x32bf8fd5; S=0x32bce41d; @synthesize=_transition
@property(assign, nonatomic) UIViewController *viewController;	// G=0x32cec0fd; S=0x32bce3fd; @synthesize=_viewController
- (id)initWithViewController:(id)viewController name:(id)name transition:(int)transition;	// 0x32bce379
// declared property getter: - (float)_curlUpRevealedHeight;	// 0x32cec0ed
// declared property setter: - (void)_setCurlUpRevealedHeight:(float)height;	// 0x32bf8e2d
// declared property getter: - (BOOL)animated;	// 0x32cec0d1
// declared property getter: - (id)completion;	// 0x32bf8e95
- (void)dealloc;	// 0x32bf8fe9
// declared property getter: - (id)name;	// 0x32cec10d
// declared property setter: - (void)setCompletion:(id)completion;	// 0x32bce441
// declared property setter: - (void)setName:(id)name;	// 0x32bce40d
// declared property setter: - (void)setTransition:(int)transition;	// 0x32bce41d
// declared property setter: - (void)setViewController:(id)controller;	// 0x32bce3fd
// declared property getter: - (int)transition;	// 0x32bf8fd5
// declared property getter: - (id)viewController;	// 0x32cec0fd
@end

