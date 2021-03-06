/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRImage, BRImageControl, NSArray;

__attribute__((visibility("hidden")))
@interface BRButtonControl : BRControl {
	int _style;	// 80 = 0x50
	BRImageControl *_imageControl;	// 84 = 0x54
	BRImageControl *_badgeControl;	// 88 = 0x58
	BRTextControl *_titleControl;	// 92 = 0x5c
	BRTextControl *_subtitleControl;	// 96 = 0x60
	BRImageControl *_overlayImageControl;	// 100 = 0x64
	BRImageControl *_backgroundImageControl;	// 104 = 0x68
	BRImageControl *_bottomBackgroundImageControl;	// 108 = 0x6c
	BRImage *_image;	// 112 = 0x70
	BRImage *_highlightedImage;	// 116 = 0x74
	NSArray *_subcontrolOrder;	// 120 = 0x78
	BOOL _subcontrolsNeedSorting;	// 124 = 0x7c
	BOOL _buttonEnabled;	// 125 = 0x7d
}
@property(retain) id badgeImage;	// G=0x308625; S=0x308541; converted property
@property(retain) BRImage *highlightedImage;	// G=0x308785; S=0x308735; converted property
@property(retain) BRImage *image;	// G=0x308521; S=0x3084d1; converted property
@property(retain) id subtitle;	// G=0x3084b1; S=0x3083a1; converted property
@property(retain) id title;	// G=0x308381; S=0x308271; converted property
+ (id)actionButtonWithImage:(id)image subtitle:(id)subtitle badge:(id)badge;	// 0x307be9
+ (id)actionButtonWithTitle:(id)title subtitle:(id)subtitle badge:(id)badge;	// 0x307c59
+ (id)dashedActionButtonWithTitle:(id)title subtitle:(id)subtitle selectable:(BOOL)selectable;	// 0x307d0d
+ (id)dialogButtonWithTitle:(id)title;	// 0x307cc9
+ (id)glossyButtonWithTitle:(id)title;	// 0x307d7d
- (id)init;	// 0x307a51
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x306321
- (void)_addOpacityFadeAnimationIfNeededToControl:(id)control;	// 0x30642d
- (void)_addSortedControl:(id)control;	// 0x3065e9
- (void)_focusWasChanged;	// 0x306a4d
- (void)_layoutActionSublayers;	// 0x306d49
- (void)_layoutDashedSublayers;	// 0x3074e5
- (void)_layoutDialogSublayers;	// 0x306b45
- (void)_layoutGlossySublayers;	// 0x307835
- (id)_nonFocusedOpacityForControlNamed:(id)controlNamed;	// 0x306015
- (void)_setBackgroundHighlightImage:(id)image;	// 0x3066e5
- (void)_setBottomBackgroundHighlightImage:(id)image;	// 0x3067b5
- (void)_setControlOrderArray:(id)array;	// 0x3079f1
- (void)_setNonAttributedSubtitle:(id)subtitle;	// 0x30627d
- (void)_setNonAttributedTitle:(id)title;	// 0x3061a9
- (void)_updateAllFocusOpacities;	// 0x306575
- (void)_updateBackgroundDialogImages;	// 0x306885
- (void)_updateFocusOpacityOfControl:(id)control;	// 0x3064bd
- (void)_updateImageLayer;	// 0x306915
- (id)accessibilityLabel;	// 0x308965
- (id)accessibilityTraitsList;	// 0x308a19
// converted property getter: - (id)badgeImage;	// 0x308625
- (void)controlWasActivated;	// 0x3087ed
- (void)controlWasFocused;	// 0x306ac5
- (void)controlWasUnfocused;	// 0x306b05
- (void)dealloc;	// 0x307ab9
// converted property getter: - (id)highlightedImage;	// 0x308785
// converted property getter: - (id)image;	// 0x308521
- (BOOL)isAccessibilityElement;	// 0x308961
- (void)layoutSubcontrols;	// 0x30882d
- (id)overayImage;	// 0x308715
// converted property setter: - (void)setBadgeImage:(id)image;	// 0x308541
- (void)setButtonEnabled:(BOOL)enabled;	// 0x308795
- (void)setButtonStyle:(int)style;	// 0x307dd5
// converted property setter: - (void)setHighlightedImage:(id)image;	// 0x308735
// converted property setter: - (void)setImage:(id)image;	// 0x3084d1
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x308a55
- (void)setNonAttributedTitle:(id)title;	// 0x308a45
- (void)setOverlayImage:(id)image;	// 0x308645
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x3083a1
// converted property setter: - (void)setTitle:(id)title;	// 0x308271
// converted property getter: - (id)subtitle;	// 0x3084b1
// converted property getter: - (id)title;	// 0x308381
@end

