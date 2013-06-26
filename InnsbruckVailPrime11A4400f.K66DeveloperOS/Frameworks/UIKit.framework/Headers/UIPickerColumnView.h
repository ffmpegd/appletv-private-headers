/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIPickerTableViewContainerDelegate.h"
#import "UIView.h"
#import "UIKit-Structs.h"
#import "UITableViewDataSource.h"

@class UIColor, UIPickerTableView, UIPickerView;

__attribute__((visibility("hidden")))
@interface UIPickerColumnView : UIView <UIPickerTableViewContainerDelegate, UITableViewDataSource> {
	UIPickerTableView *_topTable;	// 96 = 0x60
	UIPickerTableView *_middleTable;	// 100 = 0x64
	UIPickerTableView *_bottomTable;	// 104 = 0x68
	UIView *_topContainerView;	// 108 = 0x6c
	UIView *_middleContainerView;	// 112 = 0x70
	UIView *_bottomContainerView;	// 116 = 0x74
	float _middleBarHeight;	// 120 = 0x78
	float _rowHeight;	// 124 = 0x7c
	UIPickerView *_pickerView;	// 128 = 0x80
	CGRect _tableFrame;	// 132 = 0x84
	CATransform3D _perspectiveTransform;	// 148 = 0x94
	UIColor *__textColor;	// 212 = 0xd4
}
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;	// G=0x2f8c6c45; S=0x2f8c6c55; @synthesize=__textColor
@property(assign, nonatomic) CATransform3D perspectiveTransform;	// G=0x2f8c6b95; S=0x2f8c6bd9; @synthesize=_perspectiveTransform
@property(assign, nonatomic) float rowHeight;	// G=0x2f8c6b85; S=0x2f8c66dd; @synthesize=_rowHeight
@property(assign, nonatomic) CGRect selectionBarRect;	// G=0x2f8c657d; S=0x2f8c6475; 
@property(readonly, assign, nonatomic) int selectionBarRow;	// G=0x2f8c6455; 
- (id)initWithFrame:(CGRect)frame tableFrame:(CGRect)frame2 middleBarHeight:(float)height rowHeight:(float)height4 pickerView:(id)view transform:(CATransform3D)transform;	// 0x2f8c5d39
- (void)_centerTableInContainer:(id)container;	// 0x2f8c5ad1
- (BOOL)_containsTable:(id)table;	// 0x2f8c623d
- (id)_createContainerViewWithFrame:(CGRect)frame;	// 0x2f8c5b89
- (id)_createTableViewWithFrame:(CGRect)frame;	// 0x2f8c5a21
- (float)_horizontalBiasForEndTables;	// 0x2f8c62e1
- (void)_moveTableViewIfNecessary:(id)necessary toContentOffset:(CGPoint)contentOffset;	// 0x2f8c6889
- (void)_pickerTableViewDidChangeContentOffset:(id)_pickerTableView;	// 0x2f8c68f9
- (id)_preferredTable;	// 0x2f8c62b5
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)selectionBar animated:(BOOL)animated;	// 0x2f8c6429
- (void)_sendCheckedRow:(int)row inTableView:(id)tableView checked:(BOOL)checked;	// 0x2f8c65ad
- (void)_sendSelectionChangedFromTable:(id)table;	// 0x2f8c6601
// declared property setter: - (void)_setTextColor:(id)color;	// 0x2f8c6c55
- (BOOL)_soundsEnabled;	// 0x2f8c6655
- (CGRect)_tableFrame;	// 0x2f8c62c5
// declared property getter: - (id)_textColor;	// 0x2f8c6c45
- (CATransform3D)_transformForTableWithTranslationX:(float)translationX;	// 0x2f8c5be9
- (BOOL)_usesCheckSelection;	// 0x2f8c6679
- (NSRange)_visibleGlobalRows;	// 0x2f8c6acd
- (void)beginUpdates;	// 0x2f8c6789
- (id)cellForRowAtIndexPath:(id)indexPath;	// 0x2f8c66bd
- (void)clearDataSourceAndDelegate;	// 0x2f8c64f1
- (void)endUpdates;	// 0x2f8c67dd
- (BOOL)isRowChecked:(int)checked;	// 0x2f8c6401
- (int)numberOfRowsInSection:(int)section;	// 0x2f8c669d
// declared property getter: - (CATransform3D)perspectiveTransform;	// 0x2f8c6b95
- (void)pickerTableView:(id)view didChangeSelectionBarRowFrom:(int)from to:(int)to;	// 0x2f8c6a45
- (void)reloadData;	// 0x2f8c6735
// declared property getter: - (float)rowHeight;	// 0x2f8c6b85
- (BOOL)selectRow:(int)row animated:(BOOL)animated notify:(BOOL)notify;	// 0x2f8c63c9
// declared property getter: - (CGRect)selectionBarRect;	// 0x2f8c657d
// declared property getter: - (int)selectionBarRow;	// 0x2f8c6455
- (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x2f8c6831
// declared property setter: - (void)setPerspectiveTransform:(CATransform3D)transform;	// 0x2f8c6bd9
// declared property setter: - (void)setRowHeight:(float)height;	// 0x2f8c66dd
// declared property setter: - (void)setSelectionBarRect:(CGRect)rect;	// 0x2f8c6475
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x2f8c6b1d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x2f8c6afd
@end
