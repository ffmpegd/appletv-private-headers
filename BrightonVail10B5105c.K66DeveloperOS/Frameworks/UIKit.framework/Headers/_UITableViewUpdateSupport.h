/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableIndexSet, UITableView, NSMutableArray, NSArray, UITableViewRowData;

__attribute__((visibility("hidden")))
@interface _UITableViewUpdateSupport : NSObject {
	int oldSection;	// 4 = 0x4
	int newSection;	// 8 = 0x8
	int oldGlobalRow;	// 12 = 0xc
	int newGlobalRow;	// 16 = 0x10
	UITableView *tableView;	// 20 = 0x14
	NSRange visibleRows;	// 24 = 0x18
	NSArray *updateItems;	// 32 = 0x20
	UITableViewRowData *oldRowData;	// 36 = 0x24
	UITableViewRowData *newRowData;	// 40 = 0x28
	NSRange oldRowRange;	// 44 = 0x2c
	NSRange newRowRange;	// 52 = 0x34
	NSMutableIndexSet *rows;	// 60 = 0x3c
	NSMutableIndexSet *movedRows;	// 64 = 0x40
	NSMutableIndexSet *movedSections;	// 68 = 0x44
	CGRect oldTableViewVisibleBounds;	// 72 = 0x48
	CGRect newTableViewVisibleBounds;	// 88 = 0x58
	CGRect tableViewVisibleBoundsUnion;	// 104 = 0x68
	float tableViewVisibleBoundsOffset;	// 120 = 0x78
	int oldSectionCount;	// 124 = 0x7c
	int newSectionCount;	// 128 = 0x80
	int *oldSectionMap;	// 132 = 0x84
	int *newSectionMap;	// 136 = 0x88
	int oldGlobalRowCount;	// 140 = 0x8c
	int newGlobalRowCount;	// 144 = 0x90
	int *oldGlobalRowMap;	// 148 = 0x94
	int *newGlobalRowMap;	// 152 = 0x98
	id *animatedCells;	// 156 = 0x9c
	id *animatedHeaders;	// 160 = 0xa0
	id *animatedFooters;	// 164 = 0xa4
	int globalReorderingRow;	// 168 = 0xa8
	id _context;	// 172 = 0xac
	NSMutableArray *viewAnimations;	// 176 = 0xb0
	NSMutableArray *deletedSections;	// 180 = 0xb4
	NSMutableArray *insertedSections;	// 184 = 0xb8
	NSMutableArray *gaps;	// 188 = 0xbc
}
- (id)initWithTableView:(id)tableView updateItems:(id)items oldRowData:(id)data newRowData:(id)data4 oldRowRange:(NSRange)range newRowRange:(NSRange)range6 context:(id)context;	// 0x34572cb5
- (void)_addBottomShadowViewViewForViewAnimation:(id)viewAnimation;	// 0x347e41d1
- (void)_computeAutomaticAnimationTypes;	// 0x34575ccd
- (void)_computeGaps;	// 0x34575865
- (void)_computeRowUpdates;	// 0x345734f9
- (void)_computeSectionUpdates;	// 0x34572e51
- (void)_computeVisibleBounds;	// 0x34575121
- (id)_imageViewForView:(id)view;	// 0x34709971
- (BOOL)_isReloadSectionUpdate;	// 0x347094ed
- (void)_setupAnimationForReorderingRow;	// 0x345782c9
- (void)_setupAnimationForTableFooter;	// 0x3457bc39
- (void)_setupAnimationForTableHeader;	// 0x3457b9f1
- (void)_setupAnimationStructures;	// 0x34575751
- (void)_setupAnimations;	// 0x34575019
- (void)_setupAnimationsForDeletedCells;	// 0x3457c0a1
- (void)_setupAnimationsForDeletedHeadersAndFooters;	// 0x3457d1e9
- (void)_setupAnimationsForExistingHeadersAndFooters;	// 0x3457a549
- (void)_setupAnimationsForExistingOffscreenCells;	// 0x34579ff5
- (void)_setupAnimationsForExistingVisibleCells;	// 0x345768c1
- (void)_setupAnimationsForInsertedHeadersAndFooters;	// 0x34579721
- (void)_setupAnimationsForNewlyInsertedCells;	// 0x34578439
- (void)_setupDeleteAnimationForFooterInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;	// 0x347095ad
- (void)_setupDeleteAnimationForHeaderInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;	// 0x34709129
- (void)_setupInsertAnimationForFooterInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;	// 0x34708d15
- (void)_setupInsertAnimationForHeaderInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;	// 0x34708901
- (void)_validateAnimatedCells;	// 0x347e3cd1
- (void)dealloc;	// 0x345d02cd
@end

