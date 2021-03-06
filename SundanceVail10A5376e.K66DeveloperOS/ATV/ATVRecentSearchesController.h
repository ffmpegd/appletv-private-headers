/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"
#import "BRMenuListItemProvider.h"

@class ATVSearchAgent, NSArray;

__attribute__((visibility("hidden")))
@interface ATVRecentSearchesController : BRMediaMenuController <BRMenuListItemProvider> {
	NSArray *_recentSearches;	// 176 = 0xb0
	ATVSearchAgent *_searchAgent;	// 180 = 0xb4
}
- (id)initWithSearchAgent:(id)searchAgent;	// 0x22c4e9
- (void)_populateRecentSearchesList;	// 0x22c801
- (void)dealloc;	// 0x22c591
- (float)heightForRow:(long)row;	// 0x22c7a1
- (long)itemCount;	// 0x22c729
- (id)itemForRow:(long)row;	// 0x22c6d1
- (void)itemSelected:(long)selected;	// 0x22c5f5
- (id)previewControlForItem:(long)item;	// 0x22c7fd
- (BOOL)rowSelectable:(long)selectable;	// 0x22c7f9
- (id)titleForRow:(long)row;	// 0x22c749
@end

