/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "UICollectionReusableView.h"

@class UILongPressGestureRecognizer;

@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate> {
	UIView *_contentView;	// 100 = 0x64
	UIView *_backgroundView;	// 104 = 0x68
	UIView *_selectedBackgroundView;	// 108 = 0x6c
	UILongPressGestureRecognizer *_menuGesture;	// 112 = 0x70
	id _selectionSegueTemplate;	// 116 = 0x74
	id _highlightingSupport;	// 120 = 0x78
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _collectionCellFlags;	// 124 = 0x7c
	BOOL _selected;	// 125 = 0x7d
	BOOL _highlighted;	// 126 = 0x7e
}
@property(retain, nonatomic) UIView *backgroundView;	// G=0x3100f825; S=0x3100f2e9; @synthesize=_backgroundView
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x3100f815; @synthesize=_contentView
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x3100f1c1; S=0x3100f15d; @synthesize=_highlighted
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x3100f019; S=0x3100efa5; @synthesize=_selected
@property(retain, nonatomic) UIView *selectedBackgroundView;	// G=0x3100f835; S=0x3100f1d5; @synthesize=_selectedBackgroundView
- (id)initWithCoder:(id)coder;	// 0x3100e539
- (id)initWithFrame:(CGRect)frame;	// 0x3100e3d5
- (void)_descendent:(id)descendent didMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x3100eb0d
- (void)_descendent:(id)descendent willMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x3100eab1
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x3100f41d
- (void)_handleMenuGesture:(id)gesture;	// 0x3100f465
- (BOOL)_isUsingOldStyleMultiselection;	// 0x3100f419
- (void)_menuDismissed:(id)dismissed;	// 0x3100f5c5
- (void)_performAction:(SEL)action sender:(id)sender;	// 0x3100f6f1
- (id)_selectionSegueTemplate;	// 0x3100f7dd
- (void)_setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x3100f031
- (void)_setOpaque:(BOOL)opaque forSubview:(id)subview;	// 0x3100e935
- (void)_setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x3100ee79
- (void)_setSelectionSegueTemplate:(id)aTemplate;	// 0x3100f799
- (void)_setupHighlightingSupport;	// 0x3100edd1
- (BOOL)_shouldSaveOpaqueStateForView:(id)view;	// 0x3100f3a9
- (void)_teardownHighlightingSupportIfReady;	// 0x3100ee35
- (void)_updateBackgroundView;	// 0x3100ec31
- (void)_updateHighlightColorsForAnimationHalfwayPoint;	// 0x3100e8f5
- (void)_updateHighlightColorsForView:(id)view highlight:(BOOL)highlight;	// 0x3100e889
// declared property getter: - (id)backgroundView;	// 0x3100f825
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x3100f699
// declared property getter: - (id)contentView;	// 0x3100f815
- (void)copy:(id)copy;	// 0x3100f771
- (void)cut:(id)cut;	// 0x3100f75d
- (void)dealloc;	// 0x3100e759
- (void)encodeWithCoder:(id)coder;	// 0x3100e6a5
// declared property getter: - (BOOL)isHighlighted;	// 0x3100f1c1
// declared property getter: - (BOOL)isSelected;	// 0x3100f019
- (void)paste:(id)paste;	// 0x3100f785
- (void)prepareForReuse;	// 0x3100e80d
// declared property getter: - (id)selectedBackgroundView;	// 0x3100f835
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x3100f2e9
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3100f15d
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x3100efa5
// declared property setter: - (void)setSelectedBackgroundView:(id)view;	// 0x3100f1d5
@end

