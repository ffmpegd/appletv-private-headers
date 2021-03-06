/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIRemoveControlMinusButton.h"


__attribute__((visibility("hidden")))
@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton {
@private
	unsigned _isHighlighted : 1;	// 80 = 0x50
	unsigned _isSelected : 1;	// 80 = 0x50
}
@property(assign, getter=isHiding) BOOL hiding;	// G=0x35868cc1; S=0x35868cc5; converted property
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x35868e91; S=0x35868e69; converted property
+ (float)defaultWidth;	// 0x35868b79
+ (id)minusCenterImage;	// 0x35868bb5
+ (id)minusImage;	// 0x35868b95
+ (id)plusImage;	// 0x35868ba5
- (id)initWithRemoveControl:(id)removeControl;	// 0x35868bb9
- (void)drawRect:(CGRect)rect;	// 0x35868cc9
// converted property getter: - (BOOL)isHiding;	// 0x35868cc1
// converted property getter: - (BOOL)isHighlighted;	// 0x35868e91
- (BOOL)isRotated;	// 0x35868cb9
- (BOOL)isRotating;	// 0x35868cbd
// converted property setter: - (void)setHiding:(BOOL)hiding;	// 0x35868cc5
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x35868e69
- (void)setSelected:(BOOL)selected;	// 0x35868ea5
- (void)setSelected:(BOOL)selected highlighted:(BOOL)highlighted;	// 0x35868e05
- (void)toggleRotate:(BOOL)rotate;	// 0x35868cb5
@end

