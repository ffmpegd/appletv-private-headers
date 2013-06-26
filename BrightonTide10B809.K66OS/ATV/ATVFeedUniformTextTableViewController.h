/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVFeedTextTableDataSet, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedUniformTextTableViewController : XXUnknownSuperclass {
	int _cachedColumnCount;	// 4 = 0x4
	ATVFeedTextTableDataSet *_dataSet;	// 8 = 0x8
	NSDictionary *_headerTextAttributes;	// 12 = 0xc
	NSDictionary *_cellTextAttributes;	// 16 = 0x10
	float _cellHeight;	// 20 = 0x14
	float _cellWidth;	// 24 = 0x18
	float _headerHeight;	// 28 = 0x1c
	float _headerWidth;	// 32 = 0x20
}
@property(assign) float cellHeight;	// G=0x15a7e9; S=0x15a7fd; @synthesize=_cellHeight
@property(retain) NSDictionary *cellTextAttributes;	// G=0x15a7c5; S=0x15a7d9; @synthesize=_cellTextAttributes
@property(assign) float cellWidth;	// G=0x15a815; S=0x15a829; @synthesize=_cellWidth
@property(retain, nonatomic) ATVFeedTextTableDataSet *dataSet;	// G=0x15a3dd; S=0x15a389; @synthesize=_dataSet
@property(assign) float headerHeight;	// G=0x15a841; S=0x15a855; @synthesize=_headerHeight
@property(retain) NSDictionary *headerTextAttributes;	// G=0x15a7a1; S=0x15a7b5; @synthesize=_headerTextAttributes
@property(assign) float headerWidth;	// G=0x15a86d; S=0x15a881; @synthesize=_headerWidth
// declared property getter: - (float)cellHeight;	// 0x15a7e9
// declared property getter: - (id)cellTextAttributes;	// 0x15a7c5
// declared property getter: - (float)cellWidth;	// 0x15a815
// declared property getter: - (id)dataSet;	// 0x15a3dd
- (void)dealloc;	// 0x15a311
// declared property getter: - (float)headerHeight;	// 0x15a841
- (float)headerHeightForTableView:(id)tableView;	// 0x15a781
// declared property getter: - (id)headerTextAttributes;	// 0x15a7a1
// declared property getter: - (float)headerWidth;	// 0x15a86d
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x15a425
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x15a4f1
- (long)numberOfRowsInTableView:(id)tableView;	// 0x15a3ed
// declared property setter: - (void)setCellHeight:(float)height;	// 0x15a7fd
// declared property setter: - (void)setCellTextAttributes:(id)attributes;	// 0x15a7d9
// declared property setter: - (void)setCellWidth:(float)width;	// 0x15a829
// declared property setter: - (void)setDataSet:(id)set;	// 0x15a389
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x15a855
// declared property setter: - (void)setHeaderTextAttributes:(id)attributes;	// 0x15a7b5
// declared property setter: - (void)setHeaderWidth:(float)width;	// 0x15a881
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x15a629
- (float)tableView:(id)view heightForRow:(long)row;	// 0x15a771
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x15a529
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x15a761
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x15a791
@end
