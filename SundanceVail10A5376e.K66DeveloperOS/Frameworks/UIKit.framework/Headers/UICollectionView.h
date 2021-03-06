/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class NSMutableDictionary, UITouch, NSMutableArray, NSIndexPath, NSMutableSet, NSArray, UICollectionViewLayout, UICollectionReusableView, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDataSource;

@interface UICollectionView : UIScrollView {
	UICollectionViewLayout *_layout;	// 464 = 0x1d0
	id<UICollectionViewDataSource> _dataSource;	// 468 = 0x1d4
	UIView *_backgroundView;	// 472 = 0x1d8
	NSMutableSet *_indexPathsForSelectedItems;	// 476 = 0x1dc
	NSMutableDictionary *_cellReuseQueues;	// 480 = 0x1e0
	NSMutableDictionary *_supplementaryViewReuseQueues;	// 484 = 0x1e4
	NSMutableSet *_indexPathsForHighlightedItems;	// 488 = 0x1e8
	int _reloadingSuspendedCount;	// 492 = 0x1ec
	UICollectionReusableView *_firstResponderView;	// 496 = 0x1f0
	UIView *_newContentView;	// 500 = 0x1f4
	int _firstResponderViewType;	// 504 = 0x1f8
	NSString *_firstResponderViewKind;	// 508 = 0x1fc
	NSIndexPath *_firstResponderIndexPath;	// 512 = 0x200
	NSMutableDictionary *_allVisibleViewsDict;	// 516 = 0x204
	NSIndexPath *_pendingSelectionIndexPath;	// 520 = 0x208
	NSMutableSet *_pendingDeselectionIndexPaths;	// 524 = 0x20c
	id _collectionViewData;	// 528 = 0x210
	id _update;	// 532 = 0x214
	CGRect _visibleBounds;	// 536 = 0x218
	CGRect _preRotationBounds;	// 552 = 0x228
	CGPoint _rotationBoundsOffset;	// 568 = 0x238
	int _rotationAnimationCount;	// 576 = 0x240
	int _updateCount;	// 580 = 0x244
	NSMutableArray *_insertItems;	// 584 = 0x248
	NSMutableArray *_deleteItems;	// 588 = 0x24c
	NSMutableArray *_reloadItems;	// 592 = 0x250
	NSMutableArray *_moveItems;	// 596 = 0x254
	NSArray *_originalInsertItems;	// 600 = 0x258
	NSArray *_originalDeleteItems;	// 604 = 0x25c
	UITouch *_currentTouch;	// 608 = 0x260
	id _updateCompletionHandler;	// 612 = 0x264
	NSMutableDictionary *_cellClassDict;	// 616 = 0x268
	NSMutableDictionary *_cellNibDict;	// 620 = 0x26c
	NSMutableDictionary *_supplementaryViewClassDict;	// 624 = 0x270
	NSMutableDictionary *_supplementaryViewNibDict;	// 628 = 0x274
	NSMutableDictionary *_cellNibExternalObjectsTables;	// 632 = 0x278
	NSMutableDictionary *_supplementaryViewNibExternalObjectsTables;	// 636 = 0x27c
	struct {
		unsigned delegateShouldHighlightItemAtIndexPath : 1;
		unsigned delegateDidHighlightItemAtIndexPath : 1;
		unsigned delegateDidUnhighlightItemAtIndexPath : 1;
		unsigned delegateShouldSelectItemAtIndexPath : 1;
		unsigned delegateShouldDeselectItemAtIndexPath : 1;
		unsigned delegateDidSelectItemAtIndexPath : 1;
		unsigned delegateDidDeselectItemAtIndexPath : 1;
		unsigned delegateSupportsMenus : 1;
		unsigned delegateDidEndDisplayingCell : 1;
		unsigned delegateDidEndDisplayingSupplementaryView : 1;
		unsigned dataSourceNumberOfSections : 1;
		unsigned dataSourceViewForSupplementaryElement : 1;
		unsigned reloadSkippedDuringSuspension : 1;
		unsigned scheduledUpdateVisibleCells : 1;
		unsigned scheduledUpdateVisibleCellLayoutAttributes : 1;
		unsigned allowsSelection : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned updating : 1;
		unsigned fadeCellsForBoundsChange : 1;
		unsigned updatingLayout : 1;
		unsigned needsReload : 1;
		unsigned reloading : 1;
		unsigned skipLayoutDuringSnapshotting : 1;
		unsigned layoutInvalidatedSinceLastCellUpdate : 1;
		unsigned doneFirstLayout : 1;
	} _collectionViewFlags;	// 640 = 0x280
	CGPoint _lastLayoutOffset;	// 644 = 0x284
}
@property(assign, nonatomic) BOOL allowsMultipleSelection;	// G=0x30623c89; S=0x30623769; 
@property(assign, nonatomic) BOOL allowsSelection;	// G=0x30623755; S=0x30623701; 
@property(retain, nonatomic) UIView *backgroundView;	// G=0x30630541; S=0x3062f32d; @synthesize=_backgroundView
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout;	// G=0x30630521; S=0x30627585; @synthesize=_layout
@property(retain, nonatomic, getter=_currentTouch, setter=_setCurrentTouch:) UITouch *currentTouch;	// G=0x30630551; S=0x30630561; @synthesize=_currentTouch
@property(assign, nonatomic) id<UICollectionViewDataSource> dataSource;	// G=0x30630531; S=0x30622f45; @synthesize=_dataSource
@property(assign, nonatomic) id<UICollectionViewDelegate> delegate;	// S=0x30622d89; @dynamic
@property(readonly, retain) NSMutableSet *indexPathsForSelectedItems;	// G=0x3062303d; converted property
+ (id)_reuseKeyForSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier;	// 0x30629531
- (id)initWithCoder:(id)coder;	// 0x30621f69
- (id)initWithFrame:(CGRect)frame;	// 0x30621cd5
- (id)initWithFrame:(CGRect)frame collectionViewLayout:(id)layout;	// 0x30621d01
- (void)_addControlledSubview:(id)subview atZIndex:(int)zindex;	// 0x30624309
- (void)_addEntriesFromDictionary:(id)dictionary inDictionary:(id)dictionary2;	// 0x3062296d
- (void)_addEntriesFromDictionary:(id)dictionary inDictionary:(id)dictionary2 andSet:(id)set;	// 0x306227a9
- (id)_arrayForUpdateAction:(int)updateAction;	// 0x3062a831
- (void)_beginUpdates;	// 0x3062f1a5
- (BOOL)_canPerformAction:(SEL)action forCell:(id)cell sender:(id)sender;	// 0x30630431
- (void)_cancelTouches;	// 0x3062ffb5
- (void)_cellMenuDismissed;	// 0x30630511
- (id)_collectionViewData;	// 0x306231c9
- (CGPoint)_contentOffsetForNewFrame:(CGRect)newFrame oldFrame:(CGRect)frame newContentSize:(CGSize)size andOldContentSize:(CGSize)size4;	// 0x30630189
- (id)_createPreparedCellForItemAtIndexPath:(id)indexPath withLayoutAttributes:(id)layoutAttributes;	// 0x30624cd1
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)kind atIndexPath:(id)indexPath withLayoutAttributes:(id)layoutAttributes;	// 0x30624fb1
// declared property getter: - (id)_currentTouch;	// 0x30630551
- (id)_currentUpdate;	// 0x3062a821
- (BOOL)_dataSourceImplementsNumberOfSections;	// 0x30623029
- (id)_dequeueReusableViewOfKind:(id)kind withIdentifier:(id)identifier forIndexPath:(id)indexPath;	// 0x30629bad
- (void)_deselectAllAnimated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x306231e9
- (void)_deselectItemAtIndexPath:(id)indexPath animated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x306235bd
- (id)_doubleSidedAnimationsForView:(id)view withStartingLayoutAttributes:(id)startingLayoutAttributes endingLayoutAttributes:(id)attributes withAnimationSetup:(id)animationSetup animationCompletion:(id)completion;	// 0x30626c55
- (void)_endItemAnimations;	// 0x3062ae05
- (void)_endUpdates;	// 0x3062f1d9
- (BOOL)_highlightItemAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position notifyDelegate:(BOOL)delegate;	// 0x306239c5
- (id)_indexPathForView:(id)view ofType:(unsigned)type;	// 0x30628a2d
- (void)_invalidateLayout;	// 0x3062f3c5
- (id)_keysForObject:(id)object inDictionary:(id)dictionary;	// 0x30622991
- (id)_layoutAttributesForItemsInRect:(CGRect)rect;	// 0x30623079
- (id)_objectInDictionary:(id)dictionary forKind:(id)kind indexPath:(id)path;	// 0x306226e1
- (void)_performAction:(SEL)action forCell:(id)cell sender:(id)sender;	// 0x306304a1
- (void)_prepareLayoutForUpdates;	// 0x3062cc95
- (void)_reloadDataIfNeeded;	// 0x30622fe9
- (void)_resumeReloads;	// 0x30623cb5
- (void)_reuseCell:(id)cell;	// 0x3062a3d5
- (void)_reuseSupplementaryView:(id)view;	// 0x3062a68d
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x30630121
- (void)_scrollViewWillEndDraggingWithVelocity:(CGPoint)_scrollView targetContentOffset:(inout CGPoint *)offset;	// 0x30629569
- (void)_selectAllSelectedItems;	// 0x3062fed9
- (void)_selectItemAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(unsigned)position notifyDelegate:(BOOL)delegate;	// 0x30623355
- (id)_selectableIndexPathForItemContainingHitView:(id)itemContainingHitView;	// 0x3062f51d
// declared property setter: - (void)_setCurrentTouch:(id)touch;	// 0x30630561
- (void)_setExternalObjectTable:(id)table forNibLoadingOfCellWithReuseIdentifier:(id)reuseIdentifier;	// 0x30629aa1
- (void)_setExternalObjectTable:(id)table forNibLoadingOfSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier;	// 0x30629b11
- (void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;	// 0x30623fd1
- (void)_setNeedsVisibleCellsUpdate:(BOOL)update withLayoutAttributes:(BOOL)layoutAttributes;	// 0x30623d11
- (void)_setObject:(id)object inDictionary:(id)dictionary forKind:(id)kind indexPath:(id)path;	// 0x30622709
- (void)_setVisibleCell:(id)cell forIndexPath:(id)indexPath;	// 0x30622c49
- (void)_setVisibleDecorationView:(id)view forReuseIdentifier:(id)reuseIdentifier indexPath:(id)path;	// 0x30622ced
- (void)_setVisibleSupplementaryView:(id)view forKind:(id)kind indexPath:(id)path;	// 0x30622c99
- (void)_setupCellAnimations;	// 0x3062ada1
- (BOOL)_shouldShowMenuForCell:(id)cell;	// 0x306303d9
- (void)_suspendReloads;	// 0x30623ca1
- (void)_unhighlightAllItems;	// 0x3062f451
- (void)_unhighlightItemAtIndexPath:(id)indexPath animated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x306238cd
- (void)_updateAnimationDidStop:(id)_updateAnimation finished:(id)finished context:(id)context;	// 0x3062ed49
- (void)_updateBackgroundView;	// 0x306273f1
- (void)_updateRowsAtIndexPaths:(id)indexPaths updateAction:(int)action;	// 0x3062ab59
- (void)_updateSections:(id)sections updateAction:(int)action;	// 0x3062a8b1
- (void)_updateVisibleCellsNow:(BOOL)now;	// 0x30625255
- (void)_updateWithItems:(id)items;	// 0x3062e339
- (void)_userSelectItemAtIndexPath:(id)indexPath;	// 0x3062fa69
- (id)_viewAnimationsForCurrentUpdate;	// 0x3062cdb9
- (CGRect)_visibleBounds;	// 0x30624bd5
- (id)_visibleSupplementaryViewForKind:(id)kind andIndexPath:(id)path;	// 0x30622d41
- (id)_visibleViewsDict;	// 0x306231d9
// declared property getter: - (BOOL)allowsMultipleSelection;	// 0x30623c89
// declared property getter: - (BOOL)allowsSelection;	// 0x30623755
- (void)animationDone:(id)done finished:(id)finished context:(void *)context;	// 0x30627599
// declared property getter: - (id)backgroundView;	// 0x30630541
- (id)cellForItemAtIndexPath:(id)indexPath;	// 0x30628c3d
// declared property getter: - (id)collectionViewLayout;	// 0x30630521
// declared property getter: - (id)dataSource;	// 0x30630531
- (void)dealloc;	// 0x30622329
- (void)deleteItemsAtIndexPaths:(id)indexPaths;	// 0x3062aca5
- (void)deleteSections:(id)sections;	// 0x3062aa25
- (id)dequeueReusableCellWithReuseIdentifier:(id)reuseIdentifier forIndexPath:(id)indexPath;	// 0x3062a275
- (id)dequeueReusableSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier forIndexPath:(id)indexPath;	// 0x3062a305
- (id)description;	// 0x30622689
- (void)deselectItemAtIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x306236c5
- (void)didMoveToWindow;	// 0x306300d5
- (void)encodeWithCoder:(id)coder;	// 0x30622161
- (id)indexPathForCell:(id)cell;	// 0x30628c15
- (id)indexPathForItemAtPoint:(CGPoint)point;	// 0x30628869
- (id)indexPathForSupplementaryView:(id)supplementaryView;	// 0x30628c29
// converted property getter: - (id)indexPathsForSelectedItems;	// 0x3062303d
- (id)indexPathsForVisibleItems;	// 0x30628dc9
- (void)insertItemsAtIndexPaths:(id)indexPaths;	// 0x3062ac91
- (void)insertSections:(id)sections;	// 0x3062aa11
- (id)layoutAttributesForItemAtIndexPath:(id)indexPath;	// 0x306287a5
- (id)layoutAttributesForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x30628805
- (void)layoutSubviews;	// 0x30627475
- (void)moveItemAtIndexPath:(id)indexPath toIndexPath:(id)indexPath2;	// 0x3062accd
- (void)moveSection:(int)section toSection:(int)section2;	// 0x3062aa4d
- (int)numberOfItemsInSection:(int)section;	// 0x30628765
- (int)numberOfSections;	// 0x30628729
- (void)performBatchUpdates:(id)updates completion:(id)completion;	// 0x3062f205
- (void)registerClass:(Class)aClass forCellWithReuseIdentifier:(id)reuseIdentifier;	// 0x306295b9
- (void)registerClass:(Class)aClass forSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier;	// 0x306296b5
- (void)registerNib:(id)nib forCellWithReuseIdentifier:(id)reuseIdentifier;	// 0x3062982d
- (void)registerNib:(id)nib forSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier;	// 0x30629929
- (void)reloadData;	// 0x30623d5d
- (void)reloadItemsAtIndexPaths:(id)indexPaths;	// 0x3062acb9
- (void)reloadSections:(id)sections;	// 0x3062aa39
- (void)scrollToItemAtIndexPath:(id)indexPath atScrollPosition:(unsigned)scrollPosition animated:(BOOL)animated;	// 0x30628f1d
- (void)selectItemAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(unsigned)position;	// 0x3062357d
// declared property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x30623769
// declared property setter: - (void)setAllowsSelection:(BOOL)selection;	// 0x30623701
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x3062f32d
- (void)setBounds:(CGRect)bounds;	// 0x30624649
// declared property setter: - (void)setCollectionViewLayout:(id)layout;	// 0x30627585
- (void)setCollectionViewLayout:(id)layout animated:(BOOL)animated;	// 0x306276d1
// declared property setter: - (void)setDataSource:(id)source;	// 0x30622f45
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30622d89
- (void)setFrame:(CGRect)frame;	// 0x30624801
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3062f615
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30630061
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3062fb0d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3062f939
- (id)visibleCells;	// 0x30628cc9
@end

