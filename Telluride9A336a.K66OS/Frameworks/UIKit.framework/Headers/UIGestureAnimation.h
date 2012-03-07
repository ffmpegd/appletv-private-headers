/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAnimation.h"


__attribute__((visibility("hidden")))
@interface UIGestureAnimation : UIAnimation {
@private
	SEL _progressSelector;	// 44 = 0x2c
	int _gestureType;	// 48 = 0x30
}
@property(readonly, assign) int gestureType;	// G=0x352b7c99; converted property
- (id)initWithTarget:(id)target progressSelector:(SEL)selector gestureType:(int)type;	// 0x352b7bed
// converted property getter: - (int)gestureType;	// 0x352b7c99
- (void)setProgress:(float)progress;	// 0x352b7c3d
@end

