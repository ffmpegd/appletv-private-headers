/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIKit/UIImageView.h>
#import "TelephonyUI-Structs.h"

@class TPBottomLockBar, UIAlphaAnimation;

@interface TPLockKnobView : UIImageView {
	TPBottomLockBar *_track;	// 144 = 0x90
	UIAlphaAnimation *_animation;	// 148 = 0x94
	float _centerDelta;	// 152 = 0x98
	BOOL _tracking;	// 156 = 0x9c
}
@property(readonly, assign, getter=isTracking) BOOL tracking;	// G=0x329a0401; converted property
- (id)initWithImage:(id)image;	// 0x329a0339
- (void)beginTracking:(id)tracking;	// 0x329a04f9
- (void)dealloc;	// 0x329a03d5
// converted property getter: - (BOOL)isTracking;	// 0x329a0401
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x329a0381
- (void)setLockView:(id)view;	// 0x329a03c5
- (BOOL)shouldBeginTracking:(id)tracking;	// 0x329a0411
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x329a0601
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x329a08e1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x329a08cd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x329a063d
@end

