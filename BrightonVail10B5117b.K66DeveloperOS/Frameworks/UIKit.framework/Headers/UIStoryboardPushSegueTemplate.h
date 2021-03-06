/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardPushSegueTemplate : UIStoryboardSegueTemplate {
	int _destinationContainmentContext;	// 24 = 0x18
	int _splitViewControllerIndex;	// 28 = 0x1c
}
@property(assign, nonatomic) int destinationContainmentContext;	// G=0x3305c8a9; S=0x3305c8b9; @synthesize=_destinationContainmentContext
@property(assign, nonatomic) int splitViewControllerIndex;	// G=0x3305c8c9; S=0x3305c8d9; @synthesize=_splitViewControllerIndex
- (id)initWithCoder:(id)coder;	// 0x3305c675
- (id)defaultSegueClassName;	// 0x3305c781
// declared property getter: - (int)destinationContainmentContext;	// 0x3305c8a9
- (void)encodeWithCoder:(id)coder;	// 0x3305c6f9
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x3305c78d
// declared property setter: - (void)setDestinationContainmentContext:(int)context;	// 0x3305c8b9
// declared property setter: - (void)setSplitViewControllerIndex:(int)index;	// 0x3305c8d9
// declared property getter: - (int)splitViewControllerIndex;	// 0x3305c8c9
@end

