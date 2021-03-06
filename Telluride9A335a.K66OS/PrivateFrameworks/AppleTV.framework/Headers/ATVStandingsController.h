/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRViewController.h"

@class NSArray, NSDictionary, BRPageStripView;

__attribute__((visibility("hidden")))
@interface ATVStandingsController : BRViewController {
@private
	BRPageStripView *_pageStripView;	// 84 = 0x54
	NSDictionary *_data;	// 88 = 0x58
	NSArray *_items;	// 92 = 0x5c
}
- (id)initWithDictionary:(id)dictionary;	// 0x3413ff81
- (float)_widthOfColumn:(long)column forTableView:(id)tableView;	// 0x3414087d
- (void)dealloc;	// 0x34140161
- (float)headerHeightForTableView:(id)tableView;	// 0x34140875
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x341403d1
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x34140419
- (long)numberOfPagesInPageStripView:(id)pageStripView;	// 0x341401d5
- (long)numberOfRowsInTableView:(id)tableView;	// 0x34140389
- (id)pageStripView:(id)view pageAtIndex:(long)index;	// 0x341401f5
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x341406e9
- (float)tableView:(id)view heightForRow:(long)row;	// 0x34140869
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x34140429
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x34140841
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x34140859
- (float)xPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x3414037d
@end

