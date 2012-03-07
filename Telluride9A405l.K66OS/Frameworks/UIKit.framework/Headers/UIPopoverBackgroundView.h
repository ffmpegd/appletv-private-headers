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
@property(assign, nonatomic) unsigned arrowDirection;	// G=0x33038475; S=0x33038485; 
@property(assign, nonatomic) float arrowOffset;	// G=0x330383f5; S=0x3303846d; 
+ (id)_shadowPathForRect:(CGRect)rect arrowDirection:(unsigned)direction;	// 0x330384d1
+ (float)arrowBase;	// 0x330384a1
+ (float)arrowHeight;	// 0x3303848d
+ (UIEdgeInsets)contentViewInsets;	// 0x330384b5
- (CGRect)_contentViewFrame;	// 0x330388c5
- (id)_shadowPath;	// 0x33038619
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x33038739
- (void)_updateShadow;	// 0x3303868d
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x33038791
// declared property getter: - (unsigned)arrowDirection;	// 0x33038475
// declared property getter: - (float)arrowOffset;	// 0x330383f5
- (int)backgroundStyle;	// 0x33038aed
// declared property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x33038485
// declared property setter: - (void)setArrowOffset:(float)offset;	// 0x3303846d
@end

