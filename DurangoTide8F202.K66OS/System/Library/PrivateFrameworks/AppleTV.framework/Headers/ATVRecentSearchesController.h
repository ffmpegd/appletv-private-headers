/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuListItemProvider.h"
#import <BRMediaMenuController.h> // Unknown library

@class NSArray, ATVSearchAgent;

__attribute__((visibility("hidden")))
@interface ATVRecentSearchesController : BRMediaMenuController <BRMenuListItemProvider> {
@private
	NSArray *_recentSearches;	// 136 = 0x88
	ATVSearchAgent *_searchAgent;	// 140 = 0x8c
}
- (id)initWithSearchAgent:(id)searchAgent;	// 0x336d62f9
- (void)_populateRecentSearchesList;	// 0x336d6395
- (void)dealloc;	// 0x336d629d
- (float)heightForRow:(long)row;	// 0x336d60d5
- (long)itemCount;	// 0x336d616d
- (id)itemForRow:(long)row;	// 0x336d618d
- (void)itemSelected:(long)selected;	// 0x336d61d9
- (id)previewControlForItem:(long)item;	// 0x336d60d1
- (BOOL)rowSelectable:(long)selectable;	// 0x336d60cd
- (id)titleForRow:(long)row;	// 0x336d6121
@end

