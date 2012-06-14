/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class UITableView, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UITableViewRowData : NSObject <NSCopying> {
@private
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
@property(readonly, assign, nonatomic) float heightForAutohidingTableHeaderView;	// G=0x3532f4b5; 
@property(readonly, assign, nonatomic) float heightForTableHeaderViewHiding;	// G=0x35358e19; 
@property(assign, nonatomic) float minimumRowHeight;	// G=0x35358a95; S=0x35358aa5; @synthesize=_minimumRowHeight
@property(retain) NSIndexPath *reorderedIndexPath;	// G=0x353c20a1; S=0x353e0591; converted property
@property(assign, nonatomic) float tableBottomPadding;	// G=0x35567221; S=0x354b0a95; @synthesize=_tableBottomPadding
@property(assign, nonatomic) float tableSidePadding;	// G=0x35373949; S=0x35567111; 
@property(assign, nonatomic) float tableTopPadding;	// G=0x35567211; S=0x353d6de9; @synthesize=_tableTopPadding
- (id)initWithTableView:(id)tableView;	// 0x35356395
- (void)_ensureSectionOffsetIsValidForSection:(int)section;	// 0x35358af1
- (int)_sectionForPoint:(CGPoint)point beginningWithSection:(int)section numberOfSections:(int)sections;	// 0x35371d11
- (int)_sectionRowForGlobalRow:(int)globalRow inSection:(int *)section;	// 0x3536682d
- (void)_updateNumSections;	// 0x35356611
- (void)_updateSectionRowDataArrayForNumSections:(int)numSections;	// 0x353566a1
- (void)addReorderGapFromIndexPath:(id)indexPath;	// 0x354493a9
- (id)copyWithZone:(NSZone *)zone;	// 0x353bdee5
- (void)dealloc;	// 0x353c8eb9
- (void)ensureAllSectionsAreValid;	// 0x353be1f9
- (CGRect)floatingRectForFooterInSection:(int)section visibleRect:(CGRect)rect;	// 0x353d3ca5
- (CGRect)floatingRectForHeaderInSection:(int)section visibleRect:(CGRect)rect;	// 0x353a32fd
- (int)footerAlignmentForSection:(int)section;	// 0x354b0cb9
- (int)globalRowForRowAtIndexPath:(id)indexPath;	// 0x353345c9
- (NSRange)globalRowsInRect:(CGRect)rect;	// 0x3536655d
- (BOOL)hasFooterForSection:(int)section;	// 0x353d3e31
- (BOOL)hasHeaderForSection:(int)section;	// 0x353a3489
- (int)headerAlignmentForSection:(int)section;	// 0x353bad0d
// declared property getter: - (float)heightForAutohidingTableHeaderView;	// 0x3532f4b5
- (float)heightForFooterInSection:(int)section;	// 0x35436e05
- (float)heightForHeaderInSection:(int)section;	// 0x35436d7d
- (float)heightForRow:(int)row inSection:(int)section;	// 0x3544c2f5
- (float)heightForSection:(int)section;	// 0x35436cf5
- (float)heightForTable;	// 0x35356e41
- (float)heightForTableFooterView;	// 0x35358d05
- (float)heightForTableHeaderView;	// 0x3532f505
// declared property getter: - (float)heightForTableHeaderViewHiding;	// 0x35358e19
- (id)indexPathForRowAtGlobalRow:(int)globalRow;	// 0x35366c5d
- (id)indexPathsForRowsInRect:(CGRect)rect;	// 0x3542f8f9
- (void)invalidateAllSections;	// 0x35356569
- (void)invalidateSection:(int)section;	// 0x3556709d
- (float)maxFooterTitleWidthForSection:(int)section;	// 0x354b0c25
- (float)maxHeaderTitleWidthForSection:(int)section;	// 0x353bac69
// declared property getter: - (float)minimumRowHeight;	// 0x35358a95
- (void)moveRowAtIndexPathFrom:(id)from toIndexPath:(id)indexPath;	// 0x3544c169
- (int)numberOfRows;	// 0x35358981
- (int)numberOfRowsBeforeSection:(int)rowsBeforeSection;	// 0x35434369
- (int)numberOfRowsInSection:(int)section;	// 0x3533465d
- (int)numberOfSections;	// 0x353bebb1
- (CGRect)rectForFooterInSection:(int)section;	// 0x35356eed
- (CGRect)rectForGlobalRow:(int)globalRow;	// 0x353667a1
- (CGRect)rectForHeaderInSection:(int)section;	// 0x35371e29
- (CGRect)rectForRow:(int)row inSection:(int)section;	// 0x35366919
- (CGRect)rectForSection:(int)section;	// 0x35371b0d
- (CGRect)rectForTable;	// 0x353c0a79
- (CGRect)rectForTableFooterView;	// 0x353c6739
- (CGRect)rectForTableHeaderView;	// 0x35356a65
- (void)removeReorderGapFromIndexPath:(id)indexPath;	// 0x3544b6f5
// converted property getter: - (id)reorderedIndexPath;	// 0x353c20a1
- (int)sectionForPoint:(CGPoint)point;	// 0x35371ce1
- (int)sectionLocationForReorderedRow:(int)reorderedRow inSection:(int)section;	// 0x3544b7e9
- (int)sectionLocationForRow:(int)row inSection:(int)section;	// 0x3536f419
- (NSRange)sectionsInRect:(CGRect)rect;	// 0x353718e5
- (void)setHeightForTableHeaderViewHiding:(float)tableHeaderViewHiding;	// 0x353ba8b9
// declared property setter: - (void)setMinimumRowHeight:(float)height;	// 0x35358aa5
// converted property setter: - (void)setReorderedIndexPath:(id)path;	// 0x353e0591
// declared property setter: - (void)setTableBottomPadding:(float)padding;	// 0x354b0a95
// declared property setter: - (void)setTableSidePadding:(float)padding;	// 0x35567111
// declared property setter: - (void)setTableTopPadding:(float)padding;	// 0x353d6de9
// declared property getter: - (float)tableBottomPadding;	// 0x35567221
- (void)tableFooterHeightDidChangeToHeight:(float)tableFooterHeight;	// 0x35434321
- (void)tableHeaderHeightDidChangeToHeight:(float)tableHeaderHeight;	// 0x353568d5
// declared property getter: - (float)tableSidePadding;	// 0x35373949
// declared property getter: - (float)tableTopPadding;	// 0x35567211
- (void)tableViewWidthDidChangeToWidth:(float)tableViewWidth;	// 0x353d9055
- (id)targetIndexPathForPoint:(CGPoint)point;	// 0x3544a9b1
@end
