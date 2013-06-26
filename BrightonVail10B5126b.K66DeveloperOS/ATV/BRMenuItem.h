/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRAsyncImageControl, NSMutableSet, NSNumber, BRWaitSpinnerControl, ATVRoundProgressView, BRMarqueeTextControl, NSAttributedString;
@protocol BRDisplayInfoLoader;

__attribute__((visibility("hidden")))
@interface BRMenuItem : BRControl {
	CGColorRef _bgColor;	// 84 = 0x54
	NSAttributedString *_text;	// 88 = 0x58
	NSAttributedString *_detailedText;	// 92 = 0x5c
	NSAttributedString *_rightJustifiedText;	// 96 = 0x60
	BRMarqueeTextControl *_scrollingTextControl;	// 100 = 0x64
	BRAsyncImageControl *_imageControl;	// 104 = 0x68
	BRWaitSpinnerControl *_spinner;	// 108 = 0x6c
	ATVRoundProgressView *_progressAccessory;	// 112 = 0x70
	BRControl *_flipContainer;	// 116 = 0x74
	id<BRDisplayInfoLoader> _displayInfoLoader;	// 120 = 0x78
	NSMutableSet *_accessories;	// 124 = 0x7c
	BOOL _dimmed;	// 128 = 0x80
	BOOL _disableAccessoryHighlighting;	// 129 = 0x81
	BOOL _forceOrdinalLayout;	// 130 = 0x82
	BOOL _dotsTrailImage;	// 131 = 0x83
	BOOL _forceBlueDotLayout;	// 132 = 0x84
	BOOL _forceCenteredIconLayout;	// 133 = 0x85
	BOOL _forceMenuArrowLayout;	// 134 = 0x86
	BOOL _usingDefaultTextAttributes;	// 135 = 0x87
	BOOL _iconsTrailText;	// 136 = 0x88
	float _forcedHeight;	// 140 = 0x8c
	float _forcedContentHeight;	// 144 = 0x90
	NSNumber *_ordinal;	// 148 = 0x94
	int _largestOrdinal;	// 152 = 0x98
	float _imageInset;	// 156 = 0x9c
	float _imageHeight;	// 160 = 0xa0
	float _textPadding;	// 164 = 0xa4
	float _leftMargin;	// 168 = 0xa8
	float _rightMargin;	// 172 = 0xac
	float _imageAspectRatio;	// 176 = 0xb0
	BOOL _colorSet;	// 180 = 0xb4
	float _progress;	// 184 = 0xb8
}
@property(retain) NSAttributedString *detailedText;	// G=0x355a25; S=0x3558ed; converted property
@property(assign) BOOL dimmed;	// G=0x356725; S=0x3565f9; converted property
@property(assign) BOOL disableAccessoryHighlighting;	// G=0x356755; S=0x356735; converted property
@property(retain) id displayInfoLoader;	// G=0x356061; S=0x355f4d; converted property
@property(assign) BOOL dotsTrailImage;	// G=0x3569f9; S=0x3569cd; converted property
@property(assign) BOOL forceBlueDotLayout;	// G=0x356981; S=0x356955; converted property
@property(assign) BOOL forceCenteredIconLayout;	// G=0x3569bd; S=0x356991; converted property
@property(assign) BOOL forceMenuArrowLayout;	// G=0x356891; S=0x356871; converted property
@property(readonly, assign) BOOL forceOrdinalLayout;	// G=0x356945; converted property
@property(assign) float forcedContentHeight;	// G=0x356861; S=0x356841; converted property
@property(assign) float forcedHeight;	// G=0x356831; S=0x356765; converted property
@property(assign) BOOL iconsTrailText;	// G=0x356a35; S=0x356a09; converted property
@property(retain) id image;	// G=0x355d81; S=0x355b11; converted property
@property(assign) float imageAspectRatio;	// G=0x355f3d; S=0x355f05; converted property
@property(assign) float imageHeight;	// G=0x356b55; S=0x356b1d; converted property
@property(assign) float imageInset;	// G=0x356ac5; S=0x356a8d; converted property
@property(retain) id imageProxy;	// G=0x355ee5; S=0x355ed1; converted property
@property(assign) float leftMargin;	// G=0x356a7d; S=0x356a45; converted property
@property(assign) CGColorRef menuItemBackgroundColor;	// G=0x355775; S=0x355751; converted property
@property(assign, nonatomic) float progress;	// G=0x358019; S=0x3563b5; @synthesize=_progress
@property(retain) NSAttributedString *rightJustifiedText;	// G=0x355af1; S=0x355a45; converted property
@property(assign) float rightMargin;	// G=0x356b9d; S=0x356b65; converted property
@property(retain) NSAttributedString *text;	// G=0x3558cd; S=0x35579d; converted property
@property(assign) float textPadding;	// G=0x356b0d; S=0x356ad5; converted property
- (id)init;	// 0x3550dd
- (id)_accessoryOfType:(int)type;	// 0x3581bd
- (id)_accessoryOfType:(int)type offset:(float *)offset;	// 0x3581d1
- (CGRect)_contentFrameForBounds:(CGRect)bounds;	// 0x359411
- (id)_detailedTextAttributes;	// 0x358b89
- (id)_firstAccessoryFromAccessories:(id)accessories offset:(float *)offset;	// 0x358625
- (CGRect)_imageFrame;	// 0x35903d
- (id)_imageWithName:(id)name;	// 0x358d2d
- (id)_largeLeftImage;	// 0x358805
- (float)_largestOrdinalWidth;	// 0x358e2d
- (id)_ordinalImage;	// 0x3589b1
- (id)_ordinalString;	// 0x358f05
- (id)_ordinalTypes;	// 0x35891d
- (CGRect)_progressFrame;	// 0x35928d
- (id)_rightJustifiedIconWithRightOffset:(float *)rightOffset;	// 0x35869d
- (id)_rightTextAttributes;	// 0x358bcd
- (void)_setSpinnerEnabled:(BOOL)enabled;	// 0x358d8d
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x358029
- (void)_switchToScrollingTextForTextFrame:(CGRect)textFrame;	// 0x358c51
- (id)_textAttributes;	// 0x358c11
- (void)_updateColorAndContentHeight;	// 0x358099
- (id)_upperRightImageTypes;	// 0x3589e5
- (id)_upperRightImages;	// 0x358ac9
- (id)accessibilityLabel;	// 0x3594a5
- (id)accessibilitySecondaryLabel;	// 0x359595
- (id)accessibilityTraitsList;	// 0x359659
- (id)accessibilityValue;	// 0x359649
- (void)addAccessoryOfType:(int)type;	// 0x356071
- (void)cancelLoadDisplayInfo;	// 0x35564d
- (id)centeredDetailedTextAttributes;	// 0x35572d
- (id)centeredTextAttributes;	// 0x355695
- (void)controlWasActivated;	// 0x35544d
- (void)controlWasDeactivated;	// 0x355539
- (void)controlWasFocused;	// 0x35538d
- (void)controlWasUnfocused;	// 0x3553ed
- (void)dealloc;	// 0x3551b5
- (id)description;	// 0x3552dd
// converted property getter: - (id)detailedText;	// 0x355a25
// converted property getter: - (BOOL)dimmed;	// 0x356725
// converted property getter: - (BOOL)disableAccessoryHighlighting;	// 0x356755
// converted property getter: - (id)displayInfoLoader;	// 0x356061
// converted property getter: - (BOOL)dotsTrailImage;	// 0x3569f9
- (void)drawRect:(CGRect)rect;	// 0x356c59
- (CGRect)focusCursorFrame;	// 0x356bad
// converted property getter: - (BOOL)forceBlueDotLayout;	// 0x356981
// converted property getter: - (BOOL)forceCenteredIconLayout;	// 0x3569bd
// converted property getter: - (BOOL)forceMenuArrowLayout;	// 0x356891
// converted property getter: - (BOOL)forceOrdinalLayout;	// 0x356945
// converted property getter: - (float)forcedContentHeight;	// 0x356861
// converted property getter: - (float)forcedHeight;	// 0x356831
- (BOOL)hasAccessoryOfType:(int)type;	// 0x356349
// converted property getter: - (BOOL)iconsTrailText;	// 0x356a35
// converted property getter: - (id)image;	// 0x355d81
// converted property getter: - (float)imageAspectRatio;	// 0x355f3d
// converted property getter: - (float)imageHeight;	// 0x356b55
// converted property getter: - (float)imageInset;	// 0x356ac5
// converted property getter: - (id)imageProxy;	// 0x355ee5
- (BOOL)isAccessibilityElement;	// 0x3594a1
// converted property getter: - (float)leftMargin;	// 0x356a7d
- (void)loadDisplayInfo;	// 0x355605
// converted property getter: - (CGColorRef)menuItemBackgroundColor;	// 0x355775
// declared property getter: - (float)progress;	// 0x358019
- (void)removeAccessoryOfType:(int)type;	// 0x356229
- (void)removeAllAccessories;	// 0x356365
// converted property getter: - (id)rightJustifiedText;	// 0x355af1
// converted property getter: - (float)rightMargin;	// 0x356b9d
- (void)scrollingCompleted;	// 0x3555a5
- (void)setDefaultImage:(id)image;	// 0x355c69
// converted property setter: - (void)setDetailedText:(id)text;	// 0x3558ed
- (void)setDetailedText:(id)text withAttributes:(id)attributes;	// 0x355901
// converted property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x3565f9
// converted property setter: - (void)setDisableAccessoryHighlighting:(BOOL)highlighting;	// 0x356735
// converted property setter: - (void)setDisplayInfoLoader:(id)loader;	// 0x355f4d
// converted property setter: - (void)setDotsTrailImage:(BOOL)image;	// 0x3569cd
// converted property setter: - (void)setForceBlueDotLayout:(BOOL)layout;	// 0x356955
// converted property setter: - (void)setForceCenteredIconLayout:(BOOL)layout;	// 0x356991
// converted property setter: - (void)setForceMenuArrowLayout:(BOOL)layout;	// 0x356871
- (void)setForceOrdinalLayout:(BOOL)layout ordinal:(id)ordinal largestOrdinal:(id)ordinal3;	// 0x3568a1
// converted property setter: - (void)setForcedContentHeight:(float)height;	// 0x356841
// converted property setter: - (void)setForcedHeight:(float)height;	// 0x356765
// converted property setter: - (void)setIconsTrailText:(BOOL)text;	// 0x356a09
// converted property setter: - (void)setImage:(id)image;	// 0x355b11
// converted property setter: - (void)setImageAspectRatio:(float)ratio;	// 0x355f05
// converted property setter: - (void)setImageHeight:(float)height;	// 0x356b1d
// converted property setter: - (void)setImageInset:(float)inset;	// 0x356a8d
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x355ed1
- (void)setImageProxy:(id)proxy shouldCropAndFill:(BOOL)fill;	// 0x355da1
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x356a45
// converted property setter: - (void)setMenuItemBackgroundColor:(CGColorRef)color;	// 0x355751
// declared property setter: - (void)setProgress:(float)progress;	// 0x3563b5
- (void)setProgress:(float)progress removeOnCompletion:(BOOL)completion;	// 0x3563c9
// converted property setter: - (void)setRightJustifiedText:(id)text;	// 0x355a45
- (void)setRightJustifiedText:(id)text withAttributes:(id)attributes;	// 0x355a59
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x356b65
// converted property setter: - (void)setText:(id)text;	// 0x35579d
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x3557b1
// converted property setter: - (void)setTextPadding:(float)padding;	// 0x356ad5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x355345
// converted property getter: - (id)text;	// 0x3558cd
// converted property getter: - (float)textPadding;	// 0x356b0d
@end
