/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class NSAttributedString, NSMutableDictionary, UIColor, NSMutableAttributedString, NSString, UIFont;

@interface UILabel : UIView <NSCoding> {
	CGSize _size;	// 84 = 0x54
	UIColor *_highlightedColor;	// 92 = 0x5c
	UIColor *_shadowColor;	// 96 = 0x60
	CGSize _shadowOffset;	// 100 = 0x64
	int _numberOfLines;	// 108 = 0x6c
	float _lastLineBaseline;	// 112 = 0x70
	float _shadowBlur;	// 116 = 0x74
	float _minimumScaleFactor;	// 120 = 0x78
	NSMutableAttributedString *_attributedText;	// 124 = 0x7c
	NSAttributedString *_scaledAttributedText;	// 128 = 0x80
	NSAttributedString *_synthesizedAttributedText;	// 132 = 0x84
	NSMutableDictionary *_defaultAttributes;	// 136 = 0x88
	float _actualFontSize;	// 140 = 0x8c
	float _minimumFontSize;	// 144 = 0x90
	int _lineSpacing;	// 148 = 0x94
	struct {
		unsigned unused1 : 3;
		unsigned highlighted : 1;
		unsigned autosizeTextToFit : 1;
		unsigned autotrackTextToFit : 1;
		unsigned baselineAdjustment : 2;
		unsigned unused2 : 2;
		unsigned enabled : 1;
		unsigned wordRoundingEnabled : 1;
		unsigned explicitAlignment : 1;
		unsigned marqueeEnabled : 1;
		unsigned marqueeRunable : 1;
		unsigned marqueeRequired : 1;
		unsigned drawsLetterpress : 1;
		unsigned unused3 : 1;
		unsigned usesLegacyStringDrawing : 1;
	} _textLabelFlags;	// 152 = 0x98
	float _preferredMaxLayoutWidth;	// 156 = 0x9c
}
@property(readonly, assign, nonatomic) float _lastLineBaseline;	// G=0x30e145a1; 
@property(retain, nonatomic, getter=_synthesizedAttributedText, setter=_setSynthesizedAttributedText:) NSAttributedString *_synthesizedAttributedText;	// G=0x30e1228d; S=0x30e1232d; 
@property(assign) float actualFontSize;	// G=0x30e13d39; S=0x30e13cb1; converted property
@property(assign, nonatomic) BOOL adjustsFontSizeToFitWidth;	// G=0x30e138c1; S=0x30c935a1; 
@property(assign, nonatomic) BOOL adjustsLetterSpacingToFitWidth;	// G=0x30e14575; S=0x30e1451d; 
@property(copy, nonatomic) NSAttributedString *attributedText;	// G=0x30e13729; S=0x30e13695; 
@property(assign) BOOL autotrackTextToFit;	// G=0x30e15b2d; S=0x30e15b1d; converted property
@property(assign, nonatomic) int baselineAdjustment;	// G=0x30e14589; S=0x30d4afa9; 
@property(assign) BOOL centersHorizontally;	// G=0x30e15b85; S=0x30e15b65; converted property
@property(retain) id color;	// G=0x30e15b55; S=0x30c9358d; converted property
@property(assign) BOOL drawsLetterpress;	// G=0x30e1595d; S=0x30d28911; converted property
@property(assign) BOOL drawsUnderline;	// G=0x30e15ad5; S=0x30e15979; converted property
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x30c2e429; S=0x30c5efb9; 
@property(retain, nonatomic) UIFont *font;	// G=0x30c1d8b5; S=0x30c37975; 
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x30c2e4b1; S=0x30ccd2c1; 
@property(retain, nonatomic) UIColor *highlightedTextColor;	// G=0x30d377e5; S=0x30c6ad51; 
@property(retain) id letterpressStyle;	// G=0x30c2e419; S=0x30c76d55; converted property
@property(assign, nonatomic) int lineBreakMode;	// G=0x30c5f261; S=0x30c18ca1; 
@property(assign, nonatomic) int lineSpacing;	// G=0x30e1450d; S=0x30cb8021; 
@property(assign) BOOL marqueeRunning;	// G=0x30c18879; S=0x30c187fd; converted property
@property(assign, nonatomic) float minimumFontSize;	// G=0x30e13ca1; S=0x30c7c7c1; 
@property(assign, nonatomic) float minimumScaleFactor;	// G=0x30e15afd; S=0x30e15b0d; @synthesize=_minimumScaleFactor
@property(assign, nonatomic) int numberOfLines;	// G=0x30c18c91; S=0x30c5f2fd; 
@property(assign, nonatomic) float preferredMaxLayoutWidth;	// G=0x30e15aed; S=0x30e11b9d; @synthesize=_preferredMaxLayoutWidth
@property(assign) CGSize rawSize;	// G=0x30e15be9; S=0x30c758dd; converted property
@property(assign) float shadowBlur;	// G=0x30e142d5; S=0x30e1429d; converted property
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x30c1dbb9; S=0x30c336b1; 
@property(assign, nonatomic) CGSize shadowOffset;	// G=0x30c5f10d; S=0x30c5f129; 
@property(copy, nonatomic) NSString *text;	// G=0x30c1db6d; S=0x30c18a4d; 
@property(assign, nonatomic) int textAlignment;	// G=0x30c2da15; S=0x30c58531; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x30c2e4c5; S=0x30c33645; 
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// S=0x30c565b9; @dynamic
+ (id)_defaultAttributes;	// 0x30e11cfd
+ (id)_synthesizedAttributedString:(id)string withWordWrapping:(BOOL)wordWrapping;	// 0x30e12095
+ (id)defaultFont;	// 0x30c56451
+ (void)initialize;	// 0x30e11c3d
- (id)initWithCoder:(id)coder;	// 0x30e12455
- (id)initWithFrame:(CGRect)frame;	// 0x30c562d9
- (BOOL)_allowAscentRounding;	// 0x30c37fc5
- (id)_attributes;	// 0x30c1d971
- (void)_commonInit;	// 0x30c56329
- (void)_coordinateBeginTimeForMarqueeAnimations:(double)marqueeAnimations;	// 0x30d65c25
- (id)_defaultAttributes;	// 0x30e1215d
- (id)_disabledFontColor;	// 0x30d76295
- (void)_drawFullMarqueeTextInRect:(CGRect)rect;	// 0x30e1592d
- (void)_drawTextInRect:(CGRect)rect baselineCalculationOnly:(BOOL)only;	// 0x30c1dbf1
- (BOOL)_drawsUnderline;	// 0x30e14b05
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x30e147f1
- (void)_invalidateAsNeededForNewSize:(CGSize)newSize oldSize:(CGSize)size;	// 0x30e12375
- (void)_invalidateTextSize;	// 0x30c286b5
// declared property getter: - (float)_lastLineBaseline;	// 0x30e145a1
- (void)_legacy_drawTextInRect:(CGRect)rect baselineCalculationOnly:(BOOL)only;	// 0x30e14bad
- (CGRect)_legacy_textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines includingShadow:(BOOL)shadow;	// 0x30e12fb1
- (CGSize)_legacy_textSize;	// 0x30e12d01
- (float)_maximumMarqueeTextWidth;	// 0x30d659a9
- (float)_minimumFontSize;	// 0x30e13c11
- (float)_preferredLayoutWidth;	// 0x30e11c2d
- (id)_scriptingInfo;	// 0x30d44e7d
- (void)_setColor:(id)color;	// 0x30e15b45
- (void)_setDefaultAttributes:(id)attributes;	// 0x30e121b1
- (void)_setFont:(id)font;	// 0x30e140a1
- (void)_setLineBreakMode:(int)mode;	// 0x30e1433d
- (void)_setMinimumFontSize:(float)size;	// 0x30e138d5
- (void)_setPreferredLayoutWidth:(float)width;	// 0x30e11bd5
- (void)_setShadowUIOffset:(UIOffset)offset;	// 0x30cb3a5d
// declared property setter: - (void)_setSynthesizedAttributedText:(id)text;	// 0x30e1232d
- (void)_setText:(id)text;	// 0x30e134ad
- (void)_setTextAlignment:(int)alignment;	// 0x30e13f19
- (void)_setTextColor:(id)color;	// 0x30e13765
- (void)_setUsesLegacyStringDrawing:(BOOL)drawing;	// 0x30e12235
- (void)_setWordRoundingEnabled:(BOOL)enabled;	// 0x30c56619
- (BOOL)_shouldDrawUnderlinesLikeWebKit;	// 0x30e15921
- (id)_siblingMarqueeLabels;	// 0x30d65acd
- (void)_startMarquee;	// 0x30d650b1
- (void)_startMarqueeIfNecessary;	// 0x30c18cb1
- (void)_stopMarqueeWithRedisplay:(BOOL)redisplay;	// 0x30d65ef1
// declared property getter: - (id)_synthesizedAttributedText;	// 0x30e1228d
- (CGRect)_textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines includingShadow:(BOOL)shadow;	// 0x30c1d3b9
- (BOOL)_usesCGToDrawShadow;	// 0x30e142e5
- (BOOL)_usesExpensiveShadows;	// 0x30e15925
- (BOOL)_usesLegacyStringDrawing;	// 0x30e1221d
// converted property getter: - (float)actualFontSize;	// 0x30e13d39
// declared property getter: - (BOOL)adjustsFontSizeToFitWidth;	// 0x30e138c1
// declared property getter: - (BOOL)adjustsLetterSpacingToFitWidth;	// 0x30e14575
- (UIEdgeInsets)alignmentRectInsets;	// 0x30e14641
// declared property getter: - (id)attributedText;	// 0x30e13729
// converted property getter: - (BOOL)autotrackTextToFit;	// 0x30e15b2d
// declared property getter: - (int)baselineAdjustment;	// 0x30e14589
// converted property getter: - (BOOL)centersHorizontally;	// 0x30e15b85
// converted property getter: - (id)color;	// 0x30e15b55
- (id)currentTextColor;	// 0x30c2e441
- (void)dealloc;	// 0x30c76c89
- (unsigned long long)defaultAccessibilityTraits;	// 0x30e7dc05
- (void)drawContentsInRect:(CGRect)rect;	// 0x30d9bc69
- (void)drawRect:(CGRect)rect;	// 0x30c1cfed
- (void)drawTextInRect:(CGRect)rect;	// 0x30c1d039
// converted property getter: - (BOOL)drawsLetterpress;	// 0x30e1595d
// converted property getter: - (BOOL)drawsUnderline;	// 0x30e15ad5
- (void)encodeWithCoder:(id)coder;	// 0x30e128dd
// declared property getter: - (id)font;	// 0x30c1d8b5
// declared property getter: - (id)highlightedTextColor;	// 0x30d377e5
- (CGSize)intrinsicContentSize;	// 0x30e1496d
- (BOOL)isAccessibilityElementByDefault;	// 0x30e7dbfd
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x30e7dc01
// declared property getter: - (BOOL)isEnabled;	// 0x30c2e429
// declared property getter: - (BOOL)isHighlighted;	// 0x30c2e4b1
- (BOOL)isTextFieldCenteredLabel;	// 0x30c2e411
// converted property getter: - (id)letterpressStyle;	// 0x30c2e419
// declared property getter: - (int)lineBreakMode;	// 0x30c5f261
// declared property getter: - (int)lineSpacing;	// 0x30e1450d
// converted property getter: - (BOOL)marqueeRunning;	// 0x30c18879
// declared property getter: - (float)minimumFontSize;	// 0x30e13ca1
// declared property getter: - (float)minimumScaleFactor;	// 0x30e15afd
// declared property getter: - (int)numberOfLines;	// 0x30c18c91
// declared property getter: - (float)preferredMaxLayoutWidth;	// 0x30e15aed
// converted property getter: - (CGSize)rawSize;	// 0x30e15be9
// converted property setter: - (void)setActualFontSize:(float)size;	// 0x30e13cb1
// declared property setter: - (void)setAdjustsFontSizeToFitWidth:(BOOL)fitWidth;	// 0x30c935a1
// declared property setter: - (void)setAdjustsLetterSpacingToFitWidth:(BOOL)fitWidth;	// 0x30e1451d
// declared property setter: - (void)setAttributedText:(id)text;	// 0x30e13695
// converted property setter: - (void)setAutotrackTextToFit:(BOOL)fit;	// 0x30e15b1d
// declared property setter: - (void)setBaselineAdjustment:(int)adjustment;	// 0x30d4afa9
- (void)setBounds:(CGRect)bounds;	// 0x30e123b5
// converted property setter: - (void)setCentersHorizontally:(BOOL)horizontally;	// 0x30e15b65
// converted property setter: - (void)setColor:(id)color;	// 0x30c9358d
// converted property setter: - (void)setDrawsLetterpress:(BOOL)letterpress;	// 0x30d28911
// converted property setter: - (void)setDrawsUnderline:(BOOL)underline;	// 0x30e15979
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x30c5efb9
// declared property setter: - (void)setFont:(id)font;	// 0x30c37975
- (void)setFrame:(CGRect)frame;	// 0x30c18bf9
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x30ccd2c1
// declared property setter: - (void)setHighlightedTextColor:(id)color;	// 0x30c6ad51
// converted property setter: - (void)setLetterpressStyle:(id)style;	// 0x30c76d55
// declared property setter: - (void)setLineBreakMode:(int)mode;	// 0x30c18ca1
// declared property setter: - (void)setLineSpacing:(int)spacing;	// 0x30cb8021
- (void)setMarqueeEnabled:(BOOL)enabled;	// 0x30c18b39
// converted property setter: - (void)setMarqueeRunning:(BOOL)running;	// 0x30c187fd
// declared property setter: - (void)setMinimumFontSize:(float)size;	// 0x30c7c7c1
// declared property setter: - (void)setMinimumScaleFactor:(float)factor;	// 0x30e15b0d
// declared property setter: - (void)setNumberOfLines:(int)lines;	// 0x30c5f2fd
// declared property setter: - (void)setPreferredMaxLayoutWidth:(float)width;	// 0x30e11b9d
// converted property setter: - (void)setRawSize:(CGSize)size;	// 0x30c758dd
// converted property setter: - (void)setShadowBlur:(float)blur;	// 0x30e1429d
// declared property setter: - (void)setShadowColor:(id)color;	// 0x30c336b1
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x30c5f129
// declared property setter: - (void)setText:(id)text;	// 0x30c18a4d
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x30c58531
// declared property setter: - (void)setTextColor:(id)color;	// 0x30c33645
// declared property setter: - (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x30c565b9
// converted property getter: - (float)shadowBlur;	// 0x30e142d5
// declared property getter: - (id)shadowColor;	// 0x30c1dbb9
// declared property getter: - (CGSize)shadowOffset;	// 0x30c5f10d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30c7068d
// declared property getter: - (id)text;	// 0x30c1db6d
// declared property getter: - (int)textAlignment;	// 0x30c2da15
// declared property getter: - (id)textColor;	// 0x30c2e4c5
- (CGRect)textRectForBounds:(CGRect)bounds;	// 0x30e15ba1
- (CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines;	// 0x30c1d371
- (CGSize)textSize;	// 0x30c2e0e9
- (CGSize)textSizeForWidth:(float)width;	// 0x30c1d319
@end

