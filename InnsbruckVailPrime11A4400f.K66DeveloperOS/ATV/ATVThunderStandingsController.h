/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"

@class ATVThunderStandingsView, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderStandingsController : ATVFeedController {
	ATVThunderStandingsView *_standingsView;	// 104 = 0x68
	NSDictionary *_data;	// 108 = 0x6c
}
- (id)initWithDictionary:(id)dictionary;	// 0x24f415
- (float)_headerWidthOfColumn:(long)column forTableView:(id)tableView;	// 0x24ff99
- (float)_widthOfColumn:(long)column forTableView:(id)tableView;	// 0x24fec9
- (id)accessibilityLabel;	// 0x24fe89
- (id)accessibilityNonFocusableElements;	// 0x24fea9
- (void)dealloc;	// 0x24f759
- (float)headerHeightForTableView:(id)tableView;	// 0x24fe79
- (BOOL)isAccessibilityElement;	// 0x24fe85
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x24f805
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x24f84d
- (long)numberOfRowsInTableView:(id)tableView;	// 0x24f7bd
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x24fc5d
- (float)tableView:(id)view heightForRow:(long)row;	// 0x24fe6d
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x24f895
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x24fe3d
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x24fe55
@end

