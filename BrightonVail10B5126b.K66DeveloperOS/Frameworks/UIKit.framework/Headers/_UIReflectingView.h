/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


@interface _UIReflectingView : UIView {
	UIView *_containerView;	// 84 = 0x54
	UIView *_gradientView;	// 88 = 0x58
	float _reflectionAlpha;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) UIView *containerView;	// G=0x32c5cd9d; @synthesize=_containerView
@property(assign, nonatomic) float reflectionAlpha;	// G=0x32c5cb9d; S=0x32c5c9c5; 
@property(assign, nonatomic) float reflectionFraction;	// G=0x32e6ac59; S=0x32c5cbad; 
- (id)initWithFrame:(CGRect)frame;	// 0x32c5c4bd
- (id)_gradientLayer;	// 0x32c5c9a5
- (void)_updateGradientColors;	// 0x32c5ca6d
// declared property getter: - (id)containerView;	// 0x32c5cd9d
- (void)layoutSubviews;	// 0x32c5c71d
// declared property getter: - (float)reflectionAlpha;	// 0x32c5cb9d
// declared property getter: - (float)reflectionFraction;	// 0x32e6ac59
- (void)setBackgroundColor:(id)color;	// 0x32c5cc55
- (void)setFrame:(CGRect)frame;	// 0x32c5c6c1
// declared property setter: - (void)setReflectionAlpha:(float)alpha;	// 0x32c5c9c5
// declared property setter: - (void)setReflectionFraction:(float)fraction;	// 0x32c5cbad
@end
