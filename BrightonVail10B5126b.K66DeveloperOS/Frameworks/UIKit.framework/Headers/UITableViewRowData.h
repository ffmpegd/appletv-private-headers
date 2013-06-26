/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UITableView, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UITableViewRowData : NSObject <NSCopying> {
	UITableView *_tableView;	// 4 = 0x4
	int _numSections;	// 8 = 0x8
	int _sectionRowDataCapacity;	// 12 = 0xc
	id *_sectionRowData;	// 16 = 0x10
	float _minimumRowHeight;	// 20 = 0x14
	float _tableViewWidth;	// 24 = 0x18
	BOOL _tableHeaderHeightValid;	// 28 = 0x1c
	float _tableHeaderHeight;	// 32 = 0x20
	BOOL _tableFooterHeightValid;	// 36 = 0x24
	float _tableFooterHeight;	// 40 = 0x28
	float _heightForTableHeaderViewHiding;	// 44 = 0x2c
	float _tableTopPadding;	// 48 = 0x30
	float _tableBottomPadding;	// 52 = 0x34
	BOOL _tableSidePaddingValid;	// 56 = 0x38
	float _tableSidePadding;	// 60 = 0x3c
	NSIndexPath *_reorderedIndexPath;	// 64 = 0x40
	NSIndexPath *_gapIndexPath;	// 68 = 0x44
	float _reorderedRowHeight;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) float heightForAutohidingTableHeaderView;	// G=0x32b04489; 
