/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIStatusBarForegroundView, UIStatusBarItemView;

__attribute__((visibility("hidden")))
@interface UIStatusBarLayoutManager : NSObject {
@private
	UIStatusBarForegroundView *_foregroundView;	// 4 = 0x4
	int _region;	// 8 = 0x8
	UIStatusBarItemView *_itemViews[23];	// 12 = 0xc
}
@property(assign, nonatomic) UIStatusBarForegroundView *foregroundView;	// G=0x33c85039; S=0x33ae6d45; @synthesize=_foregroundView
- (id)initWithRegion:(int)region foregroundView:(id)view;	// 0x339b0e95
- (id)_createViewForItem:(id)item withData:(id)data actions:(int)actions;	// 0x3399fe85
- (CGRect)_frameForItemView:(id)itemView startPosition:(float)position;	// 0x339a1391
- (SEL)_itemSortSelector;	// 0x33990c69
- (id)_itemViews;	// 0x3398f289
- (id)_itemViewsSortedForLayout;	// 0x33990bb1
- (float)_positionAfterPlacingItemView:(id)view startPosition:(float)position;	// 0x33990d01
- (void)_positionNewItemViewsWithEnabledItems:(BOOL *)enabledItems;	// 0x339a1149
- (void)_prepareEnabledItemType:(int)type withEnabledItems:(BOOL *)enabledItems withData:(id)data actions:(int)actions itemAppearing:(BOOL *)appearing itemDisappearing:(BOOL *)disappearing;	// 0x3398edfd
- (CGRect)_repositionedNewFrame:(CGRect)frame widthDelta:(float)delta;	// 0x33c84fc5
- (float)_startPosition;	// 0x33990b2d
- (BOOL)_updateItemView:(id)view withData:(id)data actions:(int)actions animated:(BOOL)animated;	// 0x3398f2ed
- (id)_viewForItem:(id)item;	// 0x339a1e85
- (float)_widthNeededForItemView:(id)itemView;	// 0x33990e4d
- (void)clearOverlapFromItems:(id)items;	// 0x339a1eb1
- (void)dealloc;	// 0x33ae6d55
- (float)distributeOverlap:(float)overlap amongItems:(id)items;	// 0x33c84dc5
// declared property getter: - (id)foregroundView;	// 0x33c85039
- (BOOL)itemIsVisible:(id)visible;	// 0x33ac5b1d
- (void)itemView:(id)view widthChangedBy:(float)by;	// 0x33c84ef5
- (void)makeVisibleItemsPerformPendedActions;	// 0x33991139
- (void)positionInvisibleItems;	// 0x339909e5
- (BOOL)prepareDoubleHeightItemWithEnabledItems:(BOOL *)enabledItems;	// 0x33c84d25
- (BOOL)prepareEnabledItems:(BOOL *)items withData:(id)data actions:(int)actions;	// 0x3398ed69
- (CGRect)rectForItems:(id)items;	// 0x339a1ce1
- (void)reflowWithVisibleItems:(id)visibleItems duration:(double)duration;	// 0x339a2175
- (void)removeDisabledItems:(BOOL *)items;	// 0x3399095d
- (float)removeOverlap:(float)overlap fromItems:(id)items;	// 0x339a2059
// declared property setter: - (void)setForegroundView:(id)view;	// 0x33ae6d45
- (BOOL)updateDoubleHeightItem;	// 0x33c84d91
- (BOOL)updateItemsWithData:(id)data actions:(int)actions animated:(BOOL)animated;	// 0x3398f1bd
- (float)widthNeededForItem:(id)item;	// 0x339a2029
- (float)widthNeededForItems:(id)items;	// 0x339a1f6d
@end

