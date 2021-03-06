/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"

@class BRPageStripView, NSArray;

__attribute__((visibility("hidden")))
@interface ATVStandingsController : ATVFeedController {
	BRPageStripView *_pageStripView;	// 104 = 0x68
	NSArray *_items;	// 108 = 0x6c
}
- (id)initWithDictionary:(id)dictionary;	// 0x112675
- (id)initWithFeedElement:(id)feedElement;	// 0x1124e9
- (float)_widthOfColumn:(long)column forTableView:(id)tableView;	// 0x1134f9
- (void)dealloc;	// 0x112849
- (float)headerHeightForTableView:(id)tableView;	// 0x1134e5
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x112b8d
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x112c25
- (long)numberOfPagesInPageStripView:(id)pageStripView;	// 0x1128ad
- (long)numberOfRowsInTableView:(id)tableView;	// 0x112af5
- (id)pageStripView:(id)view pageAtIndex:(long)index;	// 0x1128cd
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x1132ed
- (float)tableView:(id)view heightForRow:(long)row;	// 0x1134cd
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x112c35
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x1134a5
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x1134bd
- (float)xPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x112ae9
@end

