/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITextMagnifierRenderer : UIView {
	int m_autoscrollDirections;	// 84 = 0x54
	int m_magnifierMethod;	// 88 = 0x58
}
@property(assign, nonatomic) int autoscrollDirections;	// G=0x32dd4cd5; S=0x32dd4ce5; @synthesize=m_autoscrollDirections
@property(assign, nonatomic) int magnifierMethod;	// G=0x32dd4cf5; S=0x32dd4d05; @synthesize=m_magnifierMethod
- (id)initWithFrame:(CGRect)frame;	// 0x32c2c2c1
// declared property getter: - (int)autoscrollDirections;	// 0x32dd4cd5
- (void)drawAutoscroller:(CGRect)autoscroller;	// 0x32dd4a81
- (void)drawMagnifier:(CGRect)magnifier;	// 0x32dd4c81
- (void)drawRect:(CGRect)rect;	// 0x32dd4c85
// declared property getter: - (int)magnifierMethod;	// 0x32dd4cf5
// declared property setter: - (void)setAutoscrollDirections:(int)directions;	// 0x32dd4ce5
// declared property setter: - (void)setMagnifierMethod:(int)method;	// 0x32dd4d05
@end

