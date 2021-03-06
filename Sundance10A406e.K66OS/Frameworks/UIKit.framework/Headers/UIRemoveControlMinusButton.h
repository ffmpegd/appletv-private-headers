/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIRemoveControlMinusButton : UIControl {
	unsigned _rotated : 1;	// 106 = 0x6a
	unsigned _rotating : 1;	// 106 = 0x6a
	unsigned _hiding : 1;	// 106 = 0x6a
	unsigned _showAsPlus : 1;	// 106 = 0x6a
	unsigned _reserved : 28;	// 106 = 0x6a
	float _verticalOffset;	// 112 = 0x70
}
@property(assign, getter=isHiding) BOOL hiding;	// G=0x30ac9751; S=0x30ac9739; converted property
+ (float)defaultWidth;	// 0x30ac93b1
+ (id)minusImage;	// 0x30ac93fd
+ (id)plusImage;	// 0x30ac9435
- (id)initWithRemoveControl:(id)removeControl;	// 0x30ac946d
- (void)_toggleRotateAnimationDidStop:(id)_toggleRotateAnimation finished:(BOOL)finished;	// 0x30ac9a1d
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x30ac989d
- (void)dealloc;	// 0x30ac96dd
- (void)drawRect:(CGRect)rect;	// 0x30ac9765
// converted property getter: - (BOOL)isHiding;	// 0x30ac9751
- (BOOL)isRotated;	// 0x30ac99f5
- (BOOL)isRotating;	// 0x30ac9a09
// converted property setter: - (void)setHiding:(BOOL)hiding;	// 0x30ac9739
- (void)toggleRotate:(BOOL)rotate;	// 0x30ac98d9
@end

