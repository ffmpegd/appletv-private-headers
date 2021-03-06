/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRGridView.h"

@class NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMainMenuButtonGrid : BRGridView {
	BOOL _itemsNeedUpdating;	// 208 = 0xd0
	BOOL _focusedItemNeedsUpdating;	// 209 = 0xd1
	BOOL _updatingFocusedItem;	// 210 = 0xd2
	NSArray *_items;	// 212 = 0xd4
	NSDictionary *_buttonTemplateInfo;	// 216 = 0xd8
	long _numberOfColumns;	// 220 = 0xdc
	id _itemTitleBlock;	// 224 = 0xe0
	id _itemImageBlock;	// 228 = 0xe4
	id _itemIconBadgeCountBlock;	// 232 = 0xe8
	BOOL _shouldAlignCenter;	// 236 = 0xec
	int _navigationalBias;	// 240 = 0xf0
	BOOL _allowsReordering;	// 244 = 0xf4
}
@property(assign, nonatomic) BOOL allowsReordering;	// G=0x12bd95; S=0x12bda5; @synthesize=_allowsReordering
@property(readonly, assign, nonatomic) NSDictionary *buttonTemplateInfo;	// G=0x12bd45; @synthesize=_buttonTemplateInfo
@property(assign, nonatomic) int navigationalBias;	// G=0x12bd75; S=0x12bd85; @synthesize=_navigationalBias
@property(assign, nonatomic) long numberOfColumns;	// G=0x12bd35; S=0x12b8a1; @synthesize=_numberOfColumns
@property(assign, nonatomic) BOOL shouldAlignCenter;	// G=0x12bd55; S=0x12bd65; @synthesize=_shouldAlignCenter
- (id)init;	// 0x12adb1
- (id)initWithLayout:(id)layout;	// 0x12adf1
- (void)_centerSubcontrols;	// 0x12af99
- (id)_itemIconBadgeCountBlock;	// 0x12b659
- (id)_itemImageBlock;	// 0x12b649
- (id)_itemTitleBlock;	// 0x12b639
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x12b5a1
- (void)_updateFocusedItem;	// 0x12b71d
// declared property getter: - (BOOL)allowsReordering;	// 0x12bd95
- (void)bindItemIconBadgeCountWithBlock:(id)block;	// 0x12b6e1
- (void)bindItemImageWithBlock:(id)block;	// 0x12b6a5
- (void)bindItemTitleWithBlock:(id)block;	// 0x12b669
// declared property getter: - (id)buttonTemplateInfo;	// 0x12bd45
- (BOOL)canMoveItemAtIndex:(long)index;	// 0x12bae5
- (id)dataItemAtIndex:(unsigned)index;	// 0x12b855
- (id)dataItems;	// 0x12b7b5
- (void)dealloc;	// 0x12ae99
- (void)didFocusItemAtIndex:(long)index;	// 0x12bca9
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x12b4fd
- (id)initialFocus;	// 0x12b3ed
- (id)itemAtIndex:(long)index;	// 0x12b97d
- (void)layoutSubcontrols;	// 0x12b5cd
- (BOOL)moveItemAtIndex:(long)index toIndex:(long)index2;	// 0x12bafd
// declared property getter: - (int)navigationalBias;	// 0x12bd75
// declared property getter: - (long)numberOfColumns;	// 0x12bd35
- (void)populateDataCache:(id)cache;	// 0x12b8c9
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x12b1a5
- (CGPoint)scrollControl:(id)control adjustScrollPosition:(CGPoint)position;	// 0x12b239
// declared property setter: - (void)setAllowsReordering:(BOOL)reordering;	// 0x12bda5
// declared property setter: - (void)setNavigationalBias:(int)bias;	// 0x12bd85
// declared property setter: - (void)setNumberOfColumns:(long)columns;	// 0x12b8a1
// declared property setter: - (void)setShouldAlignCenter:(BOOL)alignCenter;	// 0x12bd65
// declared property getter: - (BOOL)shouldAlignCenter;	// 0x12bd55
- (long)targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x12bc09
- (void)updateBoundFocusedItem;	// 0x12af79
- (void)updateBoundItems;	// 0x12af59
@end

