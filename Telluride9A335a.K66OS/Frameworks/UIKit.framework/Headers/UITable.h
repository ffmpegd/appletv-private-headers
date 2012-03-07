/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScroller.h"

@class UIFloatArray, NSMutableArray, _UITableReorderingSupport, _UITableDeleteAnimationSupport, UITableCountView;

@interface UITable : UIScroller {
	id _dataSource;	// 348 = 0x15c
	NSMutableArray *_tableColumns;	// 352 = 0x160
	SEL _doubleAction;	// 356 = 0x164
	UIFloatArray *_rowHeights;	// 360 = 0x168
	NSRange _visibleRows;	// 364 = 0x16c
	NSRange _visibleCols;	// 372 = 0x174
	NSMutableArray *_visibleCells;	// 380 = 0x17c
	_UITableDeleteAnimationSupport *_deleteAnimationSupport;	// 384 = 0x180
	unsigned _selectedRow;	// 388 = 0x184
	unsigned _lastHighlightedRow;	// 392 = 0x188
	int _rowCount;	// 396 = 0x18c
	int _tableReloadingSuspendedCount;	// 400 = 0x190
	float _padding;	// 404 = 0x194
	UIView *_accessoryView;	// 408 = 0x198
	UITableCountView *_countLabel;	// 412 = 0x19c
	NSMutableArray *_reusableTableCells;	// 416 = 0x1a0
	int _reusableCapacity;	// 420 = 0x1a4
	NSMutableArray *_extraSeparators;	// 424 = 0x1a8
	int _swipeToDeleteRow;	// 428 = 0x1ac
	struct {
		unsigned separatorStyle : 3;
		unsigned rowDeletionEnabled : 1;
		unsigned allowSelectionDuringRowDeletion : 1;
		unsigned dataSourceHeightForRow : 1;
		unsigned dataSourceSetObjectValue : 1;
		unsigned dataShowDisclosureForRow : 1;
		unsigned dataDisclosureClickableForRow : 1;
		unsigned dataSourceWantsHints : 1;
		unsigned dataSourceCanDeleteRow : 1;
		unsigned dataSourceConfirmDeleteRow : 1;
		unsigned delegateTableSelectionDidChange : 1;
		unsigned scrollsToSelection : 1;
		unsigned reloadSkippedDuringSuspension : 1;
		unsigned reuseTableCells : 1;
		unsigned delegateUpdateVisibleCellsNote : 1;
		unsigned delegateTableRowSelected : 1;
		unsigned rowAlreadyHighlighted : 1;
		unsigned needsReload : 1;
		unsigned delegateCanSwipe : 1;
		unsigned updatingVisibleCellsManually : 1;
		unsigned scheduledUpdateVisibleCells : 1;
		unsigned warnForForcedCellUpdateDisabled : 1;
		unsigned delaySendingSelectionChanged : 1;
		unsigned dataSourceCanInsertAtRow : 1;
		unsigned shouldDisplayTopSeparator : 1;
		unsigned displayTopSeparator : 1;
		unsigned needToAdjustExtraSeparators : 1;
		unsigned ignoreDragSwipe : 1;
		unsigned lastHighlightedRowActive : 1;
		unsigned reloading : 1;
		unsigned countStringInsignificantRowCount : 4;
		unsigned dataSourceCanReuseCell : 1;
		unsigned reserved : 27;
	} _tableFlags;	// 432 = 0x1b0
	_UITableReorderingSupport *_reorderingSupport;	// 440 = 0x1b8
}
@property(retain) UIView *accessoryView;	// G=0x33bcca29; S=0x33bcc939; converted property
@property(retain) id dataSource;	// G=0x33bc7d85; S=0x33bc7bad; converted property
@property(assign) int deleteConfirmationRow;	// G=0x33bc9dd1; S=0x33bc9ed1; converted property
@property(assign) SEL doubleAction;	// G=0x33bc9789; S=0x33bc9779; converted property
@property(assign) float rowHeight;	// G=0x33bc8161; S=0x33bc80b5; converted property
@property(assign) int separatorStyle;	// G=0x33bcbf41; S=0x33bcbf09; converted property
@property(readonly, retain) NSMutableArray *tableColumns;	// G=0x33bc7eb1; converted property
@property(readonly, retain) NSMutableArray *visibleCells;	// G=0x33bcafcd; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x33bc75dd
- (void)_addSubview:(id)subview atTop:(BOOL)top;	// 0x33bccebd
- (void)_adjustCountLabel;	// 0x33bd435d
- (void)_adjustExtraSeparators;	// 0x33bd3f91
- (void)_adjustReusableTableCells;	// 0x33bd43f1
- (void)_animateNewCells:(id)cells bySlidingDownAmount:(float)amount;	// 0x33bd1671
- (void)_animateNewCells:(id)cells bySlidingUpAmount:(float)amount;	// 0x33bd1521
- (void)_animateRemovalOfCell:(id)cell atRow:(int)row col:(int)col viaEdge:(int)edge withAmountToSlideUp:(float *)slideUp;	// 0x33bd1179
- (void)_animateRemovalOfVisibleRows:(id)visibleRows viaEdge:(int)edge withAmountToSlideUp:(float *)slideUp;	// 0x33bd1341
- (void)_animateRowsForDeletionOfRow:(int)row withSep:(id)sep;	// 0x33bcffcd
- (void)_autoscroll:(id)autoscroll;	// 0x33bcd591
- (void)_beginReorderingForCell:(id)cell;	// 0x33bcd081
- (BOOL)_checkCanSelectRow:(int)row view:(id)view;	// 0x33bcc2e9
- (unsigned)_countStringRowCount;	// 0x33bd42d9
- (void)_delaySendSelectionDidChange;	// 0x33bcb6b9
- (void)_deleteRowAlertDidEndContinuation:(id)_deleteRowAlert;	// 0x33bcfdf9
- (void)_deleteRowAlertDidEndWithResult:(BOOL)_deleteRowAlert contextInfo:(id)info;	// 0x33bcfd31
- (void)_didDeleteRowForTableCell:(id)tableCell;	// 0x33bd3c9d
- (void)_didInsertRowForTableCell:(id)tableCell;	// 0x33bd3ca1
- (void)_disableInteraction;	// 0x33bca295
- (void)_enableAndRestoreTableStateAfterAnimation;	// 0x33bd3c01
- (void)_enableInteraction;	// 0x33bca2b5
- (void)_enableRowDeletion:(BOOL)deletion forCell:(id)cell atRow:(int)row allowInsert:(BOOL)insert allowReorder:(BOOL)reorder animated:(BOOL)animated;	// 0x33bc9b95
- (void)_endCellReorderAnimation;	// 0x33bce259
- (void)_endReorderingForCell:(id)cell;	// 0x33bce771
- (void)_fadeCellOutAnimationDidStop:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x33bd2361
- (void)_finishedAnimatingCellReorder:(id)reorder finished:(id)finished context:(id)context;	// 0x33bce199
- (void)_finishedRemovingRemovalButtonForTableCell:(id)tableCell;	// 0x33bd3c31
- (void)_getRowCount:(int *)count andHeight:(float *)height beforeVisibleCellsForRows:(id)rows;	// 0x33bd1081
- (float)_partOfRow:(int)row thatIsHidden:(BOOL)hidden;	// 0x33bd17c1
- (CGRect)_rectOfRow:(int)row usingRowHeights:(id)heights;	// 0x33bcad09
- (void)_reloadRowHeights;	// 0x33bccddd
- (void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x33bca281
- (int)_removeFromVisibleRows:(id)visibleRows;	// 0x33bd0f51
- (void)_reorderPositionChangedForCell:(id)cell;	// 0x33bcd859
- (void)_restoreTableStateAfterAnimation;	// 0x33bd0e1d
- (id)_resuableObjectForTableCell:(id)tableCell;	// 0x33bca775
- (void)_resumeReloads;	// 0x33bcfc3d
- (int)_rowForTableCell:(id)tableCell;	// 0x33bcfca1
- (void)_saveTableStateBeforeAnimationForRow:(int)row;	// 0x33bd0d71
- (void)_scheduleAdjustExtraSeparators;	// 0x33bd3f59
- (id)_scriptingInfo;	// 0x33bd4549
- (void)_selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade scrollingToVisible:(BOOL)visible withSelectionNotifications:(BOOL)selectionNotifications;	// 0x33bcb83d
- (void)_sendSelectionDidChange;	// 0x33bcb61d
- (void)_setNeedsVisibleCellsUpdate:(BOOL)update;	// 0x33bceae9
- (void)_setRowCount:(int)count;	// 0x33bd4305
- (BOOL)_shouldDeleteRowForTableCell:(id)tableCell;	// 0x33bcfe5d
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x33bd3f55
- (void)_stopAutoscrollTimer;	// 0x33bcd025
- (void)_suspendReloads;	// 0x33bcfc29
- (void)_tableCellAnimationDidStop:(id)_tableCellAnimation finished:(id)finished;	// 0x33bce761
- (void)_updateContentSize;	// 0x33bccc31
- (void)_updateOriginOfCells:(NSRange)cells;	// 0x33bc82cd
- (void)_updateVisibleCellsImmediatelyIfNecessary;	// 0x33bcfbf9
- (void)_updateVisibleCellsNow;	// 0x33bcee9d
- (BOOL)_userCanDeleteRows;	// 0x33bc9b65
- (void)_userSelectRow:(int)row;	// 0x33bcb5ad
- (void)_willDeleteRow:(int)row forTableCell:(id)tableCell viaEdge:(int)edge animateOthers:(BOOL)others;	// 0x33bd33b9
// converted property getter: - (id)accessoryView;	// 0x33bcca29
- (void)addTableColumn:(id)column;	// 0x33bc7f61
- (UIEdgeInsets)adornmentMargins;	// 0x33bcbff9
- (void)animateDeletionOfCellAtRow:(int)row column:(int)column viaEdge:(int)edge;	// 0x33bc998d
- (void)animateDeletionOfRowWithCell:(id)cell;	// 0x33bc9ab1
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge;	// 0x33bc9a8d
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge animatingOthersUp:(BOOL)up;	// 0x33bc9a41
- (float)animationDuration;	// 0x33bc87d1
- (BOOL)canDeleteRow:(int)row;	// 0x33bc9ac9
- (BOOL)canHandleSwipes;	// 0x33bceb41
- (BOOL)canInsertAtRow:(int)row;	// 0x33bc9b0d
- (BOOL)canSelectRow:(int)row;	// 0x33bcc28d
- (BOOL)cancelMouseTracking;	// 0x33bcb74d
- (BOOL)cancelTouchTracking;	// 0x33bcb7b9
- (id)cellAtRow:(int)row column:(int)column;	// 0x33bca515
- (void)clearAllData;	// 0x33bc829d
- (int)columnAtPoint:(CGPoint)point;	// 0x33bcaf65
- (int)columnWithIdentifier:(id)identifier;	// 0x33bc7fe5
- (NSRange)columnsInRect:(CGRect)rect;	// 0x33bcae5d
- (void)completeRowDeletionAnimation;	// 0x33bc9ac5
- (void)contentMouseUpInView:(id)view withEvent:(GSEventRef)event;	// 0x33bcc361
- (id)createPreparedCellForRow:(int)row column:(int)column;	// 0x33bca779
// converted property getter: - (id)dataSource;	// 0x33bc7d85
- (id)dataSourceCreateCellForRow:(int)row column:(int)column reusing:(id)reusing;	// 0x33bca699
- (int)dataSourceGetRowCount;	// 0x33bc7ee1
- (BOOL)dataSourceSupportsVariableRowHeights;	// 0x33bc7f01
- (void)dealloc;	// 0x33bc7779
// converted property getter: - (int)deleteConfirmationRow;	// 0x33bc9dd1
- (void)deleteRows:(id)rows viaEdge:(int)edge;	// 0x33bd1881
- (void)deleteRows:(id)rows viaEdge:(int)edge animated:(BOOL)animated;	// 0x33bd1871
// converted property getter: - (SEL)doubleAction;	// 0x33bc9789
- (void)drawExtraSeparator:(CGRect)separator;	// 0x33bcca39
- (void)enableRowDeletion:(BOOL)deletion;	// 0x33bc9b51
- (void)enableRowDeletion:(BOOL)deletion animated:(BOOL)animated;	// 0x33bca095
- (void)floatArray:(id)array getValueCount:(int *)count gapIndexCount:(int *)count3;	// 0x33bccdbd
- (BOOL)floatArray:(id)array loadValues:(float *)values count:(int)count;	// 0x33bccd45
- (CGRect)frameOfCellAtColumn:(int)column row:(int)row;	// 0x33bca41d
- (CGRect)frameOfCellAtRow:(int)row column:(int)column;	// 0x33bca3ed
- (BOOL)getRow:(int *)row column:(int *)column ofTableCell:(id)tableCell;	// 0x33bcb095
- (BOOL)highlightNextRowByDelta:(int)delta;	// 0x33bcbd91
- (BOOL)highlightRow:(int)row;	// 0x33bcbd45
- (void)highlightView:(id)view state:(BOOL)state;	// 0x33bcc715
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x33bcc109
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33bcc251
- (void)insertRows:(id)rows deleteRows:(id)rows2 reloadRows:(id)rows3;	// 0x33bd23f5
- (BOOL)isRowDeletionEnabled;	// 0x33bca2d5
- (int)lastHighlightedRow;	// 0x33bcbd35
- (void)layoutSubviews;	// 0x33bccf59
- (void)mouseDown:(GSEventRef)down;	// 0x33bd3d09
- (void)mouseDragged:(GSEventRef)dragged;	// 0x33bd3d4d
- (void)noteNumberOfRowsChanged;	// 0x33bc963d
- (int)numberOfColumns;	// 0x33bc7ec1
- (int)numberOfRows;	// 0x33bc7f15
- (UIEdgeInsets)pressedAdornmentMargins;	// 0x33bcc081
- (CGRect)rectOfColumn:(int)column;	// 0x33bcace5
- (CGRect)rectOfRow:(int)row;	// 0x33bcaddd
- (CGRect)rectOfViewAtColumn:(int)column row:(int)row;	// 0x33bca44d
- (void)reloadCellAtRow:(int)row column:(int)column animated:(BOOL)animated;	// 0x33bc85b9
- (void)reloadData;	// 0x33bc93e5
- (void)reloadDataForInsertionOfRows:(NSRange)rows;	// 0x33bc8595
- (void)reloadDataForInsertionOfRows:(NSRange)rows animated:(BOOL)animated;	// 0x33bc87dd
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x33bca005
- (void)removeFromSuperview;	// 0x33bcb6e9
- (void)removeTableColumn:(id)column;	// 0x33bc7fc5
- (int)rowAtPoint:(CGPoint)point;	// 0x33bcaf6d
// converted property getter: - (float)rowHeight;	// 0x33bc8161
- (NSRange)rowsInRect:(CGRect)rect;	// 0x33bcae69
- (void)scrollAndCenterTableCell:(id)cell animated:(BOOL)animated;	// 0x33bccab5
- (void)scrollRowToVisible:(int)visible;	// 0x33bc81b5
- (void)selectCell:(id)cell inRow:(int)row column:(int)column withFade:(BOOL)fade;	// 0x33bcb825
- (BOOL)selectHighlightedRow;	// 0x33bcbe5d
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection;	// 0x33bcb5e9
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade;	// 0x33bcbcd1
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade scrollingToVisible:(BOOL)visible;	// 0x33bcbc8d
- (int)selectedRow;	// 0x33bcbd25
// converted property getter: - (int)separatorStyle;	// 0x33bcbf41
// converted property setter: - (void)setAccessoryView:(id)view;	// 0x33bcc939
- (void)setAllowSelectionDuringRowDeletion:(BOOL)deletion;	// 0x33bca2e9
- (void)setAllowsReordering:(BOOL)reordering;	// 0x33bca585
- (void)setCountString:(id)string;	// 0x33bc9809
- (void)setCountStringInsignificantRowCount:(unsigned)count;	// 0x33bc9799
// converted property setter: - (void)setDataSource:(id)source;	// 0x33bc7bad
- (void)setDelegate:(id)delegate;	// 0x33bc7d95
// converted property setter: - (void)setDeleteConfirmationRow:(int)row;	// 0x33bc9ed1
// converted property setter: - (void)setDoubleAction:(SEL)action;	// 0x33bc9779
- (void)setFrame:(CGRect)frame;	// 0x33bcb32d
- (void)setNeedsDisplayInRowRange:(NSRange)rowRange;	// 0x33bc96a9
- (void)setOffset:(CGPoint)offset;	// 0x33bcb199
- (void)setPadding:(float)padding;	// 0x33bcbf55
- (void)setResusesTableCells:(BOOL)cells;	// 0x33bcca6d
- (void)setReusesTableCells:(BOOL)cells;	// 0x33bcca7d
// converted property setter: - (void)setRowHeight:(float)height;	// 0x33bc80b5
- (void)setScrollsToSelection:(BOOL)selection;	// 0x33bcbef1
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x33bcbf09
- (BOOL)shouldDelaySendingSelectionChanged;	// 0x33bcbd0d
- (BOOL)shouldIndentRow:(int)row;	// 0x33bca71d
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x33bceb45
- (id)tableColumnWithIdentifier:(id)identifier;	// 0x33bc806d
// converted property getter: - (id)tableColumns;	// 0x33bc7eb1
- (void)updateDisclosures;	// 0x33bca301
- (BOOL)validateDataSource;	// 0x33bc7b2d
- (id)viewAtColumn:(int)column row:(int)row;	// 0x33bca4fd
- (id)visibleCellForRow:(int)row column:(int)column;	// 0x33bcaffd
// converted property getter: - (id)visibleCells;	// 0x33bcafcd
- (id)visibleCellsWithoutUpdatingLayout;	// 0x33bcafbd
- (NSRange)visibleRowsInRect:(CGRect)rect;	// 0x33bcb15d
@end

