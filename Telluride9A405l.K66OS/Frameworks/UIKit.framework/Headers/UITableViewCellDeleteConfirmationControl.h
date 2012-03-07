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
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x32f233d1; S=0x32f233bd; 
+ (CGSize)defaultSizeForTitle:(id)title;	// 0x32dbc729
- (id)initWithTitle:(id)title;	// 0x32dbc5a1
- (void)_confirmationAnimationDidEnd;	// 0x32dbd499
- (id)_interceptEvent:(id)event;	// 0x32dbd531
- (id)_interceptMouseEvent:(GSEventRef)event;	// 0x32f23251
- (void)_setInterceptMouseEvent:(BOOL)event;	// 0x32dbd03d
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32dbd625
- (void)cancelTrackingWithEvent:(id)event;	// 0x32f2338d
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32f2335d
- (CGSize)defaultSize;	// 0x32dbcc39
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32dbd6a1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32f2331d
// declared property getter: - (BOOL)isVisible;	// 0x32f233d1
- (void)layoutSubviews;	// 0x32dbcecd
- (void)removeFromSuperview;	// 0x32dbd819
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x32f233bd
- (void)setVisible:(BOOL)visible animated:(BOOL)animated;	// 0x32dbcd29
@end

