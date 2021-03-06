/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UIRoundedCornerView;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <NSCoding> {
@private
	id _delegate;	// 44 = 0x2c
	BOOL _usesRoundedCorners;	// 48 = 0x30
	float _cornerRadius;	// 52 = 0x34
	BOOL _fastMode;	// 56 = 0x38
	UIRoundedCornerView *_roundedCornerView;	// 60 = 0x3c
	BOOL _usesInnerShadow;	// 64 = 0x40
	BOOL _shadowViewsInstalled;	// 65 = 0x41
	UIView *_shadowView;	// 68 = 0x44
}
@property(assign, nonatomic) id delegate;	// G=0x305d2b69; S=0x305c5299; 
@property(assign, nonatomic) BOOL useFastMode;	// G=0x30788d6d; S=0x30788e0d; @synthesize=_fastMode
@property(assign, nonatomic) BOOL usesInnerShadow;	// G=0x30788d5d; S=0x30788e41; @synthesize=_usesInnerShadow
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x30788d7d; S=0x30788e91; @synthesize=_usesRoundedCorners
- (id)initWithCoder:(id)coder;	// 0x30788fe5
- (void)_beginFastMode;	// 0x3078903d
- (void)_endFastMode;	// 0x30788d8d
- (void)_installShadowViews;	// 0x307891f1
- (void)_tearDownShadowViews;	// 0x3060e6e5
- (void)addSubview:(id)subview;	// 0x305c76e1
- (void)dealloc;	// 0x3060e68d
// declared property getter: - (id)delegate;	// 0x305d2b69
- (void)encodeWithCoder:(id)coder;	// 0x30788f91
- (void)layoutSubviews;	// 0x305d2a99
- (void)setBounds:(CGRect)bounds;	// 0x3063ba19
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x305c5299
- (void)setFrame:(CGRect)frame;	// 0x305c51f9
// declared property setter: - (void)setUseFastMode:(BOOL)mode;	// 0x30788e0d
// declared property setter: - (void)setUsesInnerShadow:(BOOL)shadow;	// 0x30788e41
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x30788e91
// declared property getter: - (BOOL)useFastMode;	// 0x30788d6d
// declared property getter: - (BOOL)usesInnerShadow;	// 0x30788d5d
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x30788d7d
@end

