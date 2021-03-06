/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRMarqueeTextControl, NSString, BRImageControl;

@interface BRComboMenuItemLayer : BRControl {
@private
	BRControl *_background;	// 44 = 0x2c
	BRImageControl *_thumbnailLayer;	// 48 = 0x30
	BRMarqueeTextControl *_titleLayer;	// 52 = 0x34
	BRTextControl *_subtitleLayer;	// 56 = 0x38
	BRTextControl *_leftTextLayer;	// 60 = 0x3c
	BRTextControl *_middleTextLayer;	// 64 = 0x40
	BRImageControl *_bottomRightImageLayer;	// 68 = 0x44
	BRImageControl *_topRightImageLayer;	// 72 = 0x48
	NSString *_thumbnailIdentifier;	// 76 = 0x4c
	float _thumbnailPaddingFactor;	// 80 = 0x50
	float _thumbnailLayerAspect;	// 84 = 0x54
}
@property(retain) id subtitle;	// G=0x32934bcd; S=0x328cdafd; converted property
@property(retain) NSString *thumbnailIdentifier;	// G=0x328ce6d1; S=0x328cdf89; converted property
@property(assign) float thumbnailLayerAspectRatio;	// G=0x329349e1; S=0x328ce15d; converted property
@property(assign) float thumbnailPaddingFactor;	// G=0x329349d1; S=0x328cd9bd; converted property
@property(retain) id title;	// G=0x32934bfd; S=0x328cd9f1; converted property
- (id)init;	// 0x328cd8f5
- (id)_comboMenuItemSubtitleTextAttributes;	// 0x32934d49
- (id)_comboMenuItemTitleTextAttributes;	// 0x32934d05
- (id)accessibilityLabel;	// 0x32934c59
- (id)axSelectedItemText;	// 0x329349f5
- (void)controlWasFocused;	// 0x328ce299
- (void)controlWasUnfocused;	// 0x328ce30d
- (void)dealloc;	// 0x328ce5f9
- (float)defaultRowHeight;	// 0x32934c2d
- (CGRect)focusCursorFrame;	// 0x328ce355
- (BOOL)isAccessibilityElement;	// 0x329349f1
- (void)layoutSubcontrols;	// 0x32934d95
- (void)setBottomRightImage:(id)image;	// 0x328ce1d5
- (void)setLeftText:(id)text;	// 0x328cdc09
- (void)setMiddleText:(id)text;	// 0x328cdd15
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x328cdafd
// converted property setter: - (void)setThumbnailIdentifier:(id)identifier;	// 0x328cdf89
- (void)setThumbnailImage:(id)image;	// 0x328ce099
// converted property setter: - (void)setThumbnailLayerAspectRatio:(float)ratio;	// 0x328ce15d
// converted property setter: - (void)setThumbnailPaddingFactor:(float)factor;	// 0x328cd9bd
// converted property setter: - (void)setTitle:(id)title;	// 0x328cd9f1
- (void)setTopRightImage:(id)image;	// 0x32934b09
// converted property getter: - (id)subtitle;	// 0x32934bcd
// converted property getter: - (id)thumbnailIdentifier;	// 0x328ce6d1
// converted property getter: - (float)thumbnailLayerAspectRatio;	// 0x329349e1
// converted property getter: - (float)thumbnailPaddingFactor;	// 0x329349d1
// converted property getter: - (id)title;	// 0x32934bfd
@end

