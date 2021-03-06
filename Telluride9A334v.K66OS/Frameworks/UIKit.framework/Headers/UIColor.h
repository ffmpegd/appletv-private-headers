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
@property(readonly, assign, nonatomic) CGColorRef CGColor;	// G=0x3025a351; 
@property(readonly, assign, nonatomic) CIColor *CIColor;	// G=0x3025a3a1; 
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;	// G=0x3007289d; S=0x30060e51; 
+ (id)_systemColorForColor:(id)color withName:(id)name;	// 0x300fd29d
+ (id)_systemColorWithName:(id)name;	// 0x30073051
+ (id)allocWithZone:(NSZone *)zone;	// 0x3002ddd9
+ (id)blackColor;	// 0x300570a9
+ (id)blueColor;	// 0x3025981d
+ (id)brownColor;	// 0x30259ba5
+ (id)clearColor;	// 0x300925e9
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x3009ede9
+ (id)colorWithCIColor:(id)cicolor;	// 0x30258f35
+ (id)colorWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x30258ed5
+ (id)colorWithPatternImage:(id)patternImage;	// 0x300fa5a5
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x30082a55
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x3002dd89
+ (id)cyanColor;	// 0x302598cd
+ (id)darkGrayColor;	// 0x3015e061
+ (id)darkTextColor;	// 0x3025a555
+ (id)grayColor;	// 0x3008cc2d
+ (id)greenColor;	// 0x30259769
+ (id)groupTableViewBackgroundColor;	// 0x300fd145
+ (id)infoTextOverPinStripeTextColor;	// 0x301d43a5
+ (void)initialize;	// 0x30060de1
+ (id)insertionPointColor;	// 0x30074705
+ (id)lightGrayColor;	// 0x300d5469
+ (id)lightTextColor;	// 0x3025a4a5
+ (id)magentaColor;	// 0x30259a39
+ (id)noContentDarkGradientBackgroundColor;	// 0x3025a861
+ (id)noContentLightGradientBackgroundColor;	// 0x3025a7e9
+ (id)orangeColor;	// 0x300ffb85
+ (id)pinStripeColor;	// 0x300fd1e5
+ (id)purpleColor;	// 0x30259aed
+ (id)redColor;	// 0x302596b5
+ (id)scrollViewTexturedBackgroundColor;	// 0x3025a771
+ (id)sectionHeaderBackgroundColor;	// 0x3025a019
+ (id)sectionHeaderBorderColor;	// 0x3025a1a5
+ (id)sectionHeaderOpaqueBackgroundColor;	// 0x3025a0e1
+ (id)sectionListBorderColor;	// 0x30152065
+ (id)selectionHighlightColor;	// 0x30074815
+ (id)tableBackgroundColor;	// 0x30072341
+ (id)tableCellBlueTextColor;	// 0x30157079
+ (id)tableCellGrayTextColor;	// 0x300f644d
+ (id)tableCellGroupedBackgroundColor;	// 0x301000ad
+ (id)tableCellGroupedBackgroundColorLegacyWhite;	// 0x30259c69
+ (id)tableCellPlainBackgroundColor;	// 0x3008e601
+ (id)tableCellValue1BlueColor;	// 0x300fd595
+ (id)tableCellValue2BlueColor;	// 0x301c4031
+ (id)tableGroupedSeparatorLightColor;	// 0x300fd325
+ (id)tableGroupedTopShadowColor;	// 0x30259f61
+ (id)tableSelectionColor;	// 0x3015d1bd
+ (id)tableSelectionGradientEndColor;	// 0x30259de1
+ (id)tableSelectionGradientStartColor;	// 0x30259d1d
+ (id)tableSeparatorDarkColor;	// 0x30101e6d
+ (id)tableSeparatorLightColor;	// 0x30073075
+ (id)tableShadowColor;	// 0x30259ea5
+ (id)textFieldAtomBlueColor;	// 0x301a4175
+ (id)textFieldAtomPurpleColor;	// 0x301a42b9
+ (id)translucentPaperTextureColor;	// 0x3025a8d9
+ (id)underPageBackgroundColor;	// 0x3025a6b9
+ (id)viewFlipsideBackgroundColor;	// 0x3025a601
+ (id)whiteColor;	// 0x3003a8ad
+ (id)whitePaperTextureColor;	// 0x3025a991
+ (id)yellowColor;	// 0x30259981
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x300fa621
- (id)initWithCIColor:(id)cicolor;	// 0x30258fd1
- (id)initWithCoder:(id)coder;	// 0x30259039
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x30258f81
- (id)initWithPatternImage:(id)patternImage;	// 0x300fa5f1
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3009ed49
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x30077305
// declared property getter: - (CGColorRef)CGColor;	// 0x3025a351
// declared property getter: - (id)CIColor;	// 0x3025a3a1
// declared property setter: - (void)_setSystemColorName:(id)name;	// 0x30060e51
// declared property getter: - (id)_systemColorName;	// 0x3007289d
- (float)alphaComponent;	// 0x3025a49d
- (CGColorRef)cgColor;	// 0x300fa775
- (Class)classForCoder;	// 0x3025901d
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x3025a34d
- (void)dealloc;	// 0x3002fde5
- (void)encodeWithCoder:(id)coder;	// 0x302593bd
- (BOOL)getHue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness alpha:(float *)alpha;	// 0x3025a495
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x3025a499
- (BOOL)getWhite:(float *)white alpha:(float *)alpha;	// 0x3025a491
- (unsigned)hash;	// 0x3025a441
- (BOOL)isEqual:(id)equal;	// 0x3025a3f1
- (BOOL)isPatternColor;	// 0x3025a4a1
- (void)set;	// 0x3025a269
- (void)setFill;	// 0x3025a2b5
- (void)setStroke;	// 0x3025a301
- (id)styleString;	// 0x300faa51
@end

