/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomLockBar.h"
#import "TPBottomGrabberBar.h"

@class UIImage, NSArray;

@interface TPBottomGrabberLockBar : TPBottomLockBar <TPBottomGrabberBar> {
	UIView *_grabberView;	// 152 = 0x98
	UIImage *_grabberImage;	// 156 = 0x9c
	NSArray *_grabberGestureRecognizers;	// 160 = 0xa0
}
@property(retain, nonatomic) NSArray *grabberGestureRecognizers;	// G=0x3661fc4d; S=0x3661fa8d; @synthesize=_grabberGestureRecognizers
@property(retain, nonatomic) UIImage *grabberImage;	// G=0x3661fc29; S=0x3661fa35; @synthesize=_grabberImage
@property(readonly, assign) UIView *grabberView;	// G=0x3661fc39; @synthesize=_grabberView
- (void)animateGrabberOutWithCompletion:(id)completion;	// 0x3661f9b9
- (void)dealloc;	// 0x3661f5a9
// declared property getter: - (id)grabberGestureRecognizers;	// 0x3661fc4d
// declared property getter: - (id)grabberImage;	// 0x3661fc29
// declared property getter: - (id)grabberView;	// 0x3661fc39
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3661f8fd
- (void)layoutSubviews;	// 0x3661f621
// declared property setter: - (void)setGrabberGestureRecognizers:(id)recognizers;	// 0x3661fa8d
// declared property setter: - (void)setGrabberImage:(id)image;	// 0x3661fa35
- (void)setSuppressDrawingBackground:(BOOL)background;	// 0x3661fbcd
@end
