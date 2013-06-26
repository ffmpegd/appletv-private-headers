/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TSUNumberFormatter : NSObject {
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
+ (id)availableCurrencyCodes;	// 0x34cb8a5d
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x34cb8aa9
+ (id)currentLocaleCurrencyCode;	// 0x34cb8b7d
+ (id)currentLocaleDecimalSeparator;	// 0x34cb8c11
+ (id)currentLocaleListSeparator;	// 0x34cb8c4d
+ (id)currentNonCachedLocaleCurrencyCode;	// 0x34cb8ba9
+ (id)currentNonCachedLocaleDecimalSeparator;	// 0x34cb8c15
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)currencyCode;	// 0x34cb8ad9
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x34cb8ce1
+ (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x34cb8cad
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x34cb8a79
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x34cb8855
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x34cb8595
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x34cb8f51
+ (void)initialize;	// 0x34cb8411
+ (id)localizedPercentSymbol;	// 0x34cb8d11
+ (id)numberFormatStringSpecialSymbols;	// 0x34cb8c51
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x34cb8501
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x34cb854d
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x34cb84a5
+ (id)userVisibleCurrencyCodes;	// 0x34cb8d3d
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x34cb9211
- (BOOL)currencyFromString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code5;	// 0x34cb992d
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x34cba115
- (id)currentLocaleCurrencyCode;	// 0x34cba4cd
- (void)dealloc;	// 0x34cb9569
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x34cb98e5
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x34cba581
- (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x34cba525
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x34cba0dd
- (BOOL)findCurrencySymbolInString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code succesTSUlString:(const CFStringRef *)string3;	// 0x34cb9f31
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x34cb9b01
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)currencyCode;	// 0x34cba379
- (id)localizedPercentSymbol;	// 0x34cba5c5
- (void)numberPreferencesChanged:(id)changed;	// 0x34cb9759
- (CFArrayRef)p_currencyFormatters;	// 0x34cba6c5
- (CFArrayRef)p_decimalFormatters;	// 0x34cba5d5
- (CFArrayRef)p_percentageFormatters;	// 0x34cba7c9
- (CFArrayRef)p_scientificFormatters;	// 0x34cba8b9
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x34cb9a6d
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x34cb9ab5
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x34cb9e99
@end
