/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "UIPopoverControllerDelegate.h"

@class UIPopoverController, DOMNode;
@protocol UIWebRotatingNodePopoverDelegate;

__attribute__((visibility("hidden")))
@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate> {
@private
	BOOL _isRotating;	// 4 = 0x4
	DOMNode *_node;	// 8 = 0x8
	CGPoint _presentationPoint;	// 12 = 0xc
	UIPopoverController *_popoverController;	// 20 = 0x14
	id<UIWebRotatingNodePopoverDelegate> _dismissDelegate;	// 24 = 0x18
}
@property(assign, nonatomic) id<UIWebRotatingNodePopoverDelegate> dismissDelegate;	// G=0x3046709d; S=0x304670ad; @synthesize=_dismissDelegate
@property(retain, nonatomic) DOMNode *node;	// G=0x30467041; S=0x30467051; @synthesize=_node
@property(retain, nonatomic) UIPopoverController *popoverController;	// G=0x3046708d; S=0x30466cb5; @synthesize=_popoverController
@property(assign, nonatomic) CGPoint presentationPoint;	// G=0x30467061; S=0x30467079; @synthesize=_presentationPoint
- (id)initWithDOMNode:(id)domnode;	// 0x30466ac9
- (void)dealloc;	// 0x30466bbd
- (void)didRotate:(id)rotate;	// 0x30466fe9
// declared property getter: - (id)dismissDelegate;	// 0x3046709d
- (void)dismissPopoverAnimated:(BOOL)animated;	// 0x30466f99
// declared property getter: - (id)node;	// 0x30467041
- (unsigned)popoverArrowDirections;	// 0x30466d29
// declared property getter: - (id)popoverController;	// 0x3046708d
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x3046700d
- (void)presentPopoverAnimated:(BOOL)animated;	// 0x30466d2d
// declared property getter: - (CGPoint)presentationPoint;	// 0x30467061
// declared property setter: - (void)setDismissDelegate:(id)delegate;	// 0x304670ad
// declared property setter: - (void)setNode:(id)node;	// 0x30467051
// declared property setter: - (void)setPopoverController:(id)controller;	// 0x30466cb5
// declared property setter: - (void)setPresentationPoint:(CGPoint)point;	// 0x30467079
- (void)willRotate:(id)rotate;	// 0x30466fb9
@end
