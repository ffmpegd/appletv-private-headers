/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameController.framework/GameController
 */

#import "GameController-Structs.h"
#import "GCControllerDirectionPad.h"

@class _GCControllerAxisInput;

__attribute__((visibility("hidden")))
@interface _GCControllerDirectionPad : GCControllerDirectionPad {
	id _valueChangedHandler;	// 4 = 0x4
	_GCControllerAxisInput *_xAxis;	// 8 = 0x8
	_GCControllerAxisInput *_yAxis;	// 12 = 0xc
}
@property(retain) id valueChangedHandler;	// G=0x2dd8506d; S=0x2dd85081; converted property
@property(readonly, retain) _GCControllerAxisInput *xAxis;	// G=0x2dd85091; converted property
@property(readonly, retain) _GCControllerAxisInput *yAxis;	// G=0x2dd850a5; converted property
- (id)initWithFlippedY:(BOOL)flippedY digital:(BOOL)digital;	// 0x2dd84d75
- (void).cxx_destruct;	// 0x2dd850b9
- (void)_fireValueChanged;	// 0x2dd84e31
- (id)description;	// 0x2dd84fd5
- (id)down;	// 0x2dd8500d
- (id)left;	// 0x2dd8502d
- (id)right;	// 0x2dd8504d
- (BOOL)setHIDValue:(IOHIDValueRef)value;	// 0x2dd84f09
// converted property setter: - (void)setValueChangedHandler:(id)handler;	// 0x2dd85081
- (id)up;	// 0x2dd84fed
// converted property getter: - (id)valueChangedHandler;	// 0x2dd8506d
// converted property getter: - (id)xAxis;	// 0x2dd85091
// converted property getter: - (id)yAxis;	// 0x2dd850a5
@end
