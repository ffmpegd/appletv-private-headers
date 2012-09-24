/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRGridView.h"
#import "AppleTV-Structs.h"

@class NSArray, NSDictionary;

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
@property(assign, nonatomic) BOOL allowsReordering;	// G=0x1345dd; S=0x1345ed; @synthesize=_allowsReordering
@property(readonly, assign, nonatomic) NSDictionary *buttonTemplateInfo;	// G=0x13458d; @synthesize=_buttonTemplateInfo
@property(assign, nonatomic) int navigationalBias;	// G=0x1345bd; S=0x1345cd; @synthesize=_navigationalBias
@property(assign, nonatomic) long numberOfColumns;	// G=0x13457d; S=0x1340e9; @synthesize=_numberOfColumns
@property(assign, nonatomic) BOOL shouldAlignCenter;	// G=0x13459d; S=0x1345ad; @synthesize=_shouldAlignCenter
- (id)init;	// 0x1335f9
- (id)initWithLayout:(id)layout;	// 0x133639
- (void)_centerSubcontrols;	// 0x1337e1
- (id)_itemIconBadgeCountBlock;	// 0x133ea1
- (id)_itemImageBlock;	// 0x133e91
- (id)_itemTitleBlock;	// 0x133e81
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x133de9
- (void)_updateFocusedItem;	// 0x133f65
// declared property getter: - (BOOL)allowsReordering;	// 0x1345dd
- (void)bindItemIconBadgeCountWithBlock:(id)block;	// 0x133f29
- (void)bindItemImageWithBlock:(id)block;	// 0x133eed
- (void)bindItemTitleWithBlock:(id)block;	// 0x133eb1
// declared property getter: - (id)buttonTemplateInfo;	// 0x13458d
- (BOOL)canMoveItemAtIndex:(long)index;	// 0x13432d
- (id)dataItemAtIndex:(unsigned)index;	// 0x13409d
- (id)dataItems;	// 0x133ffd
- (void)dealloc;	// 0x1336e1
- (void)didFocusItemAtIndex:(long)index;	// 0x1344f1
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x133d45
- (id)initialFocus;	// 0x133c35
- (id)itemAtIndex:(long)index;	// 0x1341c5
- (void)layoutSubcontrols;	// 0x133e15
- (BOOL)moveItemAtIndex:(long)index toIndex:(long)index2;	// 0x134345
// declared property getter: - (int)navigationalBias;	// 0x1345bd
// declared property getter: - (long)numberOfColumns;	// 0x13457d
- (void)populateDataCache:(id)cache;	// 0x134111
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x1339ed
- (CGPoint)scrollControl:(id)control adjustScrollPosition:(CGPoint)position;	// 0x133a81
// declared property setter: - (void)setAllowsReordering:(BOOL)reordering;	// 0x1345ed
// declared property setter: - (void)setNavigationalBias:(int)bias;	// 0x1345cd
// declared property setter: - (void)setNumberOfColumns:(long)columns;	// 0x1340e9
// declared property setter: - (void)setShouldAlignCenter:(BOOL)alignCenter;	// 0x1345ad
// declared property getter: - (BOOL)shouldAlignCenter;	// 0x13459d
- (long)targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x134451
- (void)updateBoundFocusedItem;	// 0x1337c1
- (void)updateBoundItems;	// 0x1337a1
@end
