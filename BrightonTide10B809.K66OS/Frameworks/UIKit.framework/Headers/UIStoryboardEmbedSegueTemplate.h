/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardEmbedSegueTemplate : UIStoryboardSegueTemplate {
	UIView *_containerView;	// 24 = 0x18
}
@property(retain, nonatomic) UIView *containerView;	// G=0x32f37bc1; S=0x32f37bd1; @synthesize=_containerView
- (id)initWithCoder:(id)coder;	// 0x32f37a9d
// declared property getter: - (id)containerView;	// 0x32f37bc1
- (void)dealloc;	// 0x32f37a51
- (id)defaultSegueClassName;	// 0x32f37b5d
- (void)encodeWithCoder:(id)coder;	// 0x32f37afd
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x32f37b69
// declared property setter: - (void)setContainerView:(id)view;	// 0x32f37bd1
@end
