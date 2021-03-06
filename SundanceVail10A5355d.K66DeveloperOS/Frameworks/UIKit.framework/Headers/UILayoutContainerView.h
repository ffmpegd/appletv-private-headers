/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <NSCoding> {
	id _delegate;	// 84 = 0x54
	BOOL _usesRoundedCorners;	// 88 = 0x58
	float _cornerRadius;	// 92 = 0x5c
	BOOL _usesInnerShadow;	// 96 = 0x60
	BOOL _shadowViewsInstalled;	// 97 = 0x61
	UIView *_shadowView;	// 100 = 0x64
}
@property(assign, nonatomic) id delegate;	// G=0x33a32d39; S=0x33a26c71; 
@property(assign, nonatomic) BOOL usesInnerShadow;	// G=0x33c3bf41; S=0x33c3bedd; @synthesize=_usesInnerShadow
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x33c3bf31; S=0x33c3ba5d; @synthesize=_usesRoundedCorners
- (id)initWithCoder:(id)coder;	// 0x33c3b9a1
- (void)_installShadowViews;	// 0x33c3bb6d
- (void)_tearDownShadowViews;	// 0x33aaf341
- (void)addSubview:(id)subview;	// 0x33a2bdb9
- (void)dealloc;	// 0x33aaf301
// declared property getter: - (id)delegate;	// 0x33a32d39
- (void)encodeWithCoder:(id)coder;	// 0x33c3ba01
- (void)layoutSubviews;	// 0x33a32c5d
- (void)setBounds:(CGRect)bounds;	// 0x33ac74cd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33a26c71
- (void)setFrame:(CGRect)frame;	// 0x33a26bdd
// declared property setter: - (void)setUsesInnerShadow:(BOOL)shadow;	// 0x33c3bedd
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x33c3ba5d
// declared property getter: - (BOOL)usesInnerShadow;	// 0x33c3bf41
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x33c3bf31
@end

