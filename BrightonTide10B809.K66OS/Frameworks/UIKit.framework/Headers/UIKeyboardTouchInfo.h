/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UITouch, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKeyboardTouchInfo : NSObject {
	UITouch *_touch;	// 4 = 0x4
	UIKBTree *_key;	// 8 = 0x8
	UIKBTree *_keyplane;	// 12 = 0xc
	UIKBTree *_slidOffKey;	// 16 = 0x10
	CGPoint _initialPoint;	// 20 = 0x14
	int _stage;	// 28 = 0x1c
}
@property(assign, nonatomic) CGPoint initialPoint;	// G=0x32da0da9; S=0x32c0ba01; @synthesize=_initialPoint
@property(retain, nonatomic) UIKBTree *key;	// G=0x32c0ee61; S=0x32c0c719; @synthesize=_key
@property(retain, nonatomic) UIKBTree *keyplane;	// G=0x32c0ef69; S=0x32c0b9f1; @synthesize=_keyplane
@property(retain, nonatomic) UIKBTree *slidOffKey;	// G=0x32da0d99; S=0x32c12d39; @synthesize=_slidOffKey
@property(assign, nonatomic) int stage;	// G=0x32c0f02d; S=0x32c0b9dd; @synthesize=_stage
@property(retain, nonatomic) UITouch *touch;	// G=0x32c0be61; S=0x32c0b9c9; @synthesize=_touch
- (void)dealloc;	// 0x32c12cb9
// declared property getter: - (CGPoint)initialPoint;	// 0x32da0da9
// declared property getter: - (id)key;	// 0x32c0ee61
// declared property getter: - (id)keyplane;	// 0x32c0ef69
// declared property setter: - (void)setInitialPoint:(CGPoint)point;	// 0x32c0ba01
// declared property setter: - (void)setKey:(id)key;	// 0x32c0c719
// declared property setter: - (void)setKeyplane:(id)keyplane;	// 0x32c0b9f1
// declared property setter: - (void)setSlidOffKey:(id)key;	// 0x32c12d39
// declared property setter: - (void)setStage:(int)stage;	// 0x32c0b9dd
// declared property setter: - (void)setTouch:(id)touch;	// 0x32c0b9c9
// declared property getter: - (id)slidOffKey;	// 0x32da0d99
// declared property getter: - (int)stage;	// 0x32c0f02d
// declared property getter: - (id)touch;	// 0x32c0be61
@end

