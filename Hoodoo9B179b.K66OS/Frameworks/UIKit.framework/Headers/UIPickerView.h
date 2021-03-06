/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UITableViewDataSource.h"
#import "UIView.h"

@class NSMutableArray;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;

@interface UIPickerView : UIView <NSCoding, UITableViewDataSource> {
@private
	NSMutableArray *_tables;	// 48 = 0x30
	UIView *_topFrame;	// 52 = 0x34
	NSMutableArray *_dividers;	// 56 = 0x38
	NSMutableArray *_selectionBars;	// 60 = 0x3c
	id<UIPickerViewDataSource> _dataSource;	// 64 = 0x40
	id<UIPickerViewDelegate> _delegate;	// 68 = 0x44
	UIView *_backgroundView;	// 72 = 0x48
	int _numberOfComponents;	// 76 = 0x4c
	struct {
		unsigned needsLayout : 1;
		unsigned delegateRespondsToNumberOfComponentsInPickerView : 1;
		unsigned delegateRespondsToNumberOfRowsInComponent : 1;
		unsigned delegateRespondsToDidSelectRow : 1;
		unsigned delegateRespondsToViewForRow : 1;
		unsigned delegateRespondsToTitleForRow : 1;
		unsigned delegateRespondsToWidthForComponent : 1;
		unsigned delegateRespondsToRowHeightForComponent : 1;
		unsigned delegateRespondsToCheckableForRow : 1;
		unsigned showsSelectionBar : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowSelectingCells : 1;
		unsigned soundsDisabled : 1;
		unsigned usesCheckedSelection : 1;
	} _pickerViewFlags;	// 80 = 0x50
}
@property(assign) BOOL allowsMultipleSelection;	// G=0x33067d55; S=0x33067cb9; converted property
@property(assign, nonatomic) id<UIPickerViewDataSource> dataSource;	// G=0x33067df9; S=0x33045d29; @synthesize=_dataSource
@property(assign, nonatomic) id<UIPickerViewDelegate> delegate;	// G=0x33067e09; S=0x33045b81; @synthesize=_delegate
@property(readonly, assign, nonatomic) int numberOfComponents;	// G=0x33046dd5; @synthesize=_numberOfComponents
@property(assign, nonatomic) BOOL showsSelectionIndicator;	// G=0x33067ca5; S=0x33067c5d; 
+ (CGSize)defaultSizeForCurrentOrientation;	// 0x33044e4d
+ (CGSize)sizeForCurrentOrientationThatFits:(CGSize)currentOrientationThatFits;	// 0x33045495
+ (CGSize)sizeThatFits:(CGSize)fits forInterfaceOrientation:(int)interfaceOrientation;	// 0x330454ed
- (id)init;	// 0x33067445
- (id)initWithCoder:(id)coder;	// 0x33067479
- (id)initWithFrame:(CGRect)frame;	// 0x3304536d
- (id)_createTableWithFrame:(CGRect)frame forComponent:(int)component;	// 0x33049f45
- (id)_createViewForPickerPiece:(int)pickerPiece;	// 0x33047fcd
- (int)_delegateNumberOfComponents;	// 0x33046461
- (int)_delegateNumberOfRowsInComponent:(int)component;	// 0x3304a61d
- (float)_delegateRowHeightForComponent:(int)component;	// 0x3304a409
- (id)_delegateTitleForRow:(int)row forComponent:(int)component;	// 0x330678e9
- (float)_delegateWidthForComponent:(int)component ofCount:(int)count withSizeLeft:(float)sizeLeft;	// 0x33048715
- (BOOL)_isLandscapeOrientation;	// 0x3304844d
- (id)_orientationImageSuffix;	// 0x3304831d
- (id)_popoverSuffix;	// 0x3304854d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33067549
- (void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;	// 0x33046e69
- (CGRect)_selectionBarRectForHeight:(float)height;	// 0x3304a469
- (id)_selectionBarSuffix;	// 0x3304851d
- (void)_sendCheckedRow:(int)row inTableView:(id)tableView checked:(BOOL)checked;	// 0x3306785d
- (void)_sendSelectionChangedForComponent:(int)component;	// 0x330507cd
- (void)_sendSelectionChangedFromTable:(id)table;	// 0x33050719
- (void)_setUsesCheckedSelection:(BOOL)selection;	// 0x33067d69
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x33046541
- (BOOL)_soundsEnabled;	// 0x33050171
- (float)_tableRowHeight;	// 0x330673ed
- (void)_updateSound;	// 0x3304f6d5
- (BOOL)_usesCheckSelection;	// 0x3304cbbd
- (BOOL)_usesCheckedSelection;	// 0x33067d8d
- (float)_wheelShift;	// 0x33049c21
// converted property getter: - (BOOL)allowsMultipleSelection;	// 0x33067d55
- (int)columnForTableView:(id)tableView;	// 0x3304b0b9
- (id)createDividerWithFrame:(CGRect)frame;	// 0x33049c61
// declared property getter: - (id)dataSource;	// 0x33067df9
- (void)dealloc;	// 0x3305382d
- (CGSize)defaultSize;	// 0x330672cd
// declared property getter: - (id)delegate;	// 0x33067e09
- (void)didMoveToWindow;	// 0x3304f695
- (void)encodeWithCoder:(id)coder;	// 0x3306768d
- (id)imageForPickerPiece:(int)pickerPiece;	// 0x330480b5
- (BOOL)isAccessibilityElementByDefault;	// 0x33149625
- (void)layoutSubviews;	// 0x330470fd
- (int)numberOfColumns;	// 0x33067a15
// declared property getter: - (int)numberOfComponents;	// 0x33046dd5
- (int)numberOfRowsInColumn:(int)column;	// 0x33067a05
- (int)numberOfRowsInComponent:(int)component;	// 0x3304e9a1
- (id)pickerImageNamePrefix;	// 0x33048311
- (void)reload;	// 0x330677c1
- (void)reloadAllComponents;	// 0x330463c9
- (void)reloadAllPickerPieces;	// 0x330511e1
- (void)reloadComponent:(int)component;	// 0x330677f1
- (void)reloadData;	// 0x330677d1
- (void)reloadDataForColumn:(int)column;	// 0x330677e1
- (CGSize)rowSizeForComponent:(int)component;	// 0x33067931
- (double)scrollAnimationDuration;	// 0x330678d5
- (void)selectRow:(int)row inColumn:(int)column animated:(BOOL)animated;	// 0x33067dd5
- (void)selectRow:(int)row inComponent:(int)component animated:(BOOL)animated;	// 0x33067db1
- (int)selectedRowForColumn:(int)column;	// 0x33067da1
- (int)selectedRowInComponent:(int)component;	// 0x3304da55
// converted property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x33067cb9
- (void)setAlpha:(float)alpha;	// 0x33067781
- (void)setBounds:(CGRect)bounds;	// 0x33067b19
// declared property setter: - (void)setDataSource:(id)source;	// 0x33045d29
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33045b81
- (void)setFrame:(CGRect)frame;	// 0x33045699
- (void)setHidden:(BOOL)hidden;	// 0x33067741
- (void)setNeedsLayout;	// 0x330458f9
// declared property setter: - (void)setShowsSelectionIndicator:(BOOL)indicator;	// 0x33067c5d
- (void)setSoundsEnabled:(BOOL)enabled;	// 0x33067419
// declared property getter: - (BOOL)showsSelectionIndicator;	// 0x33067ca5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3306783d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3304ad3d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3304a559
- (id)tableViewForColumn:(int)column;	// 0x33050151
- (id)viewForRow:(int)row forComponent:(int)component;	// 0x3304e5e9
- (NSRange)visibleRowsForColumn:(int)column;	// 0x3304e5a1
@end