@property(readonly, assign, nonatomic) float heightForTableHeaderViewHiding;	// G=0x32b0372d; 
@property(assign, nonatomic) float minimumRowHeight;	// G=0x32b1887d; S=0x32b1888d; @synthesize=_minimumRowHeight
@property(readonly, assign, nonatomic) NSIndexPath *reorderGapIndexPath;	// G=0x32d5733d; @synthesize=_gapIndexPath
@property(retain) NSIndexPath *reorderedIndexPath;	// G=0x32b1ca45; S=0x32badf35; converted property
@property(readonly, assign, nonatomic) float reorderedRowHeight;	// G=0x32d5734d; @synthesize=_reorderedRowHeight
@property(assign, nonatomic) float tableBottomPadding;	// G=0x32d5736d; S=0x32ba722d; @synthesize=_tableBottomPadding
@property(assign, nonatomic) float tableSidePadding;	// G=0x32b620c9; S=0x32d57235; 
@property(assign, nonatomic) float tableTopPadding;	// G=0x32d5735d; S=0x32ba723d; @synthesize=_tableTopPadding
- (id)initWithTableView:(id)tableView;	// 0x32b16f1d
- (void)_ensureSectionOffsetIsValidForSection:(int)section;	// 0x32b030e5
- (int)_sectionForPoint:(CGPoint)point beginningWithSection:(int)section numberOfSections:(int)sections;	// 0x32b73d85
- (int)_sectionRowForGlobalRow:(int)globalRow inSection:(int *)section;	// 0x32b12e25
- (void)_updateNumSections;	// 0x32b17289
- (void)_updateSectionRowDataArrayForNumSections:(int)numSections;	// 0x32b17321
- (void)_updateTopAndBottomPadding;	// 0x32d56de9
- (void)addReorderGapFromIndexPath:(id)indexPath;	// 0x32c8e3b5
- (id)copyWithZone:(NSZone *)zone;	// 0x32b16d11
- (void)dealloc;	// 0x32b76225
- (void)ensureAllSectionsAreValid;	// 0x32b174c1
- (CGRect)floatingRectForFooterInSection:(int)section visibleRect:(CGRect)rect;	// 0x32c905e1
- (CGRect)floatingRectForHeaderInSection:(int)section visibleRect:(CGRect)rect;	// 0x32b84345
- (int)footerAlignmentForSection:(int)section;	// 0x32cae1fd
- (int)globalRowForRowAtIndexPath:(id)indexPath;	// 0x32b74631
- (NSRange)globalRowsInRect:(CGRect)rect;	// 0x32b12a91
- (BOOL)hasFooterForSection:(int)section;	// 0x32c90779
- (BOOL)hasHeaderForSection:(int)section;	// 0x32b84505
- (int)headerAlignmentForSection:(int)section;	// 0x32b86709
// declared property getter: - (float)heightForAutohidingTableHeaderView;	// 0x32b04489
- (float)heightForFooterInSection:(int)section;	// 0x32c4d9d1
- (float)heightForHeaderInSection:(int)section;	// 0x32c4d949
- (float)heightForRow:(int)row inSection:(int)section;	// 0x32d570a1
- (float)heightForSection:(int)section;	// 0x32cae539
- (float)heightForTable;	// 0x32b0356d
- (float)heightForTableFooterView;	// 0x32b0361d
- (float)heightForTableHeaderView;	// 0x32b044d5
// declared property getter: - (float)heightForTableHeaderViewHiding;	// 0x32b0372d
- (id)indexPathForRowAtGlobalRow:(int)globalRow;	// 0x32b1359d
- (id)indexPathsForRowsInRect:(CGRect)rect;	// 0x32ba45d9
- (void)invalidateAllSectionOffsetsAndUpdatePadding;	// 0x32d56fa9
- (void)invalidateAllSections;	// 0x32b171dd
- (void)invalidateSection:(int)section;	// 0x32d57029
- (float)maxFooterTitleWidthForSection:(int)section;	// 0x32cae165
- (float)maxHeaderTitleWidthForSection:(int)section;	// 0x32b86661
// declared property getter: - (float)minimumRowHeight;	// 0x32b1887d
- (void)moveRowAtIndexPathFrom:(id)from toIndexPath:(id)indexPath;	// 0x32c8fdb9
- (int)numberOfRows;	// 0x32b12cad
- (int)numberOfRowsBeforeSection:(int)rowsBeforeSection;	// 0x32cae465
- (int)numberOfRowsInSection:(int)section;	// 0x32b131c9
- (int)numberOfSections;	// 0x32b191a9
- (CGRect)rectForFooterInSection:(int)section;	// 0x32b02ef9
- (CGRect)rectForGlobalRow:(int)globalRow;	// 0x32b12d71
- (CGRect)rectForHeaderInSection:(int)section;	// 0x32b13651
- (CGRect)rectForRow:(int)row inSection:(int)section;	// 0x32b12f11
- (CGRect)rectForSection:(int)section;	// 0x32b14635
- (CGRect)rectForTable;	// 0x32b1b205
- (CGRect)rectForTableFooterView;	// 0x32b02cd5
- (CGRect)rectForTableHeaderView;	// 0x32b13299
- (void)removeReorderGapFromIndexPath:(id)indexPath;	// 0x32c8fa9d
// declared property getter: - (id)reorderGapIndexPath;	// 0x32d5733d
// converted property getter: - (id)reorderedIndexPath;	// 0x32b1ca45
// declared property getter: - (float)reorderedRowHeight;	// 0x32d5734d
- (int)sectionForPoint:(CGPoint)point;	// 0x32b73d51
- (int)sectionLocationForReorderedRow:(int)reorderedRow inSection:(int)section;	// 0x32d5719d
- (int)sectionLocationForRow:(int)row inSection:(int)section;	// 0x32b1d9dd
- (NSRange)sectionsInRect:(CGRect)rect;	// 0x32b14411
- (void)setHeightForTableHeaderViewHiding:(float)tableHeaderViewHiding;	// 0x32babe89
// declared property setter: - (void)setMinimumRowHeight:(float)height;	// 0x32b1888d
// converted property setter: - (void)setReorderedIndexPath:(id)path;	// 0x32badf35
// declared property setter: - (void)setTableBottomPadding:(float)padding;	// 0x32ba722d
// declared property setter: - (void)setTableSidePadding:(float)padding;	// 0x32d57235
// declared property setter: - (void)setTableTopPadding:(float)padding;	// 0x32ba723d
// declared property getter: - (float)tableBottomPadding;	// 0x32d5736d
- (void)tableFooterHeightDidChangeToHeight:(float)tableFooterHeight;	// 0x32b02cc5
- (void)tableHeaderHeightDidChangeToHeight:(float)tableHeaderHeight;	// 0x32b572b5
// declared property getter: - (float)tableSidePadding;	// 0x32b620c9
// declared property getter: - (float)tableTopPadding;	// 0x32d5735d
- (void)tableViewWidthDidChangeToWidth:(float)tableViewWidth;	// 0x32bbe06d
- (id)targetIndexPathForPoint:(CGPoint)point;	// 0x32c8f0d1
@end
