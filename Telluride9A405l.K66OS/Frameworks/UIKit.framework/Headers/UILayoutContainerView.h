/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "_UIViewFastModeSupport.h"
#import "UIView.h"

@class UIRoundedCornerView;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <NSCoding, _UIViewFastModeSupport> {
@private
	id _delegate;	// 48 = 0x30
	BOOL _usesRoundedCorners;	// 52 = 0x34
	float _cornerRadius;	// 56 = 0x38
	BOOL _fastMode;	// 60 = 0x3c
	UIRoundedCornerView *_roundedCornerView;	// 64 = 0x40
	BOOL _usesInnerShadow;	// 68 = 0x44
	BOOL _shadowViewsInstalled;	// 69 = 0x45
	UIView *_shadowView;	// 72 = 0x48
}
@property(assign, nonatomic) id delegate;	// G=0x32cbae39; S=0x32cafba1; 
@property(assign, nonatomic) BOOL useFastMode;	// G=0x32edb65d; S=0x32edb44d; @synthesize=_fastMode
@property(assign, nonatomic) BOOL usesInnerShadow;	// G=0x32edb66d; S=0x32edb3f9; @synthesize=_usesInnerShadow
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x32edb64d; S=0x32edb011; @synthesize=_usesRoundedCorners
- (id)initWithCoder:(id)coder;	// 0x32edaf51
- (void)_beginFastMode;	// 0x32edb495
- (void)_endFastMode;	// 0x32edb5c1
- (void)_installShadowViews;	// 0x32edb119
- (void)_tearDownShadowViews;	// 0x32d41a95
- (void)addSubview:(id)subview;	// 0x32cb43a5
- (void)dealloc;	// 0x32d41a35
// declared property getter: - (id)delegate;	// 0x32cbae39
- (void)encodeWithCoder:(id)coder;	// 0x32edafb1
- (void)layoutSubviews;	// 0x32cbad61
- (void)setBounds:(CGRect)bounds;	// 0x32d5adc1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32cafba1
- (void)setFrame:(CGRect)frame;	// 0x32cafb0d
// declared property setter: - (void)setUseFastMode:(BOOL)mode;	// 0x32edb44d
// declared property setter: - (void)setUsesInnerShadow:(BOOL)shadow;	// 0x32edb3f9
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x32edb011
// declared property getter: - (BOOL)useFastMode;	// 0x32edb65d
// declared property getter: - (BOOL)usesInnerShadow;	// 0x32edb66d
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x32edb64d
@end

