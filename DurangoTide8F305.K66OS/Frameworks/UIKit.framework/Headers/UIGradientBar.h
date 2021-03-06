/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView;

@interface UIGradientBar : UIView {
	UIImageView *_topShineView;	// 44 = 0x2c
	UIImageView *_gradientFillView;	// 48 = 0x30
	UIView *_bottomLineView;	// 52 = 0x34
	float _gradientHeight;	// 56 = 0x38
}
+ (id)bottomLineColor;	// 0x31ff7a31
+ (id)gradientFillImage;	// 0x31ff7a1d
- (id)initWithFrame:(CGRect)frame;	// 0x31ff77d5
- (void)_tile;	// 0x31ff7a71
- (void)dealloc;	// 0x32137659
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32137605
- (void)setBottomLineAlpha:(float)alpha;	// 0x321375e5
- (void)setFrame:(CGRect)frame;	// 0x31ff7975
- (void)setGradientHeight:(float)height;	// 0x3213759d
@end

