/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"
#import "NSCoding.h"

@class NSString, CIColor;

@interface UIColor : NSObject <NSCoding> {
@private
	NSString *_systemColorName;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CGColorRef CGColor;	// G=0x33bab351; 
@property(readonly, assign, nonatomic) CIColor *CIColor;	// G=0x33bab3a1; 
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;	// G=0x339c389d; S=0x339b1e51; 
+ (id)_systemColorForColor:(id)color withName:(id)name;	// 0x33a4e29d
+ (id)_systemColorWithName:(id)name;	// 0x339c4051
+ (id)allocWithZone:(NSZone *)zone;	// 0x3397edd9
+ (id)blackColor;	// 0x339a80a9
+ (id)blueColor;	// 0x33baa81d
+ (id)brownColor;	// 0x33baaba5
+ (id)clearColor;	// 0x339e35e9
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x339efde9
+ (id)colorWithCIColor:(id)cicolor;	// 0x33ba9f35
+ (id)colorWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x33ba9ed5
+ (id)colorWithPatternImage:(id)patternImage;	// 0x33a4b5a5
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x339d3a55
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x3397ed89
+ (id)cyanColor;	// 0x33baa8cd
+ (id)darkGrayColor;	// 0x33aaf061
+ (id)darkTextColor;	// 0x33bab555
+ (id)grayColor;	// 0x339ddc2d
+ (id)greenColor;	// 0x33baa769
+ (id)groupTableViewBackgroundColor;	// 0x33a4e145
+ (id)infoTextOverPinStripeTextColor;	// 0x33b253a5
+ (void)initialize;	// 0x339b1de1
+ (id)insertionPointColor;	// 0x339c5705
+ (id)lightGrayColor;	// 0x33a26469
+ (id)lightTextColor;	// 0x33bab4a5
+ (id)magentaColor;	// 0x33baaa39
+ (id)noContentDarkGradientBackgroundColor;	// 0x33bab861
+ (id)noContentLightGradientBackgroundColor;	// 0x33bab7e9
+ (id)orangeColor;	// 0x33a50b85
+ (id)pinStripeColor;	// 0x33a4e1e5
+ (id)purpleColor;	// 0x33baaaed
+ (id)redColor;	// 0x33baa6b5
+ (id)scrollViewTexturedBackgroundColor;	// 0x33bab771
+ (id)sectionHeaderBackgroundColor;	// 0x33bab019
+ (id)sectionHeaderBorderColor;	// 0x33bab1a5
+ (id)sectionHeaderOpaqueBackgroundColor;	// 0x33bab0e1
+ (id)sectionListBorderColor;	// 0x33aa3065
+ (id)selectionHighlightColor;	// 0x339c5815
+ (id)tableBackgroundColor;	// 0x339c3341
+ (id)tableCellBlueTextColor;	// 0x33aa8079
+ (id)tableCellGrayTextColor;	// 0x33a4744d
+ (id)tableCellGroupedBackgroundColor;	// 0x33a510ad
+ (id)tableCellGroupedBackgroundColorLegacyWhite;	// 0x33baac69
+ (id)tableCellPlainBackgroundColor;	// 0x339df601
+ (id)tableCellValue1BlueColor;	// 0x33a4e595
+ (id)tableCellValue2BlueColor;	// 0x33b15031
+ (id)tableGroupedSeparatorLightColor;	// 0x33a4e325
+ (id)tableGroupedTopShadowColor;	// 0x33baaf61
+ (id)tableSelectionColor;	// 0x33aae1bd
+ (id)tableSelectionGradientEndColor;	// 0x33baade1
+ (id)tableSelectionGradientStartColor;	// 0x33baad1d
+ (id)tableSeparatorDarkColor;	// 0x33a52e6d
+ (id)tableSeparatorLightColor;	// 0x339c4075
+ (id)tableShadowColor;	// 0x33baaea5
+ (id)textFieldAtomBlueColor;	// 0x33af5175
+ (id)textFieldAtomPurpleColor;	// 0x33af52b9
+ (id)translucentPaperTextureColor;	// 0x33bab8d9
+ (id)underPageBackgroundColor;	// 0x33bab6b9
+ (id)viewFlipsideBackgroundColor;	// 0x33bab601
+ (id)whiteColor;	// 0x3398b8ad
+ (id)whitePaperTextureColor;	// 0x33bab991
+ (id)yellowColor;	// 0x33baa981
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x33a4b621
- (id)initWithCIColor:(id)cicolor;	// 0x33ba9fd1
- (id)initWithCoder:(id)coder;	// 0x33baa039
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x33ba9f81
- (id)initWithPatternImage:(id)patternImage;	// 0x33a4b5f1
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x339efd49
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x339c8305
// declared property getter: - (CGColorRef)CGColor;	// 0x33bab351
// declared property getter: - (id)CIColor;	// 0x33bab3a1
// declared property setter: - (void)_setSystemColorName:(id)name;	// 0x339b1e51
// declared property getter: - (id)_systemColorName;	// 0x339c389d
- (float)alphaComponent;	// 0x33bab49d
- (CGColorRef)cgColor;	// 0x33a4b775
- (Class)classForCoder;	// 0x33baa01d
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x33bab34d
- (void)dealloc;	// 0x33980de5
- (void)encodeWithCoder:(id)coder;	// 0x33baa3bd
- (BOOL)getHue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness alpha:(float *)alpha;	// 0x33bab495
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x33bab499
- (BOOL)getWhite:(float *)white alpha:(float *)alpha;	// 0x33bab491
- (unsigned)hash;	// 0x33bab441
- (BOOL)isEqual:(id)equal;	// 0x33bab3f1
- (BOOL)isPatternColor;	// 0x33bab4a1
- (void)set;	// 0x33bab269
- (void)setFill;	// 0x33bab2b5
- (void)setStroke;	// 0x33bab301
- (id)styleString;	// 0x33a4ba51
@end

