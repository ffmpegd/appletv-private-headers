/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPopoverController.h"

@protocol _UIViewServiceDummyPopoverControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewServiceDummyPopoverController : UIPopoverController {
	id<_UIViewServiceDummyPopoverControllerDelegate> _dummyPopoverControllerDelegate;	// 200 = 0xc8
}
@property(retain, nonatomic) id<_UIViewServiceDummyPopoverControllerDelegate> dummyPopoverControllerDelegate;	// G=0x30cae7f9; S=0x30cae809; @synthesize=_dummyPopoverControllerDelegate
+ (Class)_popoverViewClass;	// 0x30cae695
- (BOOL)_attemptsToAvoidKeyboard;	// 0x30cae7c1
- (void)_popoverView:(id)view didSetUseToolbarShine:(BOOL)shine;	// 0x30cae6b1
- (void)_super_setPopoverContentSize:(CGSize)size;	// 0x30cae7c5
// declared property getter: - (id)dummyPopoverControllerDelegate;	// 0x30cae7f9
// declared property setter: - (void)setDummyPopoverControllerDelegate:(id)delegate;	// 0x30cae809
- (void)setPopoverContentSize:(CGSize)size animated:(BOOL)animated;	// 0x30cae72d
@end
