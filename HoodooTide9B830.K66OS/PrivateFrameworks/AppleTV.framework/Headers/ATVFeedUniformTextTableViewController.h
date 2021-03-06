/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ATVFeedTextTableDataSet, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedUniformTextTableViewController : NSObject {
@private
	int _cachedColumnCount;	// 4 = 0x4
	ATVFeedTextTableDataSet *_dataSet;	// 8 = 0x8
	NSDictionary *_headerTextAttributes;	// 12 = 0xc
	NSDictionary *_cellTextAttributes;	// 16 = 0x10
	float _cellHeight;	// 20 = 0x14
	float _cellWidth;	// 24 = 0x18
	float _headerHeight;	// 28 = 0x1c
	float _headerWidth;	// 32 = 0x20
}
@property(assign) float cellHeight;	// G=0x32950845; S=0x32950855; @synthesize=_cellHeight
@property(retain) NSDictionary *cellTextAttributes;	// G=0x3295080d; S=0x32950821; @synthesize=_cellTextAttributes
@property(assign) float cellWidth;	// G=0x32950865; S=0x32950875; @synthesize=_cellWidth
@property(retain, nonatomic) ATVFeedTextTableDataSet *dataSet;	// G=0x32950401; S=0x329503a9; @synthesize=_dataSet
@property(assign) float headerHeight;	// G=0x32950885; S=0x32950895; @synthesize=_headerHeight
@property(retain) NSDictionary *headerTextAttributes;	// G=0x329507d5; S=0x329507e9; @synthesize=_headerTextAttributes
@property(assign) float headerWidth;	// G=0x329508a5; S=0x329508b5; @synthesize=_headerWidth
// declared property getter: - (float)cellHeight;	// 0x32950845
// declared property getter: - (id)cellTextAttributes;	// 0x3295080d
// declared property getter: - (float)cellWidth;	// 0x32950865
// declared property getter: - (id)dataSet;	// 0x32950401
- (void)dealloc;	// 0x32950335
// declared property getter: - (float)headerHeight;	// 0x32950885
- (float)headerHeightForTableView:(id)tableView;	// 0x329507b5
// declared property getter: - (id)headerTextAttributes;	// 0x329507d5
// declared property getter: - (float)headerWidth;	// 0x329508a5
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x32950449
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x32950515
- (long)numberOfRowsInTableView:(id)tableView;	// 0x32950411
// declared property setter: - (void)setCellHeight:(float)height;	// 0x32950855
// declared property setter: - (void)setCellTextAttributes:(id)attributes;	// 0x32950821
// declared property setter: - (void)setCellWidth:(float)width;	// 0x32950875
// declared property setter: - (void)setDataSet:(id)set;	// 0x329503a9
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x32950895
// declared property setter: - (void)setHeaderTextAttributes:(id)attributes;	// 0x329507e9
// declared property setter: - (void)setHeaderWidth:(float)width;	// 0x329508b5
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x32950655
- (float)tableView:(id)view heightForRow:(long)row;	// 0x329507a5
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x3295054d
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x32950795
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x329507c5
@end

