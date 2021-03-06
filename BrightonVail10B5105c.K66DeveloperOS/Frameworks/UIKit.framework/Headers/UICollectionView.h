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
		unsigned delegateViewControllerForPreview : 1;
		unsigned delegateRectForPreview : 1;
		unsigned delegateViewForPreview : 1;
		unsigned transitionImageForPreview : 1;
		unsigned documentProxyForPreview : 1;
		unsigned delegateWillBeginPreview : 1;
		unsigned delegateDidEndPreviewPreview : 1;
		unsigned delegateWillEndPreviewPreview : 1;
		unsigned delegateWillPresentOptionsMenu : 1;
		unsigned delegateDidDismissOptionsMenu : 1;
		unsigned delegateWillPresentOpenInMenu : 1;
		unsigned delegateDidDismissOpenInMenu : 1;
		unsigned delegateWillBeginSendingToApplication : 1;
		unsigned delegateDidEndSendingToApplication : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateUnzipURL : 1;
		unsigned showingOptionsMenu : 1;
		unsigned showingOpenInMenu : 1;
		unsigned delegateExcludesActivities : 1;
		unsigned delegateCanBlockRemoteImages : 1;
		unsigned delegateAddsActivities : 1;
		unsigned delegateProvidesActivityItem : 1;
		unsigned delegateProvidesPrintInfo : 1;
		unsigned performingActivity : 1;
	} _collectionViewFlags;	// 640 = 0x280
	CGPoint _lastLayoutOffset;	// 644 = 0x284
}
@property(assign, nonatomic) BOOL allowsMultipleSelection;	// G=0x34951139; S=0x34950c19; 
@property(assign, nonatomic) BOOL allowsSelection;	// G=0x34950c05; S=0x34950bb1; 
@property(retain, nonatomic) UIView *backgroundView;	// G=0x3495da01; S=0x3495c7ed; @synthesize=_backgroundView
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout;	// G=0x3495d9e1; S=0x34954a45; @synthesize=_layout
@property(retain, nonatomic, getter=_currentTouch, setter=_setCurrentTouch:) UITouch *currentTouch;	// G=0x3495da11; S=0x3495da21; @synthesize=_currentTouch
@property(assign, nonatomic) id<UICollectionViewDataSource> dataSource;	// G=0x3495d9f1; S=0x349503f5; @synthesize=_dataSource
@property(assign, nonatomic) id<UICollectionViewDelegate> delegate;	// S=0x34950239; @dynamic
@property(readonly, retain) NSMutableSet *indexPathsForSelectedItems;	// G=0x349504ed; converted property
+ (id)_reuseKeyForSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier;	// 0x349569f1
- (id)initWithCoder:(id)coder;	// 0x3494f419
- (id)initWithFrame:(CGRect)frame;	// 0x3494f185
- (id)initWithFrame:(CGRect)frame collectionViewLayout:(id)layout;	// 0x3494f1b1
- (void)_addControlledSubview:(id)subview atZIndex:(int)zindex;	// 0x349517b9
- (void)_addEntriesFromDictionary:(id)dictionary inDictionary:(id)dictionary2;	// 0x3494fe1d
- (void)_addEntriesFromDictionary:(id)dictionary inDictionary:(id)dictionary2 andSet:(id)set;	// 0x3494fc59
- (id)_arrayForUpdateAction:(int)updateAction;	// 0x34957cf1
- (void)_beginUpdates;	// 0x3495c665
- (BOOL)_canPerformAction:(SEL)action forCell:(id)cell sender:(id)sender;	// 0x3495d8f1
- (void)_cancelTouches;	// 0x3495d475
- (void)_cellMenuDismissed;	// 0x3495d9d1
- (id)_collectionViewData;	// 0x34950679
- (CGPoint)_contentOffsetForNewFrame:(CGRect)newFrame oldFrame:(CGRect)frame newContentSize:(CGSize)size andOldContentSize:(CGSize)size4;	// 0x3495d649
- (id)_createPreparedCellForItemAtIndexPath:(id)indexPath withLayoutAttributes:(id)layoutAttributes;	// 0x34952181
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)kind atIndexPath:(id)indexPath withLayoutAttributes:(id)layoutAttributes;	// 0x34952461
// declared property getter: - (id)_currentTouch;	// 0x3495da11
- (id)_currentUpdate;	// 0x34957ce1
- (BOOL)_dataSourceImplementsNumberOfSections;	// 0x349504d9
- (id)_dequeueReusableViewOfKind:(id)kind withIdentifier:(id)identifier forIndexPath:(id)indexPath;	// 0x3495706d
- (void)_deselectAllAnimated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x34950699
- (void)_deselectItemAtIndexPath:(id)indexPath animated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x34950a6d
- (id)_doubleSidedAnimationsForView:(id)view withStartingLayoutAttributes:(id)startingLayoutAttributes endingLayoutAttributes:(id)attributes withAnimationSetup:(id)animationSetup animationCompletion:(id)completion;	// 0x34954105
- (void)_endItemAnimations;	// 0x349582c5
- (void)_endUpdates;	// 0x3495c699
- (BOOL)_highlightItemAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position notifyDelegate:(BOOL)delegate;	// 0x34950e75
- (id)_indexPathForView:(id)view ofType:(unsigned)type;	// 0x34955eed
- (void)_invalidateLayout;	// 0x3495c885
- (id)_keysForObject:(id)object inDictionary:(id)dictionary;	// 0x3494fe41
- (id)_layoutAttributesForItemsInRect:(CGRect)rect;	// 0x34950529
- (id)_objectInDictionary:(id)dictionary forKind:(id)kind indexPath:(id)path;	// 0x3494fb91
- (void)_performAction:(SEL)action forCell:(id)cell sender:(id)sender;	// 0x3495d961
- (void)_prepareLayoutForUpdates;	// 0x3495a155
- (void)_reloadDataIfNeeded;	// 0x34950499
- (void)_resumeReloads;	// 0x34951165
- (void)_reuseCell:(id)cell;	// 0x34957895
- (void)_reuseSupplementaryView:(id)view;	// 0x34957b4d
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x3495d5e1
- (void)_scrollViewWillEndDraggingWithVelocity:(CGPoint)_scrollView targetContentOffset:(inout CGPoint *)offset;	// 0x34956a29
- (void)_selectAllSelectedItems;	// 0x3495d399
- (void)_selectItemAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(unsigned)position notifyDelegate:(BOOL)delegate;	// 0x34950805
- (id)_selectableIndexPathForItemContainingHitView:(id)itemContainingHitView;	// 0x3495c9dd
// declared property setter: - (void)_setCurrentTouch:(id)touch;	// 0x3495da21
- (void)_setExternalObjectTable:(id)table forNibLoadingOfCellWithReuseIdentifier:(id)reuseIdentifier;	// 0x34956f61
- (void)_setExternalObjectTable:(id)table forNibLoadingOfSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier;	// 0x34956fd1
- (void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;	// 0x34951481
- (void)_setNeedsVisibleCellsUpdate:(BOOL)update withLayoutAttributes:(BOOL)layoutAttributes;	// 0x349511c1
- (void)_setObject:(id)object inDictionary:(id)dictionary forKind:(id)kind indexPath:(id)path;	// 0x3494fbb9
- (void)_setVisibleCell:(id)cell forIndexPath:(id)indexPath;	// 0x349500f9
- (void)_setVisibleDecorationView:(id)view forReuseIdentifier:(id)reuseIdentifier indexPath:(id)path;	// 0x3495019d
- (void)_setVisibleSupplementaryView:(id)view forKind:(id)kind indexPath:(id)path;	// 0x34950149
- (void)_setupCellAnimations;	// 0x34958261
- (BOOL)_shouldShowMenuForCell:(id)cell;	// 0x3495d899
- (void)_suspendReloads;	// 0x34951151
- (void)_unhighlightAllItems;	// 0x3495c911
- (void)_unhighlightItemAtIndexPath:(id)indexPath animated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x34950d7d
- (void)_updateAnimationDidStop:(id)_updateAnimation finished:(id)finished context:(id)context;	// 0x3495c209
- (void)_updateBackgroundView;	// 0x349548b1
- (void)_updateRowsAtIndexPaths:(id)indexPaths updateAction:(int)action;	// 0x34958019
- (void)_updateSections:(id)sections updateAction:(int)action;	// 0x34957d71
- (void)_updateVisibleCellsNow:(BOOL)now;	// 0x34952705
- (void)_updateWithItems:(id)items;	// 0x3495b7f9
- (void)_userSelectItemAtIndexPath:(id)indexPath;	// 0x3495cf29
- (id)_viewAnimationsForCurrentUpdate;	// 0x3495a279
- (CGRect)_visibleBounds;	// 0x34952085
- (id)_visibleSupplementaryViewForKind:(id)kind andIndexPath:(id)path;	// 0x349501f1
- (id)_visibleViewsDict;	// 0x34950689
// declared property getter: - (BOOL)allowsMultipleSelection;	// 0x34951139
// declared property getter: - (BOOL)allowsSelection;	// 0x34950c05
- (void)animationDone:(id)done finished:(id)finished context:(void *)context;	// 0x34954a59
// declared property getter: - (id)backgroundView;	// 0x3495da01
- (id)cellForItemAtIndexPath:(id)indexPath;	// 0x349560fd
// declared property getter: - (id)collectionViewLayout;	// 0x3495d9e1
// declared property getter: - (id)dataSource;	// 0x3495d9f1
- (void)dealloc;	// 0x3494f7d9
- (void)deleteItemsAtIndexPaths:(id)indexPaths;	// 0x34958165
- (void)deleteSections:(id)sections;	// 0x34957ee5
- (id)dequeueReusableCellWithReuseIdentifier:(id)reuseIdentifier forIndexPath:(id)indexPath;	// 0x34957735
- (id)dequeueReusableSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier forIndexPath:(id)indexPath;	// 0x349577c5
- (id)description;	// 0x3494fb39
- (void)deselectItemAtIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x34950b75
- (void)didMoveToWindow;	// 0x3495d595
- (void)encodeWithCoder:(id)coder;	// 0x3494f611
- (id)indexPathForCell:(id)cell;	// 0x349560d5
- (id)indexPathForItemAtPoint:(CGPoint)point;	// 0x34955d29
- (id)indexPathForSupplementaryView:(id)supplementaryView;	// 0x349560e9
// converted property getter: - (id)indexPathsForSelectedItems;	// 0x349504ed
- (id)indexPathsForVisibleItems;	// 0x34956289
- (void)insertItemsAtIndexPaths:(id)indexPaths;	// 0x34958151
- (void)insertSections:(id)sections;	// 0x34957ed1
- (id)layoutAttributesForItemAtIndexPath:(id)indexPath;	// 0x34955c65
- (id)layoutAttributesForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x34955cc5
- (void)layoutSubviews;	// 0x34954935
- (void)moveItemAtIndexPath:(id)indexPath toIndexPath:(id)indexPath2;	// 0x3495818d
- (void)moveSection:(int)section toSection:(int)section2;	// 0x34957f0d
- (int)numberOfItemsInSection:(int)section;	// 0x34955c25
- (int)numberOfSections;	// 0x34955be9
- (void)performBatchUpdates:(id)updates completion:(id)completion;	// 0x3495c6c5
- (void)registerClass:(Class)aClass forCellWithReuseIdentifier:(id)reuseIdentifier;	// 0x34956a79
- (void)registerClass:(Class)aClass forSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier;	// 0x34956b75
- (void)registerNib:(id)nib forCellWithReuseIdentifier:(id)reuseIdentifier;	// 0x34956ced
- (void)registerNib:(id)nib forSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier;	// 0x34956de9
- (void)reloadData;	// 0x3495120d
- (void)reloadItemsAtIndexPaths:(id)indexPaths;	// 0x34958179
- (void)reloadSections:(id)sections;	// 0x34957ef9
- (void)scrollToItemAtIndexPath:(id)indexPath atScrollPosition:(unsigned)scrollPosition animated:(BOOL)animated;	// 0x349563dd
- (void)selectItemAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(unsigned)position;	// 0x34950a2d
// declared property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x34950c19
// declared property setter: - (void)setAllowsSelection:(BOOL)selection;	// 0x34950bb1
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x3495c7ed
- (void)setBounds:(CGRect)bounds;	// 0x34951af9
// declared property setter: - (void)setCollectionViewLayout:(id)layout;	// 0x34954a45
- (void)setCollectionViewLayout:(id)layout animated:(BOOL)animated;	// 0x34954b91
// declared property setter: - (void)setDataSource:(id)source;	// 0x349503f5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34950239
- (void)setFrame:(CGRect)frame;	// 0x34951cb1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3495cad5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3495d521
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3495cfcd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3495cdf9
- (id)visibleCells;	// 0x34956189
@end

