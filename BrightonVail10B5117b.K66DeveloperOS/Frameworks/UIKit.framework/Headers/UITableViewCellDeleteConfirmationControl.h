/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UITableViewCellDeleteConfirmationGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UITableViewCellDeleteConfirmationControl : UIControl {
	BOOL _visible;	// 106 = 0x6a
	UITableViewCellDeleteConfirmationGestureRecognizer *_deleteConfirmationGesture;	// 108 = 0x6c
}
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x32f46f21; S=0x32e52bc5; 
+ (CGSize)defaultSizeForTitle:(id)title;	// 0x32e51cdd
- (id)initWithTitle:(id)title;	// 0x32e51ad1
- (void)_confirmationAnimationDidEnd;	// 0x32e528d5
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32e52979
- (void)cancelDeleteConfirmationWithGesture:(id)gesture;	// 0x32f46e51
- (void)cancelTrackingWithEvent:(id)event;	// 0x32f46eed
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32f46eb9
- (void)dealloc;	// 0x32f46db9
- (CGSize)defaultSize;	// 0x32e52209
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32e529f9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32e52925
// declared property getter: - (BOOL)isVisible;	// 0x32f46f21
- (void)layoutSubviews;	// 0x32e52529
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x32e52bc5
- (void)setVisible:(BOOL)visible animated:(BOOL)animated;	// 0x32e522f9
- (void)touchUpInside:(id)inside;	// 0x32f46e29
- (void)touchUpOutside:(id)outside;	// 0x32f46e3d
@end

