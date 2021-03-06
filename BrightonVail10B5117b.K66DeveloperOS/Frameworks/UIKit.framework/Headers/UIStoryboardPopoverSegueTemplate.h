/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"

@class UIBarButtonItem, NSArray, UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate {
	unsigned _permittedArrowDirections;	// 24 = 0x18
	NSArray *_passthroughViews;	// 28 = 0x1c
	UIBarButtonItem *_anchorBarButtonItem;	// 32 = 0x20
	UIView *_anchorView;	// 36 = 0x24
}
@property(retain, nonatomic) UIBarButtonItem *anchorBarButtonItem;	// G=0x3302c245; S=0x3302c255; @synthesize=_anchorBarButtonItem
@property(retain, nonatomic) UIView *anchorView;	// G=0x3302c265; S=0x3302c275; @synthesize=_anchorView
@property(copy, nonatomic) NSArray *passthroughViews;	// G=0x3302c221; S=0x3302c235; @synthesize=_passthroughViews
@property(assign, nonatomic) unsigned permittedArrowDirections;	// G=0x3302c201; S=0x3302c211; @synthesize=_permittedArrowDirections
- (id)initWithCoder:(id)coder;	// 0x3302bef1
// declared property getter: - (id)anchorBarButtonItem;	// 0x3302c245
// declared property getter: - (id)anchorView;	// 0x3302c265
- (void)dealloc;	// 0x3302be79
- (id)defaultSegueClassName;	// 0x3302c0b9
- (void)encodeWithCoder:(id)coder;	// 0x3302bff1
// declared property getter: - (id)passthroughViews;	// 0x3302c221
// declared property getter: - (unsigned)permittedArrowDirections;	// 0x3302c201
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x3302c0c5
// declared property setter: - (void)setAnchorBarButtonItem:(id)item;	// 0x3302c255
// declared property setter: - (void)setAnchorView:(id)view;	// 0x3302c275
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x3302c235
// declared property setter: - (void)setPermittedArrowDirections:(unsigned)directions;	// 0x3302c211
@end

