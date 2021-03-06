/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSArray, BRImageControl, BRImage;

@interface BRButtonControl : BRControl {
@private
	int _style;	// 44 = 0x2c
	BRImageControl *_imageControl;	// 48 = 0x30
	BRImageControl *_badgeControl;	// 52 = 0x34
	BRTextControl *_titleControl;	// 56 = 0x38
	BRTextControl *_subtitleControl;	// 60 = 0x3c
	BRImageControl *_overlayImageControl;	// 64 = 0x40
	BRImageControl *_backgroundImageControl;	// 68 = 0x44
	BRImageControl *_bottomBackgroundImageControl;	// 72 = 0x48
	BRImage *_image;	// 76 = 0x4c
	BRImage *_highlightedImage;	// 80 = 0x50
	NSArray *_subcontrolOrder;	// 84 = 0x54
	BOOL _subcontrolsNeedSorting;	// 88 = 0x58
	BOOL _buttonEnabled;	// 89 = 0x59
}
@property(retain) id badgeImage;	// G=0x3291d981; S=0x3291d9a1; converted property
@property(retain) BRImage *highlightedImage;	// G=0x3291d68d; S=0x3291d84d; converted property
@property(retain) BRImage *image;	// G=0x3291da81; S=0x3291daa1; converted property
@property(retain) id subtitle;	// G=0x3291dae9; S=0x3291db09; converted property
@property(retain) id title;	// G=0x3291dc11; S=0x3291dc31; converted property
+ (id)actionButtonWithImage:(id)image subtitle:(id)subtitle badge:(id)badge;	// 0x328b28f9
+ (id)actionButtonWithTitle:(id)title subtitle:(id)subtitle badge:(id)badge;	// 0x328b2a39
+ (id)dashedActionButtonWithTitle:(id)title subtitle:(id)subtitle selectable:(BOOL)selectable;	// 0x3291dd89
+ (id)dialogButtonWithTitle:(id)title;	// 0x3291ddf9
+ (id)glossyButtonWithTitle:(id)title;	// 0x3291dd39
- (id)init;	// 0x328ae475
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x328ae5fd
- (void)_addOpacityFadeAnimationIfNeededToControl:(id)control;	// 0x3291e23d
- (void)_addSortedControl:(id)control;	// 0x3291e0b1
- (void)_focusWasChanged;	// 0x328b17a9
- (void)_layoutActionSublayers;	// 0x3291eea9
- (void)_layoutDashedSublayers;	// 0x3291ebed
- (void)_layoutDialogSublayers;	// 0x3291e9f9
- (void)_layoutGlossySublayers;	// 0x3291e841
- (id)_nonFocusedOpacityForControlNamed:(id)controlNamed;	// 0x3291e2bd
- (void)_setBackgroundHighlightImage:(id)image;	// 0x3291dfe5
- (void)_setBottomBackgroundHighlightImage:(id)image;	// 0x3291df19
- (void)_setControlOrderArray:(id)array;	// 0x3291de35
- (void)_setNonAttributedSubtitle:(id)subtitle;	// 0x328b29a5
- (void)_setNonAttributedTitle:(id)title;	// 0x328aebb1
- (void)_updateAllFocusOpacities;	// 0x328b180d
- (void)_updateBackgroundDialogImages;	// 0x3291de8d
- (void)_updateFocusOpacityOfControl:(id)control;	// 0x3291e195
- (void)_updateImageLayer;	// 0x328ae4d1
- (id)accessibilityLabel;	// 0x3291f961
- (id)accessibilityTraits;	// 0x3291d6c9
// converted property getter: - (id)badgeImage;	// 0x3291d981
- (void)controlWasActivated;	// 0x3291e425
- (void)controlWasFocused;	// 0x328b176d
- (void)controlWasUnfocused;	// 0x328b1db1
- (void)dealloc;	// 0x328b0129
// converted property getter: - (id)highlightedImage;	// 0x3291d68d
// converted property getter: - (id)image;	// 0x3291da81
- (BOOL)isAccessibilityElement;	// 0x3291d69d
- (void)layoutSubcontrols;	// 0x3291d6f5
- (id)overayImage;	// 0x3291d895
// converted property setter: - (void)setBadgeImage:(id)image;	// 0x3291d9a1
- (void)setButtonEnabled:(BOOL)enabled;	// 0x3291d801
- (void)setButtonStyle:(int)style;	// 0x3291f4fd
// converted property setter: - (void)setHighlightedImage:(id)image;	// 0x3291d84d
// converted property setter: - (void)setImage:(id)image;	// 0x3291daa1
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x3291d6a1
- (void)setNonAttributedTitle:(id)title;	// 0x3291d6b5
- (void)setOverlayImage:(id)image;	// 0x3291d8b5
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x3291db09
// converted property setter: - (void)setTitle:(id)title;	// 0x3291dc31
// converted property getter: - (id)subtitle;	// 0x3291dae9
// converted property getter: - (id)title;	// 0x3291dc11
@end

