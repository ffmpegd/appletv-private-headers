/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIStatusBarItem, UIStatusBarLayoutManager;

__attribute__((visibility("hidden")))
@interface UIStatusBarItemView : UIView {
@private
	UIStatusBarItem *_item;	// 48 = 0x30
	int _foregroundStyle;	// 52 = 0x34
	BOOL _visible;	// 56 = 0x38
	BOOL _allowsUpdates;	// 57 = 0x39
	UIStatusBarLayoutManager *_layoutManager;	// 60 = 0x3c
	float _currentOverlap;	// 64 = 0x40
	CGContextRef _imageContext;	// 68 = 0x44
	float _imageContextScale;	// 72 = 0x48
}
@property(assign, nonatomic) BOOL allowsUpdates;	// G=0x3398f4c9; S=0x339a01c1; @synthesize=_allowsUpdates
@property(assign) float currentOverlap;	// G=0x33990f95; S=0x339a1f5d; converted property
@property(readonly, assign, nonatomic) int foregroundStyle;	// G=0x33990fd5; @synthesize=_foregroundStyle
@property(readonly, assign, nonatomic) UIStatusBarItem *item;	// G=0x33990ca9; @synthesize=_item
@property(assign, nonatomic) UIStatusBarLayoutManager *layoutManager;	// G=0x33c84d15; S=0x339a0f31; @synthesize=_layoutManager
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x33990cf1; S=0x339a1351; @synthesize=_visible
+ (id)createViewForItem:(id)item withData:(id)data actions:(int)actions foregroundStyle:(int)style;	// 0x3399ffc5
+ (id)imageNamed:(id)named forForegroundStyle:(int)foregroundStyle;	// 0x339b10b9
- (id)initWithItem:(id)item data:(id)data actions:(int)actions style:(int)style;	// 0x339a0085
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x33ac5c6d
// declared property getter: - (BOOL)allowsUpdates;	// 0x3398f4c9
- (BOOL)animatesDataChange;	// 0x3398f451
- (BOOL)animatesFrameChange;	// 0x339a01d1
- (void)beginImageContextWithMinimumWidth:(float)minimumWidth;	// 0x339a065d
- (id)contentsImageForStyle:(int)style;	// 0x33c84ca9
- (float)currentLeftOverlap;	// 0x339a2369
// converted property getter: - (float)currentOverlap;	// 0x33990f95
- (float)currentRightOverlap;	// 0x339a2595
- (void)dealloc;	// 0x339a5771
- (id)description;	// 0x33c84cad
- (void)drawText:(id)text forStyle:(int)style;	// 0x339a08b5
- (void)drawText:(id)text forStyle:(int)style forWidth:(float)width lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x339a08ed
- (void)endImageContext;	// 0x339a0ed5
- (float)extraLeftPadding;	// 0x33990f61
- (float)extraRightPadding;	// 0x339910dd
// declared property getter: - (int)foregroundStyle;	// 0x33990fd5
- (id)imageFromImageContextClippedToWidth:(float)width;	// 0x339a0dc9
// declared property getter: - (BOOL)isVisible;	// 0x33990cf1
// declared property getter: - (id)item;	// 0x33990ca9
// declared property getter: - (id)layoutManager;	// 0x33c84d15
- (float)maximumOverlap;	// 0x33c84ca5
- (void)performPendedActions;	// 0x339911fd
// declared property setter: - (void)setAllowsUpdates:(BOOL)updates;	// 0x339a01c1
// converted property setter: - (void)setCurrentOverlap:(float)overlap;	// 0x339a1f5d
// declared property setter: - (void)setLayoutManager:(id)manager;	// 0x339a0f31
- (float)setStatusBarData:(id)data actions:(int)actions;	// 0x3398f465
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x339a1351
- (void)setVisible:(BOOL)visible frame:(CGRect)frame duration:(double)duration;	// 0x339a238d
- (float)shadowPadding;	// 0x33990fa5
- (float)shadowPaddingForStyle:(int)style;	// 0x33990fe5
- (float)standardPadding;	// 0x33990f19
- (id)textColorForStyle:(int)style;	// 0x339a0d85
- (id)textFont;	// 0x339a058d
- (float)updateContentsAndWidth;	// 0x339a029d
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x3398fc9d
- (BOOL)usesSmallerTextFont;	// 0x339a05d9
@end

