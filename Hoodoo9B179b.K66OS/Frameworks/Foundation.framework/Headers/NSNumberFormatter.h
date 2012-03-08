/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSFormatter.h"

@class NSMutableDictionary;

@interface NSNumberFormatter : NSFormatter {
@private
	NSMutableDictionary *_attributes;	// 4 = 0x4
	CFNumberFormatterRef _formatter;	// 8 = 0x8
	unsigned _counter;	// 12 = 0xc
	void *_reserved[12];	// 16 = 0x10
}
@property(assign) BOOL allowsFloats;	// G=0x310bd961; S=0x31030c79; converted property
@property(assign) BOOL alwaysShowsDecimalSeparator;	// G=0x310bdafd; S=0x310518bd; converted property
@property(retain) id currencyCode;	// G=0x310bec5d; S=0x310bed1d; converted property
@property(retain) id currencyDecimalSeparator;	// G=0x310bdbb1; S=0x310bdc71; converted property
@property(retain) id currencyGroupingSeparator;	// G=0x310c06f1; S=0x310c07b1; converted property
@property(retain) id currencySymbol;	// G=0x310bedb9; S=0x310bee79; converted property
@property(retain) id decimalSeparator;	// G=0x310bd9a1; S=0x310bda61; converted property
@property(retain) id exponentSymbol;	// G=0x310bf5e1; S=0x310bf6a1; converted property
@property(assign) unsigned formatWidth;	// G=0x310bf971; S=0x310bfa4d; converted property
@property(assign) unsigned formatterBehavior;	// G=0x310bd38d; S=0x310516d1; converted property
@property(assign) BOOL generatesDecimalNumbers;	// G=0x310bd345; S=0x3104068d; converted property
@property(retain) id groupingSeparator;	// G=0x310bddc1; S=0x310bde81; converted property
@property(assign) unsigned groupingSize;	// G=0x310bf73d; S=0x3104c0ed; converted property
@property(retain) id internationalCurrencySymbol;	// G=0x310bef15; S=0x310befd5; converted property
@property(assign, getter=isLenient) BOOL lenient;	// G=0x310c084d; S=0x310c090d; converted property
@property(retain) id locale;	// G=0x310bd2d5; S=0x31040621; converted property
@property(retain) id maximum;	// G=0x310c0635; S=0x310c065d; converted property
@property(assign) unsigned maximumFractionDigits;	// G=0x310c049d; S=0x31046839; converted property
@property(assign) unsigned maximumIntegerDigits;	// G=0x310c0269; S=0x310c0345; converted property
@property(assign) unsigned maximumSignificantDigits;	// G=0x310c0c25; S=0x310c0d01; converted property
@property(retain) id minimum;	// G=0x310c0579; S=0x310c05a1; converted property
@property(assign) unsigned minimumFractionDigits;	// G=0x310c03c1; S=0x3105193d; converted property
@property(assign) unsigned minimumIntegerDigits;	// G=0x310c018d; S=0x310519b9; converted property
@property(assign) unsigned minimumSignificantDigits;	// G=0x310c0acd; S=0x310c0ba9; converted property
@property(retain) id minusSign;	// G=0x310bf329; S=0x310bf3e9; converted property
@property(retain) id multiplier;	// G=0x310bfac9; S=0x310bfb89; converted property
@property(retain) id negativeFormat;	// G=0x310bd3cd; S=0x310bd485; converted property
@property(retain) id negativeInfinitySymbol;	// G=0x310be58d; S=0x31030c21; converted property
@property(retain) id negativePrefix;	// G=0x310be9a5; S=0x310bea65; converted property
@property(retain) id negativeSuffix;	// G=0x310beb01; S=0x310bebc1; converted property
@property(retain) id nilSymbol;	// G=0x310be095; S=0x31030b71; converted property
@property(retain) id notANumberSymbol;	// G=0x310be1f5; S=0x310be2b5; converted property
@property(assign) unsigned numberStyle;	// G=0x310bd255; S=0x31035f41; converted property
@property(retain) id paddingCharacter;	// G=0x310bfc25; S=0x310bfce5; converted property
@property(assign) unsigned paddingPosition;	// G=0x310bfd81; S=0x310bfe5d; converted property
@property(assign, getter=isPartialStringValidationEnabled) BOOL partialStringValidationEnabled;	// G=0x310c0d7d; S=0x310c0dc5; converted property
@property(retain) id perMillSymbol;	// G=0x310bf1cd; S=0x310bf28d; converted property
@property(retain) id percentSymbol;	// G=0x310bf071; S=0x310bf131; converted property
@property(retain) id plusSign;	// G=0x310bf485; S=0x310bf545; converted property
@property(retain) id positiveFormat;	// G=0x310bd6bd; S=0x310bd759; converted property
@property(retain) id positiveInfinitySymbol;	// G=0x310be42d; S=0x31030bc9; converted property
@property(retain) id positivePrefix;	// G=0x310be6ed; S=0x310be7ad; converted property
@property(retain) id positiveSuffix;	// G=0x310be849; S=0x310be909; converted property
@property(retain) id roundingIncrement;	// G=0x310c0031; S=0x310c00f1; converted property
@property(assign) unsigned roundingMode;	// G=0x310bfed9; S=0x310bffb5; converted property
@property(assign) unsigned secondaryGroupingSize;	// G=0x310bf819; S=0x310bf8f5; converted property
@property(retain) id textAttributesForNegativeInfinity;	// G=0x310be611; S=0x310be695; converted property
@property(retain) id textAttributesForNegativeValues;	// G=0x310bd5e1; S=0x310bd665; converted property
@property(retain) id textAttributesForNil;	// G=0x310be119; S=0x310be19d; converted property
@property(retain) id textAttributesForNotANumber;	// G=0x310be351; S=0x310be3d5; converted property
@property(retain) id textAttributesForPositiveInfinity;	// G=0x310be4b1; S=0x310be535; converted property
@property(retain) id textAttributesForPositiveValues;	// G=0x310bd885; S=0x310bd909; converted property
@property(retain) id textAttributesForZero;	// G=0x310bdfb9; S=0x310be03d; converted property
@property(assign) BOOL usesGroupingSeparator;	// G=0x310bdd0d; S=0x31034321; converted property
@property(assign) BOOL usesSignificantDigits;	// G=0x310c098d; S=0x310c0a4d; converted property
@property(retain) id zeroSymbol;	// G=0x31049355; S=0x310bdf1d; converted property
+ (unsigned)defaultFormatterBehavior;	// 0x31030b61
+ (void)initialize;	// 0x31030791
+ (id)localizedStringFromNumber:(id)number numberStyle:(unsigned)style;	// 0x31051ab1
+ (void)setDefaultFormatterBehavior:(unsigned)behavior;	// 0x310307bd
- (id)init;	// 0x310307d5
- (id)initWithCoder:(id)coder;	// 0x310bc79d
- (void *)__Keynote_NOOP;	// 0x310bc4cd
- (void)_regenerateFormatter;	// 0x31030cd5
- (void)_reset;	// 0x310bc4d1
// converted property getter: - (BOOL)allowsFloats;	// 0x310bd961
// converted property getter: - (BOOL)alwaysShowsDecimalSeparator;	// 0x310bdafd
- (id)attributedStringForObjectValue:(id)objectValue withDefaultAttributes:(id)defaultAttributes;	// 0x310bc93d
- (id)copyWithZone:(NSZone *)zone;	// 0x310bc68d
// converted property getter: - (id)currencyCode;	// 0x310bec5d
// converted property getter: - (id)currencyDecimalSeparator;	// 0x310bdbb1
// converted property getter: - (id)currencyGroupingSeparator;	// 0x310c06f1
// converted property getter: - (id)currencySymbol;	// 0x310bedb9
- (void)dealloc;	// 0x31040761
// converted property getter: - (id)decimalSeparator;	// 0x310bd9a1
- (void)encodeWithCoder:(id)coder;	// 0x310bc6f5
// converted property getter: - (id)exponentSymbol;	// 0x310bf5e1
- (void)finalize;	// 0x310bc649
// converted property getter: - (unsigned)formatWidth;	// 0x310bf971
// converted property getter: - (unsigned)formatterBehavior;	// 0x310bd38d
// converted property getter: - (BOOL)generatesDecimalNumbers;	// 0x310bd345
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;	// 0x310bc941
- (BOOL)getObjectValue:(out id *)value forString:(id)string range:(inout NSRange *)range error:(out id *)error;	// 0x310bd1f9
// converted property getter: - (id)groupingSeparator;	// 0x310bddc1
// converted property getter: - (unsigned)groupingSize;	// 0x310bf73d
// converted property getter: - (id)internationalCurrencySymbol;	// 0x310bef15
// converted property getter: - (BOOL)isLenient;	// 0x310c084d
// converted property getter: - (BOOL)isPartialStringValidationEnabled;	// 0x310c0d7d
// converted property getter: - (id)locale;	// 0x310bd2d5
// converted property getter: - (id)maximum;	// 0x310c0635
// converted property getter: - (unsigned)maximumFractionDigits;	// 0x310c049d
// converted property getter: - (unsigned)maximumIntegerDigits;	// 0x310c0269
// converted property getter: - (unsigned)maximumSignificantDigits;	// 0x310c0c25
// converted property getter: - (id)minimum;	// 0x310c0579
// converted property getter: - (unsigned)minimumFractionDigits;	// 0x310c03c1
// converted property getter: - (unsigned)minimumIntegerDigits;	// 0x310c018d
// converted property getter: - (unsigned)minimumSignificantDigits;	// 0x310c0acd
// converted property getter: - (id)minusSign;	// 0x310bf329
// converted property getter: - (id)multiplier;	// 0x310bfac9
// converted property getter: - (id)negativeFormat;	// 0x310bd3cd
// converted property getter: - (id)negativeInfinitySymbol;	// 0x310be58d
// converted property getter: - (id)negativePrefix;	// 0x310be9a5
// converted property getter: - (id)negativeSuffix;	// 0x310beb01
// converted property getter: - (id)nilSymbol;	// 0x310be095
// converted property getter: - (id)notANumberSymbol;	// 0x310be1f5
- (id)numberFromString:(id)string;	// 0x310bd219
// converted property getter: - (unsigned)numberStyle;	// 0x310bd255
// converted property getter: - (id)paddingCharacter;	// 0x310bfc25
// converted property getter: - (unsigned)paddingPosition;	// 0x310bfd81
// converted property getter: - (id)perMillSymbol;	// 0x310bf1cd
// converted property getter: - (id)percentSymbol;	// 0x310bf071
// converted property getter: - (id)plusSign;	// 0x310bf485
// converted property getter: - (id)positiveFormat;	// 0x310bd6bd
// converted property getter: - (id)positiveInfinitySymbol;	// 0x310be42d
// converted property getter: - (id)positivePrefix;	// 0x310be6ed
// converted property getter: - (id)positiveSuffix;	// 0x310be849
// converted property getter: - (id)roundingIncrement;	// 0x310c0031
// converted property getter: - (unsigned)roundingMode;	// 0x310bfed9
// converted property getter: - (unsigned)secondaryGroupingSize;	// 0x310bf819
// converted property setter: - (void)setAllowsFloats:(BOOL)floats;	// 0x31030c79
// converted property setter: - (void)setAlwaysShowsDecimalSeparator:(BOOL)separator;	// 0x310518bd
// converted property setter: - (void)setCurrencyCode:(id)code;	// 0x310bed1d
// converted property setter: - (void)setCurrencyDecimalSeparator:(id)separator;	// 0x310bdc71
// converted property setter: - (void)setCurrencyGroupingSeparator:(id)separator;	// 0x310c07b1
// converted property setter: - (void)setCurrencySymbol:(id)symbol;	// 0x310bee79
// converted property setter: - (void)setDecimalSeparator:(id)separator;	// 0x310bda61
// converted property setter: - (void)setExponentSymbol:(id)symbol;	// 0x310bf6a1
// converted property setter: - (void)setFormatWidth:(unsigned)width;	// 0x310bfa4d
// converted property setter: - (void)setFormatterBehavior:(unsigned)behavior;	// 0x310516d1
// converted property setter: - (void)setGeneratesDecimalNumbers:(BOOL)numbers;	// 0x3104068d
// converted property setter: - (void)setGroupingSeparator:(id)separator;	// 0x310bde81
// converted property setter: - (void)setGroupingSize:(unsigned)size;	// 0x3104c0ed
// converted property setter: - (void)setInternationalCurrencySymbol:(id)symbol;	// 0x310befd5
// converted property setter: - (void)setLenient:(BOOL)lenient;	// 0x310c090d
// converted property setter: - (void)setLocale:(id)locale;	// 0x31040621
// converted property setter: - (void)setMaximum:(id)maximum;	// 0x310c065d
// converted property setter: - (void)setMaximumFractionDigits:(unsigned)digits;	// 0x31046839
// converted property setter: - (void)setMaximumIntegerDigits:(unsigned)digits;	// 0x310c0345
// converted property setter: - (void)setMaximumSignificantDigits:(unsigned)digits;	// 0x310c0d01
// converted property setter: - (void)setMinimum:(id)minimum;	// 0x310c05a1
// converted property setter: - (void)setMinimumFractionDigits:(unsigned)digits;	// 0x3105193d
// converted property setter: - (void)setMinimumIntegerDigits:(unsigned)digits;	// 0x310519b9
// converted property setter: - (void)setMinimumSignificantDigits:(unsigned)digits;	// 0x310c0ba9
// converted property setter: - (void)setMinusSign:(id)sign;	// 0x310bf3e9
// converted property setter: - (void)setMultiplier:(id)multiplier;	// 0x310bfb89
// converted property setter: - (void)setNegativeFormat:(id)format;	// 0x310bd485
// converted property setter: - (void)setNegativeInfinitySymbol:(id)symbol;	// 0x31030c21
// converted property setter: - (void)setNegativePrefix:(id)prefix;	// 0x310bea65
// converted property setter: - (void)setNegativeSuffix:(id)suffix;	// 0x310bebc1
// converted property setter: - (void)setNilSymbol:(id)symbol;	// 0x31030b71
// converted property setter: - (void)setNotANumberSymbol:(id)symbol;	// 0x310be2b5
// converted property setter: - (void)setNumberStyle:(unsigned)style;	// 0x31035f41
// converted property setter: - (void)setPaddingCharacter:(id)character;	// 0x310bfce5
// converted property setter: - (void)setPaddingPosition:(unsigned)position;	// 0x310bfe5d
// converted property setter: - (void)setPartialStringValidationEnabled:(BOOL)enabled;	// 0x310c0dc5
// converted property setter: - (void)setPerMillSymbol:(id)symbol;	// 0x310bf28d
// converted property setter: - (void)setPercentSymbol:(id)symbol;	// 0x310bf131
// converted property setter: - (void)setPlusSign:(id)sign;	// 0x310bf545
// converted property setter: - (void)setPositiveFormat:(id)format;	// 0x310bd759
// converted property setter: - (void)setPositiveInfinitySymbol:(id)symbol;	// 0x31030bc9
// converted property setter: - (void)setPositivePrefix:(id)prefix;	// 0x310be7ad
// converted property setter: - (void)setPositiveSuffix:(id)suffix;	// 0x310be909
// converted property setter: - (void)setRoundingIncrement:(id)increment;	// 0x310c00f1
// converted property setter: - (void)setRoundingMode:(unsigned)mode;	// 0x310bffb5
// converted property setter: - (void)setSecondaryGroupingSize:(unsigned)size;	// 0x310bf8f5
// converted property setter: - (void)setTextAttributesForNegativeInfinity:(id)negativeInfinity;	// 0x310be695
// converted property setter: - (void)setTextAttributesForNegativeValues:(id)negativeValues;	// 0x310bd665
// converted property setter: - (void)setTextAttributesForNil:(id)aNil;	// 0x310be19d
// converted property setter: - (void)setTextAttributesForNotANumber:(id)notANumber;	// 0x310be3d5
// converted property setter: - (void)setTextAttributesForPositiveInfinity:(id)positiveInfinity;	// 0x310be535
// converted property setter: - (void)setTextAttributesForPositiveValues:(id)positiveValues;	// 0x310bd909
// converted property setter: - (void)setTextAttributesForZero:(id)zero;	// 0x310be03d
// converted property setter: - (void)setUsesGroupingSeparator:(BOOL)separator;	// 0x31034321
// converted property setter: - (void)setUsesSignificantDigits:(BOOL)digits;	// 0x310c0a4d
// converted property setter: - (void)setZeroSymbol:(id)symbol;	// 0x310bdf1d
- (id)stringForObjectValue:(id)objectValue;	// 0x310343c1
- (id)stringFromNumber:(id)number;	// 0x310343a1
// converted property getter: - (id)textAttributesForNegativeInfinity;	// 0x310be611
// converted property getter: - (id)textAttributesForNegativeValues;	// 0x310bd5e1
// converted property getter: - (id)textAttributesForNil;	// 0x310be119
// converted property getter: - (id)textAttributesForNotANumber;	// 0x310be351
// converted property getter: - (id)textAttributesForPositiveInfinity;	// 0x310be4b1
// converted property getter: - (id)textAttributesForPositiveValues;	// 0x310bd885
// converted property getter: - (id)textAttributesForZero;	// 0x310bdfb9
// converted property getter: - (BOOL)usesGroupingSeparator;	// 0x310bdd0d
// converted property getter: - (BOOL)usesSignificantDigits;	// 0x310c098d
// converted property getter: - (id)zeroSymbol;	// 0x31049355
@end
