/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class _UITableCellTransientData;

@interface UITableCell : UIView {
@private
	_UITableCellTransientData *_transientData;	// 48 = 0x30
	float _rightMargin;	// 52 = 0x34
	struct {
		unsigned dontShowSelection : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned hideDisclosure : 1;
		unsigned isBeingDeleted : 1;
		unsigned disclosureClickable : 1;
		unsigned selectionFadeFraction : 11;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned alignment : 3;
		unsigned showDisclosureWhenReordering : 1;
		unsigned fadeDisclosure : 1;
		unsigned reserved : 2;
	} _tableCellFlags;	// 56 = 0x38
	UIView *_disclosureView;	// 60 = 0x3c
}
@property(assign) int disclosureStyle;	// G=0x35289999; S=0x35289785; converted property
@property(retain) UIView *disclosureView;	// G=0x3528b2ad; S=0x3528b2bd; converted property
@property(assign, getter=isSelected) BOOL selected;	// G=0x35289631; S=0x3528961d; converted property
@property(assign) int separatorStyle;	// G=0x352899ad; S=0x352896cd; converted property
@property(assign) BOOL showDisclosure;	// G=0x352899f1; S=0x3528971d; converted property
@property(assign) BOOL showDisclosureWhenReordering;	// G=0x35289e81; S=0x35289e69; converted property
@property(assign) BOOL showSelection;	// G=0x352899d9; S=0x35289651; converted property
- (id)_createDisclosureView;	// 0x3528b8c5
- (void)_deselectWithFlashCount:(int)flashCount duration:(double)duration;	// 0x3528953d
- (id)_disclosureView;	// 0x3528b2cd
- (void)_finishedFadingGrabber:(id)grabber finished:(BOOL)finished;	// 0x35289e29
- (void)_grabberBeganReorder:(id)reorder;	// 0x3528a7e9
- (void)_grabberDragged:(id)dragged yDelta:(float)delta;	// 0x3528a819
- (void)_grabberReleased:(id)released;	// 0x3528a981
- (id)_grabberView;	// 0x35289bf1
- (BOOL)_isReordering;	// 0x35289bc9
- (void)_layoutSubviewsAnimated:(BOOL)animated;	// 0x3528b2e9
- (void)_releaseGrabber;	// 0x35289d51
- (void)_releaseRemoveControl;	// 0x3528acfd
- (void)_setDisclosureHidden:(BOOL)hidden;	// 0x3528af71
- (void)_setDrawsTopSeparator:(BOOL)separator;	// 0x3528c0e1
- (void)_setGrabberHidden:(BOOL)hidden;	// 0x3528b03d
- (void)_setRemoveCharge:(float)charge;	// 0x3528c0b5
- (void)_setRightMargin:(float)margin;	// 0x3528b28d
- (void)_setSelectionFadeFraction:(float)fraction;	// 0x3528c2c5
- (void)_setShowIndentSpacer:(BOOL)spacer animated:(BOOL)animated;	// 0x3528b391
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x3528c2c1
- (void)_showDeleteOrInsertion:(BOOL)insertion withDisclosure:(BOOL)disclosure animated:(BOOL)animated isDelete:(BOOL)aDelete andRemoveConfirmation:(BOOL)confirmation;	// 0x3528b4e1
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)done;	// 0x3528b779
- (void)_willBeDeleted;	// 0x3528b7bd
- (BOOL)cancelMouseTracking;	// 0x35289b79
- (BOOL)cancelTouchTracking;	// 0x35289ba1
- (CGRect)contentBounds;	// 0x3528b93d
- (id)createInsertControl;	// 0x3528af41
- (id)createRemoveControl;	// 0x3528aec9
- (void)dealloc;	// 0x352891bd
- (id)disclosureImage;	// 0x3528906d
- (id)disclosurePressedImage;	// 0x35289115
- (float)disclosureRightMargin;	// 0x35289e39
// converted property getter: - (int)disclosureStyle;	// 0x35289999
// converted property getter: - (id)disclosureView;	// 0x3528b2ad
- (void)drawBackgroundInRect:(CGRect)rect withFade:(float)fade;	// 0x3528a9b1
- (void)drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x3528acf9
- (void)drawRect:(CGRect)rect;	// 0x35289c35
- (void)drawSeparatorInRect:(CGRect)rect;	// 0x3528ab51
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x35289a75
- (void)insertControl:(id)control shouldInsertWithTarget:(id)target;	// 0x3528b895
- (BOOL)isAtLeastHalfSelected;	// 0x352894ed
- (BOOL)isRemoveControlVisible;	// 0x3528b4c9
- (BOOL)isReorderingEnabled;	// 0x35289e41
// converted property getter: - (BOOL)isSelected;	// 0x35289631
- (void)layoutSubviews;	// 0x3528c131
- (float)removeButtonAnimationDuration;	// 0x3528b2dd
- (id)removeControl;	// 0x352892d5
- (void)removeControl:(id)control didRemoveTarget:(id)target;	// 0x3528b865
- (BOOL)removeControl:(id)control shouldRemoveTarget:(id)target;	// 0x3528b7f9
- (void)removeControl:(id)control willRemoveTarget:(id)target;	// 0x3528b825
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x3528b1b5
- (void)removeControlWillShowRemoveConfirmation:(id)removeControl;	// 0x3528b0f5
- (void)removeFromSuperview;	// 0x3528adb1
- (float)selectionPercent;	// 0x35289511
// converted property getter: - (int)separatorStyle;	// 0x352899ad
- (void)setAlpha:(float)alpha;	// 0x35289a05
- (void)setDisclosureClickable:(BOOL)clickable;	// 0x3528ae81
// converted property setter: - (void)setDisclosureStyle:(int)style;	// 0x35289785
- (void)setDisclosureStyleNoUpdate:(int)update;	// 0x35289981
// converted property setter: - (void)setDisclosureView:(id)view;	// 0x3528b2bd
- (void)setEnableReordering:(BOOL)reordering animated:(BOOL)animated;	// 0x35289e95
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x3528961d
- (void)setSelected:(BOOL)selected withFade:(BOOL)fade;	// 0x352892f9
- (void)setSelectionStyle:(int)style;	// 0x35289731
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x352896cd
- (void)setSeparatorStyleOnly:(int)only;	// 0x352899c1
// converted property setter: - (void)setShowDisclosure:(BOOL)disclosure;	// 0x3528971d
- (void)setShowDisclosure:(BOOL)disclosure animated:(BOOL)animated;	// 0x3528bb95
// converted property setter: - (void)setShowDisclosureWhenReordering:(BOOL)reordering;	// 0x35289e69
// converted property setter: - (void)setShowSelection:(BOOL)selection;	// 0x35289651
- (void)setShowSelectionNoRedisplay:(BOOL)redisplay;	// 0x352896a9
// converted property getter: - (BOOL)showDisclosure;	// 0x352899f1
// converted property getter: - (BOOL)showDisclosureWhenReordering;	// 0x35289e81
// converted property getter: - (BOOL)showSelection;	// 0x352899d9
- (void)updateHighlightColors;	// 0x352894e9
@end

