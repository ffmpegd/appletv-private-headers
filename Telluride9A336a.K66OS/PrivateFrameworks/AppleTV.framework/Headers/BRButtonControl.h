/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, BRTextControl, NSArray, BRImageControl;

@interface BRButtonControl : BRControl {
@private
	int _style;	// 48 = 0x30
	BRImageControl *_imageControl;	// 52 = 0x34
	BRImageControl *_badgeControl;	// 56 = 0x38
	BRTextControl *_titleControl;	// 60 = 0x3c
	BRTextControl *_subtitleControl;	// 64 = 0x40
	BRImageControl *_overlayImageControl;	// 68 = 0x44
	BRImageControl *_backgroundImageControl;	// 72 = 0x48
	BRImageControl *_bottomBackgroundImageControl;	// 76 = 0x4c
	BRImage *_image;	// 80 = 0x50
	BRImage *_highlightedImage;	// 84 = 0x54
	NSArray *_subcontrolOrder;	// 88 = 0x58
	BOOL _subcontrolsNeedSorting;	// 92 = 0x5c
	BOOL _buttonEnabled;	// 93 = 0x5d
}
@property(retain) id badgeImage;	// G=0x33add859; S=0x33add779; converted property
@property(retain) BRImage *highlightedImage;	// G=0x33add9b5; S=0x33add961; converted property
@property(retain) BRImage *image;	// G=0x33add759; S=0x33add705; converted property
@property(retain) id subtitle;	// G=0x33add6e5; S=0x33add5dd; converted property
@property(retain) id title;	// G=0x33add5bd; S=0x33add4b5; converted property
+ (id)actionButtonWithImage:(id)image subtitle:(id)subtitle badge:(id)badge;	// 0x33adce0d
+ (id)actionButtonWithTitle:(id)title subtitle:(id)subtitle badge:(id)badge;	// 0x33adce7d
+ (id)dashedActionButtonWithTitle:(id)title subtitle:(id)subtitle selectable:(BOOL)selectable;	// 0x33adcf31
+ (id)dialogButtonWithTitle:(id)title;	// 0x33adceed
+ (id)glossyButtonWithTitle:(id)title;	// 0x33adcfa1
- (id)init;	// 0x33adcc75
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x33adb5d9
- (void)_addOpacityFadeAnimationIfNeededToControl:(id)control;	// 0x33adb6c5
- (void)_addSortedControl:(id)control;	// 0x33adb86d
- (void)_focusWasChanged;	// 0x33adbcd9
- (void)_layoutActionSublayers;	// 0x33adbfc1
- (void)_layoutDashedSublayers;	// 0x33adc73d
- (void)_layoutDialogSublayers;	// 0x33adbdcd
- (void)_layoutGlossySublayers;	// 0x33adca4d
- (id)_nonFocusedOpacityForControlNamed:(id)controlNamed;	// 0x33adb2d1
- (void)_setBackgroundHighlightImage:(id)image;	// 0x33adb96d
- (void)_setBottomBackgroundHighlightImage:(id)image;	// 0x33adba35
- (void)_setControlOrderArray:(id)array;	// 0x33adcc11
- (void)_setNonAttributedSubtitle:(id)subtitle;	// 0x33adb53d
- (void)_setNonAttributedTitle:(id)title;	// 0x33adb469
- (void)_updateAllFocusOpacities;	// 0x33adb7fd
- (void)_updateBackgroundDialogImages;	// 0x33adbafd
- (void)_updateFocusOpacityOfControl:(id)control;	// 0x33adb755
- (void)_updateImageLayer;	// 0x33adbb8d
- (id)accessibilityLabel;	// 0x33addb8d
- (id)accessibilityTraits;	// 0x33addc41
// converted property getter: - (id)badgeImage;	// 0x33add859
- (void)controlWasActivated;	// 0x33adda1d
- (void)controlWasFocused;	// 0x33adbd4d
- (void)controlWasUnfocused;	// 0x33adbd8d
- (void)dealloc;	// 0x33adccdd
// converted property getter: - (id)highlightedImage;	// 0x33add9b5
// converted property getter: - (id)image;	// 0x33add759
- (BOOL)isAccessibilityElement;	// 0x33addb89
- (void)layoutSubcontrols;	// 0x33adda5d
- (id)overayImage;	// 0x33add941
// converted property setter: - (void)setBadgeImage:(id)image;	// 0x33add779
- (void)setButtonEnabled:(BOOL)enabled;	// 0x33add9c5
- (void)setButtonStyle:(int)style;	// 0x33adcff9
// converted property setter: - (void)setHighlightedImage:(id)image;	// 0x33add961
// converted property setter: - (void)setImage:(id)image;	// 0x33add705
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x33addc7d
- (void)setNonAttributedTitle:(id)title;	// 0x33addc6d
- (void)setOverlayImage:(id)image;	// 0x33add879
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x33add5dd
// converted property setter: - (void)setTitle:(id)title;	// 0x33add4b5
// converted property getter: - (id)subtitle;	// 0x33add6e5
// converted property getter: - (id)title;	// 0x33add5bd
@end

