/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"


__attribute__((visibility("hidden")))
@interface ATVFeedItemDetailController : ATVFeedController {
}
- (id)initWithDictionary:(id)dictionary;	// 0x1302ed
- (id)initWithFeedElement:(id)feedElement;	// 0x1302a1
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x131151
- (BOOL)_hasHeader:(id)header;	// 0x131c4d
- (id)_initWithData:(id)data;	// 0x131515
- (int)_mainImageStyleForData:(id)data;	// 0x131f41
- (BOOL)_relatedShelfIsFocused;	// 0x132195
- (id)_tableData;	// 0x132141
- (id)_tableElement;	// 0x132105
- (float)_widthOfColumn:(long)column tableView:(id)view;	// 0x131e11
- (BOOL)brEventAction:(id)action;	// 0x1303cd
- (void)dealloc;	// 0x130339
- (float)headerHeightForTableView:(id)tableView;	// 0x131125
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x1305cd
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x130651
- (long)numberOfRowsInTableView:(id)tableView;	// 0x130549
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x130f29
- (float)tableView:(id)view heightForRow:(long)row;	// 0x131119
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x130661
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x1310f1
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x131109
- (void)transitionToMoreInfo;	// 0x130481
- (id)transitionType;	// 0x1303bd
@end

