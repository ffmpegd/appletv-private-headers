/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"


__attribute__((visibility("hidden")))
@interface UIRemoveControlMinusButton : UIControl {
@private
	unsigned _rotated : 1;	// 70 = 0x46
	unsigned _rotating : 1;	// 70 = 0x46
	unsigned _hiding : 1;	// 70 = 0x46
	unsigned _showAsPlus : 1;	// 70 = 0x46
	unsigned _reserved : 28;	// 70 = 0x46
	float _verticalOffset;	// 76 = 0x4c
}
@property(assign, getter=isHiding) BOOL hiding;	// G=0x33b6f89d; S=0x33b6f885; converted property
+ (float)defaultWidth;	// 0x33aa9e2d
+ (id)minusImage;	// 0x33aa9e85
+ (id)plusImage;	// 0x33b6f579
- (id)initWithRemoveControl:(id)removeControl;	// 0x33b6f5b1
- (void)_toggleRotateAnimationDidStop:(id)_toggleRotateAnimation finished:(BOOL)finished;	// 0x33b6fb61
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x33b6f9e1
- (void)dealloc;	// 0x33b6f829
- (void)drawRect:(CGRect)rect;	// 0x33b6f8b1
// converted property getter: - (BOOL)isHiding;	// 0x33b6f89d
- (BOOL)isRotated;	// 0x33b6fb39
- (BOOL)isRotating;	// 0x33b6fb4d
// converted property setter: - (void)setHiding:(BOOL)hiding;	// 0x33b6f885
- (void)toggleRotate:(BOOL)rotate;	// 0x33b6fa1d
@end

