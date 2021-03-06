/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRWaitSpinnerControl, BRMarqueeTextControl, NSNumber, NSAttributedString, BRAsyncImageControl, NSMutableSet;
@protocol BRDisplayInfoLoader;

__attribute__((visibility("hidden")))
@interface BRMenuItem : BRControl {
	CGColorRef _bgColor;	// 80 = 0x50
	NSAttributedString *_text;	// 84 = 0x54
	NSAttributedString *_detailedText;	// 88 = 0x58
	NSAttributedString *_rightJustifiedText;	// 92 = 0x5c
	BRMarqueeTextControl *_scrollingTextControl;	// 96 = 0x60
	BRAsyncImageControl *_imageControl;	// 100 = 0x64
	BRWaitSpinnerControl *_spinner;	// 104 = 0x68
	id<BRDisplayInfoLoader> _displayInfoLoader;	// 108 = 0x6c
	NSMutableSet *_accessories;	// 112 = 0x70
	BOOL _dimmed;	// 116 = 0x74
	BOOL _disableAccessoryHighlighting;	// 117 = 0x75
	BOOL _forceOrdinalLayout;	// 118 = 0x76
	BOOL _dotsTrailImage;	// 119 = 0x77
	BOOL _forceBlueDotLayout;	// 120 = 0x78
	BOOL _forceCenteredIconLayout;	// 121 = 0x79
	BOOL _forceMenuArrowLayout;	// 122 = 0x7a
	BOOL _usingDefaultTextAttributes;	// 123 = 0x7b
	BOOL _iconsTrailText;	// 124 = 0x7c
	float _forcedHeight;	// 128 = 0x80
	float _forcedContentHeight;	// 132 = 0x84
	NSNumber *_ordinal;	// 136 = 0x88
	int _largestOrdinal;	// 140 = 0x8c
	float _imageInset;	// 144 = 0x90
	float _imageHeight;	// 148 = 0x94
	float _textPadding;	// 152 = 0x98
	float _leftMargin;	// 156 = 0x9c
	float _rightMargin;	// 160 = 0xa0
	float _imageAspectRatio;	// 164 = 0xa4
	BOOL _colorSet;	// 168 = 0xa8
	NSString *_accessibilityLanguage;	// 172 = 0xac
}
@property(retain) NSString *accessibilityLanguage;	// G=0x324ccd; S=0x323749; converted property
@property(retain) NSAttributedString *detailedText;	// G=0x3218c5; S=0x32178d; converted property
@property(assign) BOOL dimmed;	// G=0x32203d; S=0x321f11; converted property
@property(assign) BOOL disableAccessoryHighlighting;	// G=0x32206d; S=0x32204d; converted property
@property(retain) id displayInfoLoader;	// G=0x321d89; S=0x321cc9; converted property
@property(assign) BOOL dotsTrailImage;	// G=0x322311; S=0x3222e5; converted property
@property(assign) BOOL forceBlueDotLayout;	// G=0x322299; S=0x32226d; converted property
@property(assign) BOOL forceCenteredIconLayout;	// G=0x3222d5; S=0x3222a9; converted property
@property(assign) BOOL forceMenuArrowLayout;	// G=0x3221a9; S=0x322189; converted property
@property(readonly, assign) BOOL forceOrdinalLayout;	// G=0x32225d; converted property
@property(assign) float forcedContentHeight;	// G=0x322179; S=0x322159; converted property
@property(assign) float forcedHeight;	// G=0x322149; S=0x32207d; converted property
@property(assign) BOOL iconsTrailText;	// G=0x32234d; S=0x322321; converted property
@property(retain) id image;	// G=0x321b4d; S=0x3219b1; converted property
@property(assign) float imageAspectRatio;	// G=0x321cb9; S=0x321c81; converted property
@property(assign) float imageHeight;	// G=0x32246d; S=0x322435; converted property
@property(assign) float imageInset;	// G=0x3223dd; S=0x3223a5; converted property
@property(retain) id imageProxy;	// G=0x321c61; S=0x321c4d; converted property
@property(assign) float leftMargin;	// G=0x322395; S=0x32235d; converted property
@property(assign) CGColorRef menuItemBackgroundColor;	// G=0x321615; S=0x3215f1; converted property
@property(retain) NSAttributedString *rightJustifiedText;	// G=0x321991; S=0x3218e5; converted property
@property(assign) float rightMargin;	// G=0x3224b5; S=0x32247d; converted property
@property(retain) NSAttributedString *text;	// G=0x32176d; S=0x32163d; converted property
@property(assign) float textPadding;	// G=0x322425; S=0x3223ed; converted property
- (id)init;	// 0x320f89
- (id)_accessoryOfType:(int)type;	// 0x323921
- (id)_accessoryOfType:(int)type offset:(float *)offset;	// 0x323935
- (CGRect)_contentFrameForBounds:(CGRect)bounds;	// 0x3249c9
- (id)_detailedTextAttributes;	// 0x3242c5
- (id)_firstAccessoryFromAccessories:(id)accessories offset:(float *)offset;	// 0x323d75
- (CGRect)_imageFrame;	// 0x324779
- (id)_imageWithName:(id)name;	// 0x324469
- (id)_largeLeftImage;	// 0x323f41
- (float)_largestOrdinalWidth;	// 0x324569
- (id)_ordinalImage;	// 0x3240ed
- (id)_ordinalString;	// 0x324641
- (id)_ordinalTypes;	// 0x324059
- (id)_rightJustifiedIconWithRightOffset:(float *)rightOffset;	// 0x323ded
- (id)_rightTextAttributes;	// 0x324309
- (void)_setSpinnerEnabled:(BOOL)enabled;	// 0x3244c9
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x32378d
- (void)_switchToScrollingTextForTextFrame:(CGRect)textFrame;	// 0x32438d
- (id)_textAttributes;	// 0x32434d
- (void)_updateColorAndContentHeight;	// 0x3237fd
- (id)_upperRightImageTypes;	// 0x324121
- (id)_upperRightImages;	// 0x324205
- (id)accessibilityLabel;	// 0x324a5d
// converted property getter: - (id)accessibilityLanguage;	// 0x324ccd
- (id)accessibilitySecondaryLabel;	// 0x324b4d
- (id)accessibilityTraitsList;	// 0x324c11
- (id)accessibilityValue;	// 0x324c01
- (void)addAccessoryOfType:(int)type;	// 0x321d99
- (void)cancelLoadDisplayInfo;	// 0x3214ed
- (id)centeredDetailedTextAttributes;	// 0x3215cd
- (id)centeredTextAttributes;	// 0x321535
- (void)controlWasActivated;	// 0x3212e5
- (void)controlWasDeactivated;	// 0x3213d9
- (void)controlWasFocused;	// 0x321225
- (void)controlWasUnfocused;	// 0x321285
- (void)dealloc;	// 0x321061
- (id)description;	// 0x321175
// converted property getter: - (id)detailedText;	// 0x3218c5
// converted property getter: - (BOOL)dimmed;	// 0x32203d
// converted property getter: - (BOOL)disableAccessoryHighlighting;	// 0x32206d
// converted property getter: - (id)displayInfoLoader;	// 0x321d89
// converted property getter: - (BOOL)dotsTrailImage;	// 0x322311
- (void)drawRect:(CGRect)rect;	// 0x322571
- (CGRect)focusCursorFrame;	// 0x3224c5
// converted property getter: - (BOOL)forceBlueDotLayout;	// 0x322299
// converted property getter: - (BOOL)forceCenteredIconLayout;	// 0x3222d5
// converted property getter: - (BOOL)forceMenuArrowLayout;	// 0x3221a9
// converted property getter: - (BOOL)forceOrdinalLayout;	// 0x32225d
// converted property getter: - (float)forcedContentHeight;	// 0x322179
// converted property getter: - (float)forcedHeight;	// 0x322149
- (BOOL)hasAccessoryOfType:(int)type;	// 0x321eb9
// converted property getter: - (BOOL)iconsTrailText;	// 0x32234d
// converted property getter: - (id)image;	// 0x321b4d
// converted property getter: - (float)imageAspectRatio;	// 0x321cb9
// converted property getter: - (float)imageHeight;	// 0x32246d
// converted property getter: - (float)imageInset;	// 0x3223dd
// converted property getter: - (id)imageProxy;	// 0x321c61
- (BOOL)isAccessibilityElement;	// 0x324a59
- (void)layoutSubcontrols;	// 0x3236e9
// converted property getter: - (float)leftMargin;	// 0x322395
- (void)loadDisplayInfo;	// 0x3214a5
// converted property getter: - (CGColorRef)menuItemBackgroundColor;	// 0x321615
- (void)removeAccessoryOfType:(int)type;	// 0x321e41
- (void)removeAllAccessories;	// 0x321ed5
// converted property getter: - (id)rightJustifiedText;	// 0x321991
// converted property getter: - (float)rightMargin;	// 0x3224b5
- (void)scrollingCompleted;	// 0x321445
// converted property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x323749
- (void)setDefaultImage:(id)image;	// 0x321a89
// converted property setter: - (void)setDetailedText:(id)text;	// 0x32178d
- (void)setDetailedText:(id)text withAttributes:(id)attributes;	// 0x3217a1
// converted property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x321f11
// converted property setter: - (void)setDisableAccessoryHighlighting:(BOOL)highlighting;	// 0x32204d
// converted property setter: - (void)setDisplayInfoLoader:(id)loader;	// 0x321cc9
// converted property setter: - (void)setDotsTrailImage:(BOOL)image;	// 0x3222e5
// converted property setter: - (void)setForceBlueDotLayout:(BOOL)layout;	// 0x32226d
// converted property setter: - (void)setForceCenteredIconLayout:(BOOL)layout;	// 0x3222a9
// converted property setter: - (void)setForceMenuArrowLayout:(BOOL)layout;	// 0x322189
- (void)setForceOrdinalLayout:(BOOL)layout ordinal:(id)ordinal largestOrdinal:(id)ordinal3;	// 0x3221b9
// converted property setter: - (void)setForcedContentHeight:(float)height;	// 0x322159
// converted property setter: - (void)setForcedHeight:(float)height;	// 0x32207d
// converted property setter: - (void)setIconsTrailText:(BOOL)text;	// 0x322321
// converted property setter: - (void)setImage:(id)image;	// 0x3219b1
// converted property setter: - (void)setImageAspectRatio:(float)ratio;	// 0x321c81
// converted property setter: - (void)setImageHeight:(float)height;	// 0x322435
// converted property setter: - (void)setImageInset:(float)inset;	// 0x3223a5
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x321c4d
- (void)setImageProxy:(id)proxy shouldCropAndFill:(BOOL)fill;	// 0x321b6d
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x32235d
// converted property setter: - (void)setMenuItemBackgroundColor:(CGColorRef)color;	// 0x3215f1
// converted property setter: - (void)setRightJustifiedText:(id)text;	// 0x3218e5
- (void)setRightJustifiedText:(id)text withAttributes:(id)attributes;	// 0x3218f9
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x32247d
// converted property setter: - (void)setText:(id)text;	// 0x32163d
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x321651
// converted property setter: - (void)setTextPadding:(float)padding;	// 0x3223ed
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3211dd
// converted property getter: - (id)text;	// 0x32176d
// converted property getter: - (float)textPadding;	// 0x322425
@end

