/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"


__attribute__((visibility("hidden")))
@interface UITableViewCellDeleteConfirmationControl : UIControl {
@private
	BOOL _visible;	// 70 = 0x46
}
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x353623d1; S=0x353623bd; 
+ (CGSize)defaultSizeForTitle:(id)title;	// 0x351fb729
- (id)initWithTitle:(id)title;	// 0x351fb5a1
- (void)_confirmationAnimationDidEnd;	// 0x351fc499
- (id)_interceptEvent:(id)event;	// 0x351fc531
- (id)_interceptMouseEvent:(GSEventRef)event;	// 0x35362251
- (void)_setInterceptMouseEvent:(BOOL)event;	// 0x351fc03d
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x351fc625
- (void)cancelTrackingWithEvent:(id)event;	// 0x3536238d
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3536235d
- (CGSize)defaultSize;	// 0x351fbc39
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x351fc6a1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3536231d
// declared property getter: - (BOOL)isVisible;	// 0x353623d1
- (void)layoutSubviews;	// 0x351fbecd
- (void)removeFromSuperview;	// 0x351fc819
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x353623bd
- (void)setVisible:(BOOL)visible animated:(BOOL)animated;	// 0x351fbd29
@end

