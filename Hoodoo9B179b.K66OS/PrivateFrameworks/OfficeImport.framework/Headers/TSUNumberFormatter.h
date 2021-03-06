/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSUNumberFormatter : NSObject {
@private
	CFLocaleRef mLocale;	// 4 = 0x4
	CFArrayRef mDecimalFormatters;	// 8 = 0x8
	CFArrayRef mCurrencyFormatters;	// 12 = 0xc
	CFArrayRef mPercentageFormatters;	// 16 = 0x10
	CFArrayRef mScientificFormatters;	// 20 = 0x14
	CFNumberFormatterRef mFractionFormatter;	// 24 = 0x18
	NSMutableDictionary *mCurrencyCodeToSymbolMap;	// 28 = 0x1c
	NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;	// 32 = 0x20
	NSString *mCurrencyString;	// 36 = 0x24
	NSString *mPercentageString;	// 40 = 0x28
	NSString *mScientificString;	// 44 = 0x2c
	NSString *mDecimalString;	// 48 = 0x30
	NSString *mPercentSymbol;	// 52 = 0x34
	NSMutableArray *mTransformedDecimalStrings;	// 56 = 0x38
	NSMutableArray *mTransformedCurrencyStrings;	// 60 = 0x3c
	NSMutableArray *mTransformedPercentageStrings;	// 64 = 0x40
	NSMutableArray *mTransformedScientificStrings;	// 68 = 0x44
	CFStringRef mAdditionalCurrencyCode;	// 72 = 0x48
	CFArrayRef mAdditionalCurrencyCodeFormatters;	// 76 = 0x4c
}
+ (id)availableCurrencyCodes;	// 0x32a09c4d
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x32a09bed
+ (id)currentLocaleCurrencyCode;	// 0x32a09b11
+ (id)currentLocaleDecimalSeparator;	// 0x32a09b0d
+ (id)currentLocaleListSeparator;	// 0x32a09b09
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)currencyCode;	// 0x32a09b3d
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x32a09a49
+ (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x32a09a79
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x32a09c1d
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x32a09c69
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x32a09541
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x32a0bb2d
+ (void)initialize;	// 0x32a09ecd
+ (id)localizedPercentSymbol;	// 0x32a09a1d
+ (id)numberFormatStringSpecialSymbols;	// 0x32a09aad
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x32a094a9
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x32a094f5
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x32a09e79
+ (id)userVisibleCurrencyCodes;	// 0x32a09809
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x32a0b121
- (BOOL)currencyFromString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code5;	// 0x32a0d075
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x32a0b679
- (id)currentLocaleCurrencyCode;	// 0x32a0b775
- (void)dealloc;	// 0x32a0af31
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x32a09f5d
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x32a09335
- (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x32a0a041
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x32a0b641
- (BOOL)findCurrencySymbolInString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code succesTSUlString:(const CFStringRef *)string3;	// 0x32a0b83d
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x32a0bcf5
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)currencyCode;	// 0x32a0baa5
- (id)localizedPercentSymbol;	// 0x32a09379
- (void)numberPreferencesChanged:(id)changed;	// 0x32a0b589
- (CFArrayRef)p_currencyFormatters;	// 0x32a0d1c1
- (CFArrayRef)p_decimalFormatters;	// 0x32a0d411
- (CFArrayRef)p_percentageFormatters;	// 0x32a0c2c5
- (CFArrayRef)p_scientificFormatters;	// 0x32a0c0fd
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x32a09fa9
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x32a09ff5
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x32a0c021
@end

