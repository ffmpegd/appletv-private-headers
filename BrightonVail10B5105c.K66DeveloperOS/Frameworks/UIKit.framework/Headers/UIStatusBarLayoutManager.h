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
	UIStatusBarForegroundView *_foregroundView;	// 4 = 0x4
	int _region;	// 8 = 0x8
	UIStatusBarItemView *_itemViews[24];	// 12 = 0xc
}
@property(assign, nonatomic) UIStatusBarForegroundView *foregroundView;	// G=0x34862595; S=0x348625a5; @synthesize=_foregroundView
- (id)initWithRegion:(int)region foregroundView:(id)view;	// 0x3459a1a1
- (id)_createViewForItem:(id)item withData:(id)data actions:(int)actions;	// 0x3459a275
- (CGRect)_frameForItemView:(id)itemView startPosition:(float)position;	// 0x3458534d
- (SEL)_itemSortSelector;	// 0x3454acdd
- (id)_itemViews;	// 0x34549ded
- (id)_itemViewsSortedForLayout;	// 0x3454ac25
- (float)_positionAfterPlacingItemView:(id)view startPosition:(float)position;	// 0x3454ad81
- (void)_positionNewItemViewsWithEnabledItems:(BOOL *)enabledItems;	// 0x3459b101
- (void)_prepareEnabledItemType:(int)type withEnabledItems:(BOOL *)enabledItems withData:(id)data actions:(int)actions itemAppearing:(BOOL *)appearing itemDisappearing:(BOOL *)disappearing;	// 0x34549aa1
- (CGRect)_repositionedNewFrame:(CGRect)frame widthDelta:(float)delta;	// 0x34688991
- (float)_startPosition;	// 0x3454aba1
- (BOOL)_updateItemView:(id)view withData:(id)data actions:(int)actions animated:(BOOL)animated;	// 0x34549e4d
- (id)_viewForItem:(id)item;	// 0x345869a1
- (float)_widthNeededForItemView:(id)itemView;	// 0x3454aed5
- (void)clearOverlapFromItems:(id)items;	// 0x345869dd
- (void)dealloc;	// 0x34862101
- (float)distributeOverlap:(float)overlap amongItems:(id)items;	// 0x34862359
// declared property getter: - (id)foregroundView;	// 0x34862595
- (BOOL)itemIsVisible:(id)visible;	// 0x345fb629
- (void)itemView:(id)view widthChangedBy:(float)by;	// 0x348624c9
- (void)makeVisibleItemsPerformPendedActions;	// 0x3454b1f1
- (void)positionInvisibleItems;	// 0x3454aa21
- (BOOL)prepareDoubleHeightItemWithEnabledItems:(BOOL *)enabledItems;	// 0x348622b9
- (BOOL)prepareEnabledItems:(BOOL *)items withData:(id)data actions:(int)actions;	// 0x34549a05
- (CGRect)rectForItems:(id)items;	// 0x345867c1
- (void)reflowWithVisibleItems:(id)visibleItems duration:(double)duration;	// 0x34586d7d
- (void)removeDisabledItems:(BOOL *)items;	// 0x3454a995
- (float)removeOverlap:(float)overlap fromItems:(id)items;	// 0x34586c21
// declared property setter: - (void)setForegroundView:(id)view;	// 0x348625a5
- (void)setVisibilityOfAllItems:(BOOL)allItems;	// 0x348621a9
- (void)setVisibilityOfItem:(id)item visible:(BOOL)visible;	// 0x34862271
- (BOOL)updateDoubleHeightItem;	// 0x34862321
- (BOOL)updateItemsWithData:(id)data actions:(int)actions animated:(BOOL)animated;	// 0x34549d01
- (float)widthNeededForItem:(id)item;	// 0x34586b91
- (float)widthNeededForItems:(id)items;	// 0x34586ab9
@end
