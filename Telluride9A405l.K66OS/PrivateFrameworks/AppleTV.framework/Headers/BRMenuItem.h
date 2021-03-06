/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSString, BRAsyncImageControl, NSAttributedString, NSMutableSet, NSNumber, BRWaitSpinnerControl, BRMarqueeTextControl;
@protocol BRDisplayInfoLoader;

@interface BRMenuItem : BRControl {
@private
	CGColorRef _bgColor;	// 48 = 0x30
	NSAttributedString *_text;	// 52 = 0x34
	NSAttributedString *_detailedText;	// 56 = 0x38
	NSAttributedString *_rightJustifiedText;	// 60 = 0x3c
	BRMarqueeTextControl *_scrollingTextControl;	// 64 = 0x40
	BRAsyncImageControl *_imageControl;	// 68 = 0x44
	BRWaitSpinnerControl *_spinner;	// 72 = 0x48
	id<BRDisplayInfoLoader> _displayInfoLoader;	// 76 = 0x4c
	NSMutableSet *_accessories;	// 80 = 0x50
	BOOL _dimmed;	// 84 = 0x54
	BOOL _disableAccessoryHighlighting;	// 85 = 0x55
	BOOL _forceOrdinalLayout;	// 86 = 0x56
	BOOL _dotsTrailImage;	// 87 = 0x57
	BOOL _forceBlueDotLayout;	// 88 = 0x58
	BOOL _forceCenteredIconLayout;	// 89 = 0x59
	BOOL _forceMenuArrowLayout;	// 90 = 0x5a
	BOOL _usingDefaultTextAttributes;	// 91 = 0x5b
	BOOL _iconsTrailText;	// 92 = 0x5c
	float _forcedHeight;	// 96 = 0x60
	float _forcedContentHeight;	// 100 = 0x64
	NSNumber *_ordinal;	// 104 = 0x68
	int _largestOrdinal;	// 108 = 0x6c
	float _imageInset;	// 112 = 0x70
	float _imageHeight;	// 116 = 0x74
	float _textPadding;	// 120 = 0x78
	float _leftMargin;	// 124 = 0x7c
	float _rightMargin;	// 128 = 0x80
	float _imageAspectRatio;	// 132 = 0x84
	BOOL _colorSet;	// 136 = 0x88
	NSString *_accessibilityLanguage;	// 140 = 0x8c
}
@property(retain) NSString *accessibilityLanguage;	// G=0x35e73099; S=0x35e71e01; converted property
@property(retain) NSAttributedString *detailedText;	// G=0x35e6fe45; S=0x35e6fd09; converted property
@property(assign) BOOL dimmed;	// G=0x35e705f1; S=0x35e704c5; converted property
@property(assign) BOOL disableAccessoryHighlighting;	// G=0x35e70621; S=0x35e70601; converted property
@property(retain) id displayInfoLoader;	// G=0x35e70335; S=0x35e7026d; converted property
@property(assign) BOOL dotsTrailImage;	// G=0x35e708d1; S=0x35e708a1; converted property
@property(assign) BOOL forceBlueDotLayout;	// G=0x35e70851; S=0x35e70821; converted property
@property(assign) BOOL forceCenteredIconLayout;	// G=0x35e70891; S=0x35e70861; converted property
@property(assign) BOOL forceMenuArrowLayout;	// G=0x35e70755; S=0x35e70735; converted property
@property(readonly, assign) BOOL forceOrdinalLayout;	// G=0x35e70811; converted property
@property(assign) float forcedContentHeight;	// G=0x35e70725; S=0x35e70705; converted property
@property(assign) float forcedHeight;	// G=0x35e706f5; S=0x35e70631; converted property
@property(assign) BOOL iconsTrailText;	// G=0x35e70911; S=0x35e708e1; converted property
@property(retain) id image;	// G=0x35e700e1; S=0x35e6ff35; converted property
@property(assign) float imageAspectRatio;	// G=0x35e7025d; S=0x35e70221; converted property
@property(assign) float imageHeight;	// G=0x35e70a41; S=0x35e70a05; converted property
@property(assign) float imageInset;	// G=0x35e709a9; S=0x35e7096d; converted property
@property(retain) id imageProxy;	// G=0x35e70201; S=0x35e701ed; converted property
@property(assign) float leftMargin;	// G=0x35e7095d; S=0x35e70921; converted property
@property(assign) CGColorRef menuItemBackgroundColor;	// G=0x35e6fb8d; S=0x35e6fb65; converted property
@property(retain) NSAttributedString *rightJustifiedText;	// G=0x35e6ff15; S=0x35e6fe65; converted property
@property(assign) float rightMargin;	// G=0x35e70a8d; S=0x35e70a51; converted property
@property(retain) NSAttributedString *text;	// G=0x35e6fce9; S=0x35e6fbb5; converted property
@property(assign) float textPadding;	// G=0x35e709f5; S=0x35e709b9; converted property
- (id)init;	// 0x35e6f549
- (id)_accessoryOfType:(int)type;	// 0x35e71ff1
- (id)_accessoryOfType:(int)type offset:(float *)offset;	// 0x35e72005
- (id)_detailedTextAttributes;	// 0x35e72969
- (id)_firstAccessoryFromAccessories:(id)accessories offset:(float *)offset;	// 0x35e72439
- (id)_imageWithName:(id)name;	// 0x35e72b11
- (id)_largeLeftImage;	// 0x35e725f9
- (float)_largestOrdinalWidth;	// 0x35e72c21
- (id)_ordinalImage;	// 0x35e7279d
- (id)_ordinalString;	// 0x35e72d05
- (id)_ordinalTypes;	// 0x35e7270d
- (id)_rightJustifiedIconWithRightOffset:(float *)rightOffset;	// 0x35e724a9
- (id)_rightTextAttributes;	// 0x35e729ad
- (void)_setSpinnerEnabled:(BOOL)enabled;	// 0x35e72b79
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x35e71e45
- (void)_switchToScrollingTextForTextFrame:(CGRect)textFrame;	// 0x35e72a31
- (id)_textAttributes;	// 0x35e729f1
- (void)_updateColorAndContentHeight;	// 0x35e71eb5
- (id)_upperRightImageTypes;	// 0x35e727d1
- (id)_upperRightImages;	// 0x35e728b1
- (id)accessibilityLabel;	// 0x35e72e35
// converted property getter: - (id)accessibilityLanguage;	// 0x35e73099
- (id)accessibilitySecondaryLabel;	// 0x35e72f29
- (id)accessibilityTraits;	// 0x35e72fdd
- (void)addAccessoryOfType:(int)type;	// 0x35e70345
- (void)cancelLoadDisplayInfo;	// 0x35e6fa61
- (id)centeredDetailedTextAttributes;	// 0x35e6fb41
- (id)centeredTextAttributes;	// 0x35e6faa9
- (void)controlWasActivated;	// 0x35e6f8a5
- (void)controlWasDeactivated;	// 0x35e6f94d
- (void)controlWasFocused;	// 0x35e6f7e5
- (void)controlWasUnfocused;	// 0x35e6f845
- (void)dealloc;	// 0x35e6f621
- (id)description;	// 0x35e6f735
// converted property getter: - (id)detailedText;	// 0x35e6fe45
// converted property getter: - (BOOL)dimmed;	// 0x35e705f1
// converted property getter: - (BOOL)disableAccessoryHighlighting;	// 0x35e70621
// converted property getter: - (id)displayInfoLoader;	// 0x35e70335
// converted property getter: - (BOOL)dotsTrailImage;	// 0x35e708d1
- (void)drawInContext:(CGContextRef)context;	// 0x35e70b49
- (CGRect)focusCursorFrame;	// 0x35e70a9d
// converted property getter: - (BOOL)forceBlueDotLayout;	// 0x35e70851
// converted property getter: - (BOOL)forceCenteredIconLayout;	// 0x35e70891
// converted property getter: - (BOOL)forceMenuArrowLayout;	// 0x35e70755
// converted property getter: - (BOOL)forceOrdinalLayout;	// 0x35e70811
// converted property getter: - (float)forcedContentHeight;	// 0x35e70725
// converted property getter: - (float)forcedHeight;	// 0x35e706f5
- (BOOL)hasAccessoryOfType:(int)type;	// 0x35e70469
// converted property getter: - (BOOL)iconsTrailText;	// 0x35e70911
// converted property getter: - (id)image;	// 0x35e700e1
// converted property getter: - (float)imageAspectRatio;	// 0x35e7025d
// converted property getter: - (float)imageHeight;	// 0x35e70a41
// converted property getter: - (float)imageInset;	// 0x35e709a9
// converted property getter: - (id)imageProxy;	// 0x35e70201
- (BOOL)isAccessibilityElement;	// 0x35e72e31
// converted property getter: - (float)leftMargin;	// 0x35e7095d
- (void)loadDisplayInfo;	// 0x35e6fa19
// converted property getter: - (CGColorRef)menuItemBackgroundColor;	// 0x35e6fb8d
- (void)removeAccessoryOfType:(int)type;	// 0x35e703f1
- (void)removeAllAccessories;	// 0x35e70489
// converted property getter: - (id)rightJustifiedText;	// 0x35e6ff15
// converted property getter: - (float)rightMargin;	// 0x35e70a8d
- (void)scrollingCompleted;	// 0x35e6f9b9
// converted property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x35e71e01
- (void)setDefaultImage:(id)image;	// 0x35e70015
// converted property setter: - (void)setDetailedText:(id)text;	// 0x35e6fd09
- (void)setDetailedText:(id)text withAttributes:(id)attributes;	// 0x35e6fd1d
// converted property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x35e704c5
// converted property setter: - (void)setDisableAccessoryHighlighting:(BOOL)highlighting;	// 0x35e70601
// converted property setter: - (void)setDisplayInfoLoader:(id)loader;	// 0x35e7026d
// converted property setter: - (void)setDotsTrailImage:(BOOL)image;	// 0x35e708a1
// converted property setter: - (void)setForceBlueDotLayout:(BOOL)layout;	// 0x35e70821
// converted property setter: - (void)setForceCenteredIconLayout:(BOOL)layout;	// 0x35e70861
// converted property setter: - (void)setForceMenuArrowLayout:(BOOL)layout;	// 0x35e70735
- (void)setForceOrdinalLayout:(BOOL)layout ordinal:(id)ordinal largestOrdinal:(id)ordinal3;	// 0x35e70765
// converted property setter: - (void)setForcedContentHeight:(float)height;	// 0x35e70705
// converted property setter: - (void)setForcedHeight:(float)height;	// 0x35e70631
// converted property setter: - (void)setIconsTrailText:(BOOL)text;	// 0x35e708e1
// converted property setter: - (void)setImage:(id)image;	// 0x35e6ff35
// converted property setter: - (void)setImageAspectRatio:(float)ratio;	// 0x35e70221
// converted property setter: - (void)setImageHeight:(float)height;	// 0x35e70a05
// converted property setter: - (void)setImageInset:(float)inset;	// 0x35e7096d
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x35e701ed
- (void)setImageProxy:(id)proxy shouldCropAndFill:(BOOL)fill;	// 0x35e70101
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x35e70921
// converted property setter: - (void)setMenuItemBackgroundColor:(CGColorRef)color;	// 0x35e6fb65
// converted property setter: - (void)setRightJustifiedText:(id)text;	// 0x35e6fe65
- (void)setRightJustifiedText:(id)text withAttributes:(id)attributes;	// 0x35e6fe79
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x35e70a51
// converted property setter: - (void)setText:(id)text;	// 0x35e6fbb5
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x35e6fbc9
// converted property setter: - (void)setTextPadding:(float)padding;	// 0x35e709b9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35e6f79d
// converted property getter: - (id)text;	// 0x35e6fce9
// converted property getter: - (float)textPadding;	// 0x35e709f5
@end

