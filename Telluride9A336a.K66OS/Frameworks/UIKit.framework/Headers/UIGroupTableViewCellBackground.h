/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIGroupTableViewCellBackground : UIView {
@private
	int _sectionLocation;	// 48 = 0x30
	int _newSectionLocation;	// 52 = 0x34
	int _animationCount;	// 56 = 0x38
	int _selectionStyle;	// 60 = 0x3c
	int _separatorStyle;	// 64 = 0x40
	UIView *_topSeparatorView;	// 68 = 0x44
	UIView *_bottomSeparatorView;	// 72 = 0x48
	struct {
		unsigned nonIndexedTitlesShownFirst : 1;
	} _groupBackgroundFlags;	// 76 = 0x4c
	UIColor *_selectionTintColor;	// 80 = 0x50
}
@property(retain) id backgroundColor;	// G=0x3537986d; S=0x351e2cfd; converted property
@property(assign, nonatomic) int sectionLocation;	// G=0x3518ed5d; S=0x3518cb11; 
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x3518debd; S=0x351e22b1; 
@property(assign, nonatomic) int selectionStyle;	// G=0x3537984d; S=0x351e22f5; 
@property(retain, nonatomic) UIColor *selectionTintColor;	// G=0x3518e28d; S=0x351e23a9; 
@property(assign, nonatomic) int separatorStyle;	// G=0x3537985d; S=0x3518cd95; 
+ (void)_flushCacheOnNotification:(id)notification;	// 0x35178615
+ (void)initialize;	// 0x3516ad89
- (id)initWithFrame:(CGRect)frame;	// 0x3518c239
- (id)_backgroundColor;	// 0x3518def5
- (id)_bottomShadowColor;	// 0x3518dff5
- (id)_cachedImageForKey:(id)key;	// 0x3518e301
- (id)_contentMaskLayer;	// 0x35379871
- (CGRect)_contentRectForContentHeight:(float)contentHeight;	// 0x353796a5
- (CGRect)_contentsCenter:(BOOL)center;	// 0x3518c611
- (CGRect)_contentsRect:(BOOL)rect;	// 0x3518c57d
- (void)_decrementAnimationCount;	// 0x351e2d59
- (id)_fillColor;	// 0x3518e0f5
- (void)_incrementAnimationCount;	// 0x351e2ca5
- (void)_layoutSubviews:(BOOL)subviews;	// 0x3518c419
- (float)_pixelDisplayedImageHeight;	// 0x351e2c5d
- (id)_roundedRectBezierPathInRect:(CGRect)rect withSectionLocation:(int)sectionLocation forBorder:(BOOL)border cornerRadiusAdjustment:(float)adjustment;	// 0x3518ec5d
- (id)_sectionBorderColor;	// 0x3518e199
- (id)_separatorColor;	// 0x3518cdfd
- (void)_setSectionLocationAnimationDidStop;	// 0x351e6895
- (id)_topShadowColor;	// 0x353797a5
- (id)_topShadowViewWithColor:(id)color;	// 0x3518d105
- (void)_updateSeparatorViews;	// 0x3518c695
// converted property getter: - (id)backgroundColor;	// 0x3537986d
- (void)dealloc;	// 0x351e7b51
- (void)displayLayer:(id)layer;	// 0x3518db29
// declared property getter: - (BOOL)isSelected;	// 0x3518debd
- (void)layoutSubviews;	// 0x3518c405
// declared property getter: - (int)sectionLocation;	// 0x3518ed5d
// declared property getter: - (int)selectionStyle;	// 0x3537984d
// declared property getter: - (id)selectionTintColor;	// 0x3518e28d
// declared property getter: - (int)separatorStyle;	// 0x3537985d
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x351e2cfd
- (void)setFrame:(CGRect)frame;	// 0x3518c289
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x3518cb11
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x3518cb25
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x351e22b1
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x351e22f5
// declared property setter: - (void)setSelectionTintColor:(id)color;	// 0x351e23a9
- (void)setSelectionTintColor:(id)color layoutSubviews:(BOOL)subviews;	// 0x351e233d
// declared property setter: - (void)setSeparatorStyle:(int)style;	// 0x3518cd95
@end
