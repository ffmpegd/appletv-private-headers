/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


@interface UIPopoverBackgroundView : UIView {
}
@property(assign, nonatomic) unsigned arrowDirection;	// G=0x31fb9145; S=0x31fb9155; 
@property(assign, nonatomic) float arrowOffset;	// G=0x31fb90b9; S=0x31fb913d; 
+ (float)arrowBase;	// 0x31fb9171
+ (float)arrowHeight;	// 0x31fb915d
+ (UIEdgeInsets)contentViewInsets;	// 0x31fb9185
+ (BOOL)wantsDefaultContentAppearance;	// 0x31fb9205
- (CGRect)_backgroundContentViewFrame;	// 0x31fb9795
- (CGRect)_contentViewFrame;	// 0x31fb96ed
- (UIEdgeInsets)_contentViewInsets;	// 0x31fb91a1
- (UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned)arrowDirection;	// 0x31fb91e1
- (UIEdgeInsets)_shadowInsets;	// 0x31fb93e9
- (CGSize)_shadowOffset;	// 0x31fb9409
- (float)_shadowOpacity;	// 0x31fb93f9
- (id)_shadowPath;	// 0x31fb9419
- (id)_shadowPathForRect:(CGRect)rect arrowDirection:(unsigned)direction;	// 0x31fb9231
- (float)_shadowRadius;	// 0x31fb9401
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x31fb9575
- (void)_updateShadow;	// 0x31fb9481
- (BOOL)_wantsDefaultContentAppearance;	// 0x31fb9209
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x31fb95cd
// declared property getter: - (unsigned)arrowDirection;	// 0x31fb9145
// declared property getter: - (float)arrowOffset;	// 0x31fb90b9
- (int)backgroundStyle;	// 0x31fb9969
- (void)layoutSubviews;	// 0x31fb9929
// declared property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x31fb9155
// declared property setter: - (void)setArrowOffset:(float)offset;	// 0x31fb913d
@end

