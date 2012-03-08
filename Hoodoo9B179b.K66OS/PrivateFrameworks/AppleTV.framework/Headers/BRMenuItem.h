/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRWaitSpinnerControl, NSString, BRMarqueeTextControl, NSAttributedString, BRAsyncImageControl, NSMutableSet, NSNumber;
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
@property(retain) NSString *accessibilityLanguage;	// G=0x303115d5; S=0x3031005d; converted property
@property(retain) NSAttributedString *detailedText;	// G=0x3030e165; S=0x3030e029; converted property
@property(assign) BOOL dimmed;	// G=0x3030e911; S=0x3030e7e5; converted property
@property(assign) BOOL disableAccessoryHighlighting;	// G=0x3030e941; S=0x3030e921; converted property
@property(retain) id displayInfoLoader;	// G=0x3030e655; S=0x3030e58d; converted property
@property(assign) BOOL dotsTrailImage;	// G=0x3030ebf1; S=0x3030ebc1; converted property
@property(assign) BOOL forceBlueDotLayout;	// G=0x3030eb71; S=0x3030eb41; converted property
@property(assign) BOOL forceCenteredIconLayout;	// G=0x3030ebb1; S=0x3030eb81; converted property
@property(assign) BOOL forceMenuArrowLayout;	// G=0x3030ea75; S=0x3030ea55; converted property
@property(readonly, assign) BOOL forceOrdinalLayout;	// G=0x3030eb31; converted property
@property(assign) float forcedContentHeight;	// G=0x3030ea45; S=0x3030ea25; converted property
@property(assign) float forcedHeight;	// G=0x3030ea15; S=0x3030e951; converted property
@property(assign) BOOL iconsTrailText;	// G=0x3030ec31; S=0x3030ec01; converted property
@property(retain) id image;	// G=0x3030e401; S=0x3030e255; converted property
@property(assign) float imageAspectRatio;	// G=0x3030e57d; S=0x3030e541; converted property
@property(assign) float imageHeight;	// G=0x3030ed61; S=0x3030ed25; converted property
@property(assign) float imageInset;	// G=0x3030ecc9; S=0x3030ec8d; converted property
@property(retain) id imageProxy;	// G=0x3030e521; S=0x3030e50d; converted property
@property(assign) float leftMargin;	// G=0x3030ec7d; S=0x3030ec41; converted property
@property(assign) CGColorRef menuItemBackgroundColor;	// G=0x3030dead; S=0x3030de85; converted property
@property(retain) NSAttributedString *rightJustifiedText;	// G=0x3030e235; S=0x3030e185; converted property
@property(assign) float rightMargin;	// G=0x3030edad; S=0x3030ed71; converted property
@property(retain) NSAttributedString *text;	// G=0x3030e009; S=0x3030ded5; converted property
@property(assign) float textPadding;	// G=0x3030ed15; S=0x3030ecd9; converted property
- (id)init;	// 0x3030d81d
- (id)_accessoryOfType:(int)type;	// 0x3031024d
- (id)_accessoryOfType:(int)type offset:(float *)offset;	// 0x30310261
- (CGRect)_contentFrameForBounds:(CGRect)bounds;	// 0x303112f5
- (id)_detailedTextAttributes;	// 0x30310bc5
- (id)_firstAccessoryFromAccessories:(id)accessories offset:(float *)offset;	// 0x30310695
- (CGRect)_imageFrame;	// 0x3031108d
- (id)_imageWithName:(id)name;	// 0x30310d6d
- (id)_largeLeftImage;	// 0x30310855
- (float)_largestOrdinalWidth;	// 0x30310e7d
- (id)_ordinalImage;	// 0x303109f9
- (id)_ordinalString;	// 0x30310f61
- (id)_ordinalTypes;	// 0x30310969
- (id)_rightJustifiedIconWithRightOffset:(float *)rightOffset;	// 0x30310705
- (id)_rightTextAttributes;	// 0x30310c09
- (void)_setSpinnerEnabled:(BOOL)enabled;	// 0x30310dd5
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x303100a1
- (void)_switchToScrollingTextForTextFrame:(CGRect)textFrame;	// 0x30310c8d
- (id)_textAttributes;	// 0x30310c4d
- (void)_updateColorAndContentHeight;	// 0x30310111
- (id)_upperRightImageTypes;	// 0x30310a2d
- (id)_upperRightImages;	// 0x30310b0d
- (id)accessibilityLabel;	// 0x30311371
// converted property getter: - (id)accessibilityLanguage;	// 0x303115d5
- (id)accessibilitySecondaryLabel;	// 0x30311465
- (id)accessibilityTraits;	// 0x30311519
- (void)addAccessoryOfType:(int)type;	// 0x3030e665
- (void)cancelLoadDisplayInfo;	// 0x3030dd81
- (id)centeredDetailedTextAttributes;	// 0x3030de61
- (id)centeredTextAttributes;	// 0x3030ddc9
- (void)controlWasActivated;	// 0x3030db79
- (void)controlWasDeactivated;	// 0x3030dc6d
- (void)controlWasFocused;	// 0x3030dab9
- (void)controlWasUnfocused;	// 0x3030db19
- (void)dealloc;	// 0x3030d8f5
- (id)description;	// 0x3030da09
// converted property getter: - (id)detailedText;	// 0x3030e165
// converted property getter: - (BOOL)dimmed;	// 0x3030e911
// converted property getter: - (BOOL)disableAccessoryHighlighting;	// 0x3030e941
// converted property getter: - (id)displayInfoLoader;	// 0x3030e655
// converted property getter: - (BOOL)dotsTrailImage;	// 0x3030ebf1
- (void)drawInContext:(CGContextRef)context;	// 0x3030ee69
- (CGRect)focusCursorFrame;	// 0x3030edbd
// converted property getter: - (BOOL)forceBlueDotLayout;	// 0x3030eb71
// converted property getter: - (BOOL)forceCenteredIconLayout;	// 0x3030ebb1
// converted property getter: - (BOOL)forceMenuArrowLayout;	// 0x3030ea75
// converted property getter: - (BOOL)forceOrdinalLayout;	// 0x3030eb31
// converted property getter: - (float)forcedContentHeight;	// 0x3030ea45
// converted property getter: - (float)forcedHeight;	// 0x3030ea15
- (BOOL)hasAccessoryOfType:(int)type;	// 0x3030e789
// converted property getter: - (BOOL)iconsTrailText;	// 0x3030ec31
// converted property getter: - (id)image;	// 0x3030e401
// converted property getter: - (float)imageAspectRatio;	// 0x3030e57d
// converted property getter: - (float)imageHeight;	// 0x3030ed61
// converted property getter: - (float)imageInset;	// 0x3030ecc9
// converted property getter: - (id)imageProxy;	// 0x3030e521
- (BOOL)isAccessibilityElement;	// 0x3031136d
- (void)layoutSubcontrols;	// 0x30310001
// converted property getter: - (float)leftMargin;	// 0x3030ec7d
- (void)loadDisplayInfo;	// 0x3030dd39
// converted property getter: - (CGColorRef)menuItemBackgroundColor;	// 0x3030dead
- (void)removeAccessoryOfType:(int)type;	// 0x3030e711
- (void)removeAllAccessories;	// 0x3030e7a9
// converted property getter: - (id)rightJustifiedText;	// 0x3030e235
// converted property getter: - (float)rightMargin;	// 0x3030edad
- (void)scrollingCompleted;	// 0x3030dcd9
// converted property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x3031005d
- (void)setDefaultImage:(id)image;	// 0x3030e335
// converted property setter: - (void)setDetailedText:(id)text;	// 0x3030e029
- (void)setDetailedText:(id)text withAttributes:(id)attributes;	// 0x3030e03d
// converted property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x3030e7e5
// converted property setter: - (void)setDisableAccessoryHighlighting:(BOOL)highlighting;	// 0x3030e921
// converted property setter: - (void)setDisplayInfoLoader:(id)loader;	// 0x3030e58d
// converted property setter: - (void)setDotsTrailImage:(BOOL)image;	// 0x3030ebc1
// converted property setter: - (void)setForceBlueDotLayout:(BOOL)layout;	// 0x3030eb41
// converted property setter: - (void)setForceCenteredIconLayout:(BOOL)layout;	// 0x3030eb81
// converted property setter: - (void)setForceMenuArrowLayout:(BOOL)layout;	// 0x3030ea55
- (void)setForceOrdinalLayout:(BOOL)layout ordinal:(id)ordinal largestOrdinal:(id)ordinal3;	// 0x3030ea85
// converted property setter: - (void)setForcedContentHeight:(float)height;	// 0x3030ea25
// converted property setter: - (void)setForcedHeight:(float)height;	// 0x3030e951
// converted property setter: - (void)setIconsTrailText:(BOOL)text;	// 0x3030ec01
// converted property setter: - (void)setImage:(id)image;	// 0x3030e255
// converted property setter: - (void)setImageAspectRatio:(float)ratio;	// 0x3030e541
// converted property setter: - (void)setImageHeight:(float)height;	// 0x3030ed25
// converted property setter: - (void)setImageInset:(float)inset;	// 0x3030ec8d
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x3030e50d
- (void)setImageProxy:(id)proxy shouldCropAndFill:(BOOL)fill;	// 0x3030e421
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x3030ec41
// converted property setter: - (void)setMenuItemBackgroundColor:(CGColorRef)color;	// 0x3030de85
// converted property setter: - (void)setRightJustifiedText:(id)text;	// 0x3030e185
- (void)setRightJustifiedText:(id)text withAttributes:(id)attributes;	// 0x3030e199
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x3030ed71
// converted property setter: - (void)setText:(id)text;	// 0x3030ded5
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x3030dee9
// converted property setter: - (void)setTextPadding:(float)padding;	// 0x3030ecd9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3030da71
// converted property getter: - (id)text;	// 0x3030e009
// converted property getter: - (float)textPadding;	// 0x3030ed15
@end
